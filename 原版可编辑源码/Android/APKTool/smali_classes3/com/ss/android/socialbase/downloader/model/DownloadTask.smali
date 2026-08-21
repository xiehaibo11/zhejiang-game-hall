.class public Lcom/ss/android/socialbase/downloader/model/DownloadTask;
.super Ljava/lang/Object;


# instance fields
.field private autoSetHashCodeForSameTask:Z

.field private chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

.field private chunkStrategy:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

.field private depend:Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;

.field private diskSpaceHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

.field private final downloadCompleteHandlers:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;",
            ">;"
        }
    .end annotation
.end field

.field private downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

.field private downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

.field private fileUriProvider:Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

.field private forbiddenHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

.field private hashCodeForSameTask:I

.field private interceptor:Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;

.field private final mainThreadListeners:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;",
            ">;"
        }
    .end annotation
.end field

.field private monitorDepend:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

.field private needDelayForCacheSync:Z

.field private notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

.field private notificationEventListener:Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

.field private final notificationListeners:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;",
            ">;"
        }
    .end annotation
.end field

.field private retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

.field private final singleListenerHashCodeMap:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/constants/ListenerType;",
            ">;"
        }
    .end annotation
.end field

.field private final singleListenerMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Lcom/ss/android/socialbase/downloader/constants/ListenerType;",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;",
            ">;"
        }
    .end annotation
.end field

.field private final subThreadListeners:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 99
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 49
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    .line 50
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerHashCodeMap:Landroid/util/SparseArray;

    const/4 v0, 0x0

    .line 63
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->needDelayForCacheSync:Z

    .line 65
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadCompleteHandlers:Ljava/util/List;

    const/4 v0, 0x1

    .line 93
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->autoSetHashCodeForSameTask:Z

    .line 100
    new-instance v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    .line 101
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    .line 102
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    .line 103
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    return-void
.end method

.method public constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

    .line 107
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;-><init>()V

    .line 108
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    return-void
.end method

.method private addAll(Landroid/util/SparseArray;Landroid/util/SparseArray;)V
    .locals 4

    if-eqz p1, :cond_1

    if-nez p2, :cond_0

    goto :goto_1

    .line 850
    :cond_0
    invoke-virtual {p1}, Landroid/util/SparseArray;->size()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    .line 852
    invoke-virtual {p1, v1}, Landroid/util/SparseArray;->keyAt(I)I

    move-result v2

    .line 853
    invoke-virtual {p1, v2}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {p2, v2, v3}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    return-void
.end method

