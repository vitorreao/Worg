#   Copyright (C) 2024  Vitor de Albuquerque Torreao
#
#   This program is free software: you can redistribute it and/or modify
#   it under the terms of the GNU Lesser Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU Lesser Public License for more details.
#
#   You should have received a copy of the GNU Lesser Public License
#   along with this program.  If not, see <https://www.gnu.org/licenses/>.

# SDL2 used for application window by all examples
find_package(SDL2 REQUIRED CONFIG COMPONENTS SDL2main)

# Triangle example
add_executable(triangle "triangle/main.c")
target_link_libraries(triangle PRIVATE SDL2::SDL2)
if (TARGET SDL2::SDL2main)
  target_link_libraries(triangle PRIVATE SDL2::SDL2main)
endif ()

