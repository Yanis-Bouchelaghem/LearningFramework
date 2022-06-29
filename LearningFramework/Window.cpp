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
#include "Window.h"
#include <raylib.h>
#include <assert.h>
#include <iostream>
#include "Settings.h"

Window::Window(int windowWidth, int windowHeight, int targetFPS, std::string windowTitle)
{
	assert(!GetWindowHandle());//If assertion triggers : Window is already opened.
	SetTargetFPS(targetFPS);
	InitWindow(windowWidth, windowHeight, windowTitle.c_str());
	std::cout << "Learning Framework V1.0.1\n";
	std::cout << "-------------------------------------------\n";
}

Window::~Window() noexcept
{
	assert(GetWindowHandle());//If assertion triggers : Window is already closed.
	std::cout << "\n-------------------------------------------\n";
	CloseWindow();
}

void Window::StartDrawing()
{
	BeginDrawing();
	ClearBackground(BLACK);
}

void Window::FinishDrawing()
{
	EndDrawing();
}

bool Window::ShouldClose() const
{
	return WindowShouldClose();
}

void Window::DrawPixel(int x, int y, colors::Color color)
{
	DrawPixel(x, y, color.red, color.green, color.blue);
}

void Window::DrawPixel(int x, int y, unsigned char r, unsigned char g, unsigned char b)
{
	assert(x >= 0 && x < settings::windowWidth
		&& y >= 0 && y < settings::windowHeight); //If assertion triggers: Trying to draw outside of the window.
	::DrawPixel(x, y, Color{ r,g,b,255 });
}

bool Window::IsKeyPressed(KeyboardKeys key) const
{
	return ::IsKeyPressed((int)key);
}

bool Window::IsKeyDown(KeyboardKeys key) const
{
	return ::IsKeyDown((int)key);
}

bool Window::IsKeyReleased(KeyboardKeys key) const
{
	return ::IsKeyReleased((int)key);
}

bool Window::IsKeyUp(KeyboardKeys key) const
{
	return ::IsKeyUp((int)key);
}

bool Window::IsMouseButtonPressed(MouseButtons button) const
{
	return ::IsMouseButtonPressed((int)button);
}

bool Window::IsMouseButtonDown(MouseButtons button) const
{
	return ::IsMouseButtonDown((int)button);
}

bool Window::IsMouseButtonReleased(MouseButtons button) const
{
	return ::IsMouseButtonReleased((int)button);
}

bool Window::IsMouseButtonUp(MouseButtons button) const
{
	return ::IsMouseButtonUp((int)button);
}

int Window::GetMouseX() const
{
	return ::GetMouseX();
}

int Window::GetMouseY(void) const
{
	return ::GetMouseY();
}
