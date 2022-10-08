// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/textiter.h>
#include <gtkmm/private/textiter_p.h>

#include <gtk/gtk.h>
#include <cstring> // std::memset()

/* Copyright 1998-2002 The gtkmm Development Team
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

#include <gtkmm/texttag.h>
#include <gtkmm/textbuffer.h>

namespace Gtk
{

/**** Gtk::TextIter ********************************************************/


bool TextIter::get_attributes(TextAttributes& values) const
{
  // The initialization is not strictly necessary and omitting it
  // prevents a gcc-3.2 warning since { 0, } doesn't specifically
  // initialize all members.
  GtkTextAttributes gattributes; // = { 0, }

  const bool result = gtk_text_iter_get_attributes(gobj(), &gattributes);
  values = TextAttributes(&gattributes, true); //true = take_copy.
  return result;
}

bool TextIter::starts_tag() const
{
  return gtk_text_iter_starts_tag(const_cast<GtkTextIter*>(gobj()), nullptr /* see C docs */);
}
#ifndef GTKMM_DISABLE_DEPRECATED

G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool TextIter::begins_tag() const
{
  return gtk_text_iter_begins_tag(const_cast<GtkTextIter*>(gobj()), nullptr /* see C docs */);
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED


bool TextIter::ends_tag() const
{
  return gtk_text_iter_ends_tag(const_cast<GtkTextIter*>(gobj()), nullptr /* see C docs */);
}

bool TextIter::toggles_tag() const
{
  return gtk_text_iter_toggles_tag(const_cast<GtkTextIter*>(gobj()), nullptr /* see C docs */);
}

bool TextIter::has_tag() const
{
  return gtk_text_iter_has_tag(const_cast<GtkTextIter*>(gobj()), nullptr /* see C docs */);
}

bool TextIter::forward_search(const Glib::ustring& str, TextSearchFlags flags, TextIter& match_start, TextIter& match_end) const
{
  return gtk_text_iter_forward_search(const_cast<GtkTextIter*>(gobj()), str.c_str(), ((GtkTextSearchFlags)(flags)), (match_start).gobj(), (match_end).gobj(), nullptr /* means end() - see C docs */);
}

bool TextIter::backward_search(const Glib::ustring& str, TextSearchFlags flags, TextIter& match_start, TextIter& match_end) const
{
  return gtk_text_iter_backward_search(const_cast<GtkTextIter*>(gobj()), str.c_str(), ((GtkTextSearchFlags)(flags)), (match_start).gobj(), (match_end).gobj(), nullptr /* means end - see C docs */);
}


} // namespace Gtk


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::TextSearchFlags>::value_type()
{
  return gtk_text_search_flags_get_type();
}


namespace Glib
{

Gtk::TextIter& wrap(GtkTextIter* object)
{
  return *reinterpret_cast<Gtk::TextIter*>(object);
}

const Gtk::TextIter& wrap(const GtkTextIter* object)
{
  return *reinterpret_cast<const Gtk::TextIter*>(object);
}

} // namespace Glib


