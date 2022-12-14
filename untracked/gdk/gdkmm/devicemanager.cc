// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/devicemanager.h>
#include <gdkmm/private/devicemanager_p.h>


/* Copyright (C) 2010 The gtkmm Development Team
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

#include <glibmm/vectorutils.h>

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::DeviceManager> wrap(GdkDeviceManager* object, bool take_copy)
{
  return Glib::RefPtr<Gdk::DeviceManager>( dynamic_cast<Gdk::DeviceManager*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& DeviceManager_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &DeviceManager_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_device_manager_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void DeviceManager_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* DeviceManager_Class::wrap_new(GObject* object)
{
  return new DeviceManager((GdkDeviceManager*)object);
}


/* The implementation: */

GdkDeviceManager* DeviceManager::gobj_copy()
{
  reference();
  return gobj();
}

DeviceManager::DeviceManager(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

DeviceManager::DeviceManager(GdkDeviceManager* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


DeviceManager::DeviceManager(DeviceManager&& src) noexcept
: Glib::Object(std::move(src))
{}

DeviceManager& DeviceManager::operator=(DeviceManager&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


DeviceManager::~DeviceManager() noexcept
{}


DeviceManager::CppClassType DeviceManager::devicemanager_class_; // initialize static member

GType DeviceManager::get_type()
{
  return devicemanager_class_.init().get_type();
}


GType DeviceManager::get_base_type()
{
  return gdk_device_manager_get_type();
}


DeviceManager::DeviceManager()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(devicemanager_class_.init()))
{
  

}

Glib::RefPtr<Display> DeviceManager::get_display()
{
  Glib::RefPtr<Display> retvalue = Glib::wrap(gdk_device_manager_get_display(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Display> DeviceManager::get_display() const
{
  return const_cast<DeviceManager*>(this)->get_display();
}

#ifndef GDKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
std::vector< Glib::RefPtr<Device> > DeviceManager::list_devices(DeviceType type)
{
  return Glib::ListHandler<Glib::RefPtr<Device> >::list_to_vector(gdk_device_manager_list_devices(gobj(), ((GdkDeviceType)(type))), Glib::OWNERSHIP_SHALLOW);
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GDKMM_DISABLE_DEPRECATED

#ifndef GDKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
std::vector< Glib::RefPtr<const Device> > DeviceManager::list_devices(DeviceType type) const
{
  return Glib::ListHandler<Glib::RefPtr<const Device> >::list_to_vector(gdk_device_manager_list_devices(const_cast<GdkDeviceManager*>(gobj()), ((GdkDeviceType)(type))), Glib::OWNERSHIP_SHALLOW);
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GDKMM_DISABLE_DEPRECATED

#ifndef GDKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::RefPtr<Device> DeviceManager::get_client_pointer()
{
  Glib::RefPtr<Device> retvalue = Glib::wrap(gdk_device_manager_get_client_pointer(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GDKMM_DISABLE_DEPRECATED

#ifndef GDKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::RefPtr<const Device> DeviceManager::get_client_pointer() const
{
  return const_cast<DeviceManager*>(this)->get_client_pointer();
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GDKMM_DISABLE_DEPRECATED


} // namespace Gdk


