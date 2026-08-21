.class Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

.field final synthetic val$downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

.field final synthetic val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
    .locals 0

    .line 542
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher$1;->this$0:Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher$1;->val$downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 545
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher$1;->val$downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V

    return-void
.end method
