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

// Mouse buttons
enum class MouseButtons {
    MOUSE_BUTTON_LEFT = 0,       // Mouse button left
    MOUSE_BUTTON_RIGHT = 1,       // Mouse button right
    MOUSE_BUTTON_MIDDLE = 2,       // Mouse button middle (pressed wheel)
    MOUSE_BUTTON_SIDE = 3,       // Mouse button side (advanced mouse device)
    MOUSE_BUTTON_EXTRA = 4,       // Mouse button extra (advanced mouse device)
    MOUSE_BUTTON_FORWARD = 5,       // Mouse button fordward (advanced mouse device)
    MOUSE_BUTTON_BACK = 6,       // Mouse button back (advanced mouse device)
};