// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!

#undef GTK_DISABLE_DEPRECATED
#define GDK_DISABLE_DEPRECATION_WARNINGS 1
 
#include <gtkmmconfig.h>
#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gtkmm/statusicon.h>
#include <gtkmm/private/statusicon_p.h>


/* Copyright 2005 The gtkmm Development Team
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

#ifndef GTKMM_DISABLE_DEPRECATED
StatusIcon::StatusIcon(const StockID& stock)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(statusicon_class_.init(), "stock", (stock).get_c_str(), nullptr))
{}
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
Glib::RefPtr<StatusIcon> StatusIcon::create(const StockID& stock_id)
{
  return Glib::RefPtr<StatusIcon>( new StatusIcon(stock_id) );
}
#endif // GTKMM_DISABLE_DEPRECATED

Glib::RefPtr<StatusIcon> StatusIcon::create_from_file(const std::string& filename)
{
  Glib::RefPtr<StatusIcon> status_icon( new StatusIcon() );
  status_icon->set_from_file(Glib::ustring(filename));
  return status_icon;
}

bool StatusIcon::get_geometry(Glib::RefPtr<Gdk::Screen>& screen, Gdk::Rectangle& area, Orientation& orientation)
{
  GdkScreen* cscreen = nullptr;
  GdkRectangle carea;
  const bool result = gtk_status_icon_get_geometry(const_cast<GtkStatusIcon*>(gobj()), &cscreen, &carea, (GtkOrientation*)(&orientation));

  if(cscreen)
  {
    screen = Glib::wrap(cscreen);
    screen->reference();
  }

  *(area.gobj()) = carea;

  return result;
}

void StatusIcon::popup_menu_at_position(Menu& menu, guint button, guint32 activate_time)
{
  gtk_menu_popup(menu.gobj(), nullptr, nullptr,
    gtk_status_icon_position_menu, gobj() /* user_data, passed to gtk_status_icon_position_menu()/ */,
    button, activate_time);
}

} // namespace Gtk


