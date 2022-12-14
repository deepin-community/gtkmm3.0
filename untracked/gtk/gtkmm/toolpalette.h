// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _GTKMM_TOOLPALETTE_H
#define _GTKMM_TOOLPALETTE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2009 The gtkmm Development Team
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

#include <gtkmm/container.h>
#include <gtkmm/toolitem.h>
#include <gtkmm/orientable.h>
#include <gtkmm/scrollable.h>
#include <gtkmm/toolitemgroup.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkToolPalette = struct _GtkToolPalette;
using GtkToolPaletteClass = struct _GtkToolPaletteClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API ToolPalette_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 *  @var ToolPaletteDragTargets TOOL_PALETTE_DRAG_ITEMS
 * Support drag of items.
 * 
 *  @var ToolPaletteDragTargets TOOL_PALETTE_DRAG_GROUPS
 * Support drag of groups.
 * 
 *  @enum ToolPaletteDragTargets
 * 
 * Flags used to specify the supported drag targets.
 *
 * @ingroup gtkmmEnums
 * @par Bitwise operators:
 * <tt>%ToolPaletteDragTargets operator|(ToolPaletteDragTargets, ToolPaletteDragTargets)</tt><br>
 * <tt>%ToolPaletteDragTargets operator&(ToolPaletteDragTargets, ToolPaletteDragTargets)</tt><br>
 * <tt>%ToolPaletteDragTargets operator^(ToolPaletteDragTargets, ToolPaletteDragTargets)</tt><br>
 * <tt>%ToolPaletteDragTargets operator~(ToolPaletteDragTargets)</tt><br>
 * <tt>%ToolPaletteDragTargets& operator|=(ToolPaletteDragTargets&, ToolPaletteDragTargets)</tt><br>
 * <tt>%ToolPaletteDragTargets& operator&=(ToolPaletteDragTargets&, ToolPaletteDragTargets)</tt><br>
 * <tt>%ToolPaletteDragTargets& operator^=(ToolPaletteDragTargets&, ToolPaletteDragTargets)</tt><br>
 */
enum ToolPaletteDragTargets
{
  TOOL_PALETTE_DRAG_ITEMS = (1 << 0),
  TOOL_PALETTE_DRAG_GROUPS = (1 << 1)
};

