.class Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;
.super Ljava/lang/Object;
.source "H5DownLoadManager.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$IOnDownLoadH5Source;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->runTask()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;)V
    .locals 0

    .line 264
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFailed(Ljava/lang/String;)V
    .locals 2

    .line 299
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object v0, v0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->this$0:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->access$100(Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object v1, v1, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 300
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object v0, v0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

    if-eqz v0, :cond_1

    .line 301
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object v0, v0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object v1, v1, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$url:Ljava/lang/String;

    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;->onFailed(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 304
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 305
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 307
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object v0, v0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

    if-eqz v0, :cond_1

    .line 308
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object v0, v0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object v1, v1, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$url:Ljava/lang/String;

    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;->onFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public onStart()V
    .locals 0

    return-void
.end method

.method public onSuccess(Ljava/lang/String;[BLjava/lang/String;)V
    .locals 0

    .line 273
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object p1, p1, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->this$0:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->access$100(Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    invoke-virtual {p1, p3}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    if-eqz p2, :cond_3

    .line 275
    array-length p1, p2

    if-lez p1, :cond_3

    .line 276
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object p1, p1, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->this$0:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->access$000(Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;)Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;

    move-result-object p1

    invoke-virtual {p1, p3, p2}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->saveResHtmlFile(Ljava/lang/String;[B)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 277
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object p1, p1, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

    if-eqz p1, :cond_0

    .line 278
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object p1, p1, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

    invoke-interface {p1, p3}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;->onSuccess(Ljava/lang/String;)V

    :cond_0
    return-void

    .line 282
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object p1, p1, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

    if-eqz p1, :cond_3

    .line 283
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object p1, p1, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

    const-string p2, "save file failed"

    invoke-interface {p1, p3, p2}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;->onFailed(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 287
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_2

    .line 288
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 290
    :cond_2
    iget-object p2, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object p2, p2, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

    if-eqz p2, :cond_3

    .line 291
    iget-object p2, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;->this$1:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;

    iget-object p2, p2, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, p3, p1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;->onFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method
