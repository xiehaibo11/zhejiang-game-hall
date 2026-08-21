.class public Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;
.implements Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$OnMainProcessRebindErrorListener;
    }
.end annotation


# static fields
.field private static final BIND_MAIN_PROCESS_MAX_TIME:I = 0x5

.field private static final BIND_MAIN_PROCESS_MIN_INTERVAL:I = 0x3a98

.field private static final MAIN_PROCESS_BIND_DELAY:I = 0x3e8

.field private static final TAG:Ljava/lang/String; = "SqlDownloadCacheAidlWra"

.field private static sBindMainProcessTimes:I

.field private static sIsMainProcessAlive:Z

.field private static sLastBindMainProcessTimeMills:J


# instance fields
.field private mCheckAliveRunnable:Ljava/lang/Runnable;

.field private mHandler:Landroid/os/Handler;

.field private mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

.field private mInitLock:Ljava/util/concurrent/CountDownLatch;

.field private mPengingCallback:Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;

.field private mRebindErrorListener:Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener;

.field private mSetInitCallbackFuture:Ljava/util/concurrent/Future;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/Future<",
            "*>;"
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

    .line 66
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 46
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mHandler:Landroid/os/Handler;

    const/4 v0, 0x0

    .line 47
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mPengingCallback:Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;

    .line 50
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$1;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$1;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mCheckAliveRunnable:Ljava/lang/Runnable;

    .line 64
    new-instance v0, Ljava/util/concurrent/CountDownLatch;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mInitLock:Ljava/util/concurrent/CountDownLatch;

    .line 67
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0}, Lcom/ss/android/socialbase/downloader/downloader/SqlDownloadCacheService;->startServiceAndBind(Landroid/content/Context;Landroid/content/ServiceConnection;)V

    return-void
.end method

.method static synthetic access$000()Z
    .locals 1

    .line 34
    sget-boolean v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->sIsMainProcessAlive:Z

    return v0
.end method

.method static synthetic access$002(Z)Z
    .locals 0

    .line 34
    sput-boolean p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->sIsMainProcessAlive:Z

    return p0
.end method

