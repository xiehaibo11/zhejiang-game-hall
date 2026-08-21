.class public final Lcom/kwad/components/core/t/j;
.super Ljava/lang/Object;


# direct methods
.method public static c(Landroid/content/Intent;)V
    .locals 1

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/api/loader/Loader;->get()Lcom/kwad/sdk/api/loader/Loader;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/loader/Loader;->getExternalClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object p0

    if-eqz v0, :cond_1

    if-eqz p0, :cond_1

    invoke-virtual {p0, v0}, Landroid/os/Bundle;->setClassLoader(Ljava/lang/ClassLoader;)V

    :cond_1
    return-void
.end method
