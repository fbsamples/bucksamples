This is a sample Android app that can be built with gradle and buck.

How to build
-------------

Define ANDROID_SDK environment variable
```shell
export ANDROID_SDK=/home/yourname/Android/Sdk
```

Generate a keystore:
```shell
cd keystore
keytool -genkey -keystore debug.keystore -alias my_alias \
>     -keyalg RSA -keysize 2048 -validity 10000
```
Update the keystore password in keystore/debug.keystore.properties.

Create a list of project dependencies
```shell
cd ..
mkdir buck-out
./gradlew -q :app:dependencies --configuration debugCompileClasspath >  buck-out/deps.txt
./gradlew -q :app:dependencies --configuration debugRuntimeClasspath >> buck-out/deps.txt
./gradlew -q :app:dependencies --configuration debugAnnotationProcessorClasspath >> buck-out/deps.txt
```

Use the import_deps tool to download dependencies and generate BUCK files.
```shell
cd ../import_deps
./importdeps.py --gdeps /Users/mdzyuba/whatsapp/android/tools/buck/hello_world/buck-out/deps.txt --libs third-party
cd ../hello_world
mv ../import_deps/third-party .
```
Verify the generated third-party BUCK
```shell
buck targets //third-party:
buck build //third-party:core
```
Start an Android emulator or device. It could be based on SDK Platform v21 - v32.

To build and install the app, run:
```shell
buck install //app:app
```
Then run Hello World app on the device.

Hare is a list of sample buck targets:
```shell
buck build //app:deps
buck build //app:lib
buck build //keystore:debug_keystore
buck build //app:app
```

