// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/types.h>
#include <gdkmm/private/types_p.h>


/* Copyright 1998-2002 The gtkmm Development Team
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

namespace Gdk
{

Point::Point()
{
  gobject_.x = 0;
  gobject_.y = 0;
}

Point::Point(int x, int y)
{
  gobject_.x = x;
  gobject_.y = y;
}

Point::Point(const Point& other) noexcept
: gobject_(other.gobject_)
{
}

Point& Point::operator=(const Point&& other) noexcept
{
  gobject_ = other.gobject_;

  return *this;
}

Point::Point(Point&& other) noexcept
: gobject_(std::move(other.gobject_))
{
}

Point& Point::operator=(Point&& other) noexcept
{
  gobject_ = std::move(other.gobject_);

  return *this;
}

bool Point::equal(const Gdk::Point& rhs) const
{
  return (gobject_.x == rhs.gobject_.x) && (gobject_.y == rhs.gobject_.y);
}

// static
GdkAtom AtomStringTraits::to_c_type(const std::string& atom_name)
{
  return gdk_atom_intern(atom_name.c_str(), 0);
}

// static
std::string AtomStringTraits::to_cpp_type(GdkAtom atom)
{
  if(const auto atom_name = gdk_atom_name(atom))
    return std::string(Glib::make_unique_ptr_gfree(atom_name).get());
  else
    return std::string();
}

// static
GdkAtom AtomUstringTraits::to_c_type(const Glib::ustring& atom_name)
{
  return gdk_atom_intern(atom_name.c_str(), 0);
}

// static
Glib::ustring AtomUstringTraits::to_cpp_type(GdkAtom atom)
{
  if(const auto atom_name = gdk_atom_name(atom))
    return Glib::ustring(Glib::make_unique_ptr_gfree(atom_name).get());
  else
    return Glib::ustring();
}

} // namespace Gdk


namespace Glib
{

Gdk::Point& wrap(GdkPoint* object)
{
  return *reinterpret_cast<Gdk::Point*>(object);
}

const Gdk::Point& wrap(const GdkPoint* object)
{
  return *reinterpret_cast<const Gdk::Point*>(object);
}

} // namespace Glib


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gdk::ByteOrder>::value_type()
{
  return gdk_byte_order_get_type();
}

// static
GType Glib::Value<Gdk::ModifierType>::value_type()
{
  return gdk_modifier_type_get_type();
}

// static
GType Glib::Value<Gdk::ModifierIntent>::value_type()
{
  return gdk_modifier_intent_get_type();
}

// static
GType Glib::Value<Gdk::Status>::value_type()
{
  return gdk_status_get_type();
}


namespace Gdk
{


} // namespace Gdk


