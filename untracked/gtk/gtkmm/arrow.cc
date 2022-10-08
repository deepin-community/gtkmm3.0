// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!

#undef GTK_DISABLE_DEPRECATED
#define GDK_DISABLE_DEPRECATION_WARNINGS 1
 

#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gtkmm/arrow.h>
#include <gtkmm/private/arrow_p.h>


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

/*
#define MIN_ARROW_SIZE  11

Arrow::Arrow(ArrowType arrow_type, ShadowType shadow_type)
  _CONSTRUCT()
{

  GtkArrow *arrow=gobj();

  GTK_WIDGET (arrow)->requisition.width = MIN_ARROW_SIZE + GTK_MISC (arrow)->xpad * 2;
  GTK_WIDGET (arrow)->requisition.height = MIN_ARROW_SIZE + GTK_MISC (arrow)->ypad * 2;

  arrow->arrow_type = arrow_type;
  arrow->shadow_type = shadow_type;
}

*/

} //namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Arrow* wrap(GtkArrow* object, bool take_copy)
{
  return dynamic_cast<Gtk::Arrow *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Arrow_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Arrow_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_arrow_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Arrow_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Arrow_Class::wrap_new(GObject* o)
{
  return manage(new Arrow((GtkArrow*)(o)));

}


/* The implementation: */

Arrow::Arrow(const Glib::ConstructParams& construct_params)
:
  Gtk::Misc(construct_params)
{
  }

Arrow::Arrow(GtkArrow* castitem)
:
  Gtk::Misc((GtkMisc*)(castitem))
{
  }


Arrow::Arrow(Arrow&& src) noexcept
: Gtk::Misc(std::move(src))
{}

Arrow& Arrow::operator=(Arrow&& src) noexcept
{
  Gtk::Misc::operator=(std::move(src));
  return *this;
}

Arrow::~Arrow() noexcept
{
  destroy_();
}

Arrow::CppClassType Arrow::arrow_class_; // initialize static member

GType Arrow::get_type()
{
  return arrow_class_.init().get_type();
}


GType Arrow::get_base_type()
{
  return gtk_arrow_get_type();
}


Arrow::Arrow(ArrowType arrow_type, ShadowType shadow_type)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Misc(Glib::ConstructParams(arrow_class_.init(), "arrow_type", ((GtkArrowType)(arrow_type)), "shadow_type", ((GtkShadowType)(shadow_type)), nullptr))
{
  

}

void Arrow::set(ArrowType arrow_type, ShadowType shadow_type)
{
  gtk_arrow_set(gobj(), ((GtkArrowType)(arrow_type)), ((GtkShadowType)(shadow_type)));
}


Glib::PropertyProxy< ArrowType > Arrow::property_arrow_type() 
{
  return Glib::PropertyProxy< ArrowType >(this, "arrow-type");
}

Glib::PropertyProxy_ReadOnly< ArrowType > Arrow::property_arrow_type() const
{
  return Glib::PropertyProxy_ReadOnly< ArrowType >(this, "arrow-type");
}

Glib::PropertyProxy< ShadowType > Arrow::property_shadow_type() 
{
  return Glib::PropertyProxy< ShadowType >(this, "shadow-type");
}

Glib::PropertyProxy_ReadOnly< ShadowType > Arrow::property_shadow_type() const
{
  return Glib::PropertyProxy_ReadOnly< ShadowType >(this, "shadow-type");
}


} // namespace Gtk

#endif // GTKMM_DISABLE_DEPRECATED


