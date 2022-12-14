// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _GTKMM_RECENTCHOOSERMENU_H
#define _GTKMM_RECENTCHOOSERMENU_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2006 The gtkmm Development Team
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

#include <gtkmm/menu.h>
#include <gtkmm/recentchooser.h>
#include <gtkmm/activatable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkRecentChooserMenu = struct _GtkRecentChooserMenu;
using GtkRecentChooserMenuClass = struct _GtkRecentChooserMenuClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API RecentChooserMenu_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** RecentChooserMenu is a widget suitable for displaying recently used files
 * inside a menu.  It can be used to set a sub-menu of a MenuItem using
 * MenuItem::item_set_submenu(), or as the menu of a MenuToolButton.
 *
 * Note that RecentChooserMenu does not have any methods of its own. Instead,
 * you should use the functions that work on a RecentChooser.
 *
 * @newin{2,10}
 *
 * @ingroup RecentFiles
 */

class GTKMM_API RecentChooserMenu
  : public Menu,
    public RecentChooser,
    public Activatable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef RecentChooserMenu CppObjectType;
  typedef RecentChooserMenu_Class CppClassType;
  typedef GtkRecentChooserMenu BaseObjectType;
  typedef GtkRecentChooserMenuClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  RecentChooserMenu(RecentChooserMenu&& src) noexcept;
  RecentChooserMenu& operator=(RecentChooserMenu&& src) noexcept;

  // noncopyable
  RecentChooserMenu(const RecentChooserMenu&) = delete;
  RecentChooserMenu& operator=(const RecentChooserMenu&) = delete;

  ~RecentChooserMenu() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class GTKMM_API RecentChooserMenu_Class;
  static CppClassType recentchoosermenu_class_;

protected:
  explicit RecentChooserMenu(const Glib::ConstructParams& construct_params);
  explicit RecentChooserMenu(GtkRecentChooserMenu* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkRecentChooserMenu*       gobj()       { return reinterpret_cast<GtkRecentChooserMenu*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkRecentChooserMenu* gobj() const { return reinterpret_cast<GtkRecentChooserMenu*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
  RecentChooserMenu();

    explicit RecentChooserMenu(const Glib::RefPtr<RecentManager>& recent_manager);


  /** Sets whether a number should be added to the items of @a menu.  The
   * numbers are shown to provide a unique character for a mnemonic to
   * be used inside ten menu item???s label.  Only the first the items
   * get a number to avoid clashes.
   * 
   * @newin{2,10}
   * 
   * @param show_numbers Whether to show numbers.
   */
  void set_show_numbers(bool show_numbers =  true);
  
  /** Returns the value set by set_show_numbers().
   * 
   * @newin{2,10}
   * 
   * @return <tt>true</tt> if numbers should be shown.
   */
  bool get_show_numbers() const;

  /** Whether the first ten items in the menu should be prepended by
   * a number acting as a unique mnemonic.
   * 
   * @newin{2,10}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_numbers() ;

/** Whether the first ten items in the menu should be prepended by
   * a number acting as a unique mnemonic.
   * 
   * @newin{2,10}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_numbers() const;


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::RecentChooserMenu
   */
  GTKMM_API
  Gtk::RecentChooserMenu* wrap(GtkRecentChooserMenu* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_RECENTCHOOSERMENU_H */

