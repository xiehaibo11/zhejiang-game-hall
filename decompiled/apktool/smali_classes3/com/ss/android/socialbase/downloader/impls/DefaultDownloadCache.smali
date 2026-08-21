.class public Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;


# static fields
.field private static final MSG_RESUME:I = 0x1

.field private static final TAG:Ljava/lang/String; = "DefaultDownloadCache"


# instance fields
.field private IHandler:Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler$IHandler;

.field private final downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

.field private volatile hasInitSqlDownloadCache:Z

.field private sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

.field private volatile unCompleteTaskResumed:Z

.field private weakHandler:Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler;


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 72
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 50
    new-instance v0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$1;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$1;-><init>(Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->IHandler:Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler$IHandler;

    const/4 v0, 0x0

    .line 69
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->weakHandler:Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler;

    .line 73
    new-instance v0, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    .line 74
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "fix_sigbus_downloader_db"

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 75
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isMainProcess()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->supportMultiProc()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 78
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getIndependentHolderCreator()Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$2;

    invoke-direct {v1, p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$2;-><init>(Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;)V

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;->createCache(Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener;)Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    goto :goto_1

    .line 76
    :cond_1
    :goto_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    goto :goto_1

    .line 89
    :cond_2
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    :goto_1
    const/4 v0, 0x0

    .line 91
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->hasInitSqlDownloadCache:Z

    .line 92
    new-instance v0, Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->IHandler:Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler$IHandler;

    invoke-direct {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler;-><init>(Landroid/os/Looper;Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler$IHandler;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->weakHandler:Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler;

    .line 93
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->init()V

    return-void
.end method

.method static synthetic access$002(Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;)Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;
    .locals 0

    .line 41
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    return-object p1
.end method

.method static synthetic access$100(Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;)Lcom/ss/android/socialbase/downloader/impls/DownloadCache;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    return-object p0
.end method

.method static synthetic access$200(Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;)V
    .locals 0

    .line 41
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->onDownloadCacheSyncSuccess()V

    return-void
.end method

.method private isPauseReserveOnWifi(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 335
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->statusInPause()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 336
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isPauseReserveOnWifi()Z

    move-result p1

    return p1

    :cond_1
    return v0
.end method

.method private onDownloadCacheSyncSuccess()V
    .locals 1

    .line 180
    monitor-enter p0

    const/4 v0, 0x1

    .line 181
    :try_start_0
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->hasInitSqlDownloadCache:Z

    .line 182
    invoke-virtual {p0}, Ljava/lang/Object;->notifyAll()V

    .line 183
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0
.end method

.method private updateDownloadInfoInDB(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    const/4 v0, 0x1

    .line 549
    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->updateDownloadInfoInDB(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Z)V

    return-void
.end method

.method private updateDownloadInfoInDB(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Z)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 555
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_2

    if-eqz p2, :cond_3

    const/4 p2, 0x1

    .line 558
    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 560
    invoke-interface {p2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    goto :goto_0

    .line 562
    :cond_1
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {p2, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    goto :goto_0

    .line 565
    :cond_2
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {p2, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    :cond_3
    :goto_0
    return-void
.end method


# virtual methods
.method public OnDownloadTaskCancel(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 600
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->OnDownloadTaskCancel(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p2

    const/4 p3, 0x0

    .line 601
    invoke-virtual {p0, p1, p3}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V

    return-object p2
.end method

.method public OnDownloadTaskCompleted(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 586
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->OnDownloadTaskCompleted(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p2

    const/4 p3, 0x0

    .line 587
    invoke-virtual {p0, p1, p3}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V

    return-object p2
.end method

.method public OnDownloadTaskConnected(IJLjava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 6

    .line 536
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    move v1, p1

    move-wide v2, p2

    move-object v4, p4

    move-object v5, p5

    invoke-virtual/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->OnDownloadTaskConnected(IJLjava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 537
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->updateDownloadInfoInDB(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-object p1
.end method

.method public OnDownloadTaskError(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 571
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->OnDownloadTaskError(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p2

    const/4 p3, 0x0

    .line 572
    invoke-virtual {p0, p1, p3}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V

    return-object p2
.end method

.method public OnDownloadTaskIntercept(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 614
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->OnDownloadTaskIntercept(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 615
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->updateDownloadInfoInDB(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-object p1
.end method

.method public OnDownloadTaskPause(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 593
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->OnDownloadTaskPause(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p2

    const/4 p3, 0x0

    .line 594
    invoke-virtual {p0, p1, p3}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V

    return-object p2
.end method

.method public OnDownloadTaskPrepare(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 607
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->OnDownloadTaskPrepare(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 608
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->updateDownloadInfoInDB(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-object p1
.end method

.method public OnDownloadTaskProgress(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 543
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->OnDownloadTaskProgress(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    const/4 p2, 0x0

    .line 544
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->updateDownloadInfoInDB(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Z)V

    return-object p1
.end method

.method public OnDownloadTaskRetry(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 578
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->OnDownloadTaskRetry(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 579
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->updateDownloadInfoInDB(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-object p1
.end method

.method public addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    .locals 2

    .line 398
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    monitor-enter v0

    .line 399
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v1, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    .line 400
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 401
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 402
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 404
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    goto :goto_0

    .line 406
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    goto :goto_0

    .line 408
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    :goto_0
    return-void

    :catchall_0
    move-exception p1

    .line 400
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public addSubDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    .locals 1

    .line 414
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 415
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 417
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    goto :goto_0

    .line 419
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    goto :goto_0

    .line 421
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    :goto_0
    return-void
.end method

.method public cacheExist(I)Z
    .locals 0

    .line 344
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public clearData()V
    .locals 1

    .line 519
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->clearData()V
    :try_end_0
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 521
    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteException;->printStackTrace()V

    .line 523
    :goto_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 524
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 526
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->clearData()V

    goto :goto_1

    .line 528
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->clearData()V

    goto :goto_1

    .line 530
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->clearData()V

    :goto_1
    return-void
.end method

.method public ensureDownloadCacheSyncSuccess()Z
    .locals 2

    .line 193
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->hasInitSqlDownloadCache:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    .line 196
    :cond_0
    monitor-enter p0

    .line 197
    :try_start_0
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->hasInitSqlDownloadCache:Z

    if-nez v0, :cond_1

    const-string v0, "DefaultDownloadCache"

    const-string v1, "ensureDownloadCacheSyncSuccess: waiting start!!!!"

    .line 198
    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-wide/16 v0, 0x1388

    .line 201
    :try_start_1
    invoke-virtual {p0, v0, v1}, Ljava/lang/Object;->wait(J)V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 203
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/InterruptedException;->printStackTrace()V

    :goto_0
    const-string v0, "DefaultDownloadCache"

    const-string v1, "ensureDownloadCacheSyncSuccess: waiting end!!!!"

    .line 205
    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 207
    :cond_1
    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 208
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->hasInitSqlDownloadCache:Z

    return v0

    :catchall_0
    move-exception v0

    .line 207
    :try_start_3
    monitor-exit p0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    throw v0
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

    .line 374
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getAllDownloadInfo()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public getDownloadCache()Lcom/ss/android/socialbase/downloader/impls/DownloadCache;
    .locals 1

    .line 97
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    return-object v0
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

    .line 379
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getDownloadChunk(I)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 349
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

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

    .line 354
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

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

    .line 359
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public getSegmentMap(I)Ljava/util/Map;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;"
        }
    .end annotation

    .line 669
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getSegmentMap(I)Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 670
    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 671
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->getSegmentMap(I)Ljava/util/Map;

    move-result-object v0

    .line 672
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v1, p1, v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->updateSegments(ILjava/util/Map;)Z

    :cond_1
    return-object v0
.end method

.method public getSegments(I)Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;"
        }
    .end annotation

    .line 660
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getSegments(I)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 661
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    .line 662
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->getSegments(I)Ljava/util/List;

    move-result-object v0

    :cond_1
    return-object v0
.end method

.method public getSqlDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;
    .locals 1

    .line 101
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    return-object v0
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

    .line 364
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

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

    .line 369
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public init()V
    .locals 8

    .line 113
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/DownloadCacheSyncStatus;->SYNC_START:Lcom/ss/android/socialbase/downloader/constants/DownloadCacheSyncStatus;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->onDownloadCacheSyncCallback(Lcom/ss/android/socialbase/downloader/constants/DownloadCacheSyncStatus;)V

    .line 115
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    .line 116
    new-instance v1, Landroid/util/SparseArray;

    invoke-direct {v1}, Landroid/util/SparseArray;-><init>()V

    .line 119
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    monitor-enter v2

    .line 120
    :try_start_0
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getDownloadInfoMap()Landroid/util/SparseArray;

    move-result-object v3

    const/4 v4, 0x0

    move v5, v4

    .line 121
    :goto_0
    invoke-virtual {v3}, Landroid/util/SparseArray;->size()I

    move-result v6

    if-ge v5, v6, :cond_1

    .line 122
    invoke-virtual {v3, v5}, Landroid/util/SparseArray;->keyAt(I)I

    move-result v6

    if-eqz v6, :cond_0

    .line 124
    invoke-virtual {v3, v6}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v7, :cond_0

    .line 126
    invoke-virtual {v0, v6, v7}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    :cond_0
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 131
    :cond_1
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getChunkListMap()Landroid/util/SparseArray;

    move-result-object v3

    .line 132
    :goto_1
    invoke-virtual {v3}, Landroid/util/SparseArray;->size()I

    move-result v5

    if-ge v4, v5, :cond_3

    .line 133
    invoke-virtual {v3, v4}, Landroid/util/SparseArray;->keyAt(I)I

    move-result v5

    if-eqz v5, :cond_2

    .line 135
    invoke-virtual {v3, v5}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/List;

    if-eqz v6, :cond_2

    .line 137
    new-instance v7, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v7, v6}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v1, v5, v7}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    :cond_2
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 141
    :cond_3
    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 143
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    new-instance v3, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$3;

    invoke-direct {v3, p0, v0, v1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$3;-><init>(Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    invoke-interface {v2, v0, v1, v3}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->init(Landroid/util/SparseArray;Landroid/util/SparseArray;Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;)V

    return-void

    :catchall_0
    move-exception v0

    .line 141
    :try_start_1
    monitor-exit v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method

.method public isDownloadCacheSyncSuccess()Z
    .locals 1

    .line 213
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->hasInitSqlDownloadCache:Z

    return v0
.end method

.method public onDownloadTaskStart(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 106
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->onDownloadTaskStart(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 107
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->updateDownloadInfoInDB(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-object p1
.end method

.method public removeAllDownloadChunk(I)V
    .locals 1

    .line 384
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->removeAllDownloadChunk(I)V

    .line 385
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 386
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 388
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->removeAllDownloadChunk(I)V

    goto :goto_0

    .line 390
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->removeAllDownloadChunk(I)V

    goto :goto_0

    .line 392
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->removeAllDownloadChunk(I)V

    :goto_0
    return-void
.end method

.method public removeDownloadInfo(I)Z
    .locals 1

    .line 485
    :try_start_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 486
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 488
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->removeDownloadInfo(I)Z

    goto :goto_0

    .line 490
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->removeDownloadInfo(I)Z

    goto :goto_0

    .line 492
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->removeDownloadInfo(I)Z
    :try_end_0
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 495
    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteException;->printStackTrace()V

    .line 498
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->removeDownloadInfo(I)Z

    move-result p1

    return p1
.end method

.method public removeDownloadTaskData(I)Z
    .locals 1

    .line 503
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 504
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 506
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->removeDownloadTaskData(I)Z

    goto :goto_0

    .line 508
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->removeDownloadTaskData(I)Z

    goto :goto_0

    .line 510
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->removeDownloadTaskData(I)Z

    .line 513
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->removeDownloadTaskData(I)Z

    move-result p1

    return p1
.end method

.method public removeSegments(I)V
    .locals 1

    .line 686
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->removeSegments(I)V

    .line 687
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->removeSegments(I)V

    return-void
.end method

.method public resumeUnCompleteTask()V
    .locals 12

    .line 236
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->hasInitSqlDownloadCache:Z

    if-nez v0, :cond_0

    return-void

    .line 239
    :cond_0
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->unCompleteTaskResumed:Z

    if-eqz v0, :cond_1

    const-string v0, "DefaultDownloadCache"

    const-string v1, "resumeUnCompleteTask: has resumed, return!!!"

    .line 241
    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    const/4 v0, 0x1

    .line 244
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->unCompleteTaskResumed:Z

    .line 246
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isMainProcess()Z

    move-result v1

    if-nez v1, :cond_2

    return-void

    .line 250
    :cond_2
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadLaunchHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz v1, :cond_4

    .line 255
    invoke-interface {v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;->getResumeMimeTypes()Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_3

    .line 256
    invoke-interface {v3}, Ljava/util/List;->isEmpty()Z

    move-result v4

    if-nez v4, :cond_3

    .line 257
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    goto :goto_0

    :cond_3
    move-object v4, v2

    goto :goto_0

    :cond_4
    move-object v3, v2

    move-object v4, v3

    .line 261
    :goto_0
    new-instance v5, Landroid/util/SparseArray;

    invoke-direct {v5}, Landroid/util/SparseArray;-><init>()V

    .line 264
    monitor-enter p0

    .line 265
    :try_start_0
    iget-object v6, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getDownloadInfoMap()Landroid/util/SparseArray;

    move-result-object v6

    const/4 v7, 0x0

    move v8, v7

    .line 266
    :goto_1
    invoke-virtual {v6}, Landroid/util/SparseArray;->size()I

    move-result v9

    if-ge v8, v9, :cond_6

    .line 267
    invoke-virtual {v6, v8}, Landroid/util/SparseArray;->keyAt(I)I

    move-result v9

    if-eqz v9, :cond_5

    .line 269
    invoke-virtual {v6, v9}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v10, :cond_5

    .line 271
    invoke-virtual {v5, v9, v10}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    :cond_5
    add-int/lit8 v8, v8, 0x1

    goto :goto_1

    .line 275
    :cond_6
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 277
    invoke-virtual {v5}, Landroid/util/SparseArray;->size()I

    move-result v6

    if-nez v6, :cond_7

    return-void

    :cond_7
    move v6, v7

    .line 281
    :goto_2
    invoke-virtual {v5}, Landroid/util/SparseArray;->size()I

    move-result v8

    if-ge v6, v8, :cond_f

    .line 282
    invoke-virtual {v5, v6}, Landroid/util/SparseArray;->keyAt(I)I

    move-result v8

    if-nez v8, :cond_8

    goto :goto_3

    .line 286
    :cond_8
    invoke-virtual {v5, v8}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-nez v8, :cond_9

    goto :goto_3

    .line 291
    :cond_9
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRealStatus()I

    move-result v9

    .line 293
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatusAtDbInit()I

    move-result v10

    if-lt v10, v0, :cond_a

    const/16 v11, 0xb

    if-gt v10, v11, :cond_a

    .line 296
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadMonitorListener()Lcom/ss/android/socialbase/downloader/monitor/IDownloadMonitorListener;

    move-result-object v10

    const/4 v11, -0x5

    .line 297
    invoke-static {v10, v8, v2, v11}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSendWithGlobalSdkMonitor(Lcom/ss/android/socialbase/downloader/monitor/IDownloadMonitorListener;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V

    :cond_a
    if-eqz v3, :cond_e

    if-nez v4, :cond_b

    goto :goto_3

    .line 304
    :cond_b
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMimeType()Ljava/lang/String;

    move-result-object v10

    if-eqz v10, :cond_e

    .line 305
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMimeType()Ljava/lang/String;

    move-result-object v10

    invoke-interface {v3, v10}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v10

    if-nez v10, :cond_c

    goto :goto_3

    .line 310
    :cond_c
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v10

    invoke-static {v10}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v10

    const-string v11, "enable_notification_ui"

    invoke-virtual {v10, v11}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v10

    const/4 v11, 0x2

    if-ge v10, v11, :cond_d

    const/4 v10, -0x2

    if-ne v9, v10, :cond_d

    .line 311
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isPauseReserveOnWifi()Z

    move-result v9

    if-nez v9, :cond_d

    goto :goto_3

    .line 317
    :cond_d
    invoke-virtual {v8, v7}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setDownloadFromReserveWifi(Z)V

    .line 319
    invoke-interface {v4, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_e
    :goto_3
    add-int/lit8 v6, v6, 0x1

    goto :goto_2

    :cond_f
    if-eqz v1, :cond_10

    if-eqz v4, :cond_10

    .line 321
    invoke-interface {v4}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_10

    .line 322
    invoke-interface {v1, v4, v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;->onLaunchResume(Ljava/util/List;I)V

    :cond_10
    return-void

    :catchall_0
    move-exception v0

    .line 275
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method

.method public resumeUnCompleteTaskMayDelayed()V
    .locals 4

    .line 221
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "task_resume_delay"

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-wide/16 v0, 0xfa0

    goto :goto_0

    .line 224
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_1

    const-wide/16 v0, 0x3e8

    goto :goto_0

    :cond_1
    const-wide/16 v0, 0x1388

    .line 230
    :goto_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->weakHandler:Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v2

    .line 231
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->weakHandler:Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler;

    invoke-virtual {v3, v2, v0, v1}, Lcom/ss/android/socialbase/downloader/thread/WeakDownloadHandler;->sendMessageDelayed(Landroid/os/Message;J)Z

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

    if-eqz p2, :cond_1

    .line 628
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 630
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->syncDownloadChunks(ILjava/util/List;)V

    .line 631
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 632
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public syncDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 623
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

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

    .line 639
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    if-nez p2, :cond_0

    .line 641
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {p2, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->getDownloadChunk(I)Ljava/util/List;

    move-result-object p2

    .line 644
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v0, 0x1

    .line 645
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 647
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V

    goto :goto_0

    .line 649
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V

    goto :goto_0

    .line 651
    :cond_2
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 654
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public updateChunkCount(II)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 468
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->updateChunkCount(II)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 469
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->updateDownloadInfoInDB(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-object p1
.end method

.method public updateDownloadChunk(IIJ)V
    .locals 1

    .line 427
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->updateDownloadChunk(IIJ)V

    .line 428
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 429
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 431
    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateDownloadChunk(IIJ)V

    goto :goto_0

    .line 433
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->updateDownloadChunk(IIJ)V

    goto :goto_0

    .line 435
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->updateDownloadChunk(IIJ)V

    :goto_0
    return-void
.end method

.method public updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    .line 477
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v0

    .line 478
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->updateDownloadInfoInDB(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return v0
.end method

.method public updateSegments(ILjava/util/Map;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;)Z"
        }
    .end annotation

    .line 679
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/impls/DownloadCache;->updateSegments(ILjava/util/Map;)Z

    .line 680
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->updateSegments(ILjava/util/Map;)Z

    const/4 p1, 0x0

    return p1
.end method

.method public updateSubDownloadChunk(IIIJ)V
    .locals 9

    .line 441
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 442
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    if-eqz v1, :cond_0

    move v2, p1

    move v3, p2

    move v4, p3

    move-wide v5, p4

    .line 444
    invoke-interface/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateSubDownloadChunk(IIIJ)V

    goto :goto_0

    .line 446
    :cond_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    move v3, p1

    move v4, p2

    move v5, p3

    move-wide v6, p4

    invoke-interface/range {v2 .. v7}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->updateSubDownloadChunk(IIIJ)V

    goto :goto_0

    .line 448
    :cond_1
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    move v4, p1

    move v5, p2

    move v6, p3

    move-wide v7, p4

    invoke-interface/range {v3 .. v8}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->updateSubDownloadChunk(IIIJ)V

    :goto_0
    return-void
.end method

.method public updateSubDownloadChunkIndex(IIII)V
    .locals 1

    .line 454
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 455
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 457
    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateSubDownloadChunkIndex(IIII)V

    goto :goto_0

    .line 459
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->updateSubDownloadChunkIndex(IIII)V

    goto :goto_0

    .line 461
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->updateSubDownloadChunkIndex(IIII)V

    :goto_0
    return-void
.end method
