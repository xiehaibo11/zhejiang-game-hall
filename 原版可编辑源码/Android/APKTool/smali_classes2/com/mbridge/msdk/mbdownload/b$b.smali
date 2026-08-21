.class final Lcom/mbridge/msdk/mbdownload/b$b;
.super Landroid/os/Handler;
.source "DownloadAgent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbdownload/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbdownload/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbdownload/b;)V
    .locals 0

    .line 143
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 5

    .line 152
    :try_start_0
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_6

    const/4 v2, 0x2

    if-eq v0, v2, :cond_5

    const/4 v2, 0x3

    if-eq v0, v2, :cond_4

    const/4 v3, 0x5

    if-eq v0, v3, :cond_0

    .line 199
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    goto/16 :goto_2

    .line 166
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->b(Lcom/mbridge/msdk/mbdownload/b;)Landroid/content/ServiceConnection;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 167
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->c(Lcom/mbridge/msdk/mbdownload/b;)Landroid/content/Context;

    move-result-object v0

    iget-object v4, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v4}, Lcom/mbridge/msdk/mbdownload/b;->b(Lcom/mbridge/msdk/mbdownload/b;)Landroid/content/ServiceConnection;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 170
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 172
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->a(Lcom/mbridge/msdk/mbdownload/b;)Lcom/mbridge/msdk/out/IDownloadListener;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 173
    iget v0, p1, Landroid/os/Message;->arg1:I

    if-eq v0, v1, :cond_3

    iget v0, p1, Landroid/os/Message;->arg1:I

    if-eq v0, v2, :cond_3

    iget v0, p1, Landroid/os/Message;->arg1:I

    if-ne v0, v3, :cond_2

    goto :goto_1

    .line 185
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->a(Lcom/mbridge/msdk/mbdownload/b;)Lcom/mbridge/msdk/out/IDownloadListener;

    move-result-object v0

    const/16 v1, 0x8

    const/4 v2, 0x0

    const/4 v3, 0x0

    invoke-interface {v0, v1, v2, v3}, Lcom/mbridge/msdk/out/IDownloadListener;->onEnd(IILjava/lang/String;)V

    .line 188
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/b;->a()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DownloadAgent.handleMessage(DownloadingService.DOWNLOAD_COMPLETE_FAIL): "

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 176
    :cond_3
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->a(Lcom/mbridge/msdk/mbdownload/b;)Lcom/mbridge/msdk/out/IDownloadListener;

    move-result-object v0

    iget v1, p1, Landroid/os/Message;->arg1:I

    iget v2, p1, Landroid/os/Message;->arg2:I

    .line 180
    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v3

    const-string v4, "filename"

    .line 181
    invoke-virtual {v3, v4}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 177
    invoke-interface {v0, v1, v2, v3}, Lcom/mbridge/msdk/out/IDownloadListener;->onEnd(IILjava/lang/String;)V

    goto :goto_2

    .line 159
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->a(Lcom/mbridge/msdk/mbdownload/b;)Lcom/mbridge/msdk/out/IDownloadListener;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 160
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->a(Lcom/mbridge/msdk/mbdownload/b;)Lcom/mbridge/msdk/out/IDownloadListener;

    move-result-object v0

    iget v1, p1, Landroid/os/Message;->arg1:I

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/out/IDownloadListener;->onProgressUpdate(I)V

    goto :goto_2

    .line 194
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->a(Lcom/mbridge/msdk/mbdownload/b;)Lcom/mbridge/msdk/out/IDownloadListener;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 195
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->a(Lcom/mbridge/msdk/mbdownload/b;)Lcom/mbridge/msdk/out/IDownloadListener;

    move-result-object v0

    iget v1, p1, Landroid/os/Message;->arg1:I

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/out/IDownloadListener;->onStatus(I)V

    goto :goto_2

    .line 154
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->a(Lcom/mbridge/msdk/mbdownload/b;)Lcom/mbridge/msdk/out/IDownloadListener;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 155
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$b;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->a(Lcom/mbridge/msdk/mbdownload/b;)Lcom/mbridge/msdk/out/IDownloadListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/out/IDownloadListener;->onStart()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_2

    :catch_1
    move-exception v0

    .line 202
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 203
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/b;->a()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "DownloadAgent.handleMessage("

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Landroid/os/Message;->what:I

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "): "

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 204
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 203
    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    :goto_2
    return-void
.end method
