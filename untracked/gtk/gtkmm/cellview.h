// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _GTKMM_CELLVIEW_H
#define _GTKMM_CELLVIEW_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2004 The gtkmm Development Team
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


#include <gtkmm/widget.h>
#include <gtkmm/celllayout.h>
#include <gtkmm/treemodel.h>
#include <gtkmm/treepath.h>
#include <gtkmm/cellrenderer.h>
#include <gtkmm/cellarea.h>
#include <gtkmm/cellareacontext.h>
#include <gtkmm/orientable.h>
#include <gdkmm/pixbuf.h>
#include <gdkmm/rgba.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkCellView = struct _GtkCellView;
using GtkCellViewClass = struct _GtkCellViewClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API CellView_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A widget displaying a single row of a TreeModel.
 * A CellView displays a single row of a TreeModel, using cell renderers just like TreeView. CellView doesn't support some of the more
 * complex features of GtkTreeView, like cell editing and drag and drop.
 *
 * @ingroup Widgets
 */

class GTKMM_API CellView :
  public Widget,
  public CellLayout,
  public Orientable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef CellView CppObjectType;
  typedef CellView_Class CppClassType;
  typedef GtkCellView BaseObjectType;
  typedef GtkCellViewClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  CellView(CellView&& src) noexcept;
  CellView& operator=(CellView&& src) noexcept;

  // noncopyable
  CellView(const CellView&) = delete;
  CellView& operator=(const CellView&) = delete;

  ~CellView() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class GTKMM_API CellView_Class;
  static CppClassType cellview_class_;

