# Hello PyTorch Cpp

Demo project that shows how to setup, build and run PyTorch in C++ on Windows.

## Get LibTorch
Download the LibTorch for C++ and unzip it (e.g. to D:/libtorch):

https://pytorch.org/get-started/locally/

## Setup your project

Create your *CMakeUserPresets.json* file next to the *CMakePresets.json* and adjust *LIBTORCH_DIR* to point to your *libtorch* folder:

```json
{
    "version": 9,
    "configurePresets": [
        {
            "name": "Debug",
            "inherits": "LibTorch",
            "displayName": "Debug",
            "generator": "Visual Studio 17 2022",
            "cacheVariables": {
                "CMAKE_BUILD_TYPE": "Debug"
            },
            "environment": {
                "LIBTORCH_DIR": "D:/libtorch"
            }
        },
        {
            "name": "Release",
            "inherits": "LibTorch",
            "displayName": "Release",
            "generator": "Visual Studio 17 2022",
            "cacheVariables": {
                "CMAKE_BUILD_TYPE": "Release"
            },
            "environment": {
                "LIBTORCH_DIR": "D:/libtorch"
            }
        }
    ],
     "buildPresets": [
        {
            "name": "Debug",
            "displayName": "Debug",
            "configurePreset": "Debug",
            "configuration": "Debug"
        },
        {
            "name": "Release",
            "displayName": "Release",
            "configurePreset": "Release",
            "configuration": "Release"
        }
    ]
}
```

## Build and Run:
```bash
cmake --preset Debug
cmake --build --preset Debug

build\Debug\HelloPyTorchCpp.exe
```
