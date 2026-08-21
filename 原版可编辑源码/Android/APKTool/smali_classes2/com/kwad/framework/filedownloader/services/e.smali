.class public final Lcom/kwad/framework/filedownloader/services/e;
.super Lcom/kwad/framework/filedownloader/c/b$a;

# interfaces
.implements Lcom/kwad/framework/filedownloader/services/i;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/services/e$a;
    }
.end annotation


# instance fields
.field private final aeu:Lcom/kwad/framework/filedownloader/services/g;

.field private final aev:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/framework/filedownloader/services/FileDownloadServiceProxy;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Ljava/lang/ref/WeakReference;Lcom/kwad/framework/filedownloader/services/g;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/framework/filedownloader/services/FileDownloadServiceProxy;",
            ">;",
            "Lcom/kwad/framework/filedownloader/services/g;",
            ")V"
        }
    .end annotation

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/c/b$a;-><init>()V

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/services/e;->aev:Ljava/lang/ref/WeakReference;

    iput-object p2, p0, Lcom/kwad/framework/filedownloader/services/e;->aeu:Lcom/kwad/framework/filedownloader/services/g;

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/framework/filedownloader/c/a;)V
    .locals 0

    return-void
.end method

.method public final aY(I)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aeu:Lcom/kwad/framework/filedownloader/services/g;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/services/g;->aY(I)Z

    move-result p1

    return p1
.end method

.method public final aZ(I)B
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aeu:Lcom/kwad/framework/filedownloader/services/g;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/services/g;->aZ(I)B

    move-result p1

    return p1
.end method

.method public final b(Lcom/kwad/framework/filedownloader/c/a;)V
    .locals 0

    return-void
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;ZIIIZLcom/kwad/framework/filedownloader/d/b;Z)V
    .locals 11

    move-object v0, p0

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/services/e;->aeu:Lcom/kwad/framework/filedownloader/services/g;

    move-object v2, p1

    move-object v3, p2

    move v4, p3

    move v5, p4

    move/from16 v6, p5

    move/from16 v7, p6

    move/from16 v8, p7

    move-object/from16 v9, p8

    move/from16 v10, p9

    invoke-virtual/range {v1 .. v10}, Lcom/kwad/framework/filedownloader/services/g;->b(Ljava/lang/String;Ljava/lang/String;ZIIIZLcom/kwad/framework/filedownloader/d/b;Z)V

    return-void
.end method

.method public final ba(I)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aeu:Lcom/kwad/framework/filedownloader/services/g;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/services/g;->ba(I)Z

    move-result p1

    return p1
.end method

.method public final bs(I)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aeu:Lcom/kwad/framework/filedownloader/services/g;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/services/g;->bs(I)Z

    move-result p1

    return p1
.end method

.method public final bt(I)J
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aeu:Lcom/kwad/framework/filedownloader/services/g;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/services/g;->bE(I)J

    move-result-wide v0

    return-wide v0
.end method

.method public final bu(I)J
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aeu:Lcom/kwad/framework/filedownloader/services/g;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/services/g;->bu(I)J

    move-result-wide v0

    return-wide v0
.end method

.method public final isIdle()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aeu:Lcom/kwad/framework/filedownloader/services/g;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/services/g;->isIdle()Z

    move-result v0

    return v0
.end method

.method public final n(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aeu:Lcom/kwad/framework/filedownloader/services/g;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/framework/filedownloader/services/g;->p(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public final onDestroy()V
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/n;->tP()Lcom/kwad/framework/filedownloader/services/e$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/services/e$a;->onDisconnected()V

    return-void
.end method

.method public final pauseAllTasks()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aeu:Lcom/kwad/framework/filedownloader/services/g;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/services/g;->vF()V

    return-void
.end method

.method public final startForeground(ILandroid/app/Notification;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aev:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aev:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/framework/filedownloader/services/FileDownloadServiceProxy;

    iget-object v0, v0, Lcom/kwad/framework/filedownloader/services/FileDownloadServiceProxy;->context:Landroid/app/Service;

    invoke-virtual {v0, p1, p2}, Landroid/app/Service;->startForeground(ILandroid/app/Notification;)V

    :cond_0
    return-void
.end method

.method public final stopForeground(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aev:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aev:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/framework/filedownloader/services/FileDownloadServiceProxy;

    iget-object v0, v0, Lcom/kwad/framework/filedownloader/services/FileDownloadServiceProxy;->context:Landroid/app/Service;

    invoke-virtual {v0, p1}, Landroid/app/Service;->stopForeground(Z)V

    :cond_0
    return-void
.end method

.method public final uW()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/e;->aeu:Lcom/kwad/framework/filedownloader/services/g;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/services/g;->uW()V

    return-void
.end method

.method public final vD()V
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/n;->tP()Lcom/kwad/framework/filedownloader/services/e$a;

    move-result-object v0

    invoke-interface {v0, p0}, Lcom/kwad/framework/filedownloader/services/e$a;->a(Lcom/kwad/framework/filedownloader/services/e;)V

    return-void
.end method

.method public final vE()Landroid/os/IBinder;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method
