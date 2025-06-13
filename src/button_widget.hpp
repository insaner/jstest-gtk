/*
**  jstest-gtk - A graphical joystick tester
**  Copyright (C) 2009 Ingo Ruhnke <grumbel@gmail.com>
**  Copyright (C) 2025 Raphael Rosch <jstest-bugs@insaner.com>
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

#ifndef HEADER_JSTEST_GTK_BUTTON_WIDGET_HPP
#define HEADER_JSTEST_GTK_BUTTON_WIDGET_HPP



class ButtonWidget : public Gtk::ToggleButton {
public:
  ButtonWidget()
  {
    add_events(Gdk::BUTTON_PRESS_MASK);
  }

protected:
  bool on_button_press_event(GdkEventButton* event) override
  {
    return true; // Prevent toggle
  }
};

#endif

/* EOF */