namespace Gtk
{


TextIter::TextIter(const TextIter& other) noexcept
:
  gobject_(other.gobject_)
{
}

TextIter& TextIter::operator=(const TextIter& other) noexcept
{
  gobject_ = other.gobject_;
  return *this;
}

TextIter::TextIter(TextIter&& other) noexcept
:
  gobject_(std::move(other.gobject_))
{
  //We could wipe other.gobject_ via memset,
  //but that is not really necessary:
  //other.gobject_ = nullptr;
}

TextIter& TextIter::operator=(TextIter&& other) noexcept
{
  gobject_ = std::move(other.gobject_);
  return *this;
}

// static
GType TextIter::get_type()
{
  return gtk_text_iter_get_type();
}

TextIter::TextIter()
{
  std::memset(&gobject_, 0, sizeof(GtkTextIter));
}

TextIter::TextIter(const GtkTextIter* gobject)
{
  if(gobject)
    gobject_ = *gobject;
  else
    std::memset(&gobject_, 0, sizeof(GtkTextIter));
}


bool TextIter::forward_find_char_impl(GtkTextCharPredicate predicate, void* user_data, const GtkTextIter* limit)
{
  return gtk_text_iter_forward_find_char(gobj(), predicate, user_data, limit);
}

bool TextIter::backward_find_char_impl(GtkTextCharPredicate predicate, void* user_data, const GtkTextIter* limit)
{
  return gtk_text_iter_backward_find_char(gobj(), predicate, user_data, limit);
}

Glib::RefPtr<TextBuffer> TextIter::get_buffer() const
{
  Glib::RefPtr<TextBuffer> retvalue = Glib::wrap(gtk_text_iter_get_buffer(const_cast<GtkTextIter*>(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

int TextIter::get_offset() const
{
  return gtk_text_iter_get_offset(const_cast<GtkTextIter*>(gobj()));
}

int TextIter::get_line() const
{
  return gtk_text_iter_get_line(const_cast<GtkTextIter*>(gobj()));
}

int TextIter::get_line_offset() const
{
  return gtk_text_iter_get_line_offset(const_cast<GtkTextIter*>(gobj()));
}

int TextIter::get_line_index() const
{
  return gtk_text_iter_get_line_index(const_cast<GtkTextIter*>(gobj()));
}

int TextIter::get_visible_line_offset() const
{
  return gtk_text_iter_get_visible_line_offset(const_cast<GtkTextIter*>(gobj()));
}

int TextIter::get_visible_line_index() const
{
  return gtk_text_iter_get_visible_line_index(const_cast<GtkTextIter*>(gobj()));
}

gunichar TextIter::get_char() const
{
  return gtk_text_iter_get_char(const_cast<GtkTextIter*>(gobj()));
}

Glib::ustring TextIter::get_slice(const TextIter& end) const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_text_iter_get_slice(const_cast<GtkTextIter*>(gobj()), (end).gobj()));
}

Glib::ustring TextIter::get_text(const TextIter& end) const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_text_iter_get_text(const_cast<GtkTextIter*>(gobj()), (end).gobj()));
}

Glib::ustring TextIter::get_visible_slice(const TextIter& end) const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_text_iter_get_visible_slice(const_cast<GtkTextIter*>(gobj()), (end).gobj()));
}

Glib::ustring TextIter::get_visible_text(const TextIter& end) const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_text_iter_get_visible_text(const_cast<GtkTextIter*>(gobj()), (end).gobj()));
}

