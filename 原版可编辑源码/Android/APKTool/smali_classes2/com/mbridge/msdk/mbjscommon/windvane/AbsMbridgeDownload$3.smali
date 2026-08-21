.class final Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$3;
.super Ljava/lang/Object;
.source "AbsMbridgeDownload.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->onDownloadAPKStatusChange(ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;Ljava/lang/String;)V
    .locals 0

    .line 421
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$3;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$3;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 424
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$3;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    invoke-static {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$900(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)Ljava/lang/Object;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$3;->a:Ljava/lang/String;

    const-string v3, "onDownloadAPKStatusChange"

    invoke-virtual {v0, v1, v3, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
