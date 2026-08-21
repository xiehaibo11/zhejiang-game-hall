.class public Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;


# instance fields
.field private final bugFixServiceAlive:Z

.field private final downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

.field private final downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

.field private final downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    .line 46
    invoke-direct {p0, v0}, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;-><init>(Z)V

    return-void
.end method

.method public constructor <init>(Z)V
    .locals 2

    .line 49
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 50
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadEngine()Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    .line 51
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    if-nez p1, :cond_0

    .line 53
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadServiceHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    goto :goto_0

    .line 55
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getIndependentDownloadServiceHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    .line 57
    :goto_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const/4 v0, 0x0

    const-string v1, "service_alive"

    invoke-virtual {p1, v1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;Z)Z

    move-result p1

    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->bugFixServiceAlive:Z

    return-void
.end method


# virtual methods
.method public addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    .locals 1

    .line 354
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    return-void
.end method

.method public addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V
    .locals 6

    .line 222
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    move v1, p1

    move v2, p2

    move-object v3, p3

    move-object v4, p4

    move v5, p5

    .line 223
    invoke-virtual/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V

    :cond_0
    return-void
.end method

.method public addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;ZZ)V
    .locals 7

    .line 228
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    move v1, p1

    move v2, p2

    move-object v3, p3

    move-object v4, p4

    move v5, p5

    move v6, p6

    .line 229
    invoke-virtual/range {v0 .. v6}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;ZZ)V

    :cond_0
    return-void
.end method

.method public addProcessCallback(Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;)V
    .locals 0

    .line 415
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->addProcessCallback(Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;)V

    return-void
.end method

.method public canResume(I)Z
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 75
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->isInDownloadTaskPool(I)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public cancel(IZ)V
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 69
    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->cancel(IZ)Z

    :cond_0
    return-void
.end method

.method public clearData()V
    .locals 1

    .line 394
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->clearData()V

    return-void
.end method

.method public clearDownloadData(IZ)V
    .locals 1

    .line 204
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 205
    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->clearDownloadData(IZ)V

    :cond_0
    return-void
.end method

.method public dispatchProcessCallback(II)V
    .locals 2

    .line 420
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getProcessCallbacks()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 421
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getProcessCallbacks()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 422
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 423
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;

    if-eqz v1, :cond_0

    .line 425
    invoke-interface {v1, p2, p1}, Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;->callback(II)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public forceDownloadIngoreRecommendSize(I)V
    .locals 1

    .line 216
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 217
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->forceDownloadIgnoreRecommendSize(I)V

    :cond_0
    return-void
.end method

.method public getAllDownloadInfo()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .line 107
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    if-eqz v0, :cond_0

    .line 108
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getAllDownloadInfo()Ljava/util/List;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getCurBytes(I)J
    .locals 5

    .line 127
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    const-wide/16 v1, 0x0

    if-nez v0, :cond_0

    return-wide v1

    .line 129
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    if-nez v0, :cond_1

    return-wide v1

    .line 132
    :cond_1
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v3

    const/4 v4, 0x1

    if-gt v3, v4, :cond_2

    .line 134
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v0

    return-wide v0

    .line 136
    :cond_2
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getDownloadChunk(I)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 137
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-eq v0, v3, :cond_3

    goto :goto_0

    .line 140
    :cond_3
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getTotalOffset(Ljava/util/List;)J

    move-result-wide v0

    return-wide v0

    :cond_4
    :goto_0
    return-wide v1
.end method