/** @ingroup gtkmmEnums */
inline ToolPaletteDragTargets operator|(ToolPaletteDragTargets lhs, ToolPaletteDragTargets rhs)
  { return static_cast<ToolPaletteDragTargets>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline ToolPaletteDragTargets operator&(ToolPaletteDragTargets lhs, ToolPaletteDragTargets rhs)
  { return static_cast<ToolPaletteDragTargets>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline ToolPaletteDragTargets operator^(ToolPaletteDragTargets lhs, ToolPaletteDragTargets rhs)
  { return static_cast<ToolPaletteDragTargets>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline ToolPaletteDragTargets operator~(ToolPaletteDragTargets flags)
  { return static_cast<ToolPaletteDragTargets>(~static_cast<unsigned>(flags)); }

/** @ingroup gtkmmEnums */
inline ToolPaletteDragTargets& operator|=(ToolPaletteDragTargets& lhs, ToolPaletteDragTargets rhs)
  { return (lhs = static_cast<ToolPaletteDragTargets>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gtkmmEnums */
inline ToolPaletteDragTargets& operator&=(ToolPaletteDragTargets& lhs, ToolPaletteDragTargets rhs)
  { return (lhs = static_cast<ToolPaletteDragTargets>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gtkmmEnums */
inline ToolPaletteDragTargets& operator^=(ToolPaletteDragTargets& lhs, ToolPaletteDragTargets rhs)
  { return (lhs = static_cast<ToolPaletteDragTargets>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gtk

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GTKMM_API Value<Gtk::ToolPaletteDragTargets> : public Glib::Value_Flags<Gtk::ToolPaletteDragTargets>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gtk
{


/** A ToolPalette allows you to add ToolItems to a palette-like container with
 * various categories and drag and drop support.
 *
 * ToolItems cannot be added directly to a ToolPalette - instead they are added
 * to a ToolItemGroup which can than be added to a ToolPalette. To add a
 * ToolItemGroup to a ToolPalette, use Gtk::Container::add().
 *
 * The easiest way to use drag and drop with ToolPalette is to call
 * add_drag_dest() with the desired drag source palette and the desired drag
 * target widget. Then get_drag_item() can be used to get the dragged item in
 * the "drag-data-received" signal handler of the drag target.
 *
 * @newin{2,20}
 *
 * @ingroup Widgets
 * @ingroup Containers
 */

class GTKMM_API ToolPalette
: public Container,
  public Orientable,
  public Scrollable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ToolPalette CppObjectType;
  typedef ToolPalette_Class CppClassType;
  typedef GtkToolPalette BaseObjectType;
  typedef GtkToolPaletteClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  ToolPalette(ToolPalette&& src) noexcept;
  ToolPalette& operator=(ToolPalette&& src) noexcept;

  // noncopyable
  ToolPalette(const ToolPalette&) = delete;
  ToolPalette& operator=(const ToolPalette&) = delete;

  ~ToolPalette() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class GTKMM_API ToolPalette_Class;
  static CppClassType toolpalette_class_;

protected:
  explicit ToolPalette(const Glib::ConstructParams& construct_params);
  explicit ToolPalette(GtkToolPalette* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkToolPalette*       gobj()       { return reinterpret_cast<GtkToolPalette*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkToolPalette* gobj() const { return reinterpret_cast<GtkToolPalette*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
  ToolPalette();


  /** Sets the position of the group as an index of the tool palette.
   * If position is 0 the group will become the first child, if position is
   * -1 it will become the last child.
   * 
   * @newin{2,20}
   * 
   * @param group A Gtk::ToolItemGroup which is a child of palette.
   * @param position A new index for group.
   */
  void set_group_position(ToolItemGroup& group, int position);
  
  /** Sets whether the group should be exclusive or not.
   * If an exclusive group is expanded all other groups are collapsed.
   * 
   * @newin{2,20}
   * 
   * @param group A Gtk::ToolItemGroup which is a child of palette.
   * @param exclusive Whether the group should be exclusive or not.
   */
  void set_exclusive(ToolItemGroup& group, bool exclusive);
  
  /** Sets whether the group should be given extra space.
   * 
   * @newin{2,20}
   * 
   * @param group A Gtk::ToolItemGroup which is a child of palette.
   * @param expand Whether the group should be given extra space.
   */
  void set_expand(ToolItemGroup& group, bool expand =  true);

  
  /** Gets the position of @a group in @a palette as index.
   * See set_group_position().
   * 
   * @newin{2,20}
   * 
   * @param group A Gtk::ToolItemGroup.
   * @return The index of group or -1 if @a group is not a child of @a palette.
   */
  int get_group_position(ToolItemGroup& group) const;
  
  /** Gets whether @a group is exclusive or not.
   * See set_exclusive().
   * 
   * @newin{2,20}
   * 
   * @param group A Gtk::ToolItemGroup which is a child of palette.
   * @return <tt>true</tt> if @a group is exclusive.
   */
  bool get_exclusive(ToolItemGroup& group) const;
  
  /** Gets whether group should be given extra space.
   * See set_expand().
   * 
   * @newin{2,20}
   * 
   * @param group A Gtk::ToolItemGroup which is a child of palette.
   * @return <tt>true</tt> if group should be given extra space, <tt>false</tt> otherwise.
   */
  bool get_expand(ToolItemGroup& group) const;

  
  /** Sets the size of icons in the tool palette.
   * 
   * @newin{2,20}
   * 
   * @param icon_size The Gtk::IconSize that icons in the tool
   * palette shall have.
   */
  void set_icon_size(IconSize icon_size);
  
  /** Unsets the tool palette icon size set with set_icon_size(),
   * so that user preferences will be used to determine the icon size.
   * 
   * @newin{2,20}
   */
  void unset_icon_size();
  
  /** Sets the style (text, icons or both) of items in the tool palette.
   * 
   * @newin{2,20}
   * 
   * @param style The Gtk::ToolbarStyle that items in the tool palette shall have.
   */
  void set_style(ToolbarStyle style);
  
  /** Unsets a toolbar style set with set_style(),
   * so that user preferences will be used to determine the toolbar style.
   * 
   * @newin{2,20}
   */
  void unset_style();

  
  /** Gets the size of icons in the tool palette.
   * See set_icon_size().
   * 
   * @newin{2,20}
   * 
   * @return The Gtk::IconSize of icons in the tool palette.
   */
  IconSize get_icon_size() const;
  
  /** Gets the style (icons, text or both) of items in the tool palette.
   * 
   * @newin{2,20}
   * 
   * @return The Gtk::ToolbarStyle of items in the tool palette.
   */
  ToolbarStyle get_style() const;

  
  /** Gets the item at position (x, y).
   * See get_drop_group().
   * 
   * @newin{2,20}
   * 
   * @param x The x position.
   * @param y The y position.
   * @return The Gtk::ToolItem at position or <tt>nullptr</tt> if there is no such item.
   */
  ToolItem* get_drop_item(int x, int y);
  
  /** Gets the item at position (x, y).
   * See get_drop_group().
   * 
   * @newin{2,20}
   * 
   * @param x The x position.
   * @param y The y position.
   * @return The Gtk::ToolItem at position or <tt>nullptr</tt> if there is no such item.
   */
  const ToolItem* get_drop_item(int x, int y) const;

//This conversion is needed because of https://bugzilla.gnome.org/show_bug.cgi?id=567729#c37
 

  /** Gets the group at position (x, y).
   * 
   * @newin{2,20}
   * 
   * @param x The x position.
   * @param y The y position.
   * @return The Gtk::ToolItemGroup at position
   * or <tt>nullptr</tt> if there is no such group.
   */
  ToolItemGroup* get_drop_group(int x, int y);
  
  /** Gets the group at position (x, y).
   * 
   * @newin{2,20}
   * 
   * @param x The x position.
   * @param y The y position.
   * @return The Gtk::ToolItemGroup at position
   * or <tt>nullptr</tt> if there is no such group.
   */
  const ToolItemGroup* get_drop_group(int x, int y) const;

  
  /** Get the dragged item from the selection.
   * This could be a Gtk::ToolItem or a Gtk::ToolItemGroup.
   * 
   * @newin{2,20}
   * 
   * @param selection A Gtk::SelectionData.
   * @return The dragged item in selection.
   */
  ToolItem* get_drag_item(const SelectionData& selection);
  
  /** Get the dragged item from the selection.
   * This could be a Gtk::ToolItem or a Gtk::ToolItemGroup.
   * 
   * @newin{2,20}
   * 
   * @param selection A Gtk::SelectionData.
   * @return The dragged item in selection.
   */
  const ToolItem* get_drag_item(const SelectionData& selection) const;

  
  /** Sets the tool palette as a drag source.
   * Enables all groups and items in the tool palette as drag sources
   * on button 1 and button 3 press with copy and move actions.
   * See gtk_drag_source_set().
   * 
   * @newin{2,20}
   * 
   * @param targets The Gtk::ToolPaletteDragTargets
   * which the widget should support.
   */
  void set_drag_source(ToolPaletteDragTargets targets =  TOOL_PALETTE_DRAG_ITEMS);
  
  /** Sets @a palette as drag source (see set_drag_source())
   * and sets @a widget as a drag destination for drags from @a palette.
   * See gtk_drag_dest_set().
   * 
   * @newin{2,20}
   * 
   * @param widget A Gtk::Widget which should be a drag destination for @a palette.
   * @param flags The flags that specify what actions GTK+ should take for drops
   * on that widget.
   * @param targets The Gtk::ToolPaletteDragTargets which the widget
   * should support.
   * @param actions The Gdk::DragActions which the widget should suppport.
   */
  void add_drag_dest(Gtk::Widget& widget, DestDefaults flags =  DEST_DEFAULT_ALL, ToolPaletteDragTargets targets =  TOOL_PALETTE_DRAG_ITEMS, Gdk::DragAction actions =  Gdk::ACTION_COPY);

  
  /** Gets the target entry for a dragged Gtk::ToolItem.
   * 
   * @newin{2,20}
   * 
   * @return The Gtk::TargetEntry for a dragged item.
   */
  static TargetEntry get_drag_target_item();
  
  /** Get the target entry for a dragged Gtk::ToolItemGroup.
   * 
   * @newin{2,20}
   * 
   * @return The Gtk::TargetEntry for a dragged group.
   */
  static TargetEntry get_drag_target_group();

  /** The size of the icons in a tool palette. When this property is set,
   * it overrides the default setting.
   * 
   * This should only be used for special-purpose tool palettes, normal
   * application tool palettes should respect the user preferences for the
   * size of icons.
   * 
   * @newin{2,20}
   *
   * Default value: Gtk::ICON_SIZE_SMALL_TOOLBAR
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< IconSize > property_icon_size() ;

/** The size of the icons in a tool palette. When this property is set,
   * it overrides the default setting.
   * 
   * This should only be used for special-purpose tool palettes, normal
   * application tool palettes should respect the user preferences for the
   * size of icons.
   * 
   * @newin{2,20}
   *
   * Default value: Gtk::ICON_SIZE_SMALL_TOOLBAR
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< IconSize > property_icon_size() const;

  /** Is <tt>true</tt> if the Gtk::ToolPalette::property_icon_size() property has been set.
   * 
   * @newin{2,20}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_icon_size_set() ;

/** Is <tt>true</tt> if the Gtk::ToolPalette::property_icon_size() property has been set.
   * 
   * @newin{2,20}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_icon_size_set() const;

  /** The style of items in the tool palette.
   * 
   * @newin{2,20}
   *
   * Default value: Gtk::TOOLBAR_ICONS
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ToolbarStyle > property_toolbar_style() ;

/** The style of items in the tool palette.
   * 
   * @newin{2,20}
   *
   * Default value: Gtk::TOOLBAR_ICONS
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ToolbarStyle > property_toolbar_style() const;


  /** Whether the item group should be the only one that is expanded
   * at a given time.
   * 
   * @newin{2,20}
   *
   * Default value: <tt>false</tt>
   *
   * @return A ChildPropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy< bool > child_property_exclusive(Gtk::Widget& child) ;

/** Whether the item group should be the only one that is expanded
   * at a given time.
   * 
   * @newin{2,20}
   *
   * Default value: <tt>false</tt>
   *
   * @return A ChildPropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy_ReadOnly< bool > child_property_exclusive(const Gtk::Widget& child) const;

  /** Whether the item group should receive extra space when the palette grows.
   * at a given time.
   * 
   * @newin{2,20}
   *
   * Default value: <tt>false</tt>
   *
   * @return A ChildPropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy< bool > child_property_expand(Gtk::Widget& child) ;

/** Whether the item group should receive extra space when the palette grows.
   * at a given time.
   * 
   * @newin{2,20}
   *
   * Default value: <tt>false</tt>
   *
   * @return A ChildPropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy_ReadOnly< bool > child_property_expand(const Gtk::Widget& child) const;


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
   * @relates Gtk::ToolPalette
   */
  GTKMM_API
  Gtk::ToolPalette* wrap(GtkToolPalette* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_TOOLPALETTE_H */

