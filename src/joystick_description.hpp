/*
**  jstest-gtk - A graphical joystick tester
**  Copyright (C) 2009 Ingo Ruhnke <grumbel@gmail.com>
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HEADER_JSTEST_GTK_JOYSTICK_DESCRIPTION_HPP
#define HEADER_JSTEST_GTK_JOYSTICK_DESCRIPTION_HPP

#include <string>

class JoystickDescription
{
private:
public:
  std::string filename;
  std::string name;
  std::string js_id;
  std::string vendor_id;
  std::string product_id;
  std::string usb_id;
  int axis_count;
  int button_count;

  JoystickDescription(const std::string& filename_,
                      const std::string& name_,
                      const std::string& js_id_,
                      const std::string& vendor_id_,
                      const std::string& product_id_,
                      const std::string& usb_id_,
                      int axis_count_,
                      int button_count_)
    : filename(filename_),
      name(name_),
      js_id(js_id_),
      vendor_id(vendor_id_),
      product_id(product_id_),
      usb_id(usb_id_),
      axis_count(axis_count_),
      button_count(button_count_)
  {}
};

#endif

/* EOF */
