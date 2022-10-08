// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/papersize.h>
#include <gtkmm/private/papersize_p.h>


/* Copyright (C) 2006 The gtkmm Development Team
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

namespace Gtk
{
// Initialize external constants.
const Glib::ustring PAPER_NAME_A3 = GTK_PAPER_NAME_A3;
const Glib::ustring PAPER_NAME_A4 = GTK_PAPER_NAME_A4;
const Glib::ustring PAPER_NAME_A5 = GTK_PAPER_NAME_A5;
const Glib::ustring PAPER_NAME_B5 = GTK_PAPER_NAME_B5;
const Glib::ustring PAPER_NAME_LETTER = GTK_PAPER_NAME_LETTER;
const Glib::ustring PAPER_NAME_EXECUTIVE = GTK_PAPER_NAME_EXECUTIVE;
const Glib::ustring PAPER_NAME_LEGAL = GTK_PAPER_NAME_LEGAL;

//PaperSize::PaperSize()
//:
//  gobject_(gtk_paper_size_new(gtk_paper_size_get_default()))
//{}

PaperSize::PaperSize(const Glib::ustring& name)
:
  gobject_(gtk_paper_size_new(name.c_str()))
{}

PaperSize::PaperSize(const Glib::ustring& ppd_name, const Glib::ustring& ppd_display_name, double width, double height)
:
  gobject_(gtk_paper_size_new_from_ppd(ppd_name.c_str(),
                                       ppd_display_name.c_str(),
                                       gdouble(width),
                                       gdouble(height)))
{}

PaperSize::PaperSize(const Glib::ustring& name, const Glib::ustring& display_name, double width, double height, Unit unit)
:
  gobject_(gtk_paper_size_new_custom(name.c_str(),
                                     display_name.c_str(),
                                     gdouble(width),
                                     gdouble(height),
                                     GtkUnit(unit)))
{}

//TODO: Add an operator bool() so we can detect if this succeeded:
//TODO: No, throw the error/exception instead.
PaperSize::PaperSize(const Glib::KeyFile& key_file, const Glib::ustring& group_name)
:
  gobject_(gtk_paper_size_new_from_key_file(const_cast<GKeyFile*>(key_file.gobj()), (group_name.empty() ? nullptr : group_name.c_str()) , nullptr /* GError */))
{}

bool PaperSize::equal(const PaperSize& other) const
{
  return (static_cast<bool>(gtk_paper_size_is_equal(const_cast<GtkPaperSize*>(this->gobj()),
                                                    const_cast<GtkPaperSize*>(other.gobj()))));
}

#ifndef GTKMM_DISABLE_DEPRECATED

PaperSize::operator const void*() const
{
  return gobj() ? GINT_TO_POINTER(1) : nullptr;
}
#endif // GTKMM_DISABLE_DEPRECATED


PaperSize::operator bool() const
{
  return gobj();
}

void PaperSize::save_to_key_file(Glib::KeyFile& key_file)
{
  gtk_paper_size_to_key_file( gobj(), (key_file).gobj(), nullptr);
}


} // namespace Gtk

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::Unit>::value_type()
{
  return gtk_unit_get_type();
}


namespace Glib
{

Gtk::PaperSize wrap(GtkPaperSize* object, bool take_copy)
{
  return Gtk::PaperSize(object, take_copy);
}

} // namespace Glib


namespace Gtk
{


// static
GType PaperSize::get_type()
{
  return gtk_paper_size_get_type();
}

PaperSize::PaperSize()
:
  gobject_ (nullptr) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

PaperSize::PaperSize(const PaperSize& other)
:
  gobject_ ((other.gobject_) ? gtk_paper_size_copy(other.gobject_) : nullptr)
{}

PaperSize::PaperSize(PaperSize&& other) noexcept
:
  gobject_(other.gobject_)
{
  other.gobject_ = nullptr;
}

PaperSize& PaperSize::operator=(PaperSize&& other) noexcept
{
  PaperSize temp (std::move(other));
  swap(temp);
  return *this;
}

PaperSize::PaperSize(GtkPaperSize* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? gtk_paper_size_copy(gobject) : gobject)
{}

PaperSize& PaperSize::operator=(const PaperSize& other)
{
  PaperSize temp (other);
  swap(temp);
  return *this;
}

PaperSize::~PaperSize() noexcept
{
  if(gobject_)
    gtk_paper_size_free(gobject_);
}

void PaperSize::swap(PaperSize& other) noexcept
{
  std::swap(gobject_, other.gobject_);
}

GtkPaperSize* PaperSize::gobj_copy() const
{
  return gtk_paper_size_copy(gobject_);
}


std::vector<PaperSize> PaperSize::get_paper_sizes(bool include_custom)
{
  return Glib::ListHandler<PaperSize, PaperSizeTraits>::list_to_vector(gtk_paper_size_get_paper_sizes(static_cast<int>(include_custom)), Glib::OWNERSHIP_DEEP);
}

Glib::ustring PaperSize::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_paper_size_get_name(const_cast<GtkPaperSize*>(gobj())));
}

Glib::ustring PaperSize::get_display_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_paper_size_get_display_name(const_cast<GtkPaperSize*>(gobj())));
}

Glib::ustring PaperSize::get_ppd_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_paper_size_get_ppd_name(const_cast<GtkPaperSize*>(gobj())));
}

double PaperSize::get_width(Unit unit) const
{
  return gtk_paper_size_get_width(const_cast<GtkPaperSize*>(gobj()), ((GtkUnit)(unit)));
}

double PaperSize::get_height(Unit unit) const
{
  return gtk_paper_size_get_height(const_cast<GtkPaperSize*>(gobj()), ((GtkUnit)(unit)));
}

bool PaperSize::is_custom() const
{
  return gtk_paper_size_is_custom(const_cast<GtkPaperSize*>(gobj()));
}

bool PaperSize::is_ipp() const
{
  return gtk_paper_size_is_ipp(const_cast<GtkPaperSize*>(gobj()));
}

void PaperSize::set_size(double width, double height, Unit unit)
{
  gtk_paper_size_set_size(gobj(), width, height, ((GtkUnit)(unit)));
}

double PaperSize::get_default_top_margin(Unit unit) const
{
  return gtk_paper_size_get_default_top_margin(const_cast<GtkPaperSize*>(gobj()), ((GtkUnit)(unit)));
}

double PaperSize::get_default_bottom_margin(Unit unit) const
{
  return gtk_paper_size_get_default_bottom_margin(const_cast<GtkPaperSize*>(gobj()), ((GtkUnit)(unit)));
}

double PaperSize::get_default_left_margin(Unit unit) const
{
  return gtk_paper_size_get_default_left_margin(const_cast<GtkPaperSize*>(gobj()), ((GtkUnit)(unit)));
}

double PaperSize::get_default_right_margin(Unit unit) const
{
  return gtk_paper_size_get_default_right_margin(const_cast<GtkPaperSize*>(gobj()), ((GtkUnit)(unit)));
}

Glib::ustring PaperSize::get_default()
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_paper_size_get_default());
}

void PaperSize::save_to_key_file(Glib::KeyFile& key_file, const Glib::ustring& group_name)
{
  gtk_paper_size_to_key_file(gobj(), (key_file).gobj(), group_name.c_str());
}


} // namespace Gtk


