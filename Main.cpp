#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main() 
{
	// Initialize GLFW
	glfwInit();

	// Tell GLFW what version of Opengl we are using
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// Tell GLFW what version of Opengl we are using, this is the modern fuctions
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create GLFWwindow, withd, heigth, name
	GLFWwindow* window = glfwCreateWindow(1800, 800, "My App", NULL, NULL);
	// Error check
	if (window == NULL)
	{
		std::cout << "Failed to create GLTF window" << std::endl;
		glfwTerminate();
		return -1;
	}
	// Introduce window
	glfwMakeContextCurrent(window);

	// Load GLAD so it configures OpenGL
	gladLoadGL();

	// Specify the viewport of OpenGL
	glViewport(0, 0, 800, 800);

	// Specify the color of the background
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	// Clean buffer and assigne a new color
	glClear(GL_COLOR_BUFFER_BIT);
	// Swap the back buffer to the front buffer
	glfwSwapBuffers(window);

	// Main while loop
	while (!glfwWindowShouldClose(window))
	{
		// Take care of all GLFW events
		glfwPollEvents();
	}

	// Delete window beffor ending the program
	glfwDestroyWindow(window);
	// Terminate GLFW before ending the program
	glfwTerminate();

	return 0;

}