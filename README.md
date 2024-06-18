# Worg

A library to help you make full use of your GPU. It is specially designed to power computer
graphics applications, such as, but not limited to games.

## Building from source

This project uses [CMake](https://cmake.org/) to build for different platforms. The intention
is to support Windows, Linux and MacOS. [VCPKG](https://vcpkg.io/) is used to download the
dependencies, but it is not required. A basic `CMakePresents.json` is provided for your
convenience, but you will need more configuration to build it. Add a local `CMakeUserPresets.json`
with your preferred configurations. Here's mine for reference:

```json
{
  "version": 3,
  "configurePresets": [
    {
      "name": "linux-debug",
      "displayName": "Linux x64 Debug",
      "inherits": "vcpkg",
      "generator": "Ninja",
      "binaryDir": "${sourceDir}/build",
      "environment": {
        "VCPKG_ROOT": "${sourceDir}/.vcpkg"
      },
      "cacheVariables": {
        "CMAKE_BUILD_TYPE": "Debug",
        "CMAKE_C_COMPILER": "/usr/bin/clang-17"
      }
    }
  ]
}
```

Then I build it with the following commands:

```
cmake -B build -S ./ --preset linux-debug 
```

```
ninja -C build 
```

Of course, you will need to install [Ninja](https://ninja-build.org/) on your build machine for
that to work. Other generators should have similar steps. Finally, you can run some examples to
check it out:

```
build/examples/triangle
```

