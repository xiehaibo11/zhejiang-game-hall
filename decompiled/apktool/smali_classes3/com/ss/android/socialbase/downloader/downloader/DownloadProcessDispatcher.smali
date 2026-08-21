.class public Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;
.super Ljava/lang/Object;


# static fields
.field private static volatile instance:Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;


# instance fields
.field private volatile independentMap:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field private mainThreadHandler:Landroid/os/Handler;

.field private volatile processConnectedListeners:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloaderProcessConnectedListener;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 52
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->independentMap:Landroid/util/SparseArray;

    .line 53
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->mainThreadHandler:Landroid/os/Handler;

    .line 54
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->processConnectedListeners:Ljava/util/List;

    return-void
.end method

.method private getDownloadHandler(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;
    .locals 6

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 144
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v1

    if-nez v1, :cond_1

    return-object v0

    .line 147
    :cond_1
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedIndependentProcess()Z

    move-result v0

    .line 148
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isDownloaderProcess()Z

    move-result v2

    const/4 v3, 0x1

    if-nez v2, :cond_2

    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isMainProcess()Z

    move-result v2

    if-nez v2, :cond_3

    :cond_2
    move v0, v3

    .line 151
    :cond_3
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-virtual {p0, v2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadWithIndependentProcessStatus(I)I

    move-result v2

    const/4 v4, 0x0

    if-ltz v2, :cond_7

    if-eq v2, v0, :cond_7

    if-ne v2, v3, :cond_5

    .line 155
    :try_start_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isMainProcess()Z

    move-result p1

    if-eqz p1, :cond_7

    .line 156
    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-interface {p1, v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->pause(I)V

    .line 157
    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-interface {p1, v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 159
    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->syncDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 161
    :cond_4
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result p1

    if-le p1, v3, :cond_7

    .line 162
    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-interface {p1, v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadChunk(I)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_7

    .line 164
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseHostChunkList(Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    .line 165
    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v2

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v5

    invoke-interface {v2, v5, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->syncDownloadChunks(ILjava/util/List;)V

    goto :goto_0

    .line 170
    :cond_5
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isMainProcess()Z

    move-result v2

    if-eqz v2, :cond_6

    .line 171
    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-interface {p1, v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->pause(I)V

    .line 172
    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-interface {p1, v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadChunk(I)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_7

    .line 174
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseHostChunkList(Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    .line 175
    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v2

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v5

    invoke-interface {v2, v5, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->syncDownloadChunks(ILjava/util/List;)V

    goto :goto_0

    .line 178
    :cond_6
    invoke-virtual {p1, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->setNeedDelayForCacheSync(Z)V

    .line 179
    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-interface {p1, v3, v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->dispatchProcessCallback(II)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 186
    :catchall_0
    :cond_7
    :goto_0
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    if-ne v0, v3, :cond_8

    move v1, v3

    goto :goto_1

    :cond_8
    move v1, v4

    :goto_1
    invoke-virtual {p0, p1, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->setDownloadWithIndependentProcessStatus(IZ)V

    if-ne v0, v3, :cond_9

    goto :goto_2

    :cond_9
    move v3, v4

    .line 187
    :goto_2
    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p1

    return-object p1
.end method

.method public static getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;
    .locals 2

    .line 44
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->instance:Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    if-nez v0, :cond_0

    .line 45
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    monitor-enter v0

    .line 46
    :try_start_0
    new-instance v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->instance:Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    .line 47
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 49
    :cond_0
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->instance:Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    return-object v0
.end method

.method private handleDownloadInfos(Ljava/util/List;Ljava/util/List;Landroid/util/SparseArray;)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;",
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .line 370
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p1, :cond_1

    .line 372
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v1, :cond_0

    .line 373
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_0

    .line 374
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-virtual {p3, v2, v1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    goto :goto_0

    :cond_1
    if-eqz p2, :cond_3

    .line 380
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_2
    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz p2, :cond_2

    .line 381
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-virtual {p3, v1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-nez v1, :cond_2

    .line 382
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-virtual {p3, v1, p2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    goto :goto_1

    :cond_3
    const/4 p1, 0x0

    .line 387
    :goto_2
    invoke-virtual {p3}, Landroid/util/SparseArray;->size()I

    move-result p2

    if-ge p1, p2, :cond_4

    .line 388
    invoke-virtual {p3, p1}, Landroid/util/SparseArray;->keyAt(I)I

    move-result p2

    .line 389
    invoke-virtual {p3, p2}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 390
    invoke-interface {v0, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 p1, p1, 0x1

    goto :goto_2

    :cond_4
    return-object v0
.end method


# virtual methods
.method public addDownloadListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V
    .locals 6

    .line 459
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 462
    :cond_0
    invoke-virtual {p2}, Ljava/lang/Object;->hashCode()I

    move-result v2

    move v1, p1

    move-object v3, p2

    move-object v4, p3

    move v5, p4

    invoke-interface/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V

    return-void
.end method

.method public addDownloadListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;ZZ)V
    .locals 7

    .line 466
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 469
    :cond_0
    invoke-virtual {p2}, Ljava/lang/Object;->hashCode()I

    move-result v2

    move v1, p1

    move-object v3, p2

    move-object v4, p3

    move v5, p4

    move v6, p5

    invoke-interface/range {v0 .. v6}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;ZZ)V

    return-void
.end method

.method public canResume(I)Z
    .locals 1

    .line 239
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 242
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->canResume(I)Z

    move-result p1

    return p1
.end method

.method public cancel(IZ)V
    .locals 3

    .line 200
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isMainProcess()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_3

    const/high16 v0, 0x800000

    .line 201
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadExpSwitchCode;->isSwitchEnable(I)Z

    move-result v0

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    .line 208
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 210
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->cancel(IZ)V

    .line 213
    :cond_0
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 215
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->cancel(IZ)V

    goto :goto_0

    .line 218
    :cond_1
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 220
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->cancel(IZ)V

    .line 223
    :cond_2
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 225
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->cancel(IZ)V

    goto :goto_0

    .line 229
    :cond_3
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 231
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->cancel(IZ)V

    .line 233
    :cond_4
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p2

    const/4 v0, 0x2

    invoke-interface {p2, v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->dispatchProcessCallback(II)V

    :cond_5
    :goto_0
    return-void
.end method

.method public clearDownloadData(IZ)V
    .locals 1

    .line 435
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 438
    :cond_0
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->clearDownloadData(IZ)V

    return-void
.end method

.method public dispatchDownloaderProcessConnectedEvent()V
    .locals 3

    .line 88
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->processConnectedListeners:Ljava/util/List;

    monitor-enter v0

    .line 89
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->processConnectedListeners:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 90
    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 91
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/socialbase/downloader/depend/IDownloaderProcessConnectedListener;

    if-eqz v2, :cond_0

    .line 93
    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloaderProcessConnectedListener;->onConnected()V

    goto :goto_0

    .line 96
    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public forceDownloadIngoreRecommendSize(I)V
    .locals 1

    .line 443
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 446
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->forceDownloadIngoreRecommendSize(I)V

    return-void
.end method

.method public getAllDownloadInfo()Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .line 518
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    const/4 v1, 0x0

    .line 520
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 523
    invoke-interface {v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getAllDownloadInfo()Ljava/util/List;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, v2

    :goto_0
    const/4 v3, 0x1

    .line 525
    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 528
    invoke-interface {v3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getAllDownloadInfo()Ljava/util/List;

    move-result-object v2

    .line 530
    :cond_1
    invoke-direct {p0, v1, v2, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->handleDownloadInfos(Ljava/util/List;Ljava/util/List;Landroid/util/SparseArray;)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public getCurBytes(I)J
    .locals 2

    .line 273
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    const-wide/16 v0, 0x0

    return-wide v0

    .line 276
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getCurBytes(I)J

    move-result-wide v0

    return-wide v0
.end method

.method public getDownloadFileUriProvider(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;
    .locals 1

    .line 597
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 600
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadFileUriProvider(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;
    .locals 1

    .line 138
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadWithIndependentProcessStatus(I)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isDownloaderProcess()Z

    move-result p1

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadId(Ljava/lang/String;Ljava/lang/String;)I
    .locals 0

    .line 304
    invoke-static {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadId(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 297
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 300
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadInfo(Ljava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 0

    .line 309
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadId(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    .line 310
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p2

    if-nez p2, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 313
    :cond_0
    invoke-interface {p2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;
    .locals 2
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

    const/4 v0, 0x0

    .line 317
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x1

    .line 318
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    invoke-interface {v1, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    if-nez v0, :cond_0

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    if-eqz v0, :cond_1

    if-eqz p1, :cond_1

    .line 323
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1, v0}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    .line 324
    invoke-interface {v1, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    return-object v1

    :cond_1
    if-eqz v0, :cond_2

    goto :goto_0

    :cond_2
    move-object v0, p1

    :goto_0
    return-object v0
.end method

.method public getDownloadNotificationEventListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;
    .locals 1

    .line 331
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 334
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadNotificationEventListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadWithIndependentProcessStatus(I)I
    .locals 2

    .line 122
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->supportMultiProc()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 p1, -0x1

    return p1

    .line 125
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isDownloaderProcess()Z

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x1

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    invoke-interface {v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isServiceAlive()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 126
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadWithIndependentProcessStatus(I)I

    move-result p1

    return p1

    .line 128
    :cond_1
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadWithIndependentProcessStatusInner(I)I

    move-result p1

    return p1
.end method

.method public declared-synchronized getDownloadWithIndependentProcessStatusInner(I)I
    .locals 1

    monitor-enter p0

    .line 132
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->independentMap:Landroid/util/SparseArray;

    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    const/4 p1, -0x1

    .line 133
    monitor-exit p0

    return p1

    .line 134
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->independentMap:Landroid/util/SparseArray;

    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public getDownloadingDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 4
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

    .line 502
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    const/4 v1, 0x0

    .line 504
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 507
    invoke-interface {v1, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadingDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, v2

    :goto_0
    const/4 v3, 0x1

    .line 509
    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 512
    invoke-interface {v3, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadingDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object v2

    .line 514
    :cond_1
    invoke-direct {p0, v1, v2, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->handleDownloadInfos(Ljava/util/List;Ljava/util/List;Landroid/util/SparseArray;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 4
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
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    const/4 v1, 0x0

    .line 356
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 359
    invoke-interface {v1, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, v2

    :goto_0
    const/4 v3, 0x1

    .line 361
    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 364
    invoke-interface {v3, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object v2

    .line 366
    :cond_1
    invoke-direct {p0, v1, v2, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->handleDownloadInfos(Ljava/util/List;Ljava/util/List;Landroid/util/SparseArray;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;
    .locals 1

    .line 338
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 341
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object p1

    return-object p1
.end method

.method public getStatus(I)I
    .locals 1

    .line 281
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 284
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getStatus(I)I

    move-result p1

    return p1
.end method

.method public getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 4
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

    .line 397
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    const/4 v1, 0x0

    .line 399
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 402
    invoke-interface {v1, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, v2

    :goto_0
    const/4 v3, 0x1

    .line 404
    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 407
    invoke-interface {v3, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object v2

    .line 409
    :cond_1
    invoke-direct {p0, v1, v2, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->handleDownloadInfos(Ljava/util/List;Ljava/util/List;Landroid/util/SparseArray;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 4
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

    .line 486
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    const/4 v1, 0x0

    .line 488
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 491
    invoke-interface {v1, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, v2

    :goto_0
    const/4 v3, 0x1

    .line 493
    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 496
    invoke-interface {v3, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object v2

    .line 498
    :cond_1
    invoke-direct {p0, v1, v2, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->handleDownloadInfos(Ljava/util/List;Ljava/util/List;Landroid/util/SparseArray;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public isDownloadCacheSyncSuccess()Z
    .locals 2

    const/4 v0, 0x0

    .line 590
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 592
    invoke-interface {v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isDownloadCacheSyncSuccess()Z

    move-result v0

    :cond_0
    return v0
.end method

.method public isDownloadSuccessAndFileNotExist(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 475
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    if-nez v1, :cond_1

    return v0

    .line 478
    :cond_1
    invoke-interface {v1, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isDownloadSuccessAndFileNotExist(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    return p1
.end method

.method public isDownloading(I)Z
    .locals 1

    .line 289
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 292
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isDownloading(I)Z

    move-result p1

    return p1
.end method

.method public isHttpServiceInit()Z
    .locals 1

    .line 482
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->isHttpServiceInit()Z

    move-result v0

    return v0
.end method

.method public pause(I)V
    .locals 1

    .line 192
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 195
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->pause(I)V

    return-void
.end method

.method public pauseAll()V
    .locals 1

    const/4 v0, 0x0

    .line 263
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 265
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->pauseAll()V

    :cond_0
    const/4 v0, 0x1

    .line 266
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 268
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->pauseAll()V

    :cond_1
    return-void
.end method

.method public recordTaskProcessIndependent(I)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 574
    :cond_0
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    invoke-virtual {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->setDownloadIndependentProcessStatus(IZ)V

    const/4 p1, 0x1

    .line 575
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p1

    if-nez p1, :cond_1

    return-void

    .line 578
    :cond_1
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->startService()V

    return-void
.end method

.method public registerDownloadCacheSyncListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadCacheSyncStatusListener;)V
    .locals 0

    .line 582
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->registerDownloadCacheSyncListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadCacheSyncStatusListener;)V

    return-void
.end method

.method public registerDownloaderProcessConnectedListener(Lcom/ss/android/socialbase/downloader/depend/IDownloaderProcessConnectedListener;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 63
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isDownloaderProcess()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 64
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloaderProcessConnectedListener;->onConnected()V

    return-void

    :cond_1
    const/4 v0, 0x1

    .line 67
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isServiceAlive()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 68
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloaderProcessConnectedListener;->onConnected()V

    .line 70
    :cond_2
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->processConnectedListeners:Ljava/util/List;

    monitor-enter v0

    .line 71
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->processConnectedListeners:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 72
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->processConnectedListeners:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 74
    :cond_3
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public removeDownloadListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V
    .locals 6

    .line 451
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p2, :cond_1

    const/4 v1, 0x0

    goto :goto_0

    .line 454
    :cond_1
    invoke-virtual {p2}, Ljava/lang/Object;->hashCode()I

    move-result v1

    :goto_0
    move v2, v1

    move v1, p1

    move-object v3, p2

    move-object v4, p3

    move v5, p4

    invoke-interface/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->removeDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V

    return-void
.end method

.method public restart(I)V
    .locals 1

    .line 255
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 258
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->restart(I)V

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

    const/4 v0, 0x0

    .line 414
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 416
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->restartAllFailedDownloadTasks(Ljava/util/List;)V

    :cond_0
    const/4 v0, 0x1

    .line 417
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 419
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->restartAllFailedDownloadTasks(Ljava/util/List;)V

    :cond_1
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

    const/4 v0, 0x0

    .line 423
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 425
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->restartAllPauseReserveOnWifiDownloadTasks(Ljava/util/List;)V

    :cond_0
    const/4 v0, 0x1

    .line 427
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 429
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->restartAllPauseReserveOnWifiDownloadTasks(Ljava/util/List;)V

    :cond_1
    return-void
.end method

.method public resume(I)V
    .locals 1

    .line 247
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 250
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->resume(I)V

    return-void
.end method

.method public retryDelayStart(I)Z
    .locals 1

    .line 555
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 558
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->retryDelayStart(I)Z

    move-result p1

    return p1
.end method

.method public declared-synchronized setDownloadIndependentProcessStatus(IZ)V
    .locals 1

    monitor-enter p0

    .line 117
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->independentMap:Landroid/util/SparseArray;

    if-eqz p2, :cond_0

    sget-object p2, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    goto :goto_0

    :cond_0
    sget-object p2, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    :goto_0
    invoke-virtual {v0, p1, p2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 118
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public setDownloadNotificationEventListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V
    .locals 1

    .line 345
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 348
    :cond_0
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->setDownloadNotificationEventListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V

    return-void
.end method

.method public setDownloadWithIndependentProcessStatus(IZ)V
    .locals 2

    .line 100
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->setDownloadIndependentProcessStatus(IZ)V

    .line 101
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->supportMultiProc()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isDownloaderProcess()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    invoke-interface {v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isServiceAlive()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 102
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->setDownloadWithIndependentProcessStatus(IZ)V

    .line 104
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->isDownloadInMultiProcess()Z

    move-result p2

    if-nez p2, :cond_1

    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isDownloaderProcess()Z

    move-result p2

    if-nez p2, :cond_1

    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isMainProcess()Z

    move-result p2

    if-nez p2, :cond_1

    .line 106
    :try_start_0
    new-instance p2, Landroid/content/Intent;

    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    const-class v1, Lcom/ss/android/socialbase/downloader/impls/DownloadHandleService;

    invoke-direct {p2, v0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v0, "com.ss.android.downloader.action.PROCESS_NOTIFY"

    .line 107
    invoke-virtual {p2, v0}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v0, "extra_download_id"

    .line 108
    invoke-virtual {p2, v0, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 109
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 111
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public setLogLevel(I)V
    .locals 1

    const/4 v0, 0x0

    .line 562
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 564
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->setLogLevel(I)V

    :cond_0
    const/4 v0, 0x1

    .line 566
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 568
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->setLogLevel(I)V

    :cond_1
    return-void
.end method

.method public setThrottleNetSpeed(IJ)V
    .locals 1

    .line 604
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(I)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 609
    :cond_0
    invoke-interface {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->setThrottleNetSpeed(IJ)V

    return-void
.end method

.method public tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
    .locals 5

    .line 534
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadHandler(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-nez v0, :cond_2

    if-eqz p1, :cond_1

    .line 537
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v1

    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x3eb

    const-string v4, "tryDownload but getDownloadHandler failed"

    invoke-direct {v2, v3, v4}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v3

    if-eqz v3, :cond_0

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-static {v0, v1, v2, p1}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSendWithTaskMonitor(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V

    :cond_1
    return-void

    .line 541
    :cond_2
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->isNeedDelayForCacheSync()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 542
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->mainThreadHandler:Landroid/os/Handler;

    new-instance v2, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher$1;

    invoke-direct {v2, p0, v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher$1;-><init>(Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V

    const-wide/16 v3, 0x1f4

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_1

    .line 549
    :cond_3
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V

    :goto_1
    return-void
.end method

.method public unRegisterDownloadCacheSyncListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadCacheSyncStatusListener;)V
    .locals 0

    .line 586
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->unRegisterDownloadCacheSyncListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadCacheSyncStatusListener;)V

    return-void
.end method

.method public unRegisterDownloaderProcessConnectedListener(Lcom/ss/android/socialbase/downloader/depend/IDownloaderProcessConnectedListener;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 80
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->processConnectedListeners:Ljava/util/List;

    monitor-enter v0

    .line 81
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->processConnectedListeners:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 82
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->processConnectedListeners:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 84
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
