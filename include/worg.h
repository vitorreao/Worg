/*  Copyright (C) 2024  Vitor de Albuquerque Torreao
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

typedef unsigned long WgUInt;

typedef enum WgPrimitiveType {
  WG_TRIANGLES = 3,
} WgPrimitiveType;

typedef struct WgTriangle {
  WgPrimitiveType type;
  WgUInt elems[3];
} WgTriangle;

typedef union WgPrimitive {
  WgPrimitiveType type;
  WgTriangle triangle;
} WgPrimitive;

typedef struct WgBufferLayout {
  WgUInt size;
  WgUInt *attribs;
} WgBufferLayout;

typedef struct WgBuffer {
  WgUInt id;
  WgUInt size;
  WgBufferLayout layout;
} WgBuffer;

typedef struct WgObject {
  WgUInt id;
  WgBuffer data;
  WgPrimitive *primitives;
  WgUInt size;
} WgObject;

