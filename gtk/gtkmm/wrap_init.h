#ifndef _GTKMM_WRAP_INIT_H
#define _GTKMM_WRAP_INIT_H

/* wrap_init.h
 *
 * Copyright (C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

// wrap_init.cc is generated by tools/generate_wrap_init.pl


#include <gtkmmconfig.h>

namespace Gtk
{

// This is needed in wrap_init.cc, but to get it there in a better way than
// putting it here requires a change in generate_wrap_init.pl.
// It's required because some gtk_*_get_type() functions are deprecated, but
// their .h files have not been moved to the gtk+/gtk/deprecated directory.
#define GDK_DISABLE_DEPRECATION_WARNINGS 1

GTKMM_API
void wrap_init();

} /* namespace Gtk */

#endif // _GTKMM_WRAP_INIT_H
