#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    // Inicializa GTK
    gtk_init(&argc, &argv);

    // Cria uma nova janela
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Minha Janela com GTK");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);

    // Define o fechamento da janela
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Exibe a janela
    gtk_widget_show(window);

    // Inicia o loop de eventos
    gtk_main();

    return 0;
}
