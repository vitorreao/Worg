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

#include <stddef.h>
#include <stdint.h>

typedef uint32_t WgUInt;

typedef struct WgObject *WgObjectID;

typedef enum WgErrorCode {
  WG_ERROR_CODE_NO_ERROR = 0,
} WgErrorCode;

typedef struct WgError {
  char *message;
  WgObjectID object;
  WgErrorCode code;
} WgError;

typedef enum WgPrimitiveType {
  WG_TRIANGLES = 3,
} WgPrimitiveType;

WgObjectID WgNewObject();
WgError *WgAttachBuffer(WgObjectID object, void *data, size_t size);
WgError *WgAttachLayout(WgObjectID object, size_t *attribSizes, size_t size);
WgError *WgAttachPrimitives(WgObjectID object, WgPrimitiveType type, WgUInt *indices, size_t size);

