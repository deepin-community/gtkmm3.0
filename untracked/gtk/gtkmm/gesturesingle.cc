// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/gesturesingle.h>
#include <gtkmm/private/gesturesingle_p.h>


/* Copyright (C) 2014 The gtkmm Development Team
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


namespace Glib
{

Glib::RefPtr<Gtk::GestureSingle> wrap(GtkGestureSingle* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::GestureSingle>( dynamic_cast<Gtk::GestureSingle*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& GestureSingle_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &GestureSingle_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_gesture_single_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void GestureSingle_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* GestureSingle_Class::wrap_new(GObject* object)
{
  return new GestureSingle((GtkGestureSingle*)object);
}


/* The implementation: */

GtkGestureSingle* GestureSingle::gobj_copy()
{
  reference();
  return gobj();
}

GestureSingle::GestureSingle(const Glib::ConstructParams& construct_params)
:
  Gesture(construct_params)
{

}

GestureSingle::GestureSingle(GtkGestureSingle* castitem)
:
  Gesture((GtkGesture*)(castitem))
{}


GestureSingle::GestureSingle(GestureSingle&& src) noexcept
: Gesture(std::move(src))
{}

GestureSingle& GestureSingle::operator=(GestureSingle&& src) noexcept
{
  Gesture::operator=(std::move(src));
  return *this;
}


GestureSingle::~GestureSingle() noexcept
{}


GestureSingle::CppClassType GestureSingle::gesturesingle_class_; // initialize static member

GType GestureSingle::get_type()
{
  return gesturesingle_class_.init().get_type();
}


GType GestureSingle::get_base_type()
{
  return gtk_gesture_single_get_type();
}


GestureSingle::GestureSingle()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gesture(Glib::ConstructParams(gesturesingle_class_.init()))
{
  

}

bool GestureSingle::get_touch_only() const
{
  return gtk_gesture_single_get_touch_only(const_cast<GtkGestureSingle*>(gobj()));
}

void GestureSingle::set_touch_only(bool touch_only)
{
  gtk_gesture_single_set_touch_only(gobj(), static_cast<int>(touch_only));
}

bool GestureSingle::get_exclusive() const
{
  return gtk_gesture_single_get_exclusive(const_cast<GtkGestureSingle*>(gobj()));
}

void GestureSingle::set_exclusive(bool exclusive) const
{
  gtk_gesture_single_set_exclusive(const_cast<GtkGestureSingle*>(gobj()), static_cast<int>(exclusive));
}

unsigned int GestureSingle::get_button() const
{
  return gtk_gesture_single_get_button(const_cast<GtkGestureSingle*>(gobj()));
}

void GestureSingle::set_button(unsigned int button)
{
  gtk_gesture_single_set_button(gobj(), button);
}

unsigned int GestureSingle::get_current_button() const
{
  return gtk_gesture_single_get_current_button(const_cast<GtkGestureSingle*>(gobj()));
}

GdkEventSequence* GestureSingle::get_current_sequence()
{
  return gtk_gesture_single_get_current_sequence(gobj());
}

const GdkEventSequence* GestureSingle::get_current_sequence() const
{
  return const_cast<GestureSingle*>(this)->get_current_sequence();
}


Glib::PropertyProxy< bool > GestureSingle::property_touch_only() 
{
  return Glib::PropertyProxy< bool >(this, "touch-only");
}

Glib::PropertyProxy_ReadOnly< bool > GestureSingle::property_touch_only() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "touch-only");
}

Glib::PropertyProxy< bool > GestureSingle::property_exclusive() 
{
  return Glib::PropertyProxy< bool >(this, "exclusive");
}

Glib::PropertyProxy_ReadOnly< bool > GestureSingle::property_exclusive() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "exclusive");
}

Glib::PropertyProxy< unsigned int > GestureSingle::property_button() 
{
  return Glib::PropertyProxy< unsigned int >(this, "button");
}

Glib::PropertyProxy_ReadOnly< unsigned int > GestureSingle::property_button() const
{
  return Glib::PropertyProxy_ReadOnly< unsigned int >(this, "button");
}


} // namespace Gtk


