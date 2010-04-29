/**
 * \file
 * <!--
 * This file is part of BeRTOS.
 *
 * Bertos is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As a special exception, you may use this file as part of a free software
 * library without restriction.  Specifically, if other files instantiate
 * templates or use macros or inline functions from this file, or you compile
 * this file and link it with other files to produce an executable, this
 * file does not by itself cause the resulting executable to be covered by
 * the GNU General Public License.  This exception does not however
 * invalidate any other reasons why the executable file might be covered by
 * the GNU General Public License.
 *
 * Copyright 2010 Develer S.r.l. (http://www.develer.com/)
 *
 * -->
 *
 * \brief BeRTOS logo: PC bitmap, Windows 3.x format, 120 x 70 x 4
 *
 * \author Andrea Righi <arighi@develer.com>
 */

#define BITMAP_HEADER_SIZE   0x76
#define BITMAP_WIDTH_OFFSET  0x12
#define BITMAP_HEIGHT_OFFSET 0x16

/* BeRTOS logo */
static const unsigned char logo[] = {
	0x42, 0x4d, 0xde, 0x10, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x28, 0x00,
	0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x46, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x68, 0x10, 0x00, 0x00, 0x13, 0x0b,
	0x00, 0x00, 0x13, 0x0b, 0x00, 0x00, 0x10, 0x00,
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x26, 0x26,
	0x26, 0x00, 0x32, 0x32, 0x32, 0x00, 0x3e, 0x3e,
	0x3e, 0x00, 0x4e, 0x4e, 0x4e, 0x00, 0x5c, 0x5c,
	0x5c, 0x00, 0x68, 0x68, 0x68, 0x00, 0x7d, 0x7d,
	0x7d, 0x00, 0x82, 0x82, 0x82, 0x00, 0x93, 0x93,
	0x93, 0x00, 0xa3, 0xa3, 0xa3, 0x00, 0xb3, 0xb3,
	0xb3, 0x00, 0xbf, 0xbf, 0xbf, 0x00, 0xce, 0xce,
	0xce, 0x00, 0xdd, 0xdd, 0xdd, 0x00, 0xeb, 0xeb,
	0xeb, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xeb, 0x98, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89,
	0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x82, 0x41, 0x88, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x89, 0xcf, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xed, 0xcb, 0x98, 0x98, 0x88, 0x26, 0x77, 0x18,
	0x88, 0x88, 0x99, 0xab, 0xde, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0x16, 0x68, 0x81, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0x45, 0x45, 0x84,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf5, 0x15, 0x67, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 0x45, 0x97,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0x15, 0x16, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x61, 0x31, 0x1a, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xf1, 0x1c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x17, 0x64, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x15, 0x55,
	0x52, 0x10, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0x17, 0x60, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0x67, 0x77, 0x1e, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x01, 0x25, 0x55, 0x55, 0x55, 0x54, 0x10, 0x9f,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5,
	0x78, 0x62, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x17, 0x77, 0x71, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xf6, 0x11, 0x55, 0x66, 0x55, 0x55,
	0x55, 0x55, 0x55, 0x21, 0x3f, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xe1, 0x69, 0x71, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xf1, 0x66, 0x74, 0xcf,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe5, 0x13, 0x55,
	0x66, 0x66, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
	0x31, 0x08, 0xff, 0xff, 0xff, 0xff, 0xff, 0x26,
	0x87, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xfa, 0x37, 0x77, 0x1f, 0xff, 0xff, 0xff, 0xff,
	0x71, 0x14, 0x56, 0x66, 0x66, 0x66, 0x66, 0x55,
	0x55, 0x55, 0x55, 0x55, 0x55, 0x52, 0x12, 0xff,
	0xff, 0xff, 0xff, 0x07, 0x97, 0x1f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0x17, 0x67, 0x0f,
	0xff, 0xff, 0xfe, 0x40, 0x35, 0x56, 0x77, 0x77,
	0x77, 0x66, 0x66, 0x66, 0x66, 0x66, 0x55, 0x55,
	0x55, 0x55, 0x53, 0x10, 0xcf, 0xff, 0xff, 0x26,
	0x96, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0x17, 0x67, 0x1f, 0xff, 0xe1, 0x11, 0x22,
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
	0x21, 0x11, 0xff, 0x36, 0x96, 0x8f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0x17, 0x77, 0x14,
	0x55, 0x61, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77,
	0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77,
	0x77, 0x77, 0x77, 0x77, 0x77, 0x73, 0xff, 0x27,
	0x86, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xfc, 0x18, 0x77, 0x11, 0x11, 0x11, 0x99, 0x99,
	0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
	0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
	0x99, 0x94, 0xfe, 0x07, 0x67, 0x1e, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xd1, 0x68, 0x75, 0x31,
	0x11, 0x11, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
	0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
	0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa5, 0x11, 0x16,
	0x78, 0x71, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4,
	0x27, 0x96, 0x60, 0xfa, 0x11, 0x11, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x83, 0x11, 0xe1, 0x76, 0x77, 0x01, 0x34,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xe1, 0x36, 0x79, 0x67, 0x29, 0xff,
	0x11, 0x11, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x82, 0x1a, 0xf4,
	0x77, 0x67, 0x77, 0x77, 0x2f, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x46, 0x89,
	0x86, 0x67, 0x5f, 0xff, 0xf1, 0x11, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x63, 0x68, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x21, 0x11,
	0x78, 0x80, 0x4f, 0xff, 0x17, 0x77, 0x67, 0x77,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x16, 0x66, 0x61, 0x1e, 0xff, 0xff,
	0xff, 0xf1, 0x88, 0x88, 0x88, 0x86, 0xbf, 0xff,
	0xff, 0xb1, 0x88, 0x88, 0x88, 0x88, 0xaa, 0xaa,
	0x88, 0x1f, 0xff, 0xdc, 0xfe, 0x11, 0xff, 0xff,
	0xfd, 0x11, 0x66, 0x63, 0x1f, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x32,
	0x8e, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x88, 0x88,
	0x88, 0x59, 0xfb, 0x67, 0x77, 0x6d, 0x58, 0x88,
	0x88, 0x8a, 0xaa, 0xaa, 0x83, 0xff, 0x67, 0x77,
	0x76, 0xf1, 0xff, 0xff, 0xff, 0xff, 0x86, 0x8d,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf0, 0x88, 0x88, 0x88, 0x6f, 0x77, 0x76,
	0x88, 0x76, 0x78, 0x88, 0x88, 0x9a, 0xaa, 0xaa,
	0x1f, 0xf6, 0x66, 0x89, 0x97, 0x71, 0x77, 0x77,
	0x77, 0x6f, 0xf6, 0x77, 0x77, 0x77, 0x7f, 0xf8,
	0x88, 0xff, 0xff, 0x88, 0x8f, 0xff, 0xf9, 0x88,
	0xef, 0xff, 0xfd, 0x88, 0x88, 0x88, 0x88, 0x8f,
	0xfc, 0x88, 0x88, 0x88, 0x88, 0xaf, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x88, 0x88,
	0x81, 0xff, 0x76, 0x89, 0x86, 0x89, 0x61, 0x88,
	0x88, 0xaa, 0xaa, 0xaa, 0xff, 0x97, 0x69, 0x95,
	0x37, 0x73, 0x77, 0x77, 0x77, 0x7e, 0xf7, 0x77,
	0x77, 0x77, 0x6f, 0xf8, 0x88, 0xff, 0xfc, 0x88,
	0x9f, 0xff, 0xf9, 0x88, 0xef, 0xff, 0xf8, 0x88,
	0x88, 0x88, 0x88, 0x8b, 0xf8, 0x88, 0x88, 0x88,
	0x88, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x88, 0x88, 0x89, 0xf9, 0x78, 0x92,
	0x11, 0x11, 0x86, 0x88, 0x88, 0xaa, 0xaa, 0xaa,
	0xff, 0x67, 0x98, 0x11, 0x11, 0x16, 0x66, 0x66,
	0x77, 0x7e, 0xf7, 0x76, 0xee, 0x97, 0x6f, 0xf8,
	0x88, 0xff, 0xf8, 0x88, 0xff, 0xff, 0xf9, 0x88,
	0xef, 0xff, 0xf8, 0x88, 0x88, 0x88, 0x88, 0x8b,
	0xf8, 0x88, 0x88, 0x88, 0x88, 0x8f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x78, 0x88,
	0x7f, 0xf6, 0x69, 0x21, 0x11, 0x11, 0x36, 0x68,
	0x88, 0xaa, 0xaa, 0xa8, 0xfd, 0x66, 0x91, 0x11,
	0x11, 0x17, 0xff, 0xff, 0x77, 0x7e, 0xf7, 0x76,
	0xff, 0x97, 0x6f, 0xf8, 0x88, 0xff, 0xf8, 0x88,
	0xff, 0xff, 0xf9, 0x88, 0xef, 0xff, 0xf8, 0x88,
	0xff, 0xff, 0x88, 0x8b, 0xf8, 0x88, 0xff, 0xff,
	0x88, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x28, 0x88, 0x5f, 0xf6, 0x79, 0x11,
	0x11, 0x11, 0x18, 0x48, 0x88, 0xaa, 0xaa, 0xa6,
	0xfb, 0x77, 0x21, 0x11, 0x11, 0x07, 0xff, 0xff,
	0x77, 0x7e, 0xf7, 0x76, 0xff, 0x96, 0x6f, 0xf8,
	0x88, 0xff, 0xd8, 0x88, 0xff, 0xff, 0xf9, 0x88,
	0xef, 0xff, 0xf8, 0x88, 0xff, 0xff, 0x88, 0x8b,
	0xf8, 0x88, 0xff, 0xff, 0x88, 0x8f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x08, 0x88,
	0x7f, 0xf6, 0x77, 0x11, 0xf9, 0xa3, 0x16, 0x68,
	0x88, 0xaa, 0xaa, 0xaa, 0xfd, 0x67, 0x11, 0x1f,
	0xf6, 0x57, 0xff, 0xff, 0x77, 0x7e, 0xf7, 0x76,
	0xff, 0xff, 0xff, 0xf8, 0x88, 0xff, 0x88, 0x8c,
	0xff, 0xff, 0xf9, 0x88, 0xef, 0xff, 0xf8, 0x88,
	0xff, 0xff, 0x88, 0x8b, 0xf8, 0x88, 0xff, 0xff,
	0x88, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xa6, 0x88, 0x89, 0xf8, 0x69, 0x11,
	0xcf, 0xff, 0x16, 0x88, 0x88, 0xaa, 0xaa, 0xaa,
	0xff, 0x66, 0x21, 0x1d, 0xf1, 0x77, 0xff, 0xff,
	0x77, 0x7e, 0xf7, 0x76, 0x66, 0x66, 0x7f, 0xf8,
	0x88, 0xff, 0x88, 0x8f, 0xff, 0xff, 0xf9, 0x88,
	0xef, 0xff, 0xf8, 0x88, 0xff, 0xff, 0x88, 0x8b,
	0xf8, 0x88, 0xff, 0xff, 0x88, 0x8f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x88,
	0x81, 0xff, 0x78, 0x11, 0xff, 0xff, 0x01, 0x88,
	0x88, 0xaa, 0xaa, 0xaa, 0x2f, 0x97, 0x91, 0x1f,
	0xe1, 0x67, 0xff, 0xff, 0x77, 0x7e, 0xf7, 0x77,
	0x66, 0x67, 0x6f, 0xf8, 0x88, 0xff, 0x88, 0x8f,
	0xff, 0xff, 0xf9, 0x88, 0xef, 0xff, 0xf8, 0x88,
	0xff, 0xff, 0x88, 0x8b, 0xff, 0xff, 0xff, 0xf9,
	0x88, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xf2, 0x88, 0x88, 0x6f, 0x66, 0x91,
	0xef, 0xff, 0x38, 0x88, 0x88, 0x9a, 0xaa, 0xaa,
	0x6c, 0xf6, 0x67, 0x1e, 0x36, 0x77, 0xff, 0xff,
	0x77, 0x7e, 0xf7, 0x76, 0xff, 0x97, 0x6f, 0xf8,
	0x88, 0xf9, 0x88, 0xef, 0xff, 0xff, 0xf9, 0x88,
	0xef, 0xff, 0xf8, 0x88, 0xff, 0xff, 0x88, 0x8b,
	0xff, 0xff, 0xff, 0x88, 0x88, 0xcf, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x28,
	0x88, 0x5a, 0xf7, 0x68, 0x1f, 0xff, 0x58, 0x88,
	0x88, 0x8a, 0xaa, 0xaa, 0xa3, 0xcf, 0x66, 0x83,
	0x17, 0x77, 0xff, 0xf8, 0x77, 0x6f, 0xf7, 0x76,
	0xff, 0x97, 0x6f, 0xf8, 0x88, 0xf8, 0x88, 0xff,
	0xff, 0xff, 0xf9, 0x88, 0xef, 0xff, 0xf8, 0x88,
	0xff, 0xff, 0x88, 0x8b, 0xff, 0xff, 0xf8, 0x88,
	0x8b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x08, 0x88, 0x86, 0xaf, 0xfb,
	0x8c, 0x91, 0x88, 0x88, 0x88, 0x8a, 0xaa, 0xaa,
	0xaa, 0x82, 0xff, 0xdd, 0xc7, 0x77, 0x66, 0x67,
	0x76, 0xff, 0xf7, 0x76, 0xff, 0x97, 0x6f, 0xf8,
	0x88, 0xf8, 0x88, 0x88, 0xef, 0xff, 0xf9, 0x88,
	0xef, 0xff, 0xf8, 0x88, 0xff, 0xff, 0x88, 0x8b,
	0xff, 0xff, 0x88, 0x88, 0xdf, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1,
	0x88, 0x88, 0x71, 0x15, 0x11, 0x78, 0x88, 0x88,
	0x88, 0x8a, 0xaa, 0xaa, 0xaa, 0xaa, 0x52, 0x11,
	0xf7, 0x77, 0x77, 0x77, 0x6e, 0xff, 0xf7, 0x76,
	0xdd, 0x97, 0x6f, 0xf8, 0x88, 0xf8, 0x88, 0x88,
	0x9f, 0xff, 0xf9, 0x88, 0xef, 0xff, 0xf8, 0x88,
	0xff, 0xff, 0x88, 0x8b, 0xff, 0xfd, 0x88, 0x88,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfb, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xaa, 0xaa,
	0xaa, 0xaa, 0xaa, 0x38, 0xf7, 0x77, 0xff, 0xf8,
	0x77, 0x6f, 0xf7, 0x77, 0x77, 0x77, 0x6f, 0xf8,
	0x88, 0xff, 0xff, 0x88, 0x9f, 0xff, 0xf9, 0x88,
	0xef, 0xff, 0xf8, 0x88, 0xff, 0xff, 0x88, 0x8b,
	0xff, 0x88, 0x88, 0xef, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x18, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
	0x88, 0x9a, 0xaa, 0xaa, 0xaa, 0xaa, 0xa8, 0x0f,
	0xf7, 0x77, 0xff, 0xff, 0x77, 0x6e, 0xfe, 0x88,
	0x88, 0x88, 0xff, 0xf8, 0x88, 0xff, 0xff, 0x88,
	0x9f, 0xff, 0xf9, 0x88, 0xef, 0xff, 0xf8, 0x88,
	0xff, 0xff, 0x88, 0x8b, 0xf8, 0x88, 0x8f, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0x54, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x88, 0xaa, 0xaa, 0xaa,
	0xaa, 0xaa, 0x91, 0xff, 0xf7, 0x77, 0xff, 0xff,
	0x77, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
	0x88, 0xff, 0xff, 0x88, 0x9f, 0xff, 0xf9, 0x88,
	0xef, 0xff, 0xf8, 0x88, 0xff, 0xff, 0x88, 0x8b,
	0xf8, 0x88, 0xff, 0xff, 0xaa, 0xaf, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xf1, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
	0x89, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x1b, 0xff,
	0xf7, 0x77, 0xff, 0xff, 0x77, 0x6f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xf8, 0x88, 0xff, 0xff, 0x88,
	0x9f, 0xff, 0xf9, 0x88, 0xef, 0xff, 0xf8, 0x88,
	0xff, 0xff, 0x88, 0x8b, 0xf8, 0x88, 0xff, 0xff,
	0x88, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0x08, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88, 0x9a, 0xaa, 0xaa, 0xaa,
	0xaa, 0xa8, 0x6f, 0xff, 0xf7, 0x77, 0xff, 0xff,
	0x77, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
	0x88, 0xff, 0xff, 0x88, 0x9f, 0xff, 0xf9, 0x88,
	0xef, 0xff, 0xf8, 0x88, 0xff, 0xff, 0x88, 0x8b,
	0xf8, 0x88, 0xff, 0xff, 0x88, 0x8f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf1, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89,
	0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x81, 0xff, 0xff,
	0xf7, 0x77, 0xff, 0xff, 0x77, 0x6f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xf8, 0x88, 0xff, 0xff, 0x88,
	0x9f, 0xff, 0xf9, 0x88, 0xef, 0xff, 0xf8, 0x88,
	0xff, 0xff, 0x88, 0x8b, 0xf8, 0x88, 0xff, 0xff,
	0x88, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x18, 0x88,
	0x88, 0x88, 0x88, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
	0x87, 0x1f, 0xff, 0xff, 0xf7, 0x77, 0xff, 0xff,
	0x77, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
	0x88, 0xee, 0xee, 0x88, 0x9f, 0xcc, 0xc9, 0x88,
	0xcc, 0xcc, 0xf8, 0x88, 0xee, 0xee, 0x88, 0x8b,
	0xf8, 0x88, 0xff, 0xff, 0x88, 0x8f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xf1, 0x28, 0x88, 0x9a, 0xaa, 0xaa,
	0xaa, 0xaa, 0xa9, 0x88, 0x1c, 0xff, 0xff, 0xff,
	0xf7, 0x77, 0x77, 0x77, 0x77, 0x6f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xf8, 0x88, 0x88, 0x88, 0x88,
	0xaf, 0x88, 0x88, 0x88, 0x88, 0x88, 0xf8, 0x88,
	0x88, 0x88, 0x88, 0x8b, 0xf8, 0x88, 0x88, 0x88,
	0x88, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0,
	0x88, 0x88, 0x99, 0xaa, 0x99, 0x98, 0x88, 0x50,
	0xff, 0xff, 0xff, 0xff, 0xf6, 0x66, 0x66, 0x66,
	0x66, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
	0x88, 0x88, 0x88, 0x88, 0xff, 0x88, 0x88, 0x88,
	0x88, 0x88, 0xfc, 0x88, 0x88, 0x88, 0x88, 0x8f,
	0xfb, 0x88, 0x88, 0x88, 0x88, 0xaf, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0x11, 0x78, 0x88, 0x88,
	0x88, 0x88, 0x31, 0x4f, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0x60, 0x13, 0x55, 0x42, 0x10, 0xbf, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x19,
	0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xb6, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x11, 0x2b, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa4, 0xec,
	0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xf1, 0xdf, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0a,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xf0, 0x37, 0x15, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x08, 0x11,
	0x23, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x48, 0x19, 0x19, 0x1f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x78, 0x1a,
	0x1a, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x18, 0x1a, 0x1a, 0x2f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x54, 0xa9,
	0xa1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xfc, 0xaf, 0xf8, 0x11, 0x1f, 0xfa, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xae, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xcf,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xfd, 0xaf, 0xff, 0xfd, 0xff, 0xff,
	0xff, 0x8f, 0xff, 0xca, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf8, 0xff, 0xfa, 0xff, 0xf8, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xcc, 0xff, 0xfa,
	0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0x8f, 0xff, 0xfa, 0xff, 0xff, 0xaf, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xfe, 0x8f, 0xff, 0xfa,
	0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xf8, 0xef, 0xff, 0xfa, 0xff, 0xff, 0xe7, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfa, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};