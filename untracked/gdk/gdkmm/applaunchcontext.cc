// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/applaunchcontext.h>
#include <gdkmm/private/applaunchcontext_p.h>


/* Copyright (C) 2012 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

namespace Gdk
{

} //namespace Gdk

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::AppLaunchContext> wrap(GdkAppLaunchContext* object, bool take_copy)
{
  return Glib::RefPtr<Gdk::AppLaunchContext>( dynamic_cast<Gdk::AppLaunchContext*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& AppLaunchContext_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &AppLaunchContext_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_app_launch_context_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void AppLaunchContext_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* AppLaunchContext_Class::wrap_new(GObject* object)
{
  return new AppLaunchContext((GdkAppLaunchContext*)object);
}


/* The implementation: */

GdkAppLaunchContext* AppLaunchContext::gobj_copy()
{
  reference();
  return gobj();
}

AppLaunchContext::AppLaunchContext(const Glib::ConstructParams& construct_params)
:
  Gio::AppLaunchContext(construct_params)
{

}

AppLaunchContext::AppLaunchContext(GdkAppLaunchContext* castitem)
:
  Gio::AppLaunchContext((GAppLaunchContext*)(castitem))
{}


AppLaunchContext::AppLaunchContext(AppLaunchContext&& src) noexcept
: Gio::AppLaunchContext(std::move(src))
{}

AppLaunchContext& AppLaunchContext::operator=(AppLaunchContext&& src) noexcept
{
  Gio::AppLaunchContext::operator=(std::move(src));
  return *this;
}


AppLaunchContext::~AppLaunchContext() noexcept
{}


AppLaunchContext::CppClassType AppLaunchContext::applaunchcontext_class_; // initialize static member

GType AppLaunchContext::get_type()
{
  return applaunchcontext_class_.init().get_type();
}


GType AppLaunchContext::get_base_type()
{
  return gdk_app_launch_context_get_type();
}


AppLaunchContext::AppLaunchContext()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gio::AppLaunchContext(Glib::ConstructParams(applaunchcontext_class_.init()))
{
  

}

Glib::RefPtr<AppLaunchContext> AppLaunchContext::create()
{
  return Glib::RefPtr<AppLaunchContext>( new AppLaunchContext() );
}

void AppLaunchContext::set_screen(const Glib::RefPtr<Gdk::Screen>& screen)
{
  gdk_app_launch_context_set_screen(gobj(), Glib::unwrap(screen));
}

void AppLaunchContext::set_desktop(int desktop)
{
  gdk_app_launch_context_set_desktop(gobj(), desktop);
}

void AppLaunchContext::set_timestamp(guint32 timestamp)
{
  gdk_app_launch_context_set_timestamp(gobj(), timestamp);
}

void AppLaunchContext::set_icon(const Glib::RefPtr<Gio::Icon>& icon)
{
  gdk_app_launch_context_set_icon(gobj(), const_cast<GIcon*>(Glib::unwrap<Gio::Icon>(icon)));
}

void AppLaunchContext::set_icon_name(const Glib::ustring& icon_name)
{
  gdk_app_launch_context_set_icon_name(gobj(), icon_name.c_str());
}


Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Display> > AppLaunchContext::property_display() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Display> >(this, "display");
}


} // namespace Gdk


