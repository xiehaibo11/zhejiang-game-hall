.class final Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$1;
.super Landroid/os/Handler;
.source "AbsMbridgeDownload.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;Landroid/os/Looper;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$1;->a:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 1

    .line 51
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 52
    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 54
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$1;->a:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$002(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;Z)Z

    :goto_0
    return-void
.end method