.method private addListenerToDownloadingSameTask(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)V
    .locals 6

    .line 619
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadListeners(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)Landroid/util/SparseArray;

    move-result-object v0

    .line 620
    monitor-enter v0

    const/4 v1, 0x0

    move v2, v1

    .line 621
    :goto_0
    :try_start_0
    invoke-virtual {v0}, Landroid/util/SparseArray;->size()I

    move-result v3

    if-ge v2, v3, :cond_1

    .line 622
    invoke-virtual {v0, v2}, Landroid/util/SparseArray;->keyAt(I)I

    move-result v3

    .line 623
    invoke-virtual {v0, v3}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    if-eqz v3, :cond_0

    .line 625
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object v4

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadId()I

    move-result v5

    invoke-virtual {v4, v5, v3, p1, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->addDownloadListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 628
    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method private copyListeners(Landroid/util/SparseArray;Landroid/util/SparseArray;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;",
            ">;",
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;",
            ">;)V"
        }
    .end annotation

    .line 733
    invoke-virtual {p1}, Landroid/util/SparseArray;->clear()V

    const/4 v0, 0x0

    .line 734
    :goto_0
    invoke-virtual {p2}, Landroid/util/SparseArray;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 735
    invoke-virtual {p2, v0}, Landroid/util/SparseArray;->keyAt(I)I

    move-result v1

    .line 736
    invoke-virtual {p2, v1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    if-eqz v2, :cond_0

    .line 738
    invoke-virtual {p1, v1, v2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private removeAll(Landroid/util/SparseArray;Landroid/util/SparseArray;)V
    .locals 3

    if-eqz p1, :cond_1

    if-nez p2, :cond_0

    goto :goto_1

    .line 861
    :cond_0
    invoke-virtual {p2}, Landroid/util/SparseArray;->size()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    .line 863
    invoke-virtual {p2, v1}, Landroid/util/SparseArray;->keyAt(I)I

    move-result v2

    .line 864
    invoke-virtual {p1, v2}, Landroid/util/SparseArray;->remove(I)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    return-void
.end method

.method private setChunkCalculator()V
    .locals 4

    .line 907
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getThrottleNetSpeed()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    .line 908
    new-instance v0, Lcom/ss/android/socialbase/downloader/model/DownloadTask$2;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask$2;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->chunkStategy(Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    :cond_0
    return-void
.end method


# virtual methods
.method public addDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 2

    .line 886
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadCompleteHandlers:Ljava/util/List;

    monitor-enter v0

    if-eqz p1, :cond_1

    .line 887
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadCompleteHandlers:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 889
    :cond_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadCompleteHandlers:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 890
    monitor-exit v0

    return-object p0

    .line 888
    :cond_1
    :goto_0
    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p1

    .line 890
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public addDownloadListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V
    .locals 1

    if-nez p2, :cond_0

    return-void

    :cond_0
    if-eqz p4, :cond_1

    .line 718
    iget-object p4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    if-eqz p4, :cond_1

    .line 719
    invoke-interface {p4, p3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 720
    iget-object p4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerHashCodeMap:Landroid/util/SparseArray;

    monitor-enter p4

    .line 721
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerHashCodeMap:Landroid/util/SparseArray;

    invoke-virtual {v0, p1, p3}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    .line 722
    monitor-exit p4

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    .line 724
    :cond_1
    :goto_0
    invoke-virtual {p0, p3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadListeners(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)Landroid/util/SparseArray;

    move-result-object p3

    if-nez p3, :cond_2

    return-void

    .line 727
    :cond_2
    monitor-enter p3

    .line 728
    :try_start_1
    invoke-virtual {p3, p1, p2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    .line 729
    monitor-exit p3

    return-void

    :catchall_1
    move-exception p1

    monitor-exit p3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw p1
.end method

.method public addListenerToDownloadingSameTask()V
    .locals 5

    const-string v0, "DownloadTask"

    const-string v1, "same task just tryDownloading, so add listener in last task instead of tryDownload"

    .line 607
    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 608
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v0, :cond_0

    .line 609
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isAddListenerToSameTask()Z

    move-result v0

    if-nez v0, :cond_0

    .line 610
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setAddListenerToSameTask(Z)V

    .line 613
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->MAIN:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-direct {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->addListenerToDownloadingSameTask(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)V

    .line 614
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-direct {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->addListenerToDownloadingSameTask(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)V

    .line 615
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->monitorDepend:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x3eb

    const-string v4, "has another same task, add Listener to old task"

    invoke-direct {v2, v3, v4}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    const/4 v3, 0x0

    invoke-static {v0, v1, v2, v3}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSendWithTaskMonitor(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V

    return-void
.end method

.method public addListenerToSameTask(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 480
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->addListenerToSameTask(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public asyncDownload(Lcom/ss/android/socialbase/downloader/downloader/IDownloadStartCallback;)V
    .locals 1

    .line 589
    new-instance v0, Lcom/ss/android/socialbase/downloader/model/DownloadTask$1;

    invoke-direct {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask$1;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/downloader/IDownloadStartCallback;)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/thread/DownloadThreadPool;->executeOP(Ljava/lang/Runnable;)V

    return-void
.end method

.method public declared-synchronized autoCalAndGetHashCodeForSameTask()I
    .locals 1

    monitor-enter p0

    .line 666
    :try_start_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->MAIN:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getSingleDownloadListener(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v0

    if-nez v0, :cond_0

    .line 668
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getSingleDownloadListener(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v0

    :cond_0
    if-eqz v0, :cond_1

    .line 671
    invoke-virtual {v0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->hashCodeForSameTask:I

    .line 673
    :cond_1
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->hashCodeForSameTask:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public autoResumed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 388
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->autoResumed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public autoSetHashCodeForSameTask(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 490
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->autoSetHashCodeForSameTask:Z

    return-object p0
.end method

.method public backUpUrlRetryCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 343
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->backUpUrlRetryCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public backUpUrls(Ljava/util/List;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/ss/android/socialbase/downloader/model/DownloadTask;"
        }
    .end annotation

    .line 368
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->backUpUrls(Ljava/util/List;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public canShowNotification()Z
    .locals 1

    .line 168
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v0, :cond_0

    .line 169
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->canShowNotification()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public chunkAdjustCalculator(Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 180
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    return-object p0
.end method

.method public chunkStategy(Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 175
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->chunkStrategy:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    return-object p0
.end method

.method public copyInterfaceFromNewTask(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
    .locals 3

    .line 774
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    .line 775
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->chunkStrategy:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->chunkStrategy:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    .line 776
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 777
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    iget-object v1, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    .line 778
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    monitor-enter v0

    .line 779
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    invoke-virtual {v1}, Landroid/util/SparseArray;->clear()V

    .line 780
    iget-object v1, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    invoke-direct {p0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->addAll(Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    .line 781
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    .line 782
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    monitor-enter v1

    .line 783
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    invoke-virtual {v0}, Landroid/util/SparseArray;->clear()V

    .line 784
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    invoke-direct {p0, v0, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->addAll(Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    .line 785
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 786
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    monitor-enter v0

    .line 787
    :try_start_2
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    invoke-virtual {v1}, Landroid/util/SparseArray;->clear()V

    .line 788
    iget-object v1, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    invoke-direct {p0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->addAll(Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    .line 789
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 790
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationEventListener:Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationEventListener:Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    .line 791
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->interceptor:Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->interceptor:Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;

    .line 792
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->depend:Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->depend:Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;

    .line 793
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->monitorDepend:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->monitorDepend:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    .line 794
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->forbiddenHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->forbiddenHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

    .line 795
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->diskSpaceHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->diskSpaceHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    .line 796
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    .line 797
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    .line 798
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->fileUriProvider:Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->fileUriProvider:Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    .line 800
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadCompleteHandlers:Ljava/util/List;

    monitor-enter v1

    .line 801
    :try_start_3
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadCompleteHandlers:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 802
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadCompleteHandlers:Ljava/util/List;

    iget-object p1, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadCompleteHandlers:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 803
    monitor-exit v1

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    throw p1

    :catchall_1
    move-exception p1

    .line 789
    :try_start_4
    monitor-exit v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    throw p1

    :catchall_2
    move-exception p1

    .line 785
    :try_start_5
    monitor-exit v1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    throw p1

    :catchall_3
    move-exception p1

    .line 781
    :try_start_6
    monitor-exit v0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    throw p1
.end method

.method public copyListenerFromPendingTask(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
    .locals 4

    .line 807
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    if-nez v1, :cond_1

    goto :goto_0

    .line 811
    :cond_1
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    invoke-interface {v2, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 813
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    invoke-interface {v2, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 817
    :cond_2
    :try_start_0
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    invoke-virtual {v0}, Landroid/util/SparseArray;->size()I

    move-result v0

    if-eqz v0, :cond_3

    .line 818
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    .line 819
    :try_start_1
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    iget-object v2, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    invoke-direct {p0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->removeAll(Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    .line 820
    iget-object v1, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    invoke-direct {p0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->addAll(Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    .line 823
    monitor-exit v0

    goto :goto_1

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1

    .line 825
    :cond_3
    :goto_1
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    invoke-virtual {v0}, Landroid/util/SparseArray;->size()I

    move-result v0

    if-eqz v0, :cond_4

    .line 826
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    monitor-enter v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 827
    :try_start_3
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    iget-object v2, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    invoke-direct {p0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->removeAll(Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    .line 828
    iget-object v1, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    invoke-direct {p0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->addAll(Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    .line 831
    monitor-exit v0

    goto :goto_2

    :catchall_1
    move-exception p1

    monitor-exit v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :try_start_4
    throw p1

    .line 833
    :cond_4
    :goto_2
    iget-object v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    invoke-virtual {v0}, Landroid/util/SparseArray;->size()I

    move-result v0

    if-eqz v0, :cond_5

    .line 834
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    monitor-enter v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    .line 835
    :try_start_5
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    iget-object v2, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    invoke-direct {p0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->removeAll(Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    .line 836
    iget-object p1, p1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    invoke-direct {p0, p1, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->addAll(Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    .line 839
    monitor-exit v0

    goto :goto_3

    :catchall_2
    move-exception p1

    monitor-exit v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    :try_start_6
    throw p1
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    :catchall_3
    move-exception p1

    .line 842
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_5
    :goto_3
    return-void
.end method

.method public deleteCacheIfCheckFailed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 541
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->deleteCacheIfCheckFailed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public depend(Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 257
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->depend:Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;

    return-object p0
.end method

.method public diskSpaceHandler(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 277
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->diskSpaceHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    return-object p0
.end method

.method public distinctDirectory(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 551
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->distinctDirectory(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public download()I
    .locals 3

    .line 567
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->build()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 568
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 570
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->generateTaskId()V

    const/4 v0, 0x0

    .line 573
    invoke-static {p0, v0, v1}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSend(Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V

    goto :goto_0

    .line 575
    :cond_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->copyTaskIdFromCacheData(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 577
    :goto_0
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->setChunkCalculator()V

    .line 578
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V

    .line 579
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-nez v0, :cond_1

    return v1

    .line 582
    :cond_1
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    return v0
.end method

.method public downloadSetting(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 496
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->downloadSetting(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public enqueueType(Lcom/ss/android/socialbase/downloader/constants/EnqueueType;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 455
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->enqueueType(Lcom/ss/android/socialbase/downloader/constants/EnqueueType;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public executorGroup(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 506
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->executorGroup(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public expectFileLength(J)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 408
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->expectFileLength(J)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public expiredRedownload(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 536
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->expiredRedownload(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public extra(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 307
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->extra(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public extraHeaders(Ljava/util/List;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;)",
            "Lcom/ss/android/socialbase/downloader/model/DownloadTask;"
        }
    .end annotation

    .line 317
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->extraHeaders(Ljava/util/List;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public extraMonitorStatus([I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 531
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->extraMonitorStatus([I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public fileUriProvider(Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 470
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->fileUriProvider:Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    return-object p0
.end method

.method public forbiddenHandler(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 272
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->forbiddenHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

    return-object p0
.end method

.method public force(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 348
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->force(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public getChunkAdjustCalculator()Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;
    .locals 1

    .line 770
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    return-object v0
.end method

.method public getChunkStrategy()Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;
    .locals 1

    .line 132
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->chunkStrategy:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    return-object v0
.end method

.method public getDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;
    .locals 1

    .line 124
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->depend:Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;

    return-object v0
.end method

.method public getDiskSpaceHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;
    .locals 1

    .line 144
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->diskSpaceHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    return-object v0
.end method

.method public getDownloadCompleteHandlerByIndex(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;
    .locals 2

    .line 874
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadCompleteHandlers:Ljava/util/List;

    monitor-enter v0

    .line 875
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadCompleteHandlers:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge p1, v1, :cond_0

    .line 876
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadCompleteHandlers:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;

    monitor-exit v0

    return-object p1

    .line 878
    :cond_0
    monitor-exit v0

    const/4 p1, 0x0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public getDownloadCompleteHandlers()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;",
            ">;"
        }
    .end annotation

    .line 870
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadCompleteHandlers:Ljava/util/List;

    return-object v0
.end method

.method public getDownloadId()I
    .locals 1

    .line 601
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 603
    :cond_0
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    return v0
.end method

.method public getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 96
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    return-object v0
.end method

.method public getDownloadListenerByIndex(Lcom/ss/android/socialbase/downloader/constants/ListenerType;I)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;
    .locals 2

    .line 652
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadListeners(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)Landroid/util/SparseArray;

    move-result-object p1

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    if-gez p2, :cond_0

    goto :goto_0

    .line 655
    :cond_0
    monitor-enter p1

    .line 656
    :try_start_0
    invoke-virtual {p1}, Landroid/util/SparseArray;->size()I

    move-result v1

    if-ge p2, v1, :cond_1

    .line 657
    invoke-virtual {p1, p2}, Landroid/util/SparseArray;->keyAt(I)I

    move-result p2

    .line 658
    invoke-virtual {p1, p2}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    monitor-exit p1

    return-object p2

    .line 660
    :cond_1
    monitor-exit p1

    return-object v0

    :catchall_0
    move-exception p2

    .line 662
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p2

    :cond_2
    :goto_0
    return-object v0
.end method

.method public getDownloadListenerSize(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)I
    .locals 1

    .line 643
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadListeners(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)Landroid/util/SparseArray;

    move-result-object p1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    .line 646
    :cond_0
    monitor-enter p1

    .line 647
    :try_start_0
    invoke-virtual {p1}, Landroid/util/SparseArray;->size()I

    move-result v0

    monitor-exit p1

    return v0

    :catchall_0
    move-exception v0

    .line 648
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0
.end method

.method public getDownloadListeners(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)Landroid/util/SparseArray;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/ss/android/socialbase/downloader/constants/ListenerType;",
            ")",
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;",
            ">;"
        }
    .end annotation

    .line 632
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->MAIN:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    if-ne p1, v0, :cond_0

    .line 633
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    return-object p1

    .line 634
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    if-ne p1, v0, :cond_1

    .line 635
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    return-object p1

    .line 636
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->NOTIFICATION:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    if-ne p1, v0, :cond_2

    .line 637
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    return-object p1

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method

.method public getFileUriProvider()Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;
    .locals 1

    .line 164
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->fileUriProvider:Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    return-object v0
.end method

.method public getForbiddenHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;
    .locals 1

    .line 140
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->forbiddenHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

    return-object v0
.end method

.method public getHashCodeForSameTask()I
    .locals 1

    .line 156
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->hashCodeForSameTask:I

    return v0
.end method

.method public getInterceptor()Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;
    .locals 1

    .line 120
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->interceptor:Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;

    return-object v0
.end method

.method public getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->monitorDepend:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    return-object v0
.end method

.method public getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;
    .locals 1

    .line 152
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    return-object v0
.end method

.method public getNotificationEventListener()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;
    .locals 1

    .line 148
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationEventListener:Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    return-object v0
.end method

.method public getRetryDelayTimeCalculator()Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;
    .locals 1

    .line 136
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    return-object v0
.end method

.method public getSingleDownloadListener(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;
    .locals 1

    .line 677
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    return-object p1
.end method

.method public hashCodeForSameTask(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 485
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->hashCodeForSameTask:I

    return-object p0
.end method

.method public headConnectionAvailable(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 460
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->headConnectionAvailable(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public iconUrl(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 501
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->iconUrl(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public ignoreDataVerify(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 465
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->ignoreDataVerify(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public interceptor(Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 252
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->interceptor:Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;

    return-object p0
.end method

.method public isAutoSetHashCodeForSameTask()Z
    .locals 1

    .line 160
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->autoSetHashCodeForSameTask:Z

    return v0
.end method

.method public isNeedDelayForCacheSync()Z
    .locals 1

    .line 112
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->needDelayForCacheSync:Z

    return v0
.end method

.method public isOpenLimitSpeed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 516
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->isOpenLimitSpeed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public mainThreadListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    if-nez p1, :cond_0

    return-object p0

    .line 192
    :cond_0
    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result v0

    invoke-virtual {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListenerWithHashCode(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object p1

    return-object p1
.end method

.method public mainThreadListenerWithHashCode(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 2

    if-eqz p2, :cond_0

    .line 197
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    monitor-enter v0

    .line 198
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    invoke-virtual {v1, p1, p2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    .line 199
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 200
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->MAIN:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-interface {v0, v1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 201
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerHashCodeMap:Landroid/util/SparseArray;

    monitor-enter p2

    .line 202
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerHashCodeMap:Landroid/util/SparseArray;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->MAIN:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-virtual {v0, p1, v1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    .line 203
    monitor-exit p2

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1

    :catchall_1
    move-exception p1

    .line 199
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw p1

    :cond_0
    :goto_0
    return-object p0
.end method

.method public maxBytes(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 322
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->maxBytes(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public maxProgressCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 358
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->maxProgressCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public md5(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 403
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->md5(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public mimeType(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 373
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->mimeType(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public minProgressTimeMsInterval(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 363
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->minProgressTimeMsInterval(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public monitorDepend(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 262
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->monitorDepend:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    return-object p0
.end method

.method public monitorScene(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 526
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->monitorScene(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public name(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 282
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->name(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public needChunkDowngradeRetry(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 440
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needChunkDowngradeRetry(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public needDefaultHttpServiceBackUp(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 423
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needDefaultHttpServiceBackUp(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public needHttpsToHttpRetry(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 383
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needHttpsToHttpRetry(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public needIndependentProcess(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 450
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needIndependentProcess(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public needPostProgress(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 353
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needPostProgress(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public needRetryDelay(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 413
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needRetryDelay(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public needReuseChunkRunnable(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 445
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needReuseChunkRunnable(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public needReuseFirstConnection(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 428
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needReuseFirstConnection(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public needSDKMonitor(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 521
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needSDKMonitor(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public newSaveTempFileEnable(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-object p0
.end method

.method public notificationClickCallback(Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 267
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    return-object p0
.end method

.method public notificationEventListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 247
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationEventListener:Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    return-object p0
.end method

.method public notificationListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    if-nez p1, :cond_0

    return-object p0

    .line 230
    :cond_0
    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result v0

    invoke-virtual {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListenerWithHashCode(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object p1

    return-object p1
.end method

.method public notificationListenerWithHashCode(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 2

    if-eqz p2, :cond_0

    .line 235
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    monitor-enter v0

    .line 236
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    invoke-virtual {v1, p1, p2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    .line 237
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 238
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->NOTIFICATION:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-interface {v0, v1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 239
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerHashCodeMap:Landroid/util/SparseArray;

    monitor-enter p2

    .line 240
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerHashCodeMap:Landroid/util/SparseArray;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->NOTIFICATION:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-virtual {v0, p1, v1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    .line 241
    monitor-exit p2

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1

    :catchall_1
    move-exception p1

    .line 237
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw p1

    :cond_0
    :goto_0
    return-object p0
.end method

.method public onlyWifi(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 312
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->onlyWifi(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public outIp([Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 328
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->outIp([Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public outSize([I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 333
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->outSize([I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public packageName(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 398
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->packageName(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public removeDownloadListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V
    .locals 1

    .line 682
    invoke-virtual {p0, p3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadListeners(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)Landroid/util/SparseArray;

    move-result-object v0

    if-nez v0, :cond_1

    if-eqz p4, :cond_0

    .line 684
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {p1, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 685
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {p1, p3}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void

    .line 689
    :cond_1
    monitor-enter v0

    if-eqz p4, :cond_3

    .line 691
    :try_start_0
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {p1, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 692
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {p1, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    move-object p2, p1

    check-cast p2, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    .line 693
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {p1, p3}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    if-eqz p2, :cond_5

    .line 697
    invoke-virtual {v0, p2}, Landroid/util/SparseArray;->indexOfValue(Ljava/lang/Object;)I

    move-result p1

    if-ltz p1, :cond_5

    .line 698
    invoke-virtual {v0}, Landroid/util/SparseArray;->size()I

    move-result p2

    if-ge p1, p2, :cond_5

    .line 699
    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->removeAt(I)V

    goto :goto_0

    .line 703
    :cond_3
    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->remove(I)V

    .line 704
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerHashCodeMap:Landroid/util/SparseArray;

    monitor-enter p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 705
    :try_start_1
    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerHashCodeMap:Landroid/util/SparseArray;

    invoke-virtual {p3, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    if-eqz p3, :cond_4

    .line 706
    iget-object p4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {p4, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p4

    if-eqz p4, :cond_4

    .line 707
    iget-object p4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    invoke-interface {p4, p3}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 708
    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerHashCodeMap:Landroid/util/SparseArray;

    invoke-virtual {p3, p1}, Landroid/util/SparseArray;->remove(I)V

    .line 710
    :cond_4
    monitor-exit p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 712
    :cond_5
    :goto_0
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-void

    :catchall_0
    move-exception p1

    .line 710
    :try_start_3
    monitor-exit p2
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    throw p1

    :catchall_1
    move-exception p1

    .line 712
    monitor-exit v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    throw p1
.end method

.method public retryCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 338
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->retryCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public retryDelayTimeArray(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 418
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->retryDelayTimeArray(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public retryDelayTimeCalculator(Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 0

    .line 185
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    return-object p0
.end method

.method public savePath(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 297
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->savePath(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public setAutoInstall(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 559
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->setAutoInstall(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public setDownloadCompleteHandlers(Ljava/util/List;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;",
            ">;)",
            "Lcom/ss/android/socialbase/downloader/model/DownloadTask;"
        }
    .end annotation

    if-eqz p1, :cond_0

    .line 895
    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 896
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;

    .line 897
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->addDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    goto :goto_0

    :cond_0
    return-object p0
.end method

.method public setDownloadListeners(Landroid/util/SparseArray;Lcom/ss/android/socialbase/downloader/constants/ListenerType;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;",
            ">;",
            "Lcom/ss/android/socialbase/downloader/constants/ListenerType;",
            ")V"
        }
    .end annotation

    if-nez p1, :cond_0

    return-void

    .line 747
    :cond_0
    :try_start_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->MAIN:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    if-ne p2, v0, :cond_1

    .line 748
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    monitor-enter p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    .line 749
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListeners:Landroid/util/SparseArray;

    invoke-direct {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->copyListeners(Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    .line 750
    monitor-exit p2

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1

    .line 751
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    if-ne p2, v0, :cond_2

    .line 752
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    monitor-enter p2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 753
    :try_start_3
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    invoke-direct {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->copyListeners(Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    .line 754
    monitor-exit p2

    goto :goto_0

    :catchall_1
    move-exception p1

    monitor-exit p2
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :try_start_4
    throw p1

    .line 755
    :cond_2
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->NOTIFICATION:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    if-ne p2, v0, :cond_3

    .line 756
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    monitor-enter p2
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    .line 757
    :try_start_5
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListeners:Landroid/util/SparseArray;

    invoke-direct {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->copyListeners(Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    .line 758
    monitor-exit p2

    goto :goto_0

    :catchall_2
    move-exception p1

    monitor-exit p2
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    :try_start_6
    throw p1
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    :catchall_3
    move-exception p1

    .line 761
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    :goto_0
    return-void
.end method

.method public setNeedDelayForCacheSync(Z)V
    .locals 0

    .line 116
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->needDelayForCacheSync:Z

    return-void
.end method

.method public setNotificationEventListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V
    .locals 0

    .line 766
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationEventListener:Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    return-void
.end method

.method public showNotification(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 378
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->showNotification(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public showNotificationForAutoResumed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 393
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->showNotificationForAutoResumed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public subThreadListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    if-nez p1, :cond_0

    return-object p0

    .line 211
    :cond_0
    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result v0

    invoke-virtual {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListenerWithHashCode(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object p1

    return-object p1
.end method

.method public subThreadListenerWithHashCode(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 2

    if-eqz p2, :cond_0

    .line 216
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    monitor-enter v0

    .line 217
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListeners:Landroid/util/SparseArray;

    invoke-virtual {v1, p1, p2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    .line 218
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 219
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerMap:Ljava/util/Map;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-interface {v0, v1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 220
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerHashCodeMap:Landroid/util/SparseArray;

    monitor-enter p2

    .line 221
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->singleListenerHashCodeMap:Landroid/util/SparseArray;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-virtual {v0, p1, v1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    .line 222
    monitor-exit p2

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1

    :catchall_1
    move-exception p1

    .line 218
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw p1

    :cond_0
    :goto_0
    return-object p0
.end method

.method public tempPath(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 302
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->tempPath(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public throttleNetSpeed(J)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 511
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->throttleNetSpeed(J)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public title(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 287
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->title(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public ttnetProtectTimeout(J)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 546
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->ttnetProtectTimeout(J)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method

.method public url(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 292
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadInfoBuilder:Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->url(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    return-object p0
.end method
