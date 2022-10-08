// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!

#undef GTK_DISABLE_DEPRECATED
#define GDK_DISABLE_DEPRECATION_WARNINGS 1
 

#include <glibmm.h>

#include <gtkmm/hvbox.h>
#include <gtkmm/private/hvbox_p.h>


/* Copyright 1998-2011 The gtkmm Development Team
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
#include <glibmm/wrap.h>


namespace Gtk
{


} //namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::VBox* wrap(GtkVBox* object, bool take_copy)
{
  return dynamic_cast<Gtk::VBox *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& VBox_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &VBox_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_vbox_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void VBox_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* VBox_Class::wrap_new(GObject* o)
{
  return manage(new VBox((GtkVBox*)(o)));

}


/* The implementation: */

VBox::VBox(const Glib::ConstructParams& construct_params)
:
  Gtk::Box(construct_params)
{
  }

VBox::VBox(GtkVBox* castitem)
:
  Gtk::Box((GtkBox*)(castitem))
{
  }


VBox::VBox(VBox&& src) noexcept
: Gtk::Box(std::move(src))
{}

VBox& VBox::operator=(VBox&& src) noexcept
{
  Gtk::Box::operator=(std::move(src));
  return *this;
}

VBox::~VBox() noexcept
{
  destroy_();
}

VBox::CppClassType VBox::vbox_class_; // initialize static member

GType VBox::get_type()
{
  return vbox_class_.init().get_type();
}


GType VBox::get_base_type()
{
  return gtk_vbox_get_type();
}


VBox::VBox(bool homogeneous, int spacing)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Box(Glib::ConstructParams(vbox_class_.init(), "homogeneous", static_cast<int>(homogeneous), "spacing", spacing, nullptr))
{
  

}


} // namespace Gtk


namespace Glib
{

Gtk::HBox* wrap(GtkHBox* object, bool take_copy)
{
  return dynamic_cast<Gtk::HBox *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& HBox_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &HBox_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_hbox_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void HBox_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* HBox_Class::wrap_new(GObject* o)
{
  return manage(new HBox((GtkHBox*)(o)));

}


/* The implementation: */

HBox::HBox(const Glib::ConstructParams& construct_params)
:
  Gtk::Box(construct_params)
{
  }

HBox::HBox(GtkHBox* castitem)
:
  Gtk::Box((GtkBox*)(castitem))
{
  }


HBox::HBox(HBox&& src) noexcept
: Gtk::Box(std::move(src))
{}

HBox& HBox::operator=(HBox&& src) noexcept
{
  Gtk::Box::operator=(std::move(src));
  return *this;
}

HBox::~HBox() noexcept
{
  destroy_();
}

HBox::CppClassType HBox::hbox_class_; // initialize static member

GType HBox::get_type()
{
  return hbox_class_.init().get_type();
}


GType HBox::get_base_type()
{
  return gtk_hbox_get_type();
}

HBox::HBox(bool homogeneous, int spacing)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Box(Glib::ConstructParams(hbox_class_.init(), "homogeneous", static_cast<int>(homogeneous), "spacing", spacing, nullptr))
{
  

}


} // namespace Gtk


