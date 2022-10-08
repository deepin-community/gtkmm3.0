// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/modelbutton.h>
#include <gtkmm/private/modelbutton_p.h>


/* Copyright (C) 2015 The gtkmm Development Team
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

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::ButtonRole>::value_type()
{
  return gtk_button_role_get_type();
}


namespace Glib
{

Gtk::ModelButton* wrap(GtkModelButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::ModelButton *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ModelButton_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ModelButton_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_model_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ModelButton_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ModelButton_Class::wrap_new(GObject* o)
{
  return manage(new ModelButton((GtkModelButton*)(o)));

}


/* The implementation: */

ModelButton::ModelButton(const Glib::ConstructParams& construct_params)
:
  Gtk::Button(construct_params)
{
  }

ModelButton::ModelButton(GtkModelButton* castitem)
:
  Gtk::Button((GtkButton*)(castitem))
{
  }


ModelButton::ModelButton(ModelButton&& src) noexcept
: Gtk::Button(std::move(src))
{}

ModelButton& ModelButton::operator=(ModelButton&& src) noexcept
{
  Gtk::Button::operator=(std::move(src));
  return *this;
}

ModelButton::~ModelButton() noexcept
{
  destroy_();
}

ModelButton::CppClassType ModelButton::modelbutton_class_; // initialize static member

GType ModelButton::get_type()
{
  return modelbutton_class_.init().get_type();
}


GType ModelButton::get_base_type()
{
  return gtk_model_button_get_type();
}


ModelButton::ModelButton()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Button(Glib::ConstructParams(modelbutton_class_.init()))
{
  

}


Glib::PropertyProxy< ButtonRole > ModelButton::property_role() 
{
  return Glib::PropertyProxy< ButtonRole >(this, "role");
}

Glib::PropertyProxy_ReadOnly< ButtonRole > ModelButton::property_role() const
{
  return Glib::PropertyProxy_ReadOnly< ButtonRole >(this, "role");
}

Glib::PropertyProxy< Gio::Icon > ModelButton::property_icon() 
{
  return Glib::PropertyProxy< Gio::Icon >(this, "icon");
}

Glib::PropertyProxy_ReadOnly< Gio::Icon > ModelButton::property_icon() const
{
  return Glib::PropertyProxy_ReadOnly< Gio::Icon >(this, "icon");
}

Glib::PropertyProxy< Glib::ustring > ModelButton::property_text() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "text");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > ModelButton::property_text() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "text");
}

Glib::PropertyProxy< bool > ModelButton::property_active() 
{
  return Glib::PropertyProxy< bool >(this, "active");
}

Glib::PropertyProxy_ReadOnly< bool > ModelButton::property_active() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "active");
}

Glib::PropertyProxy< Glib::ustring > ModelButton::property_menu_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "menu-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > ModelButton::property_menu_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "menu-name");
}

Glib::PropertyProxy< bool > ModelButton::property_inverted() 
{
  return Glib::PropertyProxy< bool >(this, "inverted");
}

Glib::PropertyProxy_ReadOnly< bool > ModelButton::property_inverted() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "inverted");
}

Glib::PropertyProxy< bool > ModelButton::property_centered() 
{
  return Glib::PropertyProxy< bool >(this, "centered");
}

Glib::PropertyProxy_ReadOnly< bool > ModelButton::property_centered() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "centered");
}

Glib::PropertyProxy< bool > ModelButton::property_iconic() 
{
  return Glib::PropertyProxy< bool >(this, "iconic");
}

Glib::PropertyProxy_ReadOnly< bool > ModelButton::property_iconic() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "iconic");
}


} // namespace Gtk


