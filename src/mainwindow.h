#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gtk/gtk.h>


GtkWidget *
mainwindow_new(void);

unsigned long
mainwindow_refresh_view(void);
void UpdateMonitor( char *text );

#endif // MAINWINDOW_H
