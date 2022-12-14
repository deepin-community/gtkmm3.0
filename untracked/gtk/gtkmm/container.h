// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _GTKMM_CONTAINER_H
#define _GTKMM_CONTAINER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <vector>

#include <gtkmm/widget.h>
#include <gtkmm/childpropertyproxy.h>


/** @defgroup Containers Container Widgets
 * These widgets can be used to group other widgets together.
 */

/* we'll include gtkfeatures because we dont want to include the whole
   gtk/gtk.h - this file is used by almost ALL our widgets, so dependencies
   in minimum - adding things here will increase compile times ALOT */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkContainer = struct _GtkContainer;
using GtkContainerClass = struct _GtkContainerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API Container_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

class GTKMM_API Adjustment;
class GTKMM_API Label;

/** Abstract container class
 *
 * This is the abstract container from which all gtk+ widgets which hold
 * other items derive from.  It mainly houses virtual functions
 * used for inserting and removing children.  Containers in gtk+
 * may hold one item or many items depending on the implementation.
 *
 * This interface is used for all single item holding containers.
 * Multi-item containers provide their own unique interface as their
 * items are generally more complex.  The methods of the derived
 * classes should be prefered over these.
 *
 * @ingroup Widgets
 */

class GTKMM_API Container : public Widget
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Container CppObjectType;
  typedef Container_Class CppClassType;
  typedef GtkContainer BaseObjectType;
  typedef GtkContainerClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Container(Container&& src) noexcept;
  Container& operator=(Container&& src) noexcept;

  // noncopyable
  Container(const Container&) = delete;
  Container& operator=(const Container&) = delete;

  ~Container() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class GTKMM_API Container_Class;
  static CppClassType container_class_;

