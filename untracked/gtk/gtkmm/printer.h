// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _GTKMM_PRINTER_H
#define _GTKMM_PRINTER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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

#include <vector>

#include <gtkmm/pagesetup.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkPrinter = struct _GtkPrinter;
using GtkPrinterClass = struct _GtkPrinterClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API Printer_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 *  @var PrintCapabilities PRINT_CAPABILITY_PAGE_SET
 * Print dialog will offer printing even/odd pages.
 * 
 *  @var PrintCapabilities PRINT_CAPABILITY_COPIES
 * Print dialog will allow to print multiple copies.
 * 
 *  @var PrintCapabilities PRINT_CAPABILITY_COLLATE
 * Print dialog will allow to collate multiple copies.
 * 
 *  @var PrintCapabilities PRINT_CAPABILITY_REVERSE
 * Print dialog will allow to print pages in reverse order.
 * 
 *  @var PrintCapabilities PRINT_CAPABILITY_SCALE
 * Print dialog will allow to scale the output.
 * 
 *  @var PrintCapabilities PRINT_CAPABILITY_GENERATE_PDF
 * The program will send the document to
 * the printer in PDF format.
 * 
 *  @var PrintCapabilities PRINT_CAPABILITY_GENERATE_PS
 * The program will send the document to
 * the printer in Postscript format.
 * 
 *  @var PrintCapabilities PRINT_CAPABILITY_PREVIEW
 * Print dialog will offer a preview.
 * 
 *  @var PrintCapabilities PRINT_CAPABILITY_NUMBER_UP
 * Print dialog will offer printing multiple
 * pages per sheet. @newin{2,12}
 * 
 *  @var PrintCapabilities PRINT_CAPABILITY_NUMBER_UP_LAYOUT
 * Print dialog will allow to rearrange
 * pages when printing multiple pages per sheet. @newin{2,14}
 * 
 *  @enum PrintCapabilities
 * 
 * An enum for specifying which features the print dialog should offer.
 * If neither Gtk::PRINT_CAPABILITY_GENERATE_PDF nor
 * Gtk::PRINT_CAPABILITY_GENERATE_PS is specified, GTK+ assumes that all
 * formats are supported.
 *
 * @ingroup gtkmmEnums
 * @par Bitwise operators:
 * <tt>%PrintCapabilities operator|(PrintCapabilities, PrintCapabilities)</tt><br>
 * <tt>%PrintCapabilities operator&(PrintCapabilities, PrintCapabilities)</tt><br>
 * <tt>%PrintCapabilities operator^(PrintCapabilities, PrintCapabilities)</tt><br>
 * <tt>%PrintCapabilities operator~(PrintCapabilities)</tt><br>
 * <tt>%PrintCapabilities& operator|=(PrintCapabilities&, PrintCapabilities)</tt><br>
 * <tt>%PrintCapabilities& operator&=(PrintCapabilities&, PrintCapabilities)</tt><br>
 * <tt>%PrintCapabilities& operator^=(PrintCapabilities&, PrintCapabilities)</tt><br>
 */
enum PrintCapabilities
{
  PRINT_CAPABILITY_PAGE_SET = 1 << 0,
  PRINT_CAPABILITY_COPIES = 1 << 1,
  PRINT_CAPABILITY_COLLATE = 1 << 2,
  PRINT_CAPABILITY_REVERSE = 1 << 3,
  PRINT_CAPABILITY_SCALE = 1 << 4,
  PRINT_CAPABILITY_GENERATE_PDF = 1 << 5,
  PRINT_CAPABILITY_GENERATE_PS = 1 << 6,
  PRINT_CAPABILITY_PREVIEW = 1 << 7,
  PRINT_CAPABILITY_NUMBER_UP = 1 << 8,
  PRINT_CAPABILITY_NUMBER_UP_LAYOUT = 1 << 9
};

