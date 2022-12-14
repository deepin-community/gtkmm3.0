// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/appchooserbutton.h>
#include <gtkmm/private/appchooserbutton_p.h>


/* Copyright 2011 The gtkmm Development Team
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


static void AppChooserButton_signal_custom_item_activated_callback(GtkAppChooserButton* self, const gchar* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,const Glib::ustring& >;

  auto obj = dynamic_cast<AppChooserButton*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo AppChooserButton_signal_custom_item_activated_info =
{
  "custom-item-activated",
  (GCallback) &AppChooserButton_signal_custom_item_activated_callback,
  (GCallback) &AppChooserButton_signal_custom_item_activated_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::AppChooserButton* wrap(GtkAppChooserButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::AppChooserButton *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& AppChooserButton_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &AppChooserButton_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_app_chooser_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  AppChooser::add_interface(get_type());

  }

  return *this;
}


void AppChooserButton_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->custom_item_activated = &custom_item_activated_callback;
}


void AppChooserButton_Class::custom_item_activated_callback(GtkAppChooserButton* self, const gchar* p0)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_custom_item_activated(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->custom_item_activated)
    (*base->custom_item_activated)(self, p0);
}


Glib::ObjectBase* AppChooserButton_Class::wrap_new(GObject* o)
{
  return manage(new AppChooserButton((GtkAppChooserButton*)(o)));

}


/* The implementation: */

AppChooserButton::AppChooserButton(const Glib::ConstructParams& construct_params)
:
  ComboBox(construct_params)
{
  }

AppChooserButton::AppChooserButton(GtkAppChooserButton* castitem)
:
  ComboBox((GtkComboBox*)(castitem))
{
  }


AppChooserButton::AppChooserButton(AppChooserButton&& src) noexcept
: ComboBox(std::move(src))
  , AppChooser(std::move(src))
{}

AppChooserButton& AppChooserButton::operator=(AppChooserButton&& src) noexcept
{
  ComboBox::operator=(std::move(src));
  AppChooser::operator=(std::move(src));
  return *this;
}

AppChooserButton::~AppChooserButton() noexcept
{
  destroy_();
}

AppChooserButton::CppClassType AppChooserButton::appchooserbutton_class_; // initialize static member

GType AppChooserButton::get_type()
{
  return appchooserbutton_class_.init().get_type();
}


GType AppChooserButton::get_base_type()
{
  return gtk_app_chooser_button_get_type();
}


AppChooserButton::AppChooserButton(const Glib::ustring& content_type)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  ComboBox(Glib::ConstructParams(appchooserbutton_class_.init(), "content_type", content_type.c_str(), nullptr))
{
  

}

void AppChooserButton::append_separator()
{
  gtk_app_chooser_button_append_separator(gobj());
}

void AppChooserButton::append_custom_item(const Glib::ustring& name, const Glib::ustring& label, const Glib::RefPtr<Gio::Icon>& icon)
{
  gtk_app_chooser_button_append_custom_item(gobj(), name.c_str(), label.c_str(), const_cast<GIcon*>(Glib::unwrap<Gio::Icon>(icon)));
}

void AppChooserButton::set_active_custom_item(const Glib::ustring& name)
{
  gtk_app_chooser_button_set_active_custom_item(gobj(), name.c_str());
}

void AppChooserButton::set_show_dialog_item(bool setting)
{
  gtk_app_chooser_button_set_show_dialog_item(gobj(), static_cast<int>(setting));
}

bool AppChooserButton::get_show_dialog_item() const
{
  return gtk_app_chooser_button_get_show_dialog_item(const_cast<GtkAppChooserButton*>(gobj()));
}

void AppChooserButton::set_heading(const Glib::ustring& heading)
{
  gtk_app_chooser_button_set_heading(gobj(), heading.c_str());
}

Glib::ustring AppChooserButton::get_heading() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_app_chooser_button_get_heading(const_cast<GtkAppChooserButton*>(gobj())));
}

void AppChooserButton::set_show_default_item(bool setting)
{
  gtk_app_chooser_button_set_show_default_item(gobj(), static_cast<int>(setting));
}

bool AppChooserButton::get_show_default_item() const
{
  return gtk_app_chooser_button_get_show_default_item(const_cast<GtkAppChooserButton*>(gobj()));
}


Glib::SignalProxy< void,const Glib::ustring& > AppChooserButton::signal_custom_item_activated()
{
  return Glib::SignalProxy< void,const Glib::ustring& >(this, &AppChooserButton_signal_custom_item_activated_info);
}

Glib::SignalProxyDetailedAnyType< void,const Glib::ustring& > AppChooserButton::signal_custom_item_activated(const Glib::ustring& custom_item_name)
{
  return Glib::SignalProxyDetailedAnyType< void,const Glib::ustring& >(this, &AppChooserButton_signal_custom_item_activated_info, custom_item_name);
}


Glib::PropertyProxy< bool > AppChooserButton::property_show_dialog_item() 
{
  return Glib::PropertyProxy< bool >(this, "show-dialog-item");
}

Glib::PropertyProxy_ReadOnly< bool > AppChooserButton::property_show_dialog_item() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-dialog-item");
}

Glib::PropertyProxy< Glib::ustring > AppChooserButton::property_heading() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "heading");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AppChooserButton::property_heading() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "heading");
}

Glib::PropertyProxy< bool > AppChooserButton::property_show_default_item() 
{
  return Glib::PropertyProxy< bool >(this, "show-default-item");
}

Glib::PropertyProxy_ReadOnly< bool > AppChooserButton::property_show_default_item() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-default-item");
}


void Gtk::AppChooserButton::on_custom_item_activated(const Glib::ustring& item_name)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->custom_item_activated)
    (*base->custom_item_activated)(gobj(),item_name.c_str());
}


} // namespace Gtk