namespace
{


static gboolean StatusIcon_signal_size_changed_callback(GtkStatusIcon* self, gint p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< bool,int >;

  auto obj = dynamic_cast<StatusIcon*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(p0
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static gboolean StatusIcon_signal_size_changed_notify_callback(GtkStatusIcon* self, gint p0, void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,int >;

  auto obj = dynamic_cast<StatusIcon*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static const Glib::SignalProxyInfo StatusIcon_signal_size_changed_info =
{
  "size_changed",
  (GCallback) &StatusIcon_signal_size_changed_callback,
  (GCallback) &StatusIcon_signal_size_changed_notify_callback
};


static const Glib::SignalProxyInfo StatusIcon_signal_activate_info =
{
  "activate",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static void StatusIcon_signal_popup_menu_callback(GtkStatusIcon* self, guint p0,guint32 p1,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,guint,guint32 >;

  auto obj = dynamic_cast<StatusIcon*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0, p1);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo StatusIcon_signal_popup_menu_info =
{
  "popup_menu",
  (GCallback) &StatusIcon_signal_popup_menu_callback,
  (GCallback) &StatusIcon_signal_popup_menu_callback
};


static gboolean StatusIcon_signal_button_press_event_callback(GtkStatusIcon* self, GdkEventButton* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< bool,GdkEventButton* >;

  auto obj = dynamic_cast<StatusIcon*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(p0));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static gboolean StatusIcon_signal_button_press_event_notify_callback(GtkStatusIcon* self, GdkEventButton* p0, void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,GdkEventButton* >;

  auto obj = dynamic_cast<StatusIcon*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static const Glib::SignalProxyInfo StatusIcon_signal_button_press_event_info =
{
  "button_press_event",
  (GCallback) &StatusIcon_signal_button_press_event_callback,
  (GCallback) &StatusIcon_signal_button_press_event_notify_callback
};


static gboolean StatusIcon_signal_button_release_event_callback(GtkStatusIcon* self, GdkEventButton* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< bool,GdkEventButton* >;

  auto obj = dynamic_cast<StatusIcon*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(p0));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static gboolean StatusIcon_signal_button_release_event_notify_callback(GtkStatusIcon* self, GdkEventButton* p0, void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,GdkEventButton* >;

  auto obj = dynamic_cast<StatusIcon*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static const Glib::SignalProxyInfo StatusIcon_signal_button_release_event_info =
{
  "button_release_event",
  (GCallback) &StatusIcon_signal_button_release_event_callback,
  (GCallback) &StatusIcon_signal_button_release_event_notify_callback
};


static gboolean StatusIcon_signal_scroll_event_callback(GtkStatusIcon* self, GdkEventScroll* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< bool,GdkEventScroll* >;

  auto obj = dynamic_cast<StatusIcon*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(p0));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static gboolean StatusIcon_signal_scroll_event_notify_callback(GtkStatusIcon* self, GdkEventScroll* p0, void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,GdkEventScroll* >;

  auto obj = dynamic_cast<StatusIcon*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static const Glib::SignalProxyInfo StatusIcon_signal_scroll_event_info =
{
  "scroll_event",
  (GCallback) &StatusIcon_signal_scroll_event_callback,
  (GCallback) &StatusIcon_signal_scroll_event_notify_callback
};


static gboolean StatusIcon_signal_query_tooltip_callback(GtkStatusIcon* self, gint p0,gint p1,gboolean p2,GtkTooltip* p3,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< bool,int,int,bool,const Glib::RefPtr<Tooltip>& >;

  auto obj = dynamic_cast<StatusIcon*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(p0
, p1
, p2
, Glib::wrap(p3, true)
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static gboolean StatusIcon_signal_query_tooltip_notify_callback(GtkStatusIcon* self, gint p0,gint p1,gboolean p2,GtkTooltip* p3, void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,int,int,bool,const Glib::RefPtr<Tooltip>& >;

  auto obj = dynamic_cast<StatusIcon*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
, p1
, p2
, Glib::wrap(p3, true)
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static const Glib::SignalProxyInfo StatusIcon_signal_query_tooltip_info =
{
  "query_tooltip",
  (GCallback) &StatusIcon_signal_query_tooltip_callback,
  (GCallback) &StatusIcon_signal_query_tooltip_notify_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::StatusIcon> wrap(GtkStatusIcon* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::StatusIcon>( dynamic_cast<Gtk::StatusIcon*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& StatusIcon_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &StatusIcon_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_status_icon_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void StatusIcon_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->size_changed = &size_changed_callback;
  klass->activate = &activate_callback;
  klass->popup_menu = &popup_menu_callback;
  klass->button_press_event = &button_press_event_callback;
  klass->button_release_event = &button_release_event_callback;
  klass->scroll_event = &scroll_event_callback;
  klass->query_tooltip = &query_tooltip_callback;
}


gboolean StatusIcon_Class::size_changed_callback(GtkStatusIcon* self, gint p0)
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
        return static_cast<int>(obj->on_size_changed(p0
));
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
  if(base && base->size_changed)
    return (*base->size_changed)(self, p0);

  using RType = gboolean;
  return RType();
}
void StatusIcon_Class::activate_callback(GtkStatusIcon* self)
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
void StatusIcon_Class::popup_menu_callback(GtkStatusIcon* self, guint p0, guint32 p1)
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
        obj->on_popup_menu(p0, p1);
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
  if(base && base->popup_menu)
    (*base->popup_menu)(self, p0, p1);
}
gboolean StatusIcon_Class::button_press_event_callback(GtkStatusIcon* self, GdkEventButton* p0)
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
        return static_cast<int>(obj->on_button_press_event(p0));
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
  if(base && base->button_press_event)
    return (*base->button_press_event)(self, p0);

  using RType = gboolean;
  return RType();
}
gboolean StatusIcon_Class::button_release_event_callback(GtkStatusIcon* self, GdkEventButton* p0)
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
        return static_cast<int>(obj->on_button_release_event(p0));
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
  if(base && base->button_release_event)
    return (*base->button_release_event)(self, p0);

  using RType = gboolean;
  return RType();
}
gboolean StatusIcon_Class::scroll_event_callback(GtkStatusIcon* self, GdkEventScroll* p0)
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
        return static_cast<int>(obj->on_scroll_event(p0));
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
  if(base && base->scroll_event)
    return (*base->scroll_event)(self, p0);

  using RType = gboolean;
  return RType();
}
gboolean StatusIcon_Class::query_tooltip_callback(GtkStatusIcon* self, gint p0, gint p1, gboolean p2, GtkTooltip* p3)
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
        return static_cast<int>(obj->on_query_tooltip(p0
, p1
, p2
, Glib::wrap(p3, true)
));
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
  if(base && base->query_tooltip)
    return (*base->query_tooltip)(self, p0, p1, p2, p3);

  using RType = gboolean;
  return RType();
}


Glib::ObjectBase* StatusIcon_Class::wrap_new(GObject* object)
{
  return new StatusIcon((GtkStatusIcon*)object);
}


/* The implementation: */

GtkStatusIcon* StatusIcon::gobj_copy()
{
  reference();
  return gobj();
}

StatusIcon::StatusIcon(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

StatusIcon::StatusIcon(GtkStatusIcon* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


StatusIcon::StatusIcon(StatusIcon&& src) noexcept
: Glib::Object(std::move(src))
{}

StatusIcon& StatusIcon::operator=(StatusIcon&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


StatusIcon::~StatusIcon() noexcept
{}


StatusIcon::CppClassType StatusIcon::statusicon_class_; // initialize static member

GType StatusIcon::get_type()
{
  return statusicon_class_.init().get_type();
}


GType StatusIcon::get_base_type()
{
  return gtk_status_icon_get_type();
}


StatusIcon::StatusIcon()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(statusicon_class_.init()))
{
  

}

StatusIcon::StatusIcon(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(statusicon_class_.init(), "pixbuf", Glib::unwrap(pixbuf), nullptr))
{
  

}

StatusIcon::StatusIcon(const Glib::ustring& icon_name)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(statusicon_class_.init(), "icon_name", icon_name.c_str(), nullptr))
{
  

}

StatusIcon::StatusIcon(const Glib::RefPtr<const Gio::Icon>& icon)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(statusicon_class_.init(), "icon", const_cast<GIcon*>(Glib::unwrap<Gio::Icon>(icon)), nullptr))
{
  

}

Glib::RefPtr<StatusIcon> StatusIcon::create(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
{
  return Glib::RefPtr<StatusIcon>( new StatusIcon(pixbuf) );
}

Glib::RefPtr<StatusIcon> StatusIcon::create(const Glib::ustring& icon_name)
{
  return Glib::RefPtr<StatusIcon>( new StatusIcon(icon_name) );
}

void StatusIcon::set(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
{
  gtk_status_icon_set_from_pixbuf(gobj(), Glib::unwrap(pixbuf));
}

void StatusIcon::set_from_file(const Glib::ustring& filename)
{
  gtk_status_icon_set_from_file(gobj(), filename.c_str());
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void StatusIcon::set(const StockID& stock_id)
{
  gtk_status_icon_set_from_stock(gobj(), (stock_id).get_c_str());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

void StatusIcon::set(const Glib::ustring& icon_name)
{
  gtk_status_icon_set_from_icon_name(gobj(), icon_name.c_str());
}

void StatusIcon::set(const Glib::RefPtr<const Gio::Icon>& icon)
{
  gtk_status_icon_set_from_gicon(gobj(), const_cast<GIcon*>(Glib::unwrap<Gio::Icon>(icon)));
}

ImageType StatusIcon::get_storage_type() const
{
  return ((ImageType)(gtk_status_icon_get_storage_type(const_cast<GtkStatusIcon*>(gobj()))));
}

Glib::RefPtr<Gdk::Pixbuf> StatusIcon::get_pixbuf()
{
  return Glib::wrap(gtk_status_icon_get_pixbuf(gobj()));
}

Glib::RefPtr<const Gdk::Pixbuf> StatusIcon::get_pixbuf() const
{
  return const_cast<StatusIcon*>(this)->get_pixbuf();
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
StockID StatusIcon::get_stock() const
{
  return StockID(gtk_status_icon_get_stock(const_cast<GtkStatusIcon*>(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

Glib::ustring StatusIcon::get_icon_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_status_icon_get_icon_name(const_cast<GtkStatusIcon*>(gobj())));
}

Glib::RefPtr<Gio::Icon> StatusIcon::get_icon()
{
  Glib::RefPtr<Gio::Icon> retvalue = Glib::wrap(gtk_status_icon_get_gicon(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gio::Icon> StatusIcon::get_icon() const
{
  return const_cast<StatusIcon*>(this)->get_icon();
}

int StatusIcon::get_size() const
{
  return gtk_status_icon_get_size(const_cast<GtkStatusIcon*>(gobj()));
}

void StatusIcon::set_screen(const Glib::RefPtr<Gdk::Screen>& screen)
{
  gtk_status_icon_set_screen(gobj(), Glib::unwrap(screen));
}

Glib::RefPtr<Gdk::Screen> StatusIcon::get_screen()
{
  Glib::RefPtr<Gdk::Screen> retvalue = Glib::wrap(gtk_status_icon_get_screen(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Screen> StatusIcon::get_screen() const
{
  return const_cast<StatusIcon*>(this)->get_screen();
}

void StatusIcon::set_visible(bool visible)
{
  gtk_status_icon_set_visible(gobj(), static_cast<int>(visible));
}

bool StatusIcon::get_visible() const
{
  return gtk_status_icon_get_visible(const_cast<GtkStatusIcon*>(gobj()));
}

bool StatusIcon::is_embedded() const
{
  return gtk_status_icon_is_embedded(const_cast<GtkStatusIcon*>(gobj()));
}

bool StatusIcon::get_has_tooltip() const
{
  return gtk_status_icon_get_has_tooltip(const_cast<GtkStatusIcon*>(gobj()));
}

void StatusIcon::set_has_tooltip(bool has_tooltip)
{
  gtk_status_icon_set_has_tooltip(gobj(), static_cast<int>(has_tooltip));
}

Glib::ustring StatusIcon::get_tooltip_text() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_status_icon_get_tooltip_text(const_cast<GtkStatusIcon*>(gobj())));
}

void StatusIcon::set_tooltip_text(const Glib::ustring& text)
{
  gtk_status_icon_set_tooltip_text(gobj(), text.c_str());
}

Glib::ustring StatusIcon::get_tooltip_markup() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_status_icon_get_tooltip_markup(const_cast<GtkStatusIcon*>(gobj())));
}

void StatusIcon::set_tooltip_markup(const Glib::ustring& markup)
{
  gtk_status_icon_set_tooltip_markup(gobj(), markup.c_str());
}

void StatusIcon::set_title(const Glib::ustring& title)
{
  gtk_status_icon_set_title(gobj(), title.c_str());
}

Glib::ustring StatusIcon::get_title() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_status_icon_get_title(const_cast<GtkStatusIcon*>(gobj())));
}

void StatusIcon::set_name(const Glib::ustring& name)
{
  gtk_status_icon_set_name(gobj(), name.c_str());
}

guint32 StatusIcon::get_x11_window_id() const
{
  return gtk_status_icon_get_x11_window_id(const_cast<GtkStatusIcon*>(gobj()));
}


Glib::SignalProxy< bool,int > StatusIcon::signal_size_changed()
{
  return Glib::SignalProxy< bool,int >(this, &StatusIcon_signal_size_changed_info);
}


Glib::SignalProxy< void > StatusIcon::signal_activate()
{
  return Glib::SignalProxy< void >(this, &StatusIcon_signal_activate_info);
}


Glib::SignalProxy< void,guint,guint32 > StatusIcon::signal_popup_menu()
{
  return Glib::SignalProxy< void,guint,guint32 >(this, &StatusIcon_signal_popup_menu_info);
}


Glib::SignalProxy< bool,GdkEventButton* > StatusIcon::signal_button_press_event()
{
  return Glib::SignalProxy< bool,GdkEventButton* >(this, &StatusIcon_signal_button_press_event_info);
}


Glib::SignalProxy< bool,GdkEventButton* > StatusIcon::signal_button_release_event()
{
  return Glib::SignalProxy< bool,GdkEventButton* >(this, &StatusIcon_signal_button_release_event_info);
}


Glib::SignalProxy< bool,GdkEventScroll* > StatusIcon::signal_scroll_event()
{
  return Glib::SignalProxy< bool,GdkEventScroll* >(this, &StatusIcon_signal_scroll_event_info);
}


Glib::SignalProxy< bool,int,int,bool,const Glib::RefPtr<Tooltip>& > StatusIcon::signal_query_tooltip()
{
  return Glib::SignalProxy< bool,int,int,bool,const Glib::RefPtr<Tooltip>& >(this, &StatusIcon_signal_query_tooltip_info);
}


Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> > StatusIcon::property_pixbuf() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> >(this, "pixbuf");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> > StatusIcon::property_pixbuf() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> >(this, "pixbuf");
}

Glib::PropertyProxy_WriteOnly< std::string > StatusIcon::property_file() 
{
  return Glib::PropertyProxy_WriteOnly< std::string >(this, "file");
}

#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< StockID > StatusIcon::property_stock() 
{
  return Glib::PropertyProxy< StockID >(this, "stock");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< StockID > StatusIcon::property_stock() const
{
  return Glib::PropertyProxy_ReadOnly< StockID >(this, "stock");
}
#endif // GTKMM_DISABLE_DEPRECATED


Glib::PropertyProxy< Glib::ustring > StatusIcon::property_icon_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "icon-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > StatusIcon::property_icon_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "icon-name");
}

Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> > StatusIcon::property_gicon() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> >(this, "gicon");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> > StatusIcon::property_gicon() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> >(this, "gicon");
}

Glib::PropertyProxy_ReadOnly< ImageType > StatusIcon::property_storage_type() const
{
  return Glib::PropertyProxy_ReadOnly< ImageType >(this, "storage-type");
}

Glib::PropertyProxy_ReadOnly< int > StatusIcon::property_size() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "size");
}

Glib::PropertyProxy< Glib::RefPtr<Gdk::Screen> > StatusIcon::property_screen() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gdk::Screen> >(this, "screen");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Screen> > StatusIcon::property_screen() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Screen> >(this, "screen");
}

Glib::PropertyProxy< bool > StatusIcon::property_visible() 
{
  return Glib::PropertyProxy< bool >(this, "visible");
}

Glib::PropertyProxy_ReadOnly< bool > StatusIcon::property_visible() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "visible");
}

Glib::PropertyProxy_ReadOnly< bool > StatusIcon::property_embedded() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "embedded");
}

Glib::PropertyProxy_ReadOnly< Orientation > StatusIcon::property_orientation() const
{
  return Glib::PropertyProxy_ReadOnly< Orientation >(this, "orientation");
}

Glib::PropertyProxy< bool > StatusIcon::property_has_tooltip() 
{
  return Glib::PropertyProxy< bool >(this, "has-tooltip");
}

Glib::PropertyProxy_ReadOnly< bool > StatusIcon::property_has_tooltip() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "has-tooltip");
}

Glib::PropertyProxy< Glib::ustring > StatusIcon::property_tooltip_text() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "tooltip-text");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > StatusIcon::property_tooltip_text() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "tooltip-text");
}

