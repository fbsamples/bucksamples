
To build using buck:

    buck build :main

To build and run using buck:

    buck run :main

To build and run using the alternative `#zuck` platform defined in
`.buckconfig`:

    buck run :main#zuck

Buck outputs the executable, `main` to `./buck-out/gen`.

You can also build any of the following flavors:

    buck build :main#strip-debug
    buck build :main#strip-non-global
    buck build :main#strip-all

For a description of these flavors, see the Buck documentation at the following URL:

<https://buckbuild.com/rule/cxx_binary.html>


**End of README.md**

