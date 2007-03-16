
/***************************************************************************
 *   Copyright (C) 2004 by Anthony DeChiaro                                *
 *   axd6491@njit.edu                                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

// selectors.h - descriptor table selectors

#ifndef __KTUX_SELECTORS_H
#define __KTUX_SELECTORS_H

#define GDT_START							0x500

#define KERNEL_CODE_SELECTOR_PREPAGING		0x8
#define KERNEL_CODE_SELECTOR				0x18

#define KERNEL_DATA_SELECTOR_PREPAGING		0x10
#define KERNEL_DATA_SELECTOR				0x20

#define DEFAULT_TSS_SELECTOR				0x28

#define USER_CODE_SELECTOR					0x33
#define USER_DATA_SELECTOR					0x3B

#endif
