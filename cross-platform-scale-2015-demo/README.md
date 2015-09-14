# Cross Platform Demo

This sample shows how to build applications in both iOS and Android
with Buck with shared native code.

## Building

You can build the demo applications from the command line!

### Android

For Android, build the demo with:

    buck install -r demo_app_android

### iOS

    buck install -r demo_app_ios

## Project Generation

You can create projects for IntelliJ (Android) and Xcode (iOS) so you
can use your IDE to make changes to your project still.  This is
unnecessary if you happen to be using [Nuclide](http://nuclide.io/).

### Android

    buck project demo_app_android

If you are on Windows, you'll want to run:

    buck project demo_app_android --experimental-ij-generation

### iOS

    buck project demo_app_ios
