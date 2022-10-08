// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/cellrenderertoggle.h>
#include <gtkmm/private/cellrenderertoggle_p.h>


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

Glib::PropertyProxy_Base CellRendererToggle::_property_renderable()
{
  return property_active();
}

} //namespace Gtk

namespace
{


static void CellRendererToggle_signal_toggled_callback(GtkCellRendererToggle* self, const gchar* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,const Glib::ustring& >;

  auto obj = dynamic_cast<CellRendererToggle*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo CellRendererToggle_signal_toggled_info =
{
  "toggled",
  (GCallback) &CellRendererToggle_signal_toggled_callback,
  (GCallback) &CellRendererToggle_signal_toggled_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::CellRendererToggle* wrap(GtkCellRendererToggle* object, bool take_copy)
{
  return dynamic_cast<Gtk::CellRendererToggle *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& CellRendererToggle_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &CellRendererToggle_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_cell_renderer_toggle_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void CellRendererToggle_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->toggled = &toggled_callback;
}


void CellRendererToggle_Class::toggled_callback(GtkCellRendererToggle* self, const gchar* p0)
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
        obj->on_toggled(Glib::convert_const_gchar_ptr_to_ustring(p0)
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
  if(base && base->toggled)
    (*base->toggled)(self, p0);
}


Glib::ObjectBase* CellRendererToggle_Class::wrap_new(GObject* o)
{
  return manage(new CellRendererToggle((GtkCellRendererToggle*)(o)));

}


/* The implementation: */

CellRendererToggle::CellRendererToggle(const Glib::ConstructParams& construct_params)
:
  Gtk::CellRenderer(construct_params)
{
  }

CellRendererToggle::CellRendererToggle(GtkCellRendererToggle* castitem)
:
  Gtk::CellRenderer((GtkCellRenderer*)(castitem))
{
  }


CellRendererToggle::CellRendererToggle(CellRendererToggle&& src) noexcept
: Gtk::CellRenderer(std::move(src))
{}

CellRendererToggle& CellRendererToggle::operator=(CellRendererToggle&& src) noexcept
{
  Gtk::CellRenderer::operator=(std::move(src));
  return *this;
}

CellRendererToggle::~CellRendererToggle() noexcept
{
  destroy_();
}

CellRendererToggle::CppClassType CellRendererToggle::cellrenderertoggle_class_; // initialize static member

GType CellRendererToggle::get_type()
{
  return cellrenderertoggle_class_.init().get_type();
}


GType CellRendererToggle::get_base_type()
{
  return gtk_cell_renderer_toggle_get_type();
}


CellRendererToggle::CellRendererToggle()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::CellRenderer(Glib::ConstructParams(cellrenderertoggle_class_.init()))
{
  

}

bool CellRendererToggle::get_radio() const
{
  return gtk_cell_renderer_toggle_get_radio(const_cast<GtkCellRendererToggle*>(gobj()));
}

void CellRendererToggle::set_radio(bool radio)
{
  gtk_cell_renderer_toggle_set_radio(gobj(), static_cast<int>(radio));
}

bool CellRendererToggle::get_active() const
{
  return gtk_cell_renderer_toggle_get_active(const_cast<GtkCellRendererToggle*>(gobj()));
}

void CellRendererToggle::set_active(bool setting)
{
  gtk_cell_renderer_toggle_set_active(gobj(), static_cast<int>(setting));
}

bool CellRendererToggle::get_activatable() const
{
  return gtk_cell_renderer_toggle_get_activatable(const_cast<GtkCellRendererToggle*>(gobj()));
}

void CellRendererToggle::set_activatable(bool setting)
{
  gtk_cell_renderer_toggle_set_activatable(gobj(), static_cast<int>(setting));
}


Glib::SignalProxy< void,const Glib::ustring& > CellRendererToggle::signal_toggled()
{
  return Glib::SignalProxy< void,const Glib::ustring& >(this, &CellRendererToggle_signal_toggled_info);
}


Glib::PropertyProxy< bool > CellRendererToggle::property_activatable() 
{
  return Glib::PropertyProxy< bool >(this, "activatable");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererToggle::property_activatable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "activatable");
}

Glib::PropertyProxy< bool > CellRendererToggle::property_active() 
{
  return Glib::PropertyProxy< bool >(this, "active");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererToggle::property_active() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "active");
}

Glib::PropertyProxy< bool > CellRendererToggle::property_inconsistent() 
{
  return Glib::PropertyProxy< bool >(this, "inconsistent");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererToggle::property_inconsistent() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "inconsistent");
}

Glib::PropertyProxy< bool > CellRendererToggle::property_radio() 
{
  return Glib::PropertyProxy< bool >(this, "radio");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererToggle::property_radio() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "radio");
}

#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< int > CellRendererToggle::property_indicator_size() 
{
  return Glib::PropertyProxy< int >(this, "indicator-size");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< int > CellRendererToggle::property_indicator_size() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "indicator-size");
}
#endif // GTKMM_DISABLE_DEPRECATED


void Gtk::CellRendererToggle::on_toggled(const Glib::ustring& path)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->toggled)
    (*base->toggled)(gobj(),path.c_str());
}


} // namespace Gtk


