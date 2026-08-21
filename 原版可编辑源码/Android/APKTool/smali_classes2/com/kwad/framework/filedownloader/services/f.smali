.class public final Lcom/kwad/framework/filedownloader/services/f;
.super Ljava/lang/Object;


# direct methods
.method public static f(Lcom/kwad/framework/filedownloader/d/c;)V
    .locals 2

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v0

    const/4 v1, -0x3

    if-ne v0, v1, :cond_0

    new-instance v0, Landroid/content/Intent;

    const-string v1, "filedownloader.intent.action.completed"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "model"

    invoke-virtual {v0, v1, p0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/c;->vM()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;)V

    return-void

    :cond_0
    new-instance p0, Ljava/lang/IllegalStateException;

    invoke-direct {p0}, Ljava/lang/IllegalStateException;-><init>()V

    throw p0

    :cond_1
    new-instance p0, Ljava/lang/IllegalArgumentException;

    invoke-direct {p0}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p0
.end method
