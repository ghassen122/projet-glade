#include <gtk/gtk.h>


void
on_buttonajouter_clicked               (GtkWidget	 *objet_graphique,
                                        gpointer         user_data);

void
on_buttonafficher_clicked              (GtkWidget	 *objet_graphique,
                                        gpointer         user_data);

void
on_buttonmodifier_clicked              (GtkWidget	 *objet_graphique,
                                        gpointer         user_data);

void
on_treeviewmenu_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_buttonretour_clicked                (GtkWidget	 *objet_graphique,
                                        gpointer         user_data);

void
on_buttongotomodifier_clicked          (GtkWidget	 *objet_graphique,
                                        gpointer         user_data);

void
on_buttonrechercher_clicked            (GtkWidget	 *objet_graphique,
                                        gpointer         user_data);

void
on_buttonmeilleurmenu_clicked          (GtkWidget	 *objet_graphique,
                                        gpointer         user_data);

void
on_buttongotomeilleurmenu_clicked      (GtkWidget	 *objet_graphique,
                                        gpointer         user_data);




