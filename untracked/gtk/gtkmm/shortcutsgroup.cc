// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/shortcutsgroup.h>
#include <gtkmm/private/shortcutsgroup_p.h>


/* Copyright (C) 2016 The gtkmm Development Team
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
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>

namespace Gtk
{
void ShortcutsGroup::unset_view()
{
  // Set gtk+'s char* to nullptr.
  property_view().reset_value();
}
} //namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::ShortcutsGroup* wrap(GtkShortcutsGroup* object, bool take_copy)
{
  return dynamic_cast<Gtk::ShortcutsGroup *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ShortcutsGroup_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ShortcutsGroup_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_shortcuts_group_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ShortcutsGroup_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ShortcutsGroup_Class::wrap_new(GObject* o)
{
  return manage(new ShortcutsGroup((GtkShortcutsGroup*)(o)));

}


/* The implementation: */

ShortcutsGroup::ShortcutsGroup(const Glib::ConstructParams& construct_params)
:
  Box(construct_params)
{
  }

ShortcutsGroup::ShortcutsGroup(GtkShortcutsGroup* castitem)
:
  Box((GtkBox*)(castitem))
{
  }


ShortcutsGroup::ShortcutsGroup(ShortcutsGroup&& src) noexcept
: Box(std::move(src))
{}

ShortcutsGroup& ShortcutsGroup::operator=(ShortcutsGroup&& src) noexcept
{
  Box::operator=(std::move(src));
  return *this;
}

ShortcutsGroup::~ShortcutsGroup() noexcept
{
  destroy_();
}

ShortcutsGroup::CppClassType ShortcutsGroup::shortcutsgroup_class_; // initialize static member

GType ShortcutsGroup::get_type()
{
  return shortcutsgroup_class_.init().get_type();
}


GType ShortcutsGroup::get_base_type()
{
  return gtk_shortcuts_group_get_type();
}


ShortcutsGroup::ShortcutsGroup()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Box(Glib::ConstructParams(shortcutsgroup_class_.init()))
{
  

}


Glib::PropertyProxy< Glib::ustring > ShortcutsGroup::property_title() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "title");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > ShortcutsGroup::property_title() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "title");
}

Glib::PropertyProxy< Glib::ustring > ShortcutsGroup::property_view() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "view");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > ShortcutsGroup::property_view() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "view");
}


} // namespace Gtk

