// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!

#undef GTK_DISABLE_DEPRECATED
#define GDK_DISABLE_DEPRECATION_WARNINGS 1
 

#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gtkmm/hvscale.h>
#include <gtkmm/private/hvscale_p.h>


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

#include <gtkmm/adjustment.h>

#include <gtk/gtk.h>
#include <math.h>
#include <cstring> //For strlen()
#include <memory>

using std::strlen;

namespace Gtk
{

VScale::VScale(double min, double max, double step)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Scale(Glib::ConstructParams(vscale_class_.init()))
{
  auto adjustment = Adjustment::create(min, min, max, step, 10 * step, step);
  set_adjustment(adjustment);

  set_digits( calc_digits_(step) );
}

VScale::VScale(const Glib::RefPtr<Adjustment>& adjustment)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Scale(Glib::ConstructParams(vscale_class_.init()))
{
  set_adjustment(adjustment);
}

VScale::VScale()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Scale(Glib::ConstructParams(vscale_class_.init()))
{
  auto adjustment = Adjustment::create(0.0, 0.0, 0.0,
    0.0, 0.0, 0.0);
  set_adjustment(adjustment);
}

HScale::HScale(double min, double max, double step)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Scale(Glib::ConstructParams(hscale_class_.init()))
{
  auto adjustment = Adjustment::create(min, min, max, step, 10 * step, step);
  set_adjustment(adjustment);

  set_digits( calc_digits_(step) );
}

HScale::HScale()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Scale(Glib::ConstructParams(hscale_class_.init()))
{
  auto adjustment = Adjustment::create(0.0, 0.0, 0.0,
	  0.0, 0.0, 0.0);
  set_adjustment(adjustment);
}

HScale::HScale(const Glib::RefPtr<Adjustment>& adjustment)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Scale(Glib::ConstructParams(hscale_class_.init()))
{
  set_adjustment(adjustment);
}

} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::VScale* wrap(GtkVScale* object, bool take_copy)
{
  return dynamic_cast<Gtk::VScale *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& VScale_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &VScale_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_vscale_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void VScale_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* VScale_Class::wrap_new(GObject* o)
{
  return manage(new VScale((GtkVScale*)(o)));

}


/* The implementation: */

VScale::VScale(const Glib::ConstructParams& construct_params)
:
  Gtk::Scale(construct_params)
{
  }

VScale::VScale(GtkVScale* castitem)
:
  Gtk::Scale((GtkScale*)(castitem))
{
  }


VScale::VScale(VScale&& src) noexcept
: Gtk::Scale(std::move(src))
{}

VScale& VScale::operator=(VScale&& src) noexcept
{
  Gtk::Scale::operator=(std::move(src));
  return *this;
}

VScale::~VScale() noexcept
{
  destroy_();
}

VScale::CppClassType VScale::vscale_class_; // initialize static member

GType VScale::get_type()
{
  return vscale_class_.init().get_type();
}


GType VScale::get_base_type()
{
  return gtk_vscale_get_type();
}


} // namespace Gtk


namespace Glib
{

Gtk::HScale* wrap(GtkHScale* object, bool take_copy)
{
  return dynamic_cast<Gtk::HScale *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& HScale_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &HScale_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_hscale_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void HScale_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* HScale_Class::wrap_new(GObject* o)
{
  return manage(new HScale((GtkHScale*)(o)));

}


/* The implementation: */

HScale::HScale(const Glib::ConstructParams& construct_params)
:
  Gtk::Scale(construct_params)
{
  }

HScale::HScale(GtkHScale* castitem)
:
  Gtk::Scale((GtkScale*)(castitem))
{
  }


HScale::HScale(HScale&& src) noexcept
: Gtk::Scale(std::move(src))
{}

HScale& HScale::operator=(HScale&& src) noexcept
{
  Gtk::Scale::operator=(std::move(src));
  return *this;
}

HScale::~HScale() noexcept
{
  destroy_();
}

HScale::CppClassType HScale::hscale_class_; // initialize static member

GType HScale::get_type()
{
  return hscale_class_.init().get_type();
}


GType HScale::get_base_type()
{
  return gtk_hscale_get_type();
}


} // namespace Gtk

#endif // GTKMM_DISABLE_DEPRECATED