protected:
  explicit CellView(const Glib::ConstructParams& construct_params);
  explicit CellView(GtkCellView* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkCellView*       gobj()       { return reinterpret_cast<GtkCellView*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkCellView* gobj() const { return reinterpret_cast<GtkCellView*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
  CellView();

  /** Creates a new CellView widget, adds a CellRendererText to it, and makes it show the text.
   * Optionally, the text can be marked up with the Pango text markup language.
   *
   * @param text The text to display in the cell view
   * @param use_markup Whether the @a text uses Pango text markup language.
   */
  explicit CellView(const Glib::ustring& text, bool use_markup = false);
  

  /** Creates a new CellView widget, adds a CellRendererPixbuf to it, and makes it show the pixbuf.
   *
   * @param pixbuf The image to display in the cell view
   */
  explicit CellView(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf);
  

  /** Sets the model for @a cell_view.  If @a cell_view already has a model
   * set, it will remove it before setting the new model. Use unset_model() to
   * unset the old model.
   * 
   * @newin{2,6}
   * 
   * @param model A Gtk::TreeModel.
   */
  void set_model(const Glib::RefPtr<TreeModel>& model);

  /** Remove the model from the CellView.
   *
   * @see set_model().
   *
   * @newin{2,16}
   */
  void unset_model();

  
  /** Returns the model for @a cell_view. If no model is used <tt>nullptr</tt> is
   * returned.
   * 
   * @newin{2,16}
   * 
   * @return A Gtk::TreeModel used or <tt>nullptr</tt>.
   */
  Glib::RefPtr<TreeModel> get_model();
  
  /** Returns the model for @a cell_view. If no model is used <tt>nullptr</tt> is
   * returned.
   * 
   * @newin{2,16}
   * 
   * @return A Gtk::TreeModel used or <tt>nullptr</tt>.
   */
  Glib::RefPtr<const TreeModel> get_model() const;

  
  /** Sets the row of the model that is currently displayed
   * by the Gtk::CellView. If the path is unset, then the
   * contents of the cellview “stick” at their last value;
   * this is not normally a desired result, but may be
   * a needed intermediate state if say, the model for
   * the Gtk::CellView becomes temporarily empty.
   * 
   * @newin{2,6}
   * 
   * @param path A Gtk::TreePath or <tt>nullptr</tt> to unset.
   */
  void set_displayed_row(const TreeModel::Path& path);
  
  /** Returns a Gtk::TreePath referring to the currently 
   * displayed row. If no row is currently displayed, 
   * <tt>nullptr</tt> is returned.
   * 
   * @newin{2,6}
   * 
   * @return The currently displayed row or <tt>nullptr</tt>.
   */
  TreeModel::Path get_displayed_row() const;
   //deprecated

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets the background color of @a view.
   * 
   * @newin{2,6}
   * 
   * Deprecated: 3.4: Use set_background_rgba() instead.
   * 
   * @deprecated Use set_background_rgba instead.
   * 
   * @param color The new background color.
   */
  void set_background_color(const Gdk::Color& color);
#endif // GTKMM_DISABLE_DEPRECATED


  /** Sets the background color of @a cell_view.
   * 
   * @newin{3,0}
   * 
   * @param rgba The new background color.
   */
  void set_background_rgba(const Gdk::RGBA& rgba);

  
  /** Gets whether @a cell_view is configured to draw all of its
   * cells in a sensitive state.
   * 
   * @newin{3,0}
   * 
   * @return Whether @a cell_view draws all of its
   * cells in a sensitive state.
   */
  bool get_draw_sensitive() const;
  
  /** Sets whether @a cell_view should draw all of its
   * cells in a sensitive state, this is used by Gtk::ComboBox menus
   * to ensure that rows with insensitive cells that contain
   * children appear sensitive in the parent menu item.
   * 
   * @newin{3,0}
   * 
   * @param draw_sensitive Whether to draw all cells in a sensitive state.
   */
  void set_draw_sensitive(bool draw_sensitive =  true);
  
  /** Gets whether @a cell_view is configured to request space
   * to fit the entire Gtk::TreeModel.
   * 
   * @newin{3,0}
   * 
   * @return Whether @a cell_view requests space to fit
   * the entire Gtk::TreeModel.
   */
  bool get_fit_model() const;
  
  /** Sets whether @a cell_view should request space to fit the entire Gtk::TreeModel.
   * 
   * This is used by Gtk::ComboBox to ensure that the cell view displayed on
   * the combo box’s button always gets enough space and does not resize
   * when selection changes.
   * 
   * @newin{3,0}
   * 
   * @param fit_model Whether @a cell_view should request space for the whole model.
   */
  void set_fit_model(bool fit_model =  true);

  /** Background color as a string.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_WriteOnly that allows you to set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_WriteOnly< Glib::ustring > property_background() ;


#ifndef GTKMM_DISABLE_DEPRECATED

/** The background color as a Gdk::Color
   * 
   * Deprecated: 3.4: Use Gtk::CellView::property_background_rgba() instead.
   * 
   * @deprecated Use property_background_rgba() instead.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gdk::Color > property_background_gdk() ;

/** The background color as a Gdk::Color
   * 
   * Deprecated: 3.4: Use Gtk::CellView::property_background_rgba() instead.
   * 
   * @deprecated Use property_background_rgba() instead.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gdk::Color > property_background_gdk() const;

#endif // GTKMM_DISABLE_DEPRECATED

  /** The background color as a Gdk::RGBA
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gdk::RGBA > property_background_rgba() ;

/** The background color as a Gdk::RGBA
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gdk::RGBA > property_background_rgba() const;

  /** Whether this tag affects the background color.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_background_set() ;

/** Whether this tag affects the background color.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_background_set() const;

  /** The model for cell view
   * 
   * since 2.10
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<TreeModel> > property_model() ;

/** The model for cell view
   * 
   * since 2.10
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TreeModel> > property_model() const;

  /** The Gtk::CellArea rendering cells
   * 
   * If no area is specified when creating the cell view with Gtk::CellView::new_with_context() 
   * a horizontally oriented Gtk::CellAreaBox will be used.
   * 
   * since 3.0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<CellArea> > property_cell_area() const;


  /** The Gtk::CellAreaContext used to compute the geometry of the cell view.
   * 
   * A group of cell views can be assigned the same context in order to
   * ensure the sizes and cell alignments match across all the views with
   * the same context.
   * 
   * Gtk::ComboBox menus uses this to assign the same context to all cell views
   * in the menu items for a single menu (each submenu creates its own
   * context since the size of each submenu does not depend on parent
   * or sibling menus).
   * 
   * since 3.0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<CellAreaContext> > property_cell_area_context() const;


  /** Whether all cells should be draw as sensitive for this view regardless
   * of the actual cell properties (used to make menus with submenus appear
   * sensitive when the items in submenus might be insensitive).
   * 
   * since 3.0
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_draw_sensitive() ;

/** Whether all cells should be draw as sensitive for this view regardless
   * of the actual cell properties (used to make menus with submenus appear
   * sensitive when the items in submenus might be insensitive).
   * 
   * since 3.0
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_draw_sensitive() const;

  /** Whether the view should request enough space to always fit
   * the size of every row in the model (used by the combo box to
   * ensure the combo box size doesnt change when different items
   * are selected).
   * 
   * since 3.0
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_fit_model() ;

/** Whether the view should request enough space to always fit
   * the size of every row in the model (used by the combo box to
   * ensure the combo box size doesnt change when different items
   * are selected).
   * 
   * since 3.0
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_fit_model() const;


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
   * @relates Gtk::CellView
   */
  GTKMM_API
  Gtk::CellView* wrap(GtkCellView* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_CELLVIEW_H */