.method public getDownloadChunk(I)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;"
        }
    .end annotation

    .line 180
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getDownloadChunk(I)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadFileUriProvider(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;
    .locals 1

    .line 460
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 461
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->getDownloadFileUriProvider(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getDownloadId(Ljava/lang/String;Ljava/lang/String;)I
    .locals 0

    .line 191
    invoke-static {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadId(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 164
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 165
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getDownloadInfo(Ljava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 0

    .line 185
    invoke-static {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadId(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    .line 186
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .line 172
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 173
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getDownloadNotificationEventListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;
    .locals 1

    .line 434
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 435
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->getDownloadNotificationEventListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getDownloadWithIndependentProcessStatus(I)I
    .locals 1

    .line 349
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadWithIndependentProcessStatus(I)I

    move-result p1

    return p1
.end method

.method public getDownloadingDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .line 288
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 289
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->getDownloadingDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .line 100
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    if-eqz v0, :cond_0

    .line 101
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;
    .locals 1

    .line 442
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 443
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    if-nez p1, :cond_1

    .line 447
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object p1

    :cond_1
    return-object p1
.end method

.method public getStatus(I)I
    .locals 2

    .line 146
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 148
    :cond_0
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    if-nez p1, :cond_1

    return v1

    .line 151
    :cond_1
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result p1

    return p1
.end method

.method public getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .line 196
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    if-eqz v0, :cond_0

    .line 197
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .line 280
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    if-eqz v0, :cond_0

    .line 281
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public isDownloadCacheSyncSuccess()Z
    .locals 1

    .line 329
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->isDownloadCacheSyncSuccess()Z

    move-result v0

    return v0
.end method

.method public isDownloadSuccessAndFileNotExist(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 3

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    .line 242
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isDownloadSuccessAndFileNotExist(ILjava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/high16 v1, 0x2000000

    .line 244
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadExpSwitchCode;->isSwitchEnable(I)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_1

    .line 245
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    invoke-virtual {p0, p1, v2}, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->clearDownloadData(IZ)V

    goto :goto_0

    .line 247
    :cond_1
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    invoke-virtual {p0, p1, v2}, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->resetDownloadData(IZ)V

    :cond_2
    :goto_0
    return v0
.end method

.method public isDownloading(I)Z
    .locals 1

    .line 156
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 157
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->isDownloading(I)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public isHttpServiceInit()Z
    .locals 1

    .line 275
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->isHttpServiceInit()Z

    move-result v0

    return v0
.end method

.method public isServiceAlive()Z
    .locals 2

    .line 404
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->bugFixServiceAlive:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 406
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;->isServiceAlive()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    :cond_0
    return v1
.end method

.method public isServiceForeground()Z
    .locals 1

    .line 267
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-eqz v0, :cond_0

    .line 268
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;->isServiceForeground()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public pause(I)V
    .locals 1

    .line 62
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 63
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->pause(I)Z

    :cond_0
    return-void
.end method

.method public pauseAll()V
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 95
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->shutDown()V

    :cond_0
    return-void
.end method

.method public removeAllDownloadChunk(I)V
    .locals 1

    .line 369
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeAllDownloadChunk(I)V

    return-void
.end method

.method public removeDownloadInfo(I)Z
    .locals 1

    .line 364
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeDownloadInfo(I)Z

    move-result p1

    return p1
.end method

.method public removeDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V
    .locals 6

    .line 234
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    move v1, p1

    move v2, p2

    move-object v3, p3

    move-object v4, p4

    move v5, p5

    .line 235
    invoke-virtual/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->removeDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V

    :cond_0
    return-void
.end method

.method public removeDownloadTaskData(I)Z
    .locals 1

    .line 389
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeDownloadTaskData(I)Z

    move-result p1

    return p1
.end method

.method public resetDownloadData(IZ)V
    .locals 1

    .line 210
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 211
    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->resetDownloadData(IZ)V

    :cond_0
    return-void
.end method

.method public restart(I)V
    .locals 1

    .line 88
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 89
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->restart(I)Z

    :cond_0
    return-void
.end method

.method public restartAllFailedDownloadTasks(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 114
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 115
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->restartAllFailedDownloadTasks(Ljava/util/List;)V

    :cond_0
    return-void
.end method

.method public restartAllPauseReserveOnWifiDownloadTasks(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 120
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 121
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->restartAllPauseReserveOnWifiDownloadTasks(Ljava/util/List;)V

    :cond_0
    return-void
.end method

.method public resume(I)V
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 83
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->resume(I)Z

    :cond_0
    return-void
.end method

.method public retryDelayStart(I)Z
    .locals 1

    .line 312
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 313
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->retryDelayStart(I)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public setDownloadNotificationEventListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V
    .locals 1

    .line 454
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 455
    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->setDownloadNotificationEventListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V

    :cond_0
    return-void
.end method

.method public setDownloadWithIndependentProcessStatus(IZ)V
    .locals 1

    .line 344
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->setDownloadWithIndependentProcessStatus(IZ)V

    return-void
.end method

.method public setLogLevel(I)V
    .locals 0

    .line 319
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->setLogLevel(I)V

    return-void
.end method

.method public setThrottleNetSpeed(IJ)V
    .locals 1

    .line 467
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-eqz v0, :cond_0

    .line 468
    invoke-virtual {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->setThrottleNetSpeed(IJ)V

    :cond_0
    return-void
.end method

.method public startForeground(ILandroid/app/Notification;)V
    .locals 1

    .line 255
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-eqz v0, :cond_0

    .line 256
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;->startForeground(ILandroid/app/Notification;)V

    :cond_0
    return-void
.end method

.method public startService()V
    .locals 0

    return-void
.end method

.method public stopForeground(ZZ)V
    .locals 0

    .line 261
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-eqz p1, :cond_0

    .line 262
    invoke-interface {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;->stopForeground(Z)V

    :cond_0
    return-void
.end method

.method public syncDownloadChunks(ILjava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;)V"
        }
    .end annotation

    .line 339
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->syncDownloadChunks(ILjava/util/List;)V

    return-void
.end method

.method public syncDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 334
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->syncDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-void
.end method

.method public syncDownloadInfoFromOtherCache(ILjava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;)V"
        }
    .end annotation

    .line 399
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V

    return-void
.end method

.method public tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
    .locals 5

    .line 296
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-eqz v0, :cond_0

    .line 297
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;->tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V

    goto :goto_1

    :cond_0
    if-eqz p1, :cond_2

    .line 300
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v1

    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x3eb

    const-string v4, "downloadServiceHandler is null"

    invoke-direct {v2, v3, v4}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v3

    if-eqz v3, :cond_1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result p1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    :goto_0
    invoke-static {v0, v1, v2, p1}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSendWithTaskMonitor(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V

    :cond_2
    :goto_1
    return-void
.end method

.method public tryDownloadWithEngine(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
    .locals 1

    .line 306
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-eqz v0, :cond_0

    .line 307
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;->tryDownloadWithEngine(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V

    :cond_0
    return-void
.end method

.method public updateDownloadChunk(IIJ)V
    .locals 1

    .line 374
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadChunk(IIJ)V

    return-void
.end method

.method public updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1

    .line 359
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    return p1
.end method

.method public updateSubDownloadChunk(IIIJ)V
    .locals 6

    .line 379
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move v1, p1

    move v2, p2

    move v3, p3

    move-wide v4, p4

    invoke-interface/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateSubDownloadChunk(IIIJ)V

    return-void
.end method

.method public updateSubDownloadChunkIndex(IIII)V
    .locals 1

    .line 384
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateSubDownloadChunkIndex(IIII)V

    return-void
.end method