Glib::PropertyProxy< Glib::ustring > StatusIcon::property_tooltip_markup() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "tooltip-markup");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > StatusIcon::property_tooltip_markup() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "tooltip-markup");
}

Glib::PropertyProxy< Glib::ustring > StatusIcon::property_title() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "title");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > StatusIcon::property_title() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "title");
}


bool Gtk::StatusIcon::on_size_changed(int size)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->size_changed)
    return (*base->size_changed)(gobj(),size);

  using RType = bool;
  return RType();
}
void Gtk::StatusIcon::on_activate()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->activate)
    (*base->activate)(gobj());
}
void Gtk::StatusIcon::on_popup_menu(guint button, guint32 activate_time)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->popup_menu)
    (*base->popup_menu)(gobj(),button,activate_time);
}
bool Gtk::StatusIcon::on_button_press_event(GdkEventButton* event)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->button_press_event)
    return (*base->button_press_event)(gobj(),event);

  using RType = bool;
  return RType();
}
bool Gtk::StatusIcon::on_button_release_event(GdkEventButton* event)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->button_release_event)
    return (*base->button_release_event)(gobj(),event);

  using RType = bool;
  return RType();
}
bool Gtk::StatusIcon::on_scroll_event(GdkEventScroll* event)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->scroll_event)
    return (*base->scroll_event)(gobj(),event);

  using RType = bool;
  return RType();
}
bool Gtk::StatusIcon::on_query_tooltip(int x, int y, bool keyboard_mode, const Glib::RefPtr<Tooltip>& tooltip)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->query_tooltip)
    return (*base->query_tooltip)(gobj(),x,y,static_cast<int>(keyboard_mode),Glib::unwrap(tooltip));

  using RType = bool;
  return RType();
}


} // namespace Gtk

#endif // GTKMM_DISABLE_DEPRECATED

