.class Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;
.super Lcom/mbridge/msdk/foundation/same/e/a;
.source "H5DownLoadManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadHTML(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

.field final synthetic val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

.field final synthetic val$url:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V
    .locals 0

    .line 253
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->this$0:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$url:Ljava/lang/String;

    iput-object p3, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/e/a;-><init>()V

    return-void
.end method


# virtual methods
.method public cancelTask()V
    .locals 0

    return-void
.end method

.method public pauseTask(Z)V
    .locals 0

    return-void
.end method

.method public runTask()V
    .locals 3

    .line 256
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->this$0:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->access$000(Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;)Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getHtmlContentFromUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 258
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->this$0:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->access$100(Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 259
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$downloadSourceListener:Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;

    if-eqz v0, :cond_1

    .line 260
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$url:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;->onSuccess(Ljava/lang/String;)V

    goto :goto_0

    .line 264
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;->val$url:Ljava/lang/String;

    new-instance v1, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2$1;-><init>(Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$2;)V

    const/4 v2, 0x1

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/download/download/DownLoadUtils;->getSourceCodeFromNetUrl(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$IOnDownLoadH5Source;Z)V

    :cond_1
    :goto_0
    return-void
.end method
