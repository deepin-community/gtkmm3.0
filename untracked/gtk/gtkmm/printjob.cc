// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/printjob.h>
#include <gtkmm/private/printjob_p.h>


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

#include <gtk/gtkunixprint.h>

// This Signal Proxy allows the C++ coder to specify a sigc::slot instead of a static function.

static void SignalProxy_Custom_gtk_callback(GtkPrintJob* print_job, gpointer data, const GError* gerror)
{
  const auto the_slot = static_cast<Gtk::PrintJob::SlotPrintJobComplete*>(data);

  try
  {
    if (gerror)
      Glib::Error::throw_exception(g_error_copy(gerror));

    // Create a suitable C++ instance to pass to the C++ method;
    auto job = Glib::wrap(print_job);
    (*the_slot)(job);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
}

static void SignalProxy_Custom_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::PrintJob::SlotPrintJobComplete*>(data);
}

namespace Gtk
{

void PrintJob::send(const SlotPrintJobComplete& slot)
{
  // Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  // It will be deleted when SignalProxy_Custom_gtk_callback_destroy() is called.
  auto slot_copy = new SlotPrintJobComplete(slot);

  gtk_print_job_send(gobj(), &SignalProxy_Custom_gtk_callback, slot_copy, &SignalProxy_Custom_gtk_callback_destroy);
}

std::vector<PrintSettings::PageRange> PrintJob::get_page_ranges() const
{
  int num_ranges (0);
  GtkPageRange* page_ranges =
    gtk_print_job_get_page_ranges(const_cast<GtkPrintJob*>(gobj()), &num_ranges);

  // no need for deep ownership.
  return Glib::ArrayHandler<PrintSettings::PageRange, PrintSettings::PageRangeTraits>::array_to_vector(page_ranges, num_ranges, Glib::OWNERSHIP_SHALLOW);
}

void PrintJob::set_page_ranges(const std::vector<PrintSettings::PageRange>& page_ranges)
{
  gtk_print_job_set_page_ranges(gobj(),
    Glib::ArrayHandler<PrintSettings::PageRange, PrintSettings::PageRangeTraits>::vector_to_array(page_ranges).data (),
    page_ranges.size ());
}


} // namespace Gtk

namespace
{


static const Glib::SignalProxyInfo PrintJob_signal_status_changed_info =
{
  "status_changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::PrintJob> wrap(GtkPrintJob* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::PrintJob>( dynamic_cast<Gtk::PrintJob*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& PrintJob_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &PrintJob_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_print_job_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void PrintJob_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->status_changed = &status_changed_callback;
}


void PrintJob_Class::status_changed_callback(GtkPrintJob* self)
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
        obj->on_status_changed();
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
  if(base && base->status_changed)
    (*base->status_changed)(self);
}


Glib::ObjectBase* PrintJob_Class::wrap_new(GObject* object)
{
  return new PrintJob((GtkPrintJob*)object);
}


/* The implementation: */

GtkPrintJob* PrintJob::gobj_copy()
{
  reference();
  return gobj();
}

