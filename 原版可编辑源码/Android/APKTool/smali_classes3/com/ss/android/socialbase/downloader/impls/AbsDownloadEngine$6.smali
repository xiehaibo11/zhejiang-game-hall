.class Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;ZZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

.field final synthetic val$downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

.field final synthetic val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

    .line 817
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$6;->this$0:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$6;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$6;->val$downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 820
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$6;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    if-eqz v0, :cond_1

    .line 821
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$6;->val$downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v1, -0x3

    if-ne v0, v1, :cond_0

    .line 822
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$6;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$6;->val$downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onSuccessed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    goto :goto_0

    .line 823
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$6;->val$downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v1, -0x1

    if-ne v0, v1, :cond_1

    .line 824
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$6;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine$6;->val$downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x3e8

    const-string v4, "try add listener for failed task"

    invoke-direct {v2, v3, v4}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    invoke-interface {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onFailed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    :cond_1
    :goto_0
    return-void
.end method
