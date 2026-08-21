.class final Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;
.super Ljava/lang/Object;
.source "AbsMbridgeDownload.java"

# interfaces
.implements Lcom/mbridge/msdk/out/IDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->getiDownloadListenerByUniqueKey(Ljava/lang/String;)Lcom/mbridge/msdk/out/IDownloadListener;
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

    .line 64
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onEnd(IILjava/lang/String;)V
    .locals 3

    .line 95
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$700(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "download listener onEnd result = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " nid = "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " file = "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 97
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 98
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result p2

    if-eqz p2, :cond_0

    .line 99
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    iget-object p2, p2, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->mContext:Landroid/content/Context;

    invoke-static {p1}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p1

    iget-object p3, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    invoke-static {p3}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$800(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)Ljava/lang/String;

    move-result-object p3

    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->a:Ljava/lang/String;

    invoke-static {p2, p1, p3, v0}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 4

    .line 83
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onProgressUpdate:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "click control"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 84
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$000(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)Z

    move-result v0

    if-nez v0, :cond_0

    const/16 v0, 0x64

    if-ne p1, v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$300(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)I

    move-result v0

    if-eq v0, p1, :cond_1

    .line 85
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "=============onProgressUpdate:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 86
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$002(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;Z)Z

    .line 87
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$500(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x1

    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    invoke-static {v2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$400(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)J

    move-result-wide v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 88
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$302(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;I)I

    .line 89
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->a:Ljava/lang/String;

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$600(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;ILjava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final onStart()V
    .locals 0

    return-void
.end method

.method public final onStatus(I)V
    .locals 3

    .line 67
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onStatus:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "click control"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 68
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$100(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)I

    move-result v0

    if-eq v0, p1, :cond_0

    .line 69
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "========onStatus:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 70
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$102(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;I)I

    .line 71
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->b:Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;->a:Ljava/lang/String;

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->access$200(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;ILjava/lang/String;)V

    :cond_0
    return-void
.end method