.method static synthetic access$100(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mRebindErrorListener:Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener;

    return-object p0
.end method

.method static synthetic access$200(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mPengingCallback:Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;

    return-object p0
.end method

.method static synthetic access$300(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    return-object p0
.end method

.method static synthetic access$400(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Ljava/util/concurrent/CountDownLatch;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mInitLock:Ljava/util/concurrent/CountDownLatch;

    return-object p0
.end method

.method static synthetic access$500(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Z
    .locals 0

    .line 34
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->bindMainProcessDelayed()Z

    move-result p0

    return p0
.end method

.method static synthetic access$600(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Ljava/lang/Runnable;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mCheckAliveRunnable:Ljava/lang/Runnable;

    return-object p0
.end method

.method static synthetic access$700(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Landroid/os/Handler;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mHandler:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic access$800(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Ljava/util/concurrent/Future;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mSetInitCallbackFuture:Ljava/util/concurrent/Future;

    return-object p0
.end method

.method private bindMainProcessDelayed()Z
    .locals 10

    .line 127
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x0

    const/16 v2, 0x1a

    if-lt v0, v2, :cond_0

    return v1

    .line 130
    :cond_0
    sget-boolean v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->sIsMainProcessAlive:Z

    if-eqz v0, :cond_1

    return v1

    .line 133
    :cond_1
    sget v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->sBindMainProcessTimes:I

    const/4 v2, 0x5

    const-string v3, "SqlDownloadCacheAidlWra"

    if-le v0, v2, :cond_2

    const-string v0, "bindMainProcess: bind too many times!!! "

    .line 134
    invoke-static {v3, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    .line 137
    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    .line 138
    sget-wide v6, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->sLastBindMainProcessTimeMills:J

    sub-long v6, v4, v6

    const-wide/16 v8, 0x3a98

    cmp-long v0, v6, v8

    if-gez v0, :cond_3

    const-string v0, "bindMainProcess: time too short since last bind!!! "

    .line 139
    invoke-static {v3, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    .line 142
    :cond_3
    sget v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->sBindMainProcessTimes:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    sput v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->sBindMainProcessTimes:I

    .line 143
    sput-wide v4, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->sLastBindMainProcessTimeMills:J

    .line 144
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mHandler:Landroid/os/Handler;

    new-instance v2, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$3;

    invoke-direct {v2, p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$3;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)V

    const-wide/16 v3, 0x3e8

    invoke-virtual {v0, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return v1
.end method


# virtual methods
.method public OnDownloadTaskCancel(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 526
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 527
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->OnDownloadTaskCancel(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 530
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskCompleted(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 502
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 503
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->OnDownloadTaskCompleted(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 506
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskConnected(IJLjava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 7

    .line 454
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 455
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    move v2, p1

    move-wide v3, p2

    move-object v5, p4

    move-object v6, p5

    invoke-interface/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->OnDownloadTaskConnected(IJLjava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 458
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskError(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 478
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 479
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->OnDownloadTaskError(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 482
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskIntercept(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 550
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 551
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->OnDownloadTaskIntercept(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 554
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskPause(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 514
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 515
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->OnDownloadTaskPause(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 518
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskPrepare(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 538
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 539
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->OnDownloadTaskPrepare(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 542
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskProgress(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 466
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 467
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->OnDownloadTaskProgress(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 470
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskRetry(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 490
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 491
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->OnDownloadTaskRetry(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 494
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    .locals 1

    .line 328
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 329
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 332
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public addSubDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    .locals 1

    .line 339
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 340
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->addSubDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 343
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public cacheExist(I)Z
    .locals 1

    .line 221
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 222
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->cacheExist(I)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 225
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public clearData()V
    .locals 1

    .line 431
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 432
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->clearData()V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 435
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public ensureDownloadCacheSyncSuccess()Z
    .locals 1

    .line 574
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 575
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->ensureDownloadCacheSyncSuccess()Z

    move-result v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 578
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 v0, 0x0

    return v0
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

    .line 293
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 294
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->getAllDownloadInfo()Ljava/util/List;

    move-result-object v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 297
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 v0, 0x0

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

    .line 305
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 306
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->getDownloadChunk(I)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 309
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 233
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 234
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 237
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

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

    .line 245
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 246
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 249
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

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

    .line 257
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 258
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 261
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getSegmentMap(I)Ljava/util/Map;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;"
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method public getSegments(I)Ljava/util/ArrayList;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/ArrayList<",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;"
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method public bridge synthetic getSegments(I)Ljava/util/List;
    .locals 0

    .line 34
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->getSegments(I)Ljava/util/ArrayList;

    move-result-object p1

    return-object p1
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

    .line 269
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 270
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 273
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

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

    .line 281
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 282
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 285
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public init()V
    .locals 1

    .line 210
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 211
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->init()V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 214
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public init(Landroid/util/SparseArray;Landroid/util/SparseArray;Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;",
            "Landroid/util/SparseArray<",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;>;",
            "Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;",
            ")V"
        }
    .end annotation

    .line 155
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;Landroid/util/SparseArray;Landroid/util/SparseArray;Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    return-void
.end method

.method public isDownloadCacheSyncSuccess()Z
    .locals 1

    .line 562
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 563
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->isDownloadCacheSyncSuccess()Z

    move-result v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 566
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public onDownloadTaskStart(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 442
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 443
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->onDownloadTaskStart(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 446
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    const/4 p1, 0x1

    .line 76
    sput-boolean p1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->sIsMainProcessAlive:Z

    .line 77
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mHandler:Landroid/os/Handler;

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mCheckAliveRunnable:Ljava/lang/Runnable;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 79
    :try_start_0
    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 81
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 83
    :goto_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;

    invoke-direct {v0, p0, p2}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;Landroid/os/IBinder;)V

    invoke-interface {p1, v0}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mSetInitCallbackFuture:Ljava/util/concurrent/Future;

    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    const/4 p1, 0x0

    .line 122
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    const/4 p1, 0x0

    .line 123
    sput-boolean p1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->sIsMainProcessAlive:Z

    return-void
.end method

.method public removeAllDownloadChunk(I)V
    .locals 1

    .line 317
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 318
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->removeAllDownloadChunk(I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 321
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public removeDownloadInfo(I)Z
    .locals 1

    .line 407
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 408
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->removeDownloadInfo(I)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 411
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public removeDownloadTaskData(I)Z
    .locals 1

    .line 419
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 420
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->removeDownloadTaskData(I)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 423
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public removeSegments(I)V
    .locals 0

    return-void
.end method

.method public setInitCallback(Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;)V
    .locals 1

    .line 194
    monitor-enter p0

    .line 195
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 197
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->setInitCallback(Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;)V
    :try_end_1
    .catch Landroid/os/RemoteException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 199
    :try_start_2
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    goto :goto_0

    .line 202
    :cond_0
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mPengingCallback:Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;

    .line 204
    :goto_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p1
.end method

.method public setOnMainProcessRebindErrorCallback(Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener;)V
    .locals 0

    .line 71
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mRebindErrorListener:Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener;

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

    .line 597
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 598
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->syncDownloadChunks(ILjava/util/List;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 601
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public syncDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 586
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 587
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->syncDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 590
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
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

    .line 608
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 609
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 612
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public updateChunkCount(II)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 383
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 384
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->updateChunkCount(II)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 387
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public updateDownloadChunk(IIJ)V
    .locals 1

    .line 350
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 351
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->updateDownloadChunk(IIJ)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 354
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1

    .line 395
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 396
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 399
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public updateSegments(ILjava/util/Map;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;)Z"
        }
    .end annotation

    const/4 p1, 0x0

    return p1
.end method

.method public updateSubDownloadChunk(IIIJ)V
    .locals 7

    .line 361
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 362
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    move v2, p1

    move v3, p2

    move v4, p3

    move-wide v5, p4

    invoke-interface/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->updateSubDownloadChunk(IIIJ)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 365
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public updateSubDownloadChunkIndex(IIII)V
    .locals 1

    .line 372
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v0, :cond_0

    .line 373
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->mISqlDownloadCache:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;->updateSubDownloadChunkIndex(IIII)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 376
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method