PrintJob::PrintJob(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

PrintJob::PrintJob(GtkPrintJob* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


PrintJob::PrintJob(PrintJob&& src) noexcept
: Glib::Object(std::move(src))
{}

PrintJob& PrintJob::operator=(PrintJob&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


PrintJob::~PrintJob() noexcept
{}


PrintJob::CppClassType PrintJob::printjob_class_; // initialize static member

GType PrintJob::get_type()
{
  return printjob_class_.init().get_type();
}


GType PrintJob::get_base_type()
{
  return gtk_print_job_get_type();
}


PrintJob::PrintJob(const Glib::ustring& title, const Glib::RefPtr<Printer>& printer, const Glib::RefPtr<PrintSettings>& settings, const Glib::RefPtr<PageSetup>& page_setup)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(printjob_class_.init(), "title", title.c_str(), "printer", Glib::unwrap(printer), "settings", Glib::unwrap(settings), "page_setup", Glib::unwrap(page_setup), nullptr))
{
  

}

Glib::RefPtr<PrintJob> PrintJob::create(const Glib::ustring& title, const Glib::RefPtr<Printer>& printer, const Glib::RefPtr<PrintSettings>& settings, const Glib::RefPtr<PageSetup>& page_setup)
{
  return Glib::RefPtr<PrintJob>( new PrintJob(title, printer, settings, page_setup) );
}

Glib::RefPtr<PrintSettings> PrintJob::get_settings()
{
  Glib::RefPtr<PrintSettings> retvalue = Glib::wrap(gtk_print_job_get_settings(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const PrintSettings> PrintJob::get_settings() const
{
  return const_cast<PrintJob*>(this)->get_settings();
}

Glib::RefPtr<Printer> PrintJob::get_printer()
{
  Glib::RefPtr<Printer> retvalue = Glib::wrap(gtk_print_job_get_printer(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Printer> PrintJob::get_printer() const
{
  return const_cast<PrintJob*>(this)->get_printer();
}

Glib::ustring PrintJob::get_title() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_print_job_get_title(const_cast<GtkPrintJob*>(gobj())));
}

PrintStatus PrintJob::get_status() const
{
  return (PrintStatus)gtk_print_job_get_status(const_cast<GtkPrintJob*>(gobj()));
}

void PrintJob::set_source_file(const std::string& filename)
{
  GError* gerror = nullptr;
  gtk_print_job_set_source_file(gobj(), filename.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
}

Cairo::RefPtr<Cairo::Surface> PrintJob::get_surface()
{
  GError* gerror = nullptr;
  Cairo::RefPtr<Cairo::Surface> retvalue = Cairo::RefPtr<Cairo::Surface>(new Cairo::Surface(gtk_print_job_get_surface(gobj(), &(gerror)), false /* take reference */));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Cairo::RefPtr<const Cairo::Surface> PrintJob::get_surface() const
{
  GError* gerror = nullptr;
  Cairo::RefPtr<const Cairo::Surface> retvalue = Cairo::RefPtr<Cairo::Surface>(new Cairo::Surface(gtk_print_job_get_surface(const_cast<GtkPrintJob*>(gobj()), &(gerror)), false /* take reference */));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void PrintJob::set_track_print_status(bool track_status)
{
  gtk_print_job_set_track_print_status(gobj(), static_cast<int>(track_status));
}

bool PrintJob::get_track_print_status() const
{
  return gtk_print_job_get_track_print_status(const_cast<GtkPrintJob*>(gobj()));
}

PrintPages PrintJob::get_pages() const
{
  return (PrintPages)gtk_print_job_get_pages(const_cast<GtkPrintJob*>(gobj()));
}

void PrintJob::set_pages(PrintPages pages)
{
  gtk_print_job_set_pages(gobj(), ((GtkPrintPages)(pages)));
}

PageSet PrintJob::get_page_set() const
{
  return (PageSet)gtk_print_job_get_page_set(const_cast<GtkPrintJob*>(gobj()));
}

void PrintJob::set_page_set(PageSet page_set)
{
  gtk_print_job_set_page_set(gobj(), ((GtkPageSet)(page_set)));
}

int PrintJob::get_num_copies() const
{
  return gtk_print_job_get_num_copies(const_cast<GtkPrintJob*>(gobj()));
}

void PrintJob::set_num_copies(int num_copies)
{
  gtk_print_job_set_num_copies(gobj(), num_copies);
}

double PrintJob::get_scale() const
{
  return gtk_print_job_get_scale(const_cast<GtkPrintJob*>(gobj()));
}

void PrintJob::set_scale(double scale)
{
  gtk_print_job_set_scale(gobj(), scale);
}

guint PrintJob::get_n_up() const
{
  return gtk_print_job_get_n_up(const_cast<GtkPrintJob*>(gobj()));
}

void PrintJob::set_n_up(guint n_up)
{
  gtk_print_job_set_n_up(gobj(), n_up);
}

NumberUpLayout PrintJob::get_n_up_layout() const
{
  return ((NumberUpLayout)(gtk_print_job_get_n_up_layout(const_cast<GtkPrintJob*>(gobj()))));
}

void PrintJob::set_n_up_layout(NumberUpLayout layout)
{
  gtk_print_job_set_n_up_layout(gobj(), ((GtkNumberUpLayout)(layout)));
}

bool PrintJob::get_rotate() const
{
  return gtk_print_job_get_rotate(const_cast<GtkPrintJob*>(gobj()));
}

void PrintJob::set_rotate(bool rotate)
{
  gtk_print_job_set_rotate(gobj(), static_cast<int>(rotate));
}

bool PrintJob::get_collate() const
{
  return gtk_print_job_get_collate(const_cast<GtkPrintJob*>(gobj()));
}

void PrintJob::set_collate(bool collate)
{
  gtk_print_job_set_collate(gobj(), static_cast<int>(collate));
}

bool PrintJob::get_reverse() const
{
  return gtk_print_job_get_reverse(const_cast<GtkPrintJob*>(gobj()));
}

void PrintJob::set_reverse(bool reverse)
{
  gtk_print_job_set_reverse(gobj(), static_cast<int>(reverse));
}


Glib::SignalProxy< void > PrintJob::signal_status_changed()
{
  return Glib::SignalProxy< void >(this, &PrintJob_signal_status_changed_info);
}


Glib::PropertyProxy_ReadOnly< Glib::ustring > PrintJob::property_title() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "title");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Printer> > PrintJob::property_printer() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Printer> >(this, "printer");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<PrintSettings> > PrintJob::property_settings() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<PrintSettings> >(this, "settings");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<PageSetup> > PrintJob::property_page_setup() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<PageSetup> >(this, "page-setup");
}

Glib::PropertyProxy< bool > PrintJob::property_track_print_status() 
{
  return Glib::PropertyProxy< bool >(this, "track-print-status");
}

Glib::PropertyProxy_ReadOnly< bool > PrintJob::property_track_print_status() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "track-print-status");
}


void Gtk::PrintJob::on_status_changed()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->status_changed)
    (*base->status_changed)(gobj());
}


} // namespace Gtk

