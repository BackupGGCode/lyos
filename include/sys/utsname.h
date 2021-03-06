/*  This file is part of Lyos.

    Lyos is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Lyos is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Lyos.  If not, see <http://www.gnu.org/licenses/>. */

#include "compile.h"	// generate by Makefile
/* uname */
#define UTS_SYSNAME	"Lyos"		// kernel name
#define UTS_NODENAME	"localhost"	// network node hostname
#define UTS_RELEASE	""		// kernel release

#define SIZE_UTSNAME	45

struct utsname {
	char sysname[9];
	char nodename[9];
	char release[9];
	char version[9];
	char machine[9];
};

#define LYOS_BANNER "Lyos version "UTS_VERSION" ("LYOS_COMPILE_BY"@"LYOS_COMPILE_HOST")("LYOS_COMPILER"), compiled on "LYOS_COMPILE_TIME". \n"
