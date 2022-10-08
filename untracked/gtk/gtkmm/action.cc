// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!

#undef GTK_DISABLE_DEPRECATED
#define GDK_DISABLE_DEPRECATION_WARNINGS 1
 

#include <glibmm.h>

#include <gtkmm/action.h>
#include <gtkmm/private/action_p.h>


/* Copyright 2003 The gtkmm Development Team
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

#include <gtk/gtk.h>

#include <gtkmm/menu.h>
#include <gtkmm/menuitem.h>
#include <gtkmm/toolitem.h>
#include <gtkmm/image.h>
#include <gtkmm/widget.h>

typedef Gtk::Action Action;

namespace Gtk
{

#ifndef GTKMM_DISABLE_DEPRECATED

Action::Action(const Glib::ustring& name, const Gtk::StockID& stock_id, const Glib::ustring& label, const Glib::ustring& tooltip)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(action_class_.init(), "name",name.c_str(),"stock_id",stock_id.get_c_str(),"label",(label.empty() ? nullptr : label.c_str()),"tooltip",(tooltip.empty() ? nullptr : tooltip.c_str()), nullptr))
{}

Action::Action(const Glib::ustring& name, const Glib::ustring& icon_name, const Glib::ustring& label, const Glib::ustring& tooltip)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(action_class_.init(), "name",name.c_str(),"icon_name",icon_name.c_str(),"label",(label.empty() ? nullptr : label.c_str()),"tooltip",(tooltip.empty() ? nullptr : tooltip.c_str()), nullptr))
{}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::RefPtr<Action> Action::create(const Glib::ustring& name, const Glib::ustring& label, const Glib::ustring& tooltip)
{
  return Glib::RefPtr<Action>( new Action(name, Gtk::StockID(), label, tooltip) );
}

Glib::RefPtr<Action> Action::create(const Glib::ustring& name, const Gtk::StockID& stock_id, const Glib::ustring& label, const Glib::ustring& tooltip)
{
  return Glib::RefPtr<Action>( new Action(name, stock_id, label, tooltip) );
}

Glib::RefPtr<Action> Action::create_with_icon_name(const Glib::ustring& name, const Glib::ustring& icon_name, const Glib::ustring& label, const Glib::ustring& tooltip)
{
  return Glib::RefPtr<Action>( new Action(name, icon_name, label, tooltip) );
}
#endif // GTKMM_DISABLE_DEPRECATED


} // namespace Gtk


namespace
{

#ifndef GTKMM_DISABLE_DEPRECATED


static const Glib::SignalProxyInfo Action_signal_activate_info =
{
  "activate",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};

#endif // GTKMM_DISABLE_DEPRECATED


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::Action> wrap(GtkAction* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::Action>( dynamic_cast<Gtk::Action*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Action_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Action_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_action_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Buildable::add_interface(get_type());

  }

  return *this;
}


void Action_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->create_menu_item = &create_menu_item_vfunc_callback;
  klass->create_tool_item = &create_tool_item_vfunc_callback;
  klass->connect_proxy = &connect_proxy_vfunc_callback;
  klass->disconnect_proxy = &disconnect_proxy_vfunc_callback;

#ifndef GTKMM_DISABLE_DEPRECATED

  klass->activate = &activate_callback;
#endif // GTKMM_DISABLE_DEPRECATED

}

GtkWidget* Action_Class::create_menu_item_vfunc_callback(GtkAction* self)
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
        return (GtkWidget*)Glib::unwrap(obj->create_menu_item_vfunc());
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->create_menu_item)
    return (*base->create_menu_item)(self);

  using RType = GtkWidget*;
  return RType();
}
GtkWidget* Action_Class::create_tool_item_vfunc_callback(GtkAction* self)
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
        return (GtkWidget*)Glib::unwrap(obj->create_tool_item_vfunc());
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->create_tool_item)
    return (*base->create_tool_item)(self);

  using RType = GtkWidget*;
  return RType();
}
void Action_Class::connect_proxy_vfunc_callback(GtkAction* self, GtkWidget* proxy)
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
        obj->connect_proxy_vfunc(Glib::wrap(proxy)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->connect_proxy)
    (*base->connect_proxy)(self, proxy);
}
void Action_Class::disconnect_proxy_vfunc_callback(GtkAction* self, GtkWidget* proxy)
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
        obj->disconnect_proxy_vfunc(Glib::wrap(proxy)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->disconnect_proxy)
    (*base->disconnect_proxy)(self, proxy);
}

#ifndef GTKMM_DISABLE_DEPRECATED

void Action_Class::activate_callback(GtkAction* self)
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
        obj->on_activate();
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
  if(base && base->activate)
    (*base->activate)(self);
}
#endif // GTKMM_DISABLE_DEPRECATED


Glib::ObjectBase* Action_Class::wrap_new(GObject* object)
{
  return new Action((GtkAction*)object);
}


/* The implementation: */

