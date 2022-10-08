// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/separatortoolitem.h>
#include <gtkmm/private/separatortoolitem_p.h>


/*
 * Copyright 1998-2002 The gtkmm Development Team
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

#include <gtk/gtk.h>

namespace Gtk
{

} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::SeparatorToolItem* wrap(GtkSeparatorToolItem* object, bool take_copy)
{
  return dynamic_cast<Gtk::SeparatorToolItem *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& SeparatorToolItem_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SeparatorToolItem_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_separator_tool_item_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void SeparatorToolItem_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* SeparatorToolItem_Class::wrap_new(GObject* o)
{
  return manage(new SeparatorToolItem((GtkSeparatorToolItem*)(o)));

}


/* The implementation: */

SeparatorToolItem::SeparatorToolItem(const Glib::ConstructParams& construct_params)
:
  Gtk::ToolItem(construct_params)
{
  }

SeparatorToolItem::SeparatorToolItem(GtkSeparatorToolItem* castitem)
:
  Gtk::ToolItem((GtkToolItem*)(castitem))
{
  }


SeparatorToolItem::SeparatorToolItem(SeparatorToolItem&& src) noexcept
: Gtk::ToolItem(std::move(src))
{}

SeparatorToolItem& SeparatorToolItem::operator=(SeparatorToolItem&& src) noexcept
{
  Gtk::ToolItem::operator=(std::move(src));
  return *this;
}

SeparatorToolItem::~SeparatorToolItem() noexcept
{
  destroy_();
}

SeparatorToolItem::CppClassType SeparatorToolItem::separatortoolitem_class_; // initialize static member

GType SeparatorToolItem::get_type()
{
  return separatortoolitem_class_.init().get_type();
}


GType SeparatorToolItem::get_base_type()
{
  return gtk_separator_tool_item_get_type();
}


SeparatorToolItem::SeparatorToolItem()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::ToolItem(Glib::ConstructParams(separatortoolitem_class_.init()))
{
  

}

bool SeparatorToolItem::get_draw() const
{
  return gtk_separator_tool_item_get_draw(const_cast<GtkSeparatorToolItem*>(gobj()));
}

void SeparatorToolItem::set_draw(bool should_draw)
{
  gtk_separator_tool_item_set_draw(gobj(), static_cast<int>(should_draw));
}


Glib::PropertyProxy< bool > SeparatorToolItem::property_draw() 
{
  return Glib::PropertyProxy< bool >(this, "draw");
}

Glib::PropertyProxy_ReadOnly< bool > SeparatorToolItem::property_draw() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "draw");
}


} // namespace Gtk


