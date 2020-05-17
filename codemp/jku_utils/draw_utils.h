/*
===========================================================================
Copyright (C) 2000 - 2013, Raven Software, Inc.
Copyright (C) 2001 - 2013, Activision, Inc.
Copyright (C) 2013 - 2015, OpenJK contributors
Copyright (C) 2019 - 2020, Jedi Knight Unlimited contributors

This file is part of the JKU source code.

OpenJK is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License version 2 as
published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, see <http://www.gnu.org/licenses/>.
===========================================================================
*/

#pragma once

#ifndef _jku_draw_utils
#define _jku_draw_utils

#ifdef _WIN32
	#ifdef __cplusplus
	extern "C"
	{
	#endif
#else
	#ifdef __GNUG__
	extern "C"
	{
	#endif
#endif

#include "cgame/cg_local.h"
#include "ui/ui_shared.h"

extern void JKU_DrawAmmoAndClipReserve(centity_t	*cent, menuDef_t *menuHUD);
extern void JKU_DrawForceCircle(centity_t *cent, menuDef_t *menuHUD);
extern void JKU_DrawForcePower(centity_t *cent, menuDef_t *menuHUD);
extern void JKU_DrawWeaponry();
extern void JKU_DrawBlockStatus(centity_t *cent);

extern qboolean ForcePower_Valid(int i);
extern qboolean CG_WeaponSelectable(int i);

#ifdef _WIN32
#ifdef __cplusplus
	}
#endif
#else
#ifdef __GNUG__
	}
#endif
#endif

#endif