Glib::RefPtr<Gdk::Pixbuf> TextIter::get_pixbuf() const
{
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_text_iter_get_pixbuf(const_cast<GtkTextIter*>(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

std::vector< Glib::RefPtr<TextMark> > TextIter::get_marks()
{
  return Glib::SListHandler<Glib::RefPtr<TextMark> >::slist_to_vector(gtk_text_iter_get_marks(gobj()), Glib::OWNERSHIP_SHALLOW);
}

std::vector< Glib::RefPtr<const TextMark> > TextIter::get_marks() const
{
  return Glib::SListHandler<Glib::RefPtr<const TextMark> >::slist_to_vector(gtk_text_iter_get_marks(const_cast<GtkTextIter*>(gobj())), Glib::OWNERSHIP_SHALLOW);
}

Glib::RefPtr<TextChildAnchor> TextIter::get_child_anchor()
{
  Glib::RefPtr<TextChildAnchor> retvalue = Glib::wrap(gtk_text_iter_get_child_anchor(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const TextChildAnchor> TextIter::get_child_anchor() const
{
  Glib::RefPtr<const TextChildAnchor> retvalue = Glib::wrap(gtk_text_iter_get_child_anchor(const_cast<GtkTextIter*>(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

std::vector< Glib::RefPtr<TextTag> > TextIter::get_toggled_tags(bool toggled_on)
{
  return Glib::SListHandler<Glib::RefPtr<TextTag> >::slist_to_vector(gtk_text_iter_get_toggled_tags(gobj(), static_cast<int>(toggled_on)), Glib::OWNERSHIP_SHALLOW);
}

std::vector< Glib::RefPtr<const TextTag> > TextIter::get_toggled_tags(bool toggled_on) const
{
  return Glib::SListHandler<Glib::RefPtr<const TextTag> >::slist_to_vector(gtk_text_iter_get_toggled_tags(const_cast<GtkTextIter*>(gobj()), static_cast<int>(toggled_on)), Glib::OWNERSHIP_SHALLOW);
}

bool TextIter::starts_tag(const Glib::RefPtr<const TextTag>& tag) const
{
  return gtk_text_iter_starts_tag(const_cast<GtkTextIter*>(gobj()), const_cast<GtkTextTag*>(Glib::unwrap<TextTag>(tag)));
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool TextIter::begins_tag(const Glib::RefPtr<const TextTag>& tag) const
{
  return gtk_text_iter_begins_tag(const_cast<GtkTextIter*>(gobj()), const_cast<GtkTextTag*>(Glib::unwrap<TextTag>(tag)));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

bool TextIter::ends_tag(const Glib::RefPtr<const TextTag>& tag) const
{
  return gtk_text_iter_ends_tag(const_cast<GtkTextIter*>(gobj()), const_cast<GtkTextTag*>(Glib::unwrap<TextTag>(tag)));
}

bool TextIter::toggles_tag(const Glib::RefPtr<const TextTag>& tag) const
{
  return gtk_text_iter_toggles_tag(const_cast<GtkTextIter*>(gobj()), const_cast<GtkTextTag*>(Glib::unwrap<TextTag>(tag)));
}

bool TextIter::has_tag(const Glib::RefPtr<const TextTag>& tag) const
{
  return gtk_text_iter_has_tag(const_cast<GtkTextIter*>(gobj()), const_cast<GtkTextTag*>(Glib::unwrap<TextTag>(tag)));
}

std::vector< Glib::RefPtr<TextTag> > TextIter::get_tags()
{
  return Glib::SListHandler<Glib::RefPtr<TextTag> >::slist_to_vector(gtk_text_iter_get_tags(gobj()), Glib::OWNERSHIP_SHALLOW);
}

std::vector< Glib::RefPtr<const TextTag> > TextIter::get_tags() const
{
  return Glib::SListHandler<Glib::RefPtr<const TextTag> >::slist_to_vector(gtk_text_iter_get_tags(const_cast<GtkTextIter*>(gobj())), Glib::OWNERSHIP_SHALLOW);
}

bool TextIter::editable(bool default_setting) const
{
  return gtk_text_iter_editable(const_cast<GtkTextIter*>(gobj()), static_cast<int>(default_setting));
}

bool TextIter::can_insert(bool default_editability) const
{
  return gtk_text_iter_can_insert(const_cast<GtkTextIter*>(gobj()), static_cast<int>(default_editability));
}

bool TextIter::starts_word() const
{
  return gtk_text_iter_starts_word(const_cast<GtkTextIter*>(gobj()));
}

bool TextIter::ends_word() const
{
  return gtk_text_iter_ends_word(const_cast<GtkTextIter*>(gobj()));
}

bool TextIter::inside_word() const
{
  return gtk_text_iter_inside_word(const_cast<GtkTextIter*>(gobj()));
}

bool TextIter::starts_sentence() const
{
  return gtk_text_iter_starts_sentence(const_cast<GtkTextIter*>(gobj()));
}

bool TextIter::ends_sentence() const
{
  return gtk_text_iter_ends_sentence(const_cast<GtkTextIter*>(gobj()));
}

bool TextIter::inside_sentence() const
{
  return gtk_text_iter_inside_sentence(const_cast<GtkTextIter*>(gobj()));
}

bool TextIter::starts_line() const
{
  return gtk_text_iter_starts_line(const_cast<GtkTextIter*>(gobj()));
}

bool TextIter::ends_line() const
{
  return gtk_text_iter_ends_line(const_cast<GtkTextIter*>(gobj()));
}

bool TextIter::is_cursor_position() const
{
  return gtk_text_iter_is_cursor_position(const_cast<GtkTextIter*>(gobj()));
}

int TextIter::get_chars_in_line() const
{
  return gtk_text_iter_get_chars_in_line(const_cast<GtkTextIter*>(gobj()));
}

int TextIter::get_bytes_in_line() const
{
  return gtk_text_iter_get_bytes_in_line(const_cast<GtkTextIter*>(gobj()));
}

Pango::Language TextIter::get_language() const
{
  return Pango::Language(gtk_text_iter_get_language(const_cast<GtkTextIter*>(gobj())));
}

bool TextIter::is_end() const
{
  return gtk_text_iter_is_end(const_cast<GtkTextIter*>(gobj()));
}

bool TextIter::is_start() const
{
  return gtk_text_iter_is_start(const_cast<GtkTextIter*>(gobj()));
}

bool TextIter::forward_char()
{
  return gtk_text_iter_forward_char(gobj());
}

bool TextIter::backward_char()
{
  return gtk_text_iter_backward_char(gobj());
}

bool TextIter::forward_chars(int count)
{
  return gtk_text_iter_forward_chars(gobj(), count);
}

bool TextIter::backward_chars(int count)
{
  return gtk_text_iter_backward_chars(gobj(), count);
}

bool TextIter::forward_line()
{
  return gtk_text_iter_forward_line(gobj());
}

bool TextIter::backward_line()
{
  return gtk_text_iter_backward_line(gobj());
}

bool TextIter::forward_lines(int count)
{
  return gtk_text_iter_forward_lines(gobj(), count);
}

bool TextIter::backward_lines(int count)
{
  return gtk_text_iter_backward_lines(gobj(), count);
}

bool TextIter::forward_word_end()
{
  return gtk_text_iter_forward_word_end(gobj());
}

bool TextIter::backward_word_start()
{
  return gtk_text_iter_backward_word_start(gobj());
}

bool TextIter::forward_word_ends(int count)
{
  return gtk_text_iter_forward_word_ends(gobj(), count);
}

bool TextIter::backward_word_starts(int count)
{
  return gtk_text_iter_backward_word_starts(gobj(), count);
}

bool TextIter::forward_visible_line()
{
  return gtk_text_iter_forward_visible_line(gobj());
}

bool TextIter::backward_visible_line()
{
  return gtk_text_iter_backward_visible_line(gobj());
}

bool TextIter::forward_visible_line(int count)
{
  return gtk_text_iter_forward_visible_lines(gobj(), count);
}

bool TextIter::backward_visible_lines(int count)
{
  return gtk_text_iter_backward_visible_lines(gobj(), count);
}

bool TextIter::forward_visible_word_end()
{
  return gtk_text_iter_forward_visible_word_end(gobj());
}

bool TextIter::backward_visible_word_start()
{
  return gtk_text_iter_backward_visible_word_start(gobj());
}

bool TextIter::forward_visible_word_ends(int count)
{
  return gtk_text_iter_forward_visible_word_ends(gobj(), count);
}

bool TextIter::backward_visible_word_starts(int count)
{
  return gtk_text_iter_backward_visible_word_starts(gobj(), count);
}

bool TextIter::forward_sentence_end()
{
  return gtk_text_iter_forward_sentence_end(gobj());
}

bool TextIter::backward_sentence_start()
{
  return gtk_text_iter_backward_sentence_start(gobj());
}

bool TextIter::forward_sentence_ends(int count)
{
  return gtk_text_iter_forward_sentence_ends(gobj(), count);
}

bool TextIter::backward_sentence_starts(int count)
{
  return gtk_text_iter_backward_sentence_starts(gobj(), count);
}

bool TextIter::forward_cursor_position()
{
  return gtk_text_iter_forward_cursor_position(gobj());
}

bool TextIter::backward_cursor_position()
{
  return gtk_text_iter_backward_cursor_position(gobj());
}

bool TextIter::forward_cursor_positions(int count)
{
  return gtk_text_iter_forward_cursor_positions(gobj(), count);
}

bool TextIter::backward_cursor_positions(int count)
{
  return gtk_text_iter_backward_cursor_positions(gobj(), count);
}

bool TextIter::forward_visible_cursor_position()
{
  return gtk_text_iter_forward_visible_cursor_position(gobj());
}

bool TextIter::backward_visible_cursor_position()
{
  return gtk_text_iter_backward_visible_cursor_position(gobj());
}

bool TextIter::forward_visible_cursor_positions(int count)
{
  return gtk_text_iter_forward_visible_cursor_positions(gobj(), count);
}

bool TextIter::backward_visible_cursor_positions(int count)
{
  return gtk_text_iter_backward_visible_cursor_positions(gobj(), count);
}

void TextIter::set_offset(int char_offset)
{
  gtk_text_iter_set_offset(gobj(), char_offset);
}

void TextIter::set_line(int line_number)
{
  gtk_text_iter_set_line(gobj(), line_number);
}

void TextIter::set_line_offset(int char_on_line)
{
  gtk_text_iter_set_line_offset(gobj(), char_on_line);
}

void TextIter::set_line_index(int byte_on_line)
{
  gtk_text_iter_set_line_index(gobj(), byte_on_line);
}

void TextIter::forward_to_end()
{
  gtk_text_iter_forward_to_end(gobj());
}

bool TextIter::forward_to_line_end()
{
  return gtk_text_iter_forward_to_line_end(gobj());
}

void TextIter::set_visible_line_offset(int char_on_line)
{
  gtk_text_iter_set_visible_line_offset(gobj(), char_on_line);
}

void TextIter::set_visible_line_index(int byte_on_line)
{
  gtk_text_iter_set_visible_line_index(gobj(), byte_on_line);
}

bool TextIter::forward_to_tag_toggle(const Glib::RefPtr<TextTag>& tag)
{
  return gtk_text_iter_forward_to_tag_toggle(gobj(), Glib::unwrap(tag));
}

bool TextIter::backward_to_tag_toggle(const Glib::RefPtr<TextTag>& tag)
{
  return gtk_text_iter_backward_to_tag_toggle(gobj(), Glib::unwrap(tag));
}

bool TextIter::forward_search(const Glib::ustring& str, TextSearchFlags flags, TextIter& match_start, TextIter& match_end, const TextIter& limit) const
{
  return gtk_text_iter_forward_search(const_cast<GtkTextIter*>(gobj()), str.c_str(), ((GtkTextSearchFlags)(flags)), (match_start).gobj(), (match_end).gobj(), (limit).gobj());
}

bool TextIter::backward_search(const Glib::ustring& str, TextSearchFlags flags, TextIter& match_start, TextIter& match_end, const TextIter& limit) const
{
  return gtk_text_iter_backward_search(const_cast<GtkTextIter*>(gobj()), str.c_str(), ((GtkTextSearchFlags)(flags)), (match_start).gobj(), (match_end).gobj(), (limit).gobj());
}

int TextIter::compare(const TextIter& rhs) const
{
  return gtk_text_iter_compare(const_cast<GtkTextIter*>(gobj()), (rhs).gobj());
}

bool TextIter::in_range(const TextIter& start, const TextIter& end) const
{
  return gtk_text_iter_in_range(const_cast<GtkTextIter*>(gobj()), (start).gobj(), (end).gobj());
}

void TextIter::order(TextIter& second)
{
  gtk_text_iter_order(gobj(), (second).gobj());
}


bool operator==(const TextIter& lhs, const TextIter& rhs)
{
  return (gtk_text_iter_equal(lhs.gobj(), rhs.gobj()) != 0);
}

bool operator!=(const TextIter& lhs, const TextIter& rhs)
{
  return (gtk_text_iter_equal(lhs.gobj(), rhs.gobj()) == 0);
}

bool operator<(const TextIter& lhs, const TextIter& rhs)
{
  return (gtk_text_iter_compare(lhs.gobj(), rhs.gobj()) < 0);
}

bool operator>(const TextIter& lhs, const TextIter& rhs)
{
  return (gtk_text_iter_compare(lhs.gobj(), rhs.gobj()) > 0);
}

bool operator<=(const TextIter& lhs, const TextIter& rhs)
{
  return (gtk_text_iter_compare(lhs.gobj(), rhs.gobj()) <= 0);
}

bool operator>=(const TextIter& lhs, const TextIter& rhs)
{
  return (gtk_text_iter_compare(lhs.gobj(), rhs.gobj()) >= 0);
}


} // namespace Gtk