/** @ingroup gtkmmEnums */
inline PrintCapabilities operator|(PrintCapabilities lhs, PrintCapabilities rhs)
  { return static_cast<PrintCapabilities>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline PrintCapabilities operator&(PrintCapabilities lhs, PrintCapabilities rhs)
  { return static_cast<PrintCapabilities>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline PrintCapabilities operator^(PrintCapabilities lhs, PrintCapabilities rhs)
  { return static_cast<PrintCapabilities>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline PrintCapabilities operator~(PrintCapabilities flags)
  { return static_cast<PrintCapabilities>(~static_cast<unsigned>(flags)); }

/** @ingroup gtkmmEnums */
inline PrintCapabilities& operator|=(PrintCapabilities& lhs, PrintCapabilities rhs)
  { return (lhs = static_cast<PrintCapabilities>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gtkmmEnums */
inline PrintCapabilities& operator&=(PrintCapabilities& lhs, PrintCapabilities rhs)
  { return (lhs = static_cast<PrintCapabilities>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gtkmmEnums */
inline PrintCapabilities& operator^=(PrintCapabilities& lhs, PrintCapabilities rhs)
  { return (lhs = static_cast<PrintCapabilities>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gtk

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class  Value<Gtk::PrintCapabilities> : public Glib::Value_Flags<Gtk::PrintCapabilities>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gtk
{


/** A Printer object represents a printer. You only need to deal directly with printers if you use the
 * non-portable PrintUnixDialog API.
 *
 * A Printer object allows to get status information about the printer, such as its description, its location,
 * the number of queued jobs, etc. Most importantly, a Printer object can be used to create a PrintJob object,
 * which lets you print to the printer.
 *
 * @newin{2,10}
 *
 * @ingroup Printing
 */

class GTKMM_API Printer : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Printer;
  using CppClassType = Printer_Class;
  using BaseObjectType = GtkPrinter;
  using BaseClassType = GtkPrinterClass;

  // noncopyable
  Printer(const Printer&) = delete;
  Printer& operator=(const Printer&) = delete;

private:  friend class Printer_Class;
  static CppClassType printer_class_;

protected:
  explicit Printer(const Glib::ConstructParams& construct_params);
  explicit Printer(GtkPrinter* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Printer(Printer&& src) noexcept;
  Printer& operator=(Printer&& src) noexcept;

  ~Printer() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkPrinter*       gobj()       { return reinterpret_cast<GtkPrinter*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkPrinter* gobj() const { return reinterpret_cast<GtkPrinter*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkPrinter* gobj_copy();

private:

  //This is not available on Win32.
//This source file will not be compiled on Win32,
//and no class defined in it will be registered by wrap_init().


public:
  //TODO: _WRAP_CREATE() - probably not, it's only accessible through PrintUnixDialog + GtkPrintBackend should be ignored
  //TODO: I think these are not needed as well, and that Printer should generally be read-only - marko.
  
  
  bool equal(const Glib::RefPtr<Printer>& other) const;

  //GtkPrintBackend is in a "semi-private" header.
  //_WRAP_METHOD(Glib::RefPtr<PrintBackend> get_backend(), gtk_printer_get_backend, refreturn)
  //_WRAP_METHOD(Glib::RefPtr<const PrintBackend> get_backend() const, gtk_printer_get_backend, refreturn, constversion)
  

  /** Returns the name of the printer.
   * 
   * @newin{2,10}
   * 
   * @return The name of @a printer.
   */
  Glib::ustring get_name() const;
  
  /** Returns the state message describing the current state
   * of the printer.
   * 
   * @newin{2,10}
   * 
   * @return The state message of @a printer.
   */
  Glib::ustring get_state_message() const;
  
  /** Gets the description of the printer.
   * 
   * @newin{2,10}
   * 
   * @return The description of @a printer.
   */
  Glib::ustring get_description() const;
  
  /** Returns a description of the location of the printer.
   * 
   * @newin{2,10}
   * 
   * @return The location of @a printer.
   */
  Glib::ustring get_location() const;
  
  /** Gets the name of the icon to use for the printer.
   * 
   * @newin{2,10}
   * 
   * @return The icon name for @a printer.
   */
  Glib::ustring get_icon_name() const;
  
  /** Gets the number of jobs currently queued on the printer.
   * 
   * @newin{2,10}
   * 
   * @return The number of jobs on @a printer.
   */
  int get_job_count() const;
  
  /** Returns whether the printer is currently active (i.e.\ 
   * accepts new jobs).
   * 
   * @newin{2,10}
   * 
   * @return <tt>true</tt> if @a printer is active.
   */
  bool is_active() const;
  
  /** Returns whether the printer is currently paused.
   * A paused printer still accepts jobs, but it is not
   * printing them.
   * 
   * @newin{2,14}
   * 
   * @return <tt>true</tt> if @a printer is paused.
   */
  bool is_paused() const;
  
  /** Returns whether the printer is accepting jobs
   * 
   * @newin{2,14}
   * 
   * @return <tt>true</tt> if @a printer is accepting jobs.
   */
  bool is_accepting_jobs() const;
  
  /** Returns whether the printer is virtual (i.e.\ does not
   * represent actual printer hardware, but something like 
   * a CUPS class).
   * 
   * @newin{2,10}
   * 
   * @return <tt>true</tt> if @a printer is virtual.
   */
  bool is_virtual() const;
  
  /** Returns whether the printer is the default printer.
   * 
   * @newin{2,10}
   * 
   * @return <tt>true</tt> if @a printer is the default.
   */
  bool is_default() const;
  
  /** Returns whether the printer accepts input in
   * PDF format.  
   * 
   * @newin{2,10}
   * 
   * @return <tt>true</tt> if @a printer accepts PDF.
   */
  bool accepts_pdf() const;
  
  /** Returns whether the printer accepts input in
   * PostScript format.  
   * 
   * @newin{2,10}
   * 
   * @return <tt>true</tt> if @a printer accepts PostScript.
   */
  bool accepts_ps() const;
  

  /** Lists all the paper sizes @a printer supports.
   * This will return and empty list unless the printer’s details are 
   * available, see has_details() and request_details().
   * 
   * @newin{2,12}
   * 
   * @return A newly allocated list of newly allocated Gtk::PageSetup s.
   */
  std::vector< Glib::RefPtr<PageSetup> > list_papers();

  
  /** Returns default page size of @a printer.
   * 
   * @newin{2,14}
   * 
   * @return A newly allocated Gtk::PageSetup with default page size of the printer.
   */
  Glib::RefPtr<PageSetup> get_default_page_size() const;

 
  /** Lists all the paper sizes @a printer supports.
   * This will return and empty list unless the printer’s details are 
   * available, see has_details() and request_details().
   * 
   * @newin{2,12}
   * 
   * @return A newly allocated list of newly allocated Gtk::PageSetup s.
   */
  std::vector< Glib::RefPtr<const PageSetup> > list_papers() const;

  
  /** Returns whether the printer details are available.
   * 
   * @newin{2,12}
   * 
   * @return <tt>true</tt> if @a printer details are available.
   */
  bool has_details() const;
  
  /** Requests the printer details. When the details are available,
   * the details_acquired signal will be emitted.
   * 
   * @newin{2,12}
   */
  void request_details();
  
  /** Returns the printer’s capabilities.
   * 
   * This is useful when you’re using Gtk::PrintUnixDialog’s manual-capabilities 
   * setting and need to know which settings the printer can handle and which 
   * you must handle yourself.
   * 
   * This will return 0 unless the printer’s details are available, see
   * has_details() and request_details().
   * 
   * @newin{2,12}
   * 
   * @return The printer’s capabilities.
   */
  PrintCapabilities get_capabilities() const;
  
  /** Retrieve the hard margins of @a printer, i.e.\ the margins that define
   * the area at the borders of the paper that the printer cannot print to.
   * 
   * @note This will not succeed unless the printer’s details are available,
   * see has_details() and request_details().
   * 
   * @newin{2,20}
   * 
   * @param top A location to store the top margin in.
   * @param bottom A location to store the bottom margin in.
   * @param left A location to store the left margin in.
   * @param right A location to store the right margin in.
   * @return <tt>true</tt> iff the hard margins were retrieved.
   */
  bool get_hard_margins(double& top, double& bottom, double& left, double& right) const;

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%details_acquired(bool success)</tt>
   *
   * Flags: Run Last
   *
   * Gets emitted in response to a request for detailed information
   * about a printer from the print backend. The @a success parameter
   * indicates if the information was actually obtained.
   * 
   * @newin{2,10}
   * 
   * @param success <tt>true</tt> if the details were successfully acquired.
   */

  Glib::SignalProxy< void,bool > signal_details_acquired();


  /** Name of the printer.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_name() const;


  //GtkPrintBackend is in a "semi-private" header:
  //_WRAP_PROPERTY("backend", Glib::RefPtr<PrintBackend>)

  /** <tt>false</tt> if this represents a real hardware printer.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_virtual() const;


  /** String giving the current state of the printer.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_state_message() const;


  /** The location of the printer.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_location() const;


  /** The icon name to use for the printer.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_icon_name() const;


  /** Number of jobs queued in the printer.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_job_count() const;


  /** <tt>true</tt> if this printer can accept PDF.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_accepts_pdf() const;


  /** <tt>true</tt> if this printer can accept PostScript.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_accepts_ps() const;


  /** This property is <tt>true</tt> if this printer is paused. 
   * A paused printer still accepts jobs, but it does 
   * not print them.
   * 
   * @newin{2,14}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_paused() const;


  /** This property is <tt>true</tt> if the printer is accepting jobs.
   * 
   * @newin{2,14}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_accepting_jobs() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_details_acquired().
  virtual void on_details_acquired(bool success);


};

/** @relates Gtk::Printer */
inline bool operator==(const Glib::RefPtr<Printer>& lhs, const Glib::RefPtr<Printer>& rhs)
  { return lhs->equal(rhs); }

/** @relates Gtk::Printer */
inline bool operator!=(const Glib::RefPtr<Printer>& lhs, const Glib::RefPtr<Printer>& rhs)
  { return !lhs->equal(rhs); }

/** For example,
 * bool on_enumerate_printers(const Glib::RefPtr<Printer>& printer);
 * @param printer A printer.
 * @param result true to stop the enumeration, false to continue.
 *
 * @relates Gtk::Printer
 */
typedef sigc::slot< bool, const Glib::RefPtr<Printer>& > SlotPrinterEnumerator;

/** Calls a function for all Printers. If the callback returns true, the enumeration is stopped.
 * @param slot A function to call for each printer
 * @param wait If true, wait in a recursive mainloop until all printers are enumerated; otherwise return early.
 *
 * @relates Gtk::Printer
 */
GTKMM_API
void enumerate_printers(const SlotPrinterEnumerator& slot, bool wait = true);

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Printer
   */
  GTKMM_API
  Glib::RefPtr<Gtk::Printer> wrap(GtkPrinter* object, bool take_copy = false);
}


#endif /* _GTKMM_PRINTER_H */