GtkAction* Action::gobj_copy()
{
  reference();
  return gobj();
}

Action::Action(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Action::Action(GtkAction* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Action::Action(Action&& src) noexcept
: Glib::Object(std::move(src))
  , Buildable(std::move(src))
{}

Action& Action::operator=(Action&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  Buildable::operator=(std::move(src));
  return *this;
}


Action::~Action() noexcept
{}


Action::CppClassType Action::action_class_; // initialize static member

GType Action::get_type()
{
  return action_class_.init().get_type();
}


GType Action::get_base_type()
{
  return gtk_action_get_type();
}


Action::Action()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(action_class_.init()))
{
  

}

Glib::RefPtr<Action> Action::create()
{
  return Glib::RefPtr<Action>( new Action() );
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::ustring Action::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_action_get_name(const_cast<GtkAction*>(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool Action::is_sensitive() const
{
  return gtk_action_is_sensitive(const_cast<GtkAction*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool Action::get_sensitive() const
{
  return gtk_action_get_sensitive(const_cast<GtkAction*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_sensitive(bool sensitive)
{
  gtk_action_set_sensitive(gobj(), static_cast<int>(sensitive));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool Action::is_visible() const
{
  return gtk_action_is_visible(const_cast<GtkAction*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool Action::get_visible() const
{
  return gtk_action_get_visible(const_cast<GtkAction*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_visible(bool visible)
{
  gtk_action_set_visible(gobj(), static_cast<int>(visible));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::activate()
{
  gtk_action_activate(gobj());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Image* Action::create_icon(IconSize icon_size)
{
  return Glib::wrap((GtkImage*)(gtk_action_create_icon(gobj(), static_cast<GtkIconSize>(int(icon_size)))));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
MenuItem* Action::create_menu_item()
{
  return Glib::wrap((GtkMenuItem*)(gtk_action_create_menu_item(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
ToolItem* Action::create_tool_item()
{
  return Glib::wrap((GtkToolItem*)(gtk_action_create_tool_item(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Menu* Action::create_menu()
{
  return Glib::wrap((GtkMenu*)(gtk_action_create_menu(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
std::vector<Widget*> Action::get_proxies()
{
  return Glib::SListHandler<Widget*>::slist_to_vector(gtk_action_get_proxies(gobj()), Glib::OWNERSHIP_NONE);
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
std::vector<const Widget*> Action::get_proxies() const
{
  return Glib::SListHandler<const Widget*>::slist_to_vector(gtk_action_get_proxies(const_cast<GtkAction*>(gobj())), Glib::OWNERSHIP_NONE);
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::connect_accelerator()
{
  gtk_action_connect_accelerator(gobj());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::disconnect_accelerator()
{
  gtk_action_disconnect_accelerator(gobj());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::ustring Action::get_accel_path() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_action_get_accel_path(const_cast<GtkAction*>(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_accel_path(const Glib::ustring& accel_path)
{
  gtk_action_set_accel_path(gobj(), accel_path.c_str());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_accel_group(const Glib::RefPtr<AccelGroup>& accel_group)
{
  gtk_action_set_accel_group(gobj(), Glib::unwrap(accel_group));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_label(const Glib::ustring& label)
{
  gtk_action_set_label(gobj(), label.c_str());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::ustring Action::get_label() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_action_get_label(const_cast<GtkAction*>(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_short_label(const Glib::ustring& short_label)
{
  gtk_action_set_short_label(gobj(), short_label.c_str());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::ustring Action::get_short_label() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_action_get_short_label(const_cast<GtkAction*>(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_tooltip(const Glib::ustring& tooltip)
{
  gtk_action_set_tooltip(gobj(), tooltip.c_str());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::ustring Action::get_tooltip() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_action_get_tooltip(const_cast<GtkAction*>(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_stock_id(const StockID& stock_id)
{
  gtk_action_set_stock_id(gobj(), (stock_id).get_c_str());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
StockID Action::get_stock_id() const
{
  return StockID(gtk_action_get_stock_id(const_cast<GtkAction*>(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_gicon(const Glib::RefPtr<Gio::Icon>& icon)
{
  gtk_action_set_gicon(gobj(), const_cast<GIcon*>(Glib::unwrap<Gio::Icon>(icon)));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::RefPtr<Gio::Icon> Action::get_gicon()
{
  Glib::RefPtr<Gio::Icon> retvalue = Glib::wrap(gtk_action_get_gicon(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::RefPtr<const Gio::Icon> Action::get_gicon() const
{
  return const_cast<Action*>(this)->get_gicon();
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_icon_name(const Glib::ustring& icon_name)
{
  gtk_action_set_icon_name(gobj(), icon_name.c_str());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::ustring Action::get_icon_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_action_get_icon_name(const_cast<GtkAction*>(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_visible_horizontal(bool visible_horizontal)
{
  gtk_action_set_visible_horizontal(gobj(), static_cast<int>(visible_horizontal));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool Action::get_visible_horizontal() const
{
  return gtk_action_get_visible_horizontal(const_cast<GtkAction*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_visible_vertical(bool visible_vertical)
{
  gtk_action_set_visible_vertical(gobj(), static_cast<int>(visible_vertical));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool Action::get_visible_vertical() const
{
  return gtk_action_get_visible_vertical(const_cast<GtkAction*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_is_important(bool is_important)
{
  gtk_action_set_is_important(gobj(), static_cast<int>(is_important));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool Action::get_is_important() const
{
  return gtk_action_get_is_important(const_cast<GtkAction*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::set_always_show_image(bool always_show)
{
  gtk_action_set_always_show_image(gobj(), static_cast<int>(always_show));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool Action::get_always_show_image() const
{
  return gtk_action_get_always_show_image(const_cast<GtkAction*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::block_activate()
{
  gtk_action_block_activate(gobj());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Action::unblock_activate()
{
  gtk_action_unblock_activate(gobj());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::SignalProxy< void > Action::signal_activate()
{
  return Glib::SignalProxy< void >(this, &Action_signal_activate_info);
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< Glib::ustring > Action::property_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "name");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< Glib::ustring > Action::property_label() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "label");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< Glib::ustring > Action::property_label() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "label");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< Glib::ustring > Action::property_short_label() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "short-label");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< Glib::ustring > Action::property_short_label() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "short-label");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< Glib::ustring > Action::property_tooltip() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "tooltip");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< Glib::ustring > Action::property_tooltip() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "tooltip");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< StockID > Action::property_stock_id() 
{
  return Glib::PropertyProxy< StockID >(this, "stock-id");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< StockID > Action::property_stock_id() const
{
  return Glib::PropertyProxy_ReadOnly< StockID >(this, "stock-id");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> > Action::property_gicon() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> >(this, "gicon");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> > Action::property_gicon() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> >(this, "gicon");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< Glib::ustring > Action::property_icon_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "icon-name");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< Glib::ustring > Action::property_icon_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "icon-name");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > Action::property_visible_horizontal() 
{
  return Glib::PropertyProxy< bool >(this, "visible-horizontal");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > Action::property_visible_horizontal() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "visible-horizontal");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > Action::property_visible_vertical() 
{
  return Glib::PropertyProxy< bool >(this, "visible-vertical");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > Action::property_visible_vertical() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "visible-vertical");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > Action::property_visible_overflown() 
{
  return Glib::PropertyProxy< bool >(this, "visible-overflown");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > Action::property_visible_overflown() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "visible-overflown");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > Action::property_is_important() 
{
  return Glib::PropertyProxy< bool >(this, "is-important");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > Action::property_is_important() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "is-important");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > Action::property_hide_if_empty() 
{
  return Glib::PropertyProxy< bool >(this, "hide-if-empty");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > Action::property_hide_if_empty() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "hide-if-empty");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > Action::property_sensitive() 
{
  return Glib::PropertyProxy< bool >(this, "sensitive");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > Action::property_sensitive() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "sensitive");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > Action::property_visible() 
{
  return Glib::PropertyProxy< bool >(this, "visible");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > Action::property_visible() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "visible");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< Glib::RefPtr<ActionGroup> > Action::property_action_group() 
{
  return Glib::PropertyProxy< Glib::RefPtr<ActionGroup> >(this, "action-group");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ActionGroup> > Action::property_action_group() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ActionGroup> >(this, "action-group");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > Action::property_always_show_image() 
{
  return Glib::PropertyProxy< bool >(this, "always-show-image");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > Action::property_always_show_image() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "always-show-image");
}
#endif // GTKMM_DISABLE_DEPRECATED


void Gtk::Action::on_activate()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->activate)
    (*base->activate)(gobj());
}

Widget* Gtk::Action::create_menu_item_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->create_menu_item)
  {
    Widget* retval(Glib::wrap((*base->create_menu_item)(gobj())));
    return retval;
  }

  using RType = Widget*;
  return RType();
}
Widget* Gtk::Action::create_tool_item_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->create_tool_item)
  {
    Widget* retval(Glib::wrap((*base->create_tool_item)(gobj())));
    return retval;
  }

  using RType = Widget*;
  return RType();
}
void Gtk::Action::connect_proxy_vfunc(Widget* proxy) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->connect_proxy)
  {
    (*base->connect_proxy)(gobj(),(GtkWidget*)Glib::unwrap(proxy));
  }
}
void Gtk::Action::disconnect_proxy_vfunc(Widget* proxy) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->disconnect_proxy)
  {
    (*base->disconnect_proxy)(gobj(),(GtkWidget*)Glib::unwrap(proxy));
  }
}


} // namespace Gtk


