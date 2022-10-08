// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!

// So we can use deprecated functions in our deprecated methods.
#undef GDK_PIXBUF_DISABLE_DEPRECATED
 

#include <glibmm.h>

#include <gdkmm/pixbuf.h>
#include <gdkmm/private/pixbuf_p.h>

#include <gdk-pixbuf/gdk-pixbuf.h>

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

#include <glibmm/vectorutils.h>

#include <gdkmm/window.h>
#include <gdk/gdk.h>
#include <gdk-pixbuf/gdk-pixbuf.h>

namespace
{

static void pixbuf_destroy_data_callback(guint8* pixels, void* user_data)
{
  const auto slot = static_cast<Gdk::Pixbuf::SlotDestroyData*>(user_data);
  g_return_if_fail(slot != nullptr);

  try
  {
    (*slot)(pixels); // invoke callback
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  delete slot;
}

} // anonymous namespace


namespace Gdk
{

Pixbuf::Pixbuf(const Glib::RefPtr<Window>& src,
               int src_x, int src_y,
               int width, int height)
:
  Object((GObject*) gdk_pixbuf_get_from_window(
    src->gobj(), src_x, src_y, width, height))
{}

Pixbuf::Pixbuf(const ::Cairo::RefPtr< ::Cairo::Surface>& src,
         int src_x, int src_y, int width, int height)
:
  Object((GObject*) gdk_pixbuf_get_from_surface(
    src->cobj(), src_x, src_y, width, height))
{}

Glib::RefPtr<Pixbuf> Pixbuf::create_from_data(const guint8* data, Colorspace colorspace,
                                              bool has_alpha, int bits_per_sample,
                                              int width, int height, int rowstride)
{
  const auto pixbuf = gdk_pixbuf_new_from_data(
      data, (GdkColorspace) colorspace, has_alpha, bits_per_sample, width, height, rowstride,
      nullptr, nullptr);

  return Glib::wrap(pixbuf);
}

Glib::RefPtr<Pixbuf> Pixbuf::create_from_data(const guint8* data, Colorspace colorspace,
                                              bool has_alpha, int bits_per_sample,
                                              int width, int height, int rowstride,
                                              const Pixbuf::SlotDestroyData& destroy_slot)
{
  const auto pixbuf = gdk_pixbuf_new_from_data(
      data, (GdkColorspace) colorspace, has_alpha, bits_per_sample, width, height, rowstride,
      &pixbuf_destroy_data_callback, new SlotDestroyData(destroy_slot));

  return Glib::wrap(pixbuf);
}

Glib::RefPtr<Pixbuf> Pixbuf::create_from_stream(const Glib::RefPtr<Gio::InputStream>& stream)
{
  GError* gerror = nullptr;
  auto retvalue = Glib::wrap(gdk_pixbuf_new_from_stream(const_cast<GInputStream*>(Glib::unwrap(stream)), nullptr, &(gerror)));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

Glib::RefPtr<Pixbuf> Pixbuf::create_from_stream_at_scale(const Glib::RefPtr<Gio::InputStream>& stream, int width, int height, bool preserve_aspect_ratio)
{
  GError* gerror = nullptr;
  auto retvalue = Glib::wrap(gdk_pixbuf_new_from_stream_at_scale(const_cast<GInputStream*>(Glib::unwrap(stream)), width, height, static_cast<int>(preserve_aspect_ratio), nullptr, &(gerror)));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

void Pixbuf::save(const std::string& filename, const Glib::ustring& type) const
{
  GError* gerror = nullptr;
  gdk_pixbuf_savev(const_cast<GdkPixbuf*>(gobj()),
                   filename.c_str(), type.c_str(), nullptr, nullptr, &gerror);

  if(gerror)
    ::Glib::Error::throw_exception(gerror);
}

#ifndef GDKMM_DISABLE_DEPRECATED

void Pixbuf::save(const std::string& filename, const Glib::ustring& type)
{
  const_cast<const Pixbuf*>(this)->save(filename, type);
}
#endif // GDKMM_DISABLE_DEPRECATED

void Pixbuf::save(const std::string& filename, const Glib::ustring& type,
                  const std::vector<Glib::ustring>& option_keys,
                  const std::vector<Glib::ustring>& option_values) const
{
  GError* gerror = nullptr;

  gdk_pixbuf_savev(
      const_cast<GdkPixbuf*>(gobj()), filename.c_str(), type.c_str(),
      const_cast<char**>(Glib::ArrayHandler<Glib::ustring>::vector_to_array(option_keys).data ()),
      const_cast<char**>(Glib::ArrayHandler<Glib::ustring>::vector_to_array(option_values).data ()),
      &gerror);

  if(gerror)
    ::Glib::Error::throw_exception(gerror);
}

#ifndef GDKMM_DISABLE_DEPRECATED

void Pixbuf::save(const std::string& filename, const Glib::ustring& type,
                  const std::vector<Glib::ustring>& option_keys,
                  const std::vector<Glib::ustring>& option_values)
{
  const_cast<const Pixbuf*>(this)->save(filename, type, option_keys, option_values);
}
#endif // GDKMM_DISABLE_DEPRECATED

void Pixbuf::save_to_buffer(gchar*& buffer, gsize& buffer_size,
                            const Glib::ustring& type) const
{
  GError* gerror = nullptr;

  gdk_pixbuf_save_to_buffer(
      const_cast<GdkPixbuf*>(gobj()), &buffer, &buffer_size,
      type.c_str(),
      &gerror, nullptr);

  if(gerror)
    ::Glib::Error::throw_exception(gerror);
}

#ifndef GDKMM_DISABLE_DEPRECATED

void Pixbuf::save_to_buffer(gchar*& buffer, gsize& buffer_size,
                            const Glib::ustring& type)
{
  const_cast<const Pixbuf*>(this)->save_to_buffer(buffer, buffer_size, type);
}
#endif // GDKMM_DISABLE_DEPRECATED

void Pixbuf::save_to_buffer(gchar*& buffer, gsize& buffer_size,
                            const Glib::ustring& type,
                            const std::vector<Glib::ustring>& option_keys,
                            const std::vector<Glib::ustring>& option_values) const
{
  GError* gerror = nullptr;

  gdk_pixbuf_save_to_bufferv(
      const_cast<GdkPixbuf*>(gobj()),
      &buffer, &buffer_size,
      type.c_str(),
      const_cast<char**>(Glib::ArrayHandler<Glib::ustring>::vector_to_array(option_keys).data ()),
      const_cast<char**>(Glib::ArrayHandler<Glib::ustring>::vector_to_array(option_values).data ()),
      &gerror);

  if(gerror)
    ::Glib::Error::throw_exception(gerror);
}

#ifndef GDKMM_DISABLE_DEPRECATED

void Pixbuf::save_to_buffer(gchar*& buffer, gsize& buffer_size,
                            const Glib::ustring& type,
                            const std::vector<Glib::ustring>& option_keys,
                            const std::vector<Glib::ustring>& option_values)
{
  const_cast<const Pixbuf*>(this)->save_to_buffer(buffer, buffer_size, type,
                                                  option_keys, option_values);
}
#endif // GDKMM_DISABLE_DEPRECATED

std::vector<PixbufFormat> Pixbuf::get_formats()
{
  return Glib::SListHandler<PixbufFormat, PixbufFormatTraits>::slist_to_vector(gdk_pixbuf_get_formats(), Glib::OWNERSHIP_SHALLOW);
}

} // namespace Gdk

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gdk::Colorspace>::value_type()
{
  return gdk_colorspace_get_type();
}

// static
GType Glib::Value<Gdk::InterpType>::value_type()
{
  return gdk_interp_type_get_type();
}

// static
GType Glib::Value<Gdk::PixbufAlphaMode>::value_type()
{
  return gdk_pixbuf_alpha_mode_get_type();
}

// static
GType Glib::Value<Gdk::PixbufRotation>::value_type()
{
  return gdk_pixbuf_rotation_get_type();
}


Gdk::PixbufError::PixbufError(Gdk::PixbufError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (GDK_PIXBUF_ERROR, error_code, error_message)
{}

Gdk::PixbufError::PixbufError(GError* gobject)
:
  Glib::Error (gobject)
{}

Gdk::PixbufError::Code Gdk::PixbufError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Gdk::PixbufError::throw_func(GError* gobject)
{
  throw Gdk::PixbufError(gobject);
}

// static
GType Glib::Value<Gdk::PixbufError::Code>::value_type()
{
  return gdk_pixbuf_error_get_type();
}


namespace Glib
{

Glib::RefPtr<Gdk::Pixbuf> wrap(GdkPixbuf* object, bool take_copy)
{
  return Glib::RefPtr<Gdk::Pixbuf>( dynamic_cast<Gdk::Pixbuf*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& Pixbuf_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Pixbuf_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_pixbuf_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Gio::Icon::add_interface(get_type());

  }

  return *this;
}


void Pixbuf_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Pixbuf_Class::wrap_new(GObject* object)
{
  return new Pixbuf((GdkPixbuf*)object);
}


/* The implementation: */

GdkPixbuf* Pixbuf::gobj_copy()
{
  reference();
  return gobj();
}

Pixbuf::Pixbuf(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Pixbuf::Pixbuf(GdkPixbuf* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Pixbuf::Pixbuf(Pixbuf&& src) noexcept
: Glib::Object(std::move(src))
  , Gio::Icon(std::move(src))
{}

Pixbuf& Pixbuf::operator=(Pixbuf&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  Gio::Icon::operator=(std::move(src));
  return *this;
}


Pixbuf::~Pixbuf() noexcept
{}


Pixbuf::CppClassType Pixbuf::pixbuf_class_; // initialize static member

GType Pixbuf::get_type()
{
  return pixbuf_class_.init().get_type();
}


GType Pixbuf::get_base_type()
{
  return gdk_pixbuf_get_type();
}


Glib::RefPtr<Pixbuf> Pixbuf::create(const Glib::RefPtr<Window>& src, int src_x, int src_y, int width, int height)
{
  return Glib::RefPtr<Pixbuf>( new Pixbuf(src, src_x, src_y, width, height) );
}

Glib::RefPtr<Pixbuf> Pixbuf::create(const ::Cairo::RefPtr< ::Cairo::Surface>& src, int src_x, int src_y, int width, int height)
{
  return Glib::RefPtr<Pixbuf>( new Pixbuf(src, src_x, src_y, width, height) );
}

Glib::RefPtr<Pixbuf> Pixbuf::copy() const
{
  return Glib::wrap(gdk_pixbuf_copy(const_cast<GdkPixbuf*>(gobj())));
}

Glib::RefPtr<Pixbuf> Pixbuf::create(Colorspace colorspace, bool has_alpha, int bits_per_sample, int width, int height)
{
  return Glib::wrap(gdk_pixbuf_new(((GdkColorspace)(colorspace)), static_cast<int>(has_alpha), bits_per_sample, width, height));
}

Glib::RefPtr<Pixbuf> Pixbuf::create_subpixbuf(const Glib::RefPtr<Pixbuf>& src_pixbuf, int src_x, int src_y, int width, int height)
{
  return Glib::wrap(gdk_pixbuf_new_subpixbuf(Glib::unwrap(src_pixbuf), src_x, src_y, width, height));
}

Glib::RefPtr<Pixbuf> Pixbuf::create_from_file(const std::string& filename)
{
  GError* gerror = nullptr;
  Glib::RefPtr<Pixbuf> retvalue = Glib::wrap(gdk_pixbuf_new_from_file(filename.c_str(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<Pixbuf> Pixbuf::create_from_file(const std::string& filename, int width, int height, bool preserve_aspect_ratio)
{
  GError* gerror = nullptr;
  Glib::RefPtr<Pixbuf> retvalue = Glib::wrap(gdk_pixbuf_new_from_file_at_scale(filename.c_str(), width, height, static_cast<int>(preserve_aspect_ratio), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<Pixbuf> Pixbuf::create_from_resource(const std::string& resource_path)
{
  GError* gerror = nullptr;
  Glib::RefPtr<Pixbuf> retvalue = Glib::wrap(gdk_pixbuf_new_from_resource(resource_path.c_str(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<Pixbuf> Pixbuf::create_from_resource(const std::string& resource_path, int width, int height, bool preserve_aspect_ratio)
{
  GError* gerror = nullptr;
  Glib::RefPtr<Pixbuf> retvalue = Glib::wrap(gdk_pixbuf_new_from_resource_at_scale(resource_path.c_str(), width, height, static_cast<int>(preserve_aspect_ratio), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<Pixbuf> Pixbuf::create_from_xpm_data(const char *const * data)
{
  return Glib::wrap(gdk_pixbuf_new_from_xpm_data(const_cast<const char**>(data)));
}

#ifndef GDKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::RefPtr<Pixbuf> Pixbuf::create_from_inline(int data_length, const guint8* data, bool copy_pixels)
{
  GError* gerror = nullptr;
  Glib::RefPtr<Pixbuf> retvalue = Glib::wrap(gdk_pixbuf_new_from_inline(data_length, data, static_cast<int>(copy_pixels), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GDKMM_DISABLE_DEPRECATED

Glib::RefPtr<Pixbuf> Pixbuf::create_from_stream(const Glib::RefPtr<Gio::InputStream>& stream, const Glib::RefPtr<Gio::Cancellable>& cancellable)
{
  GError* gerror = nullptr;
  Glib::RefPtr<Pixbuf> retvalue = Glib::wrap(gdk_pixbuf_new_from_stream(const_cast<GInputStream*>(Glib::unwrap(stream)), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<Pixbuf> Pixbuf::create_from_stream_at_scale(const Glib::RefPtr<Gio::InputStream>& stream, int width, int height, bool preserve_aspect_ratio, const Glib::RefPtr<Gio::Cancellable>& cancellable)
{
  GError* gerror = nullptr;
  Glib::RefPtr<Pixbuf> retvalue = Glib::wrap(gdk_pixbuf_new_from_stream_at_scale(const_cast<GInputStream*>(Glib::unwrap(stream)), width, height, static_cast<int>(preserve_aspect_ratio), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Colorspace Pixbuf::get_colorspace() const
{
  return ((Colorspace)(gdk_pixbuf_get_colorspace(const_cast<GdkPixbuf*>(gobj()))));
}

int Pixbuf::get_n_channels() const
{
  return gdk_pixbuf_get_n_channels(const_cast<GdkPixbuf*>(gobj()));
}

bool Pixbuf::get_has_alpha() const
{
  return gdk_pixbuf_get_has_alpha(const_cast<GdkPixbuf*>(gobj()));
}

int Pixbuf::get_bits_per_sample() const
{
  return gdk_pixbuf_get_bits_per_sample(const_cast<GdkPixbuf*>(gobj()));
}

guint8* Pixbuf::get_pixels() const
{
  return gdk_pixbuf_get_pixels(const_cast<GdkPixbuf*>(gobj()));
}

int Pixbuf::get_width() const
{
  return gdk_pixbuf_get_width(const_cast<GdkPixbuf*>(gobj()));
}

int Pixbuf::get_height() const
{
  return gdk_pixbuf_get_height(const_cast<GdkPixbuf*>(gobj()));
}

int Pixbuf::get_rowstride() const
{
  return gdk_pixbuf_get_rowstride(const_cast<GdkPixbuf*>(gobj()));
}

gsize Pixbuf::get_byte_length() const
{
  return gdk_pixbuf_get_byte_length(const_cast<GdkPixbuf*>(gobj()));
}

void Pixbuf::fill(guint32 pixel)
{
  gdk_pixbuf_fill(gobj(), pixel);
}

Glib::RefPtr<Gdk::Pixbuf> Pixbuf::add_alpha(bool substitute_color, guint8 r, guint8 g, guint8 b) const
{
  return Glib::wrap(gdk_pixbuf_add_alpha(const_cast<GdkPixbuf*>(gobj()), static_cast<int>(substitute_color), r, g, b));
}

void Pixbuf::copy_area(int src_x, int src_y, int width, int height, const Glib::RefPtr<Gdk::Pixbuf>& dest_pixbuf, int dest_x, int dest_y) const
{
  gdk_pixbuf_copy_area(const_cast<GdkPixbuf*>(gobj()), src_x, src_y, width, height, Glib::unwrap(dest_pixbuf), dest_x, dest_y);
}

void Pixbuf::saturate_and_pixelate(const Glib::RefPtr<Gdk::Pixbuf>& dest, float saturation, bool pixelate) const
{
  gdk_pixbuf_saturate_and_pixelate(const_cast<GdkPixbuf*>(gobj()), Glib::unwrap(dest), saturation, static_cast<int>(pixelate));
}

void Pixbuf::scale(const Glib::RefPtr<Gdk::Pixbuf>& dest, int dest_x, int dest_y, int dest_width, int dest_height, double offset_x, double offset_y, double scale_x, double scale_y, InterpType interp_type) const
{
  gdk_pixbuf_scale(const_cast<GdkPixbuf*>(gobj()), Glib::unwrap(dest), dest_x, dest_y, dest_width, dest_height, offset_x, offset_y, scale_x, scale_y, ((GdkInterpType)(interp_type)));
}

void Pixbuf::composite(const Glib::RefPtr<Gdk::Pixbuf>& dest, int dest_x, int dest_y, int dest_width, int dest_height, double offset_x, double offset_y, double scale_x, double scale_y, InterpType interp_type, int overall_alpha) const
{
  gdk_pixbuf_composite(const_cast<GdkPixbuf*>(gobj()), Glib::unwrap(dest), dest_x, dest_y, dest_width, dest_height, offset_x, offset_y, scale_x, scale_y, ((GdkInterpType)(interp_type)), overall_alpha);
}

void Pixbuf::composite_color(const Glib::RefPtr<Gdk::Pixbuf>& dest, int dest_x, int dest_y, int dest_width, int dest_height, double offset_x, double offset_y, double scale_x, double scale_y, InterpType interp_type, int overall_alpha, int check_x, int check_y, int check_size, guint32 color1, guint32 color2) const
{
  gdk_pixbuf_composite_color(const_cast<GdkPixbuf*>(gobj()), Glib::unwrap(dest), dest_x, dest_y, dest_width, dest_height, offset_x, offset_y, scale_x, scale_y, ((GdkInterpType)(interp_type)), overall_alpha, check_x, check_y, check_size, color1, color2);
}

Glib::RefPtr<Gdk::Pixbuf> Pixbuf::scale_simple(int dest_width, int dest_height, InterpType interp_type) const
{
  return Glib::wrap(gdk_pixbuf_scale_simple(const_cast<GdkPixbuf*>(gobj()), dest_width, dest_height, ((GdkInterpType)(interp_type))));
}

Glib::RefPtr<Gdk::Pixbuf> Pixbuf::composite_color_simple(int dest_width, int dest_height, InterpType interp_type, int overall_alpha, int check_size, guint32 color1, guint32 color2) const
{
  return Glib::wrap(gdk_pixbuf_composite_color_simple(const_cast<GdkPixbuf*>(gobj()), dest_width, dest_height, ((GdkInterpType)(interp_type)), overall_alpha, check_size, color1, color2));
}

Glib::RefPtr<Gdk::Pixbuf> Pixbuf::rotate_simple(PixbufRotation angle) const
{
  return Glib::wrap(gdk_pixbuf_rotate_simple(const_cast<GdkPixbuf*>(gobj()), ((GdkPixbufRotation)(angle))));
}

Glib::RefPtr<Gdk::Pixbuf> Pixbuf::flip(bool horizontal) const
{
  return Glib::wrap(gdk_pixbuf_flip(const_cast<GdkPixbuf*>(gobj()), static_cast<int>(horizontal)));
}

Glib::ustring Pixbuf::get_option(const Glib::ustring& key) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gdk_pixbuf_get_option(const_cast<GdkPixbuf*>(gobj()), key.c_str()));
}

bool Pixbuf::set_option(const Glib::ustring& key, const Glib::ustring& value)
{
  return gdk_pixbuf_set_option(gobj(), key.c_str(), value.c_str());
}

bool Pixbuf::remove_option(const Glib::ustring& key)
{
  return gdk_pixbuf_remove_option(gobj(), key.c_str());
}

bool Pixbuf::copy_options(const Glib::RefPtr<Pixbuf>& dest_pixbuf) const
{
  return gdk_pixbuf_copy_options(const_cast<GdkPixbuf*>(gobj()), Glib::unwrap(dest_pixbuf));
}

Glib::RefPtr<Pixbuf> Pixbuf::apply_embedded_orientation()
{
  return Glib::wrap(gdk_pixbuf_apply_embedded_orientation(gobj()));
}


Glib::PropertyProxy_ReadOnly< Colorspace > Pixbuf::property_colorspace() const
{
  return Glib::PropertyProxy_ReadOnly< Colorspace >(this, "colorspace");
}

Glib::PropertyProxy_ReadOnly< int > Pixbuf::property_n_channels() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "n-channels");
}

Glib::PropertyProxy_ReadOnly< bool > Pixbuf::property_has_alpha() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "has-alpha");
}

Glib::PropertyProxy_ReadOnly< int > Pixbuf::property_bits_per_sample() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "bits-per-sample");
}

Glib::PropertyProxy_ReadOnly< int > Pixbuf::property_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "width");
}

Glib::PropertyProxy_ReadOnly< int > Pixbuf::property_height() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "height");
}

Glib::PropertyProxy_ReadOnly< int > Pixbuf::property_rowstride() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "rowstride");
}

Glib::PropertyProxy_ReadOnly< void* > Pixbuf::property_pixels() const
{
  return Glib::PropertyProxy_ReadOnly< void* >(this, "pixels");
}


} // namespace Gdk


