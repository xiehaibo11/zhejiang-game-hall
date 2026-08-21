.class final Lcom/mbridge/msdk/click/b$1;
.super Landroid/os/Handler;
.source "CommonClickControl.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/click/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/click/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/b;)V
    .locals 0

    .line 108
    iput-object p1, p0, Lcom/mbridge/msdk/click/b$1;->a:Lcom/mbridge/msdk/click/b;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 2

    .line 111
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 112
    iget v0, p1, Landroid/os/Message;->what:I

    if-eqz v0, :cond_2

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 124
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$1;->a:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 125
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$1;->a:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object v0

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/mbridge/msdk/out/Campaign;

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onDownloadFinish(Lcom/mbridge/msdk/out/Campaign;)V

    goto :goto_0

    .line 119
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$1;->a:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 120
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$1;->a:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object v0

    iget p1, p1, Landroid/os/Message;->arg1:I

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onDownloadProgress(I)V

    goto :goto_0

    .line 114
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$1;->a:Lcom/mbridge/msdk/click/b;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 115
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$1;->a:Lcom/mbridge/msdk/click/b;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object p1

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onDownloadStart(Lcom/mbridge/msdk/out/Campaign;)V

    :cond_3
    :goto_0
    return-void
.end method
