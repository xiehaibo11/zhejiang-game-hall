.class Lcom/ss/android/socialbase/downloader/model/DownloadTask$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/model/DownloadTask;->asyncDownload(Lcom/ss/android/socialbase/downloader/downloader/IDownloadStartCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

.field final synthetic val$downloadStartCallback:Lcom/ss/android/socialbase/downloader/downloader/IDownloadStartCallback;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/downloader/IDownloadStartCallback;)V
    .locals 0

    .line 589
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask$1;->this$0:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask$1;->val$downloadStartCallback:Lcom/ss/android/socialbase/downloader/downloader/IDownloadStartCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 592
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask$1;->this$0:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->download()I

    move-result v0

    .line 593
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask$1;->val$downloadStartCallback:Lcom/ss/android/socialbase/downloader/downloader/IDownloadStartCallback;

    if-eqz v1, :cond_0

    .line 594
    invoke-interface {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadStartCallback;->onStart(I)V

    :cond_0
    return-void
.end method
