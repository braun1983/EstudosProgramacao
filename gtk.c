#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    // Inicializa o GTK
    gtk_init(&argc, &argv);

    // Cria uma nova janela
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Minha Janela com GTK");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);

    // Conecta o fechamento da janela com o término do programa
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Cria um rótulo com o texto "Olá, GTK!"
    GtkWidget *label = gtk_label_new("Olá, GTK!");

    // Adiciona o rótulo na janela
    gtk_container_add(GTK_CONTAINER(window), label);

    // Exibe todos os widgets dentro da janela
    gtk_widget_show_all(window);

    // Inicia o loop de eventos do GTK
    gtk_main();

    return 0;
}
