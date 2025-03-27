
# OpenGL Sandbox
OpenGL Sandbox is an application I use to learn the OpenGL API. The purpose of this application is to be a base for a game engine and to test rendering techniques.

## TODO

* Multiple meshes
* Camera/handle user input
* Multiple textures
* Lighting
* Load Model

## Building

### Windows

Prerequisites:

* [Git for Windows](https://github.com/git-for-windows/git/releases)
* [GLEW](https://glew.sourceforge.net/) a OpenGL Extension Wrangler Library, a C/C++ library that helps load OpenGL extensions
* An OpenGL-capable GPU with the appropriate drivers installed
* [GLFW](https://www.glfw.org/) to create and manage windows, OpenGL contexts, and input.
* [GLM](https://github.com/g-truc/glm) a C++ mathematics library 
* [stb_image](https://github.com/nothings/stb/blob/master/stb_image.h) to load textures

1. Open git bash
2. Git clone the project:

~~~
https://github.com/MauricioRTG/VulkanSandbox.git
~~~

### Visual Studio

1. Install [Visual Studio Community](https://www.visualstudio.com) with the Visual Studio C++ component.
2. Open the VulkanSandBox.sln
3. Select the desired configuration and platform (release, x64)
4. Build project (press the green play button)

## OpenGL References

Great credit goes to The Cherno [Vulkan Tutorial](https://www.youtube.com/watch?v=W3gAzLwfIP0&list=PLlrATfBNZ98foTJPJ_Ev03o2oq3-GGOS2)
