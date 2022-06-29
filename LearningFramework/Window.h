/**********************************************************************************************
*  Copyright (c) 2022 Abdelghani Yanis Bouchelaghem
*
*  This software is provided "as-is", without any express or implied warranty. In no event
*  will the authors be held liable for any damages arising from the use of this software.
*
*  Permission is granted to anyone to use this software for any purpose, including commercial
*  applications, and to alter it and redistribute it freely, subject to the following restrictions:
*
*  1. The origin of this software must not be misrepresented; you must not claim that you
*  wrote the original software. If you use this software in a product, an acknowledgment
*  in the product documentation would be appreciated but is not required.
*
*  2. Altered source versions must be plainly marked as such, and must not be misrepresented
*  as being the original software.
*
*  3. This notice may not be removed or altered from any source distribution.
**********************************************************************************************/
#pragma once
#include <string>
#include "Colors.h"
#include "KeyboardKeys.h"
#include "MouseButtons.h"

//A light wrapper around raylib for accessing its features in an object-oriented way.
class Window
{
public:
	Window(int windowWidth, int windowHeight, int targetFPS, std::string windowTitle);
	Window(const Window& other) = delete;
	Window& operator=(const Window& other) = delete;
	~Window() noexcept;
public:
	void StartDrawing();	//Prepares the canvas for drawing, should be called before drawing.
	void FinishDrawing();	//Ends the drawing and displays it.
	bool ShouldClose() const;
public:
	//Drawing functions
	void DrawPixel(int x, int y, colors::Color color);
	void DrawPixel(int x, int y, unsigned char r, unsigned char g, unsigned char b);
	//Keyboard input
	bool IsKeyPressed(KeyboardKeys key) const;	// Check if a key has been pressed once
	bool IsKeyDown(KeyboardKeys key) const;		// Check if a key is being pressed
	bool IsKeyReleased(KeyboardKeys key) const;	// Check if a key has been released once
	bool IsKeyUp(KeyboardKeys key) const;		// Check if a key is NOT being pressed
	//Mouse input
	bool IsMouseButtonPressed(MouseButtons button) const;	// Check if a mouse button has been pressed once
	bool IsMouseButtonDown(MouseButtons button) const;		// Check if a mouse button is being pressed
	bool IsMouseButtonReleased(MouseButtons button) const;	// Check if a mouse button has been released once
	bool IsMouseButtonUp(MouseButtons button) const;		// Check if a mouse button is NOT being pressed
	int GetMouseX() const;	// Get mouse position X
	int GetMouseY() const;	// Get mouse position Y
};