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

namespace colors
{
    struct Color
    {
        unsigned char red;
        unsigned char green;
        unsigned char blue;
        unsigned char alpha;
    };

    inline constexpr Color RayWhite{ 245, 245, 245, 255 };
    inline constexpr Color LightGray{ 200, 200, 200, 255 };
    inline constexpr Color Gray{ 128, 128, 128, 255 };
    inline constexpr Color DarkGray{ 80, 80, 80, 255 };
    inline constexpr Color Yellow{ 253, 249, 0, 255 };
    inline constexpr Color Gold{ 255, 203, 0, 255 };
    inline constexpr Color Orange{ 255, 161, 0, 255 };
    inline constexpr Color Pink{ 255, 109, 194, 255 };
    inline constexpr Color Red{ 230, 41, 55, 255 };
    inline constexpr Color Maroon{ 190, 33, 55, 255 };
    inline constexpr Color Green{ 0, 228, 48, 255 };
    inline constexpr Color Lime{ 0, 158, 47, 255 };
    inline constexpr Color DarkGreen{ 0, 117, 44, 255 };
    inline constexpr Color SkyBlue{ 102, 191, 255, 255 };
    inline constexpr Color Blue{ 0, 121, 241, 255 };
    inline constexpr Color DarkBlue{ 0, 82, 172, 255 };
    inline constexpr Color Purple{ 200, 122, 255, 255 };
    inline constexpr Color Violet{ 135, 60, 190, 255 };
    inline constexpr Color DarkPurple{ 112, 31, 126, 255 };
    inline constexpr Color Beige{ 211, 176, 131, 255 };
    inline constexpr Color Brown{ 127, 106, 79, 255 };
    inline constexpr Color DarkBrown{ 76, 63, 47, 255 };
    inline constexpr Color White{ 255, 255, 255, 255 };
    inline constexpr Color Black{ 0, 0, 0, 255 };
    inline constexpr Color Blank{ 0, 0, 0, 0 };
    inline constexpr Color Magenta{ 255, 0, 255, 255 };
}