protected:
  explicit Container(const Glib::ConstructParams& construct_params);
  explicit Container(GtkContainer* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkContainer*       gobj()       { return reinterpret_cast<GtkContainer*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkContainer* gobj() const { return reinterpret_cast<GtkContainer*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_add().
  virtual void on_add(Widget* widget);
  /// This is a default handler for the signal signal_remove().
  virtual void on_remove(Widget* widget);
  /// This is a default handler for the signal signal_check_resize().
  virtual void on_check_resize();
  /// This is a default handler for the signal signal_set_focus_child().
  virtual void on_set_focus_child(Widget* widget);


private:

  
public:

/* Application-level methods */

  
  /** Sets the border width of the container.
   * 
   * The border width of a container is the amount of space to leave
   * around the outside of the container. The only exception to this is
   * Gtk::Window; because toplevel windows can???t leave space outside,
   * they leave the space inside. The border is added on all sides of
   * the container. To add space to only one side, use a specific
   * Gtk::Widget::property_margin() property on the child widget, for example
   * Gtk::Widget::property_margin_top().
   * 
   * @param border_width Amount of blank space to leave outside
   * the container. Valid values are in the range 0-65535 pixels.
   */
  void set_border_width(guint border_width);

  
  /** Retrieves the border width of the container. See
   * set_border_width().
   * 
   * @return The current border width.
   */
  guint get_border_width() const;

  //This is virtual so that we can override it in Gtk::ScrolledWindow.
  //TODO: Remove the virtual keyword when we can break ABI,
  //because the override in ScrolledWindow is no longer necessary.
  
  /** Adds @a widget to @a container. Typically used for simple containers
   * such as Gtk::Window, Gtk::Frame, or Gtk::Button; for more complicated
   * layout containers such as Gtk::Box or Gtk::Grid, this function will
   * pick default packing parameters that may not be correct.  So
   * consider functions such as Gtk::Box::pack_start() and
   * Gtk::Grid::attach() as an alternative to add() in
   * those cases. A widget may be added to only one container at a time;
   * you can???t place the same widget inside two different containers.
   * 
   * Note that some containers, such as Gtk::ScrolledWindow or Gtk::ListBox,
   * may add intermediate children between the added widget and the
   * container.
   * 
   * @param widget A widget to be placed inside @a container.
   */

  virtual void add(Widget& widget);
  

  /** Removes @a widget from the container.
   * @a widget must be inside this container.
   * If @a widget is managed with Gtk::manage(), and you don't want to use @a widget
   * again, then you should delete it, because there will no longer be any parent
   * container to delete it automatically.
   *
   * What's said about ScrolledWindow in the documentation of Bin::remove()
   * applies also to Container::remove().
   *
   * @param widget A current child of the container.
   */
  void remove(Widget& widget);
  

#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets the resize mode for the container.
   * 
   * The resize mode of a container determines whether a resize request
   * will be passed to the container???s parent, queued for later execution
   * or executed immediately.
   * 
   * Deprecated: 3.12: Resize modes are deprecated. They aren???t necessary
   * anymore since frame clocks and might introduce obscure bugs if
   * used.
   * 
   * @deprecated Resize modes are deprecated. They aren???t necessary anymore since frame clocks and might introduce obscure bugs if used.
   * 
   * @param resize_mode The new resize mode.
   */
  void set_resize_mode(ResizeMode resize_mode);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns the resize mode for the container. See
   * set_resize_mode().
   * 
   * Deprecated: 3.12: Resize modes are deprecated. They aren???t necessary
   * anymore since frame clocks and might introduce obscure bugs if
   * used.
   * 
   * @deprecated Resize modes are deprecated. They aren???t necessary anymore since frame clocks and might introduce obscure bugs if used.
   * 
   * @return The current resize mode.
   */
  ResizeMode get_resize_mode() const;
#endif // GTKMM_DISABLE_DEPRECATED


  /** Request that contained widgets check their size
   */
  void check_resize();

  /** A slot to invoke with each child iterated over by foreach() or forall().
   * For instance,<br>
   * void on_foreach(Gtk::Widget& widget);
   */
  typedef sigc::slot<void, Widget&> ForeachSlot;

  /** Operate on contained items.
   *
   * Invokes the @a slot on each non-internal child of the container. See
   * forall() for details on what constitutes an
   * "internal" child.  Most applications should use foreach()
   * rather than forall().
   */
  void foreach(const ForeachSlot& slot);
  

  /** Operate on contained items, including internal children.
   *
   * Invokes the @a slot on each child of the container, including children
   * that are considered "internal" (implementation details of the
   * container). "Internal" children generally weren't added by the user
   * of the container, but were added by the container implementation
   * itself.  Most applications should use foreach(),
   * rather than forall().
   *
   * @newin{3,6}
   */
  void forall(const ForeachSlot& slot);
  

  /** Returns the container???s non-internal children. See
   * forall() for details on what constitutes an "internal" child.
   * 
   * @return A newly-allocated list of the container???s non-internal children.
   */
  std::vector<Widget*> get_children();
 

  /** Returns the container???s non-internal children. See
   * forall() for details on what constitutes an "internal" child.
   * 
   * @return A newly-allocated list of the container???s non-internal children.
   */
  std::vector<const Widget*> get_children() const;

  
  /** When a container receives a call to the draw function, it must send
   * synthetic Gtk::Widget::signal_draw() calls to all children that don???t have their
   * own Gdk::Windows. This function provides a convenient way of doing this.
   * A container, when it receives a call to its Gtk::Widget::signal_draw() function,
   * calls propagate_draw() once for each child, passing in
   * the @a cr the container received.
   * 
   * propagate_draw() takes care of translating the origin of @a cr,
   * and deciding whether the draw needs to be sent to the child. It is a
   * convenient and optimized way of getting the same effect as calling
   * Gtk::Widget::draw() on the child directly.
   * 
   * In most cases, a container can simply either inherit the
   * Gtk::Widget::signal_draw() implementation from Gtk::Container, or do some drawing
   * and then chain to the signal_draw() implementation from Gtk::Container.
   * 
   * @param child A child of @a container.
   * @param cr Cairo context as passed to the container. If you want to use @a cr
   * in container???s draw function, consider using cairo_save() and
   * cairo_restore() before calling this function.
   */
  void propagate_draw(Widget& child, const ::Cairo::RefPtr< ::Cairo::Context>& cr);

 
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets a focus chain, overriding the one computed automatically by GTK+.
   * 
   * In principle each widget in the chain should be a descendant of the
   * container, but this is not enforced by this method, since it???s allowed
   * to set the focus chain before you pack the widgets, or have a widget
   * in the chain that isn???t always packed. The necessary checks are done
   * when the focus chain is actually traversed.
   * 
   * Deprecated: 3.24: For overriding focus behavior, use the
   * GtkWidgetClass::focus signal.
   * 
   * @deprecated For overriding focus behavior, use Gtk::Widget::signal_focus().
   * 
   * @param focusable_widgets The new focus chain.
   */
  void set_focus_chain(const std::vector<Widget*>& focusable_widgets);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED
  // gtk_container_get_focus_chain() has been split up into two
  // functions in order to make implicit container conversion possible.
  /** @deprecated For overriding focus behavior, use Gtk::Widget::signal_focus().
   */
  bool has_focus_chain() const;
  /** @deprecated For overriding focus behavior, use Gtk::Widget::signal_focus().
   */
  std::vector<Widget*> get_focus_chain();
  /** @deprecated For overriding focus behavior, use Gtk::Widget::signal_focus().
   */
  std::vector<const Widget*> get_focus_chain() const;
#endif // GTKMM_DISABLE_DEPRECATED

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Removes a focus chain explicitly set with set_focus_chain().
   * 
   * Deprecated: 3.24: For overriding focus behavior, use the
   * GtkWidgetClass::focus signal.
   * 
   * @deprecated For overriding focus behavior, use Gtk::Widget::signal_focus().
   */
  void unset_focus_chain();
#endif // GTKMM_DISABLE_DEPRECATED


/* Widget-level methods */

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets the @a reallocate_redraws flag of the container to the given value.
   * 
   * Containers requesting reallocation redraws get automatically
   * redrawn if any of their children changed allocation.
   * 
   * Deprecated: 3.14: Call Gtk::Widget::queue_draw() in your size_allocate handler.
   * 
   * @deprecated Call Gtk::Widget::queue_draw() in your Gtk::Widget::signal_size_allocate() handler.
   * 
   * @param needs_redraws The new value for the container???s @a reallocate_redraws flag.
   */
  void set_reallocate_redraws(bool needs_redraws =  true);
#endif // GTKMM_DISABLE_DEPRECATED


  /** Sets the focus on a child
   */
  void set_focus_child(Widget& widget);

  
  /** Returns the current focus child widget inside @a container. This is not the
   * currently focused widget. That can be obtained by calling
   * Gtk::Window::get_focus().
   * 
   * @newin{2,14}
   * 
   * @return The child widget which will receive the
   * focus inside @a container when the @a container is focused,
   * or <tt>nullptr</tt> if none is set.
   */
  Widget* get_focus_child();
  
  /** Returns the current focus child widget inside @a container. This is not the
   * currently focused widget. That can be obtained by calling
   * Gtk::Window::get_focus().
   * 
   * @newin{2,14}
   * 
   * @return The child widget which will receive the
   * focus inside @a container when the @a container is focused,
   * or <tt>nullptr</tt> if none is set.
   */
  const Widget* get_focus_child() const;

  
  /** Hooks up an adjustment to focus handling in a container, so when a
   * child of the container is focused, the adjustment is scrolled to
   * show that widget. This function sets the vertical alignment. See
   * Gtk::ScrolledWindow::get_vadjustment() for a typical way of obtaining
   * the adjustment and set_focus_hadjustment() for setting
   * the horizontal adjustment.
   * 
   * The adjustments have to be in pixel units and in the same coordinate
   * system as the allocation for immediate children of the container.
   * 
   * @param adjustment An adjustment which should be adjusted when the focus
   * is moved among the descendents of @a container.
   */
  void set_focus_vadjustment(const Glib::RefPtr<Adjustment>& adjustment);

  
  /** Retrieves the vertical focus adjustment for the container. See
   * set_focus_vadjustment().
   * 
   * @return The vertical focus adjustment, or
   * <tt>nullptr</tt> if none has been set.
   */
  Glib::RefPtr<Adjustment> get_focus_vadjustment();
  
  /** Retrieves the vertical focus adjustment for the container. See
   * set_focus_vadjustment().
   * 
   * @return The vertical focus adjustment, or
   * <tt>nullptr</tt> if none has been set.
   */
  Glib::RefPtr<const Adjustment> get_focus_vadjustment() const;

  
  /** Hooks up an adjustment to focus handling in a container, so when a child
   * of the container is focused, the adjustment is scrolled to show that
   * widget. This function sets the horizontal alignment.
   * See Gtk::ScrolledWindow::get_hadjustment() for a typical way of obtaining
   * the adjustment and set_focus_vadjustment() for setting
   * the vertical adjustment.
   * 
   * The adjustments have to be in pixel units and in the same coordinate
   * system as the allocation for immediate children of the container.
   * 
   * @param adjustment An adjustment which should be adjusted when the focus is
   * moved among the descendents of @a container.
   */
  void set_focus_hadjustment(const Glib::RefPtr<Adjustment>& adjustment);

  
  /** Retrieves the horizontal focus adjustment for the container. See
   * set_focus_hadjustment().
   * 
   * @return The horizontal focus adjustment, or <tt>nullptr</tt> if
   * none has been set.
   */
  Glib::RefPtr<Adjustment> get_focus_hadjustment();
  
  /** Retrieves the horizontal focus adjustment for the container. See
   * set_focus_hadjustment().
   * 
   * @return The horizontal focus adjustment, or <tt>nullptr</tt> if
   * none has been set.
   */
  Glib::RefPtr<const Adjustment> get_focus_hadjustment() const;

   
#ifndef GTKMM_DISABLE_DEPRECATED

  /** @deprecated No replacement available.
   */
  void resize_children();
#endif // GTKMM_DISABLE_DEPRECATED


  /** Returns the type of the children supported by the container.
   * 
   * Note that this may return G_TYPE_NONE to indicate that no more
   * children can be added, e.g. for a Gtk::Paned which already has two
   * children.
   * 
   * @return A GType.
   */
  GType child_type() const;

  
  /** Returns a newly created widget path representing all the widget hierarchy
   * from the toplevel down to and including @a child.
   * 
   * @param child A child of @a container.
   * @return A newly created Gtk::WidgetPath.
   */
  WidgetPath get_path_for_child(const Widget& child) const;

  // Ignore functions such as gtk_container_class_install_child_property(),  which I think are for themes, like the GtkWidget style properties.
  

  /**
   * @par Slot Prototype:
   * <tt>void on_my_%add(Widget* widget)</tt>
   *
   * Flags: Run First
   *
   */

  Glib::SignalProxy< void,Widget* > signal_add();


  //We use the optional custom_c_callback parameter with _WRAP_SIGNAL() here,
  //so that we can write special code to check for deleted child widget parameters:
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%remove(Widget* widget)</tt>
   *
   * Flags: Run First
   *
   */

  Glib::SignalProxy< void,Widget* > signal_remove();


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%check_resize()</tt>
   *
   * Flags: Run Last
   *
   */

  Glib::SignalProxy< void > signal_check_resize();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%set_focus_child(Widget* widget)</tt>
   *
   * Flags: Run First
   *
   */

  Glib::SignalProxy< void,Widget* > signal_set_focus_child();


  void show_all_children(bool recursive = true);

protected:
  Container();

  /** Implements child_type().
   *
   * The default implementation returns G_TYPE_NONE
   */
    virtual GType child_type_vfunc() const;


  /** Invokes a callback on all children of the container.
   *
   * The callback may optionally be invoked also on children that are considered
   * "internal" (implementation details of the container). "Internal" children
   * generally  weren't added by the user of the container, but were added by the
   * container implementation itself.
   *
   * Most applications should use foreach(), rather than forall().
   *
   * @param include_internals
   * @param callback A callback.
   * @param callback_data Callback user data
   */
    virtual void forall_vfunc(gboolean include_internals, GtkCallback callback, gpointer callback_data);


  //TODO: Return a ustring instead when we can break ABI.
  /** Returns the composite name of a child widget.
   *
   * Composite widgets are  children of the container that are considered
   * "internal" (implementation details of the container). "Internal" children
   * generally weren't added by the user of the container, but were added by
   * the container implementation itself.
   *
   * The caller is responsible for freeing the returned string.
   *
   * @param child The child widget.
   * @returns The composite name of the child widget.
   */
    virtual char* composite_name_vfunc(GtkWidget* child);


  /** Sets a child property for this container and its child.
   *
   * Child properties are object properties that are not specific to either the
   * container or the contained widget, but rather to their relation. Typical
   * examples of child properties are the position or pack-type of a widget
   * which is contained in a Gtk::Box.
   *
   * @param child The child property.
   * @param property_id The ID of the child property to set.
   * @param value The new value for the child property.
   * @param pspec
   */
    virtual void set_child_property_vfunc(GtkWidget* child, guint property_id, const GValue* value, GParamSpec* pspec);


  /** Returns a child property for this container and its child.
   *
   * Child  properties are object properties that are not specific to either the
   * container or the contained widget, but rather to their relation. Typical
   * examples of child properties are the position or pack-type of a widget
   * which is contained in a Gtk::Box.
   *
   * @param child The child property.
   * @param property_id The ID of the child property to get.
   * @param value A GValue to fill with the child property's value.
   * @param pspec
   */
    virtual void get_child_property_vfunc(GtkWidget* child, guint property_id, GValue* value, GParamSpec* pspec) const;


  /** The width of the empty border outside the containers children.
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_border_width() ;

/** The width of the empty border outside the containers children.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_border_width() const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

/** Specify how resize events are handled.
   * @deprecated Resize modes are deprecated. They aren???t necessary anymore since frame clocks and might introduce obscure bugs if used.
   *
   * Default value: Gtk::RESIZE_PARENT
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ResizeMode > property_resize_mode() ;

/** Specify how resize events are handled.
   * @deprecated Resize modes are deprecated. They aren???t necessary anymore since frame clocks and might introduce obscure bugs if used.
   *
   * Default value: Gtk::RESIZE_PARENT
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ResizeMode > property_resize_mode() const;

#endif // GTKMM_DISABLE_DEPRECATED

  
#ifndef GTKMM_DISABLE_DEPRECATED

/** Can be used to add a new child to the container.
   * @deprecated Use add() instead.
   *
   * @return A PropertyProxy_WriteOnly that allows you to set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_WriteOnly< Widget* > property_child() ;


#endif // GTKMM_DISABLE_DEPRECATED


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
   * @relates Gtk::Container
   */
  GTKMM_API
  Gtk::Container* wrap(GtkContainer* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_CONTAINER_H */

