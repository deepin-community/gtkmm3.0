// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/fontchooser.h>
#include <gtkmm/private/fontchooser_p.h>


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


namespace
{
extern "C"
{
static gboolean SignalProxy_Filter_gtk_callback(const PangoFontFamily* family, const PangoFontFace* face, gpointer user_data)
{
  auto the_slot = static_cast<Gtk::FontChooser::SlotFontFilter*>(user_data);

  try
  {
    // Create suitable C++ instances to pass to the C++ method:
    const Glib::RefPtr<const Pango::FontFamily> cppFamily = Glib::wrap(const_cast<PangoFontFamily*>(family), true);
    const Glib::RefPtr<const Pango::FontFace> cppFace = Glib::wrap(const_cast<PangoFontFace*>(face), true);
    return (*the_slot)(cppFamily, cppFace);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return false; // arbitrary value
}

static void SignalProxy_Filter_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::FontChooser::SlotFontFilter*>(data);
}

} // extern "C"
} // anonymous namespace

namespace Gtk
{

void FontChooser::set_filter_func(const SlotFontFilter& slot)
{
  auto slot_copy = new SlotFontFilter(slot);
  gtk_font_chooser_set_filter_func(gobj(), &SignalProxy_Filter_gtk_callback, slot_copy, &SignalProxy_Filter_gtk_callback_destroy);
}

} //namespace Gtk

namespace
{


static void FontChooser_signal_font_activated_callback(GtkFontChooser* self, const gchar* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,const Glib::ustring& >;

  auto obj = dynamic_cast<FontChooser*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo FontChooser_signal_font_activated_info =
{
  "font-activated",
  (GCallback) &FontChooser_signal_font_activated_callback,
  (GCallback) &FontChooser_signal_font_activated_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::FontChooser> wrap(GtkFontChooser* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::FontChooser>( dynamic_cast<Gtk::FontChooser*> (Glib::wrap_auto_interface<Gtk::FontChooser> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Interface_Class& FontChooser_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &FontChooser_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gtk_font_chooser_get_type();
  }

  return *this;
}

void FontChooser_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);


}


Glib::ObjectBase* FontChooser_Class::wrap_new(GObject* object)
{
  return new FontChooser((GtkFontChooser*)(object));
}


/* The implementation: */

FontChooser::FontChooser()
:
  Glib::Interface(fontchooser_class_.init())
{}

FontChooser::FontChooser(GtkFontChooser* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

FontChooser::FontChooser(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

FontChooser::FontChooser(FontChooser&& src) noexcept
: Glib::Interface(std::move(src))
{}

FontChooser& FontChooser::operator=(FontChooser&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

FontChooser::~FontChooser() noexcept
{}

// static
void FontChooser::add_interface(GType gtype_implementer)
{
  fontchooser_class_.init().add_interface(gtype_implementer);
}

FontChooser::CppClassType FontChooser::fontchooser_class_; // initialize static member

GType FontChooser::get_type()
{
  return fontchooser_class_.init().get_type();
}


GType FontChooser::get_base_type()
{
  return gtk_font_chooser_get_type();
}


Glib::RefPtr<Pango::FontFamily> FontChooser::get_font_family()
{
  Glib::RefPtr<Pango::FontFamily> retvalue = Glib::wrap(gtk_font_chooser_get_font_family(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Pango::FontFamily> FontChooser::get_font_family() const
{
  return const_cast<FontChooser*>(this)->get_font_family();
}

Glib::RefPtr<Pango::FontFace> FontChooser::get_font_face()
{
  Glib::RefPtr<Pango::FontFace> retvalue = Glib::wrap(gtk_font_chooser_get_font_face(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Pango::FontFace> FontChooser::get_font_face() const
{
  return const_cast<FontChooser*>(this)->get_font_face();
}

int FontChooser::get_font_size() const
{
  return gtk_font_chooser_get_font_size(const_cast<GtkFontChooser*>(gobj()));
}

Pango::FontDescription FontChooser::get_font_desc() const
{
  return Glib::wrap(const_cast<PangoFontDescription*>(gtk_font_chooser_get_font_desc(const_cast<GtkFontChooser*>(gobj()))), false);
}

void FontChooser::set_font_desc(const Pango::FontDescription& font_desc)
{
  gtk_font_chooser_set_font_desc(gobj(), (font_desc).gobj());
}

Glib::ustring FontChooser::get_font() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_font_chooser_get_font(const_cast<GtkFontChooser*>(gobj())));
}

void FontChooser::set_font(const Glib::ustring& fontname)
{
  gtk_font_chooser_set_font(gobj(), fontname.c_str());
}

Glib::ustring FontChooser::get_preview_text() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_font_chooser_get_preview_text(const_cast<GtkFontChooser*>(gobj())));
}

void FontChooser::set_preview_text(const Glib::ustring& text)
{
  gtk_font_chooser_set_preview_text(gobj(), text.c_str());
}

bool FontChooser::get_show_preview_entry() const
{
  return gtk_font_chooser_get_show_preview_entry(const_cast<GtkFontChooser*>(gobj()));
}

void FontChooser::set_show_preview_entry(bool show_preview_entry)
{
  gtk_font_chooser_set_show_preview_entry(gobj(), static_cast<int>(show_preview_entry));
}

void FontChooser::set_font_map(const Glib::RefPtr<Pango::FontMap>& fontmap)
{
  gtk_font_chooser_set_font_map(gobj(), Glib::unwrap(fontmap));
}

Glib::RefPtr<Pango::FontMap> FontChooser::get_font_map()
{
  Glib::RefPtr<Pango::FontMap> retvalue = Glib::wrap(gtk_font_chooser_get_font_map(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Pango::FontMap> FontChooser::get_font_map() const
{
  return const_cast<FontChooser*>(this)->get_font_map();
}


Glib::SignalProxy< void,const Glib::ustring& > FontChooser::signal_font_activated()
{
  return Glib::SignalProxy< void,const Glib::ustring& >(this, &FontChooser_signal_font_activated_info);
}


Glib::PropertyProxy< Glib::ustring > FontChooser::property_font() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "font");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > FontChooser::property_font() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "font");
}

Glib::PropertyProxy< Pango::FontDescription > FontChooser::property_font_desc() 
{
  return Glib::PropertyProxy< Pango::FontDescription >(this, "font-desc");
}

Glib::PropertyProxy_ReadOnly< Pango::FontDescription > FontChooser::property_font_desc() const
{
  return Glib::PropertyProxy_ReadOnly< Pango::FontDescription >(this, "font-desc");
}

Glib::PropertyProxy< Glib::ustring > FontChooser::property_preview_text() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "preview-text");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > FontChooser::property_preview_text() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "preview-text");
}

Glib::PropertyProxy< bool > FontChooser::property_show_preview_entry() 
{
  return Glib::PropertyProxy< bool >(this, "show-preview-entry");
}

Glib::PropertyProxy_ReadOnly< bool > FontChooser::property_show_preview_entry() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-preview-entry");
}


} // namespace Gtk

