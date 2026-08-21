.class public Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/Handler$Callback;
.implements Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;,
        Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryScheduleHandler;
    }
.end annotation


# static fields
.field private static final MIN_INTERVAL_MS:I = 0xbb8

.field private static final MIN_INTERVAL_MS_ACCELERATION:I = 0x1388

.field public static final NET_TYPE_COMMON:I = 0x1

.field public static final NET_TYPE_NONE:I = 0x0

.field public static final NET_TYPE_WIFI:I = 0x2

.field public static final RETRY_SCHEDULE_NORMAL:I = 0x1

.field public static final RETRY_SCHEDULE_WHEN_APP_BACKGROUND:I = 0x3

.field public static final RETRY_SCHEDULE_WHEN_APP_FOREGROUND:I = 0x4

.field public static final RETRY_SCHEDULE_WHEN_OTHER_CONNECTED:I = 0x5

.field public static final RETRY_SCHEDULE_WHEN_OTHER_SUCCEED:I = 0x2

.field private static final SCHEDULE_ALL_TASK_RETRY_DELAY:I = 0x7d0

.field private static final SCHEDULE_ALL_TASK_RETRY_MIN_INTERVAL:I = 0x2710

.field private static final TAG:Ljava/lang/String; = "RetryScheduler"

.field private static volatile sInstance:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

.field private static sRetryScheduleHandler:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryScheduleHandler;


# instance fields
.field private mConnectivityManager:Landroid/net/ConnectivityManager;

.field private final mContext:Landroid/content/Context;

.field private final mHandler:Landroid/os/Handler;

.field private final mIsDownloaderProcess:Z

.field private mLastHandleAllTaskTime:J

.field private final mRetryInfoList:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;",
            ">;"
        }
    .end annotation
.end field

.field private mWaitingRetryTasksCount:I


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 126
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 91
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1, p0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;Landroid/os/Handler$Callback;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mHandler:Landroid/os/Handler;

    .line 92
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    const/4 v0, 0x0

    .line 95
    iput v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    .line 127
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mContext:Landroid/content/Context;

    .line 128
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->registerNetworkCallback()V

    .line 129
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isDownloaderProcess()Z

    move-result v0

    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mIsDownloaderProcess:Z

    .line 130
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->registerAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V

    return-void
.end method

.method static synthetic access$000(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;)Landroid/content/Context;
    .locals 0

    .line 55
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mContext:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic access$100(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;)Landroid/net/ConnectivityManager;
    .locals 0

    .line 55
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mConnectivityManager:Landroid/net/ConnectivityManager;

    return-object p0
.end method

.method static synthetic access$102(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;Landroid/net/ConnectivityManager;)Landroid/net/ConnectivityManager;
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mConnectivityManager:Landroid/net/ConnectivityManager;

    return-object p1
.end method

.method static synthetic access$200(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;IZ)V
    .locals 0

    .line 55
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->scheduleAllTaskRetry(IZ)V

    return-void
.end method

.method static synthetic access$600(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;)I
    .locals 0

    .line 55
    iget p0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    return p0
.end method

.method static synthetic access$700(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;)I
    .locals 0

    .line 55
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->getNetWorkType()I

    move-result p0

    return p0
.end method

.method static synthetic access$800(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;)Landroid/util/SparseArray;
    .locals 0

    .line 55
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    return-object p0
.end method

.method static synthetic access$900(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;IIZ)V
    .locals 0

    .line 55
    invoke-direct {p0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->doSchedulerRetryInSubThread(IIZ)V

    return-void
.end method

.method private canRetryForAllowErrorCode(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;I)Z
    .locals 4

    .line 474
    iget-object p1, p1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->allowErrorCode:[I

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    .line 475
    array-length v1, p1

    if-nez v1, :cond_0

    goto :goto_1

    .line 478
    :cond_0
    array-length v1, p1

    move v2, v0

    :goto_0
    if-ge v2, v1, :cond_2

    aget v3, p1, v2

    if-ne v3, p2, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    return v0
.end method

.method private canRetryWhenInsufficientSpace(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z
    .locals 9

    const-wide/16 v0, 0x0

    .line 600
    :try_start_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempPath()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getAvailableSpaceBytes(Ljava/lang/String;)J

    move-result-wide v2
    :try_end_0
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    .line 602
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->printStackTrace()V

    move-wide v2, v0

    .line 604
    :goto_0
    instance-of v4, p2, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;

    if-eqz v4, :cond_0

    .line 605
    check-cast p2, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;->getRequiredSpaceBytes()J

    move-result-wide v4

    goto :goto_1

    .line 607
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v4

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v6

    sub-long/2addr v4, v6

    :goto_1
    cmp-long p2, v2, v4

    const/4 v4, 0x1

    if-gez p2, :cond_3

    .line 612
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const/4 p2, 0x0

    const-string v5, "space_fill_part_download"

    .line 613
    invoke-virtual {p1, v5, p2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v5

    if-ne v5, v4, :cond_2

    cmp-long v5, v2, v0

    if-lez v5, :cond_1

    const/16 v5, 0x64

    const-string v6, "space_fill_min_keep_mb"

    .line 615
    invoke-virtual {p1, v6, v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    if-lez p1, :cond_3

    int-to-long v5, p1

    const-wide/32 v7, 0x100000

    mul-long/2addr v5, v7

    sub-long v5, v2, v5

    .line 620
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "retry schedule: available = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2, v3}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->byteToMb(J)D

    move-result-wide v2

    invoke-virtual {v7, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v2, "MB, minKeep = "

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "MB, canDownload = "

    invoke-virtual {v7, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 622
    invoke-static {v5, v6}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->byteToMb(J)D

    move-result-wide v2

    invoke-virtual {v7, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string p1, "MB"

    invoke-virtual {v7, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v2, "RetryScheduler"

    .line 620
    invoke-static {v2, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    cmp-long p1, v5, v0

    if-gtz p1, :cond_3

    const-string p1, "doSchedulerRetryInSubThread: canDownload <= 0 , canRetry = false !!!!"

    .line 624
    invoke-static {v2, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return p2

    :cond_1
    const-string v0, "download_when_space_negative"

    .line 631
    invoke-virtual {p1, v0, p2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    if-eq p1, v4, :cond_3

    :cond_2
    return p2

    :cond_3
    return v4
.end method

.method private createRetryInfo(I)Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;
    .locals 11

    .line 507
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "retry_schedule"

    .line 508
    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v5

    const-string v2, "retry_schedule_config"

    .line 512
    invoke-virtual {v0, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    const/16 v2, 0x3c

    if-eqz v0, :cond_1

    const-string v3, "max_count"

    .line 514
    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    const-string v4, "interval_sec"

    .line 516
    invoke-virtual {v0, v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string v6, "interval_sec_acceleration"

    .line 518
    invoke-virtual {v0, v6, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 520
    sget v6, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v7, 0x15

    const/4 v8, 0x1

    if-lt v6, v7, :cond_0

    sget-object v6, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->sRetryScheduleHandler:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryScheduleHandler;

    if-eqz v6, :cond_0

    const-string v6, "use_job_scheduler"

    .line 522
    invoke-virtual {v0, v6, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    if-ne v6, v8, :cond_0

    move v1, v8

    :cond_0
    const-string v6, "allow_error_code"

    .line 523
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->parserAllowErrorCode(Ljava/lang/String;)[I

    move-result-object v0

    move-object v10, v0

    move v9, v1

    move v0, v2

    move v6, v3

    move v2, v4

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    move-object v10, v0

    move v9, v1

    move v0, v2

    move v6, v0

    .line 531
    :goto_0
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;

    mul-int/lit16 v7, v2, 0x3e8

    mul-int/lit16 v8, v0, 0x3e8

    move-object v3, v1

    move v4, p1

    invoke-direct/range {v3 .. v10}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;-><init>(IIIIIZ[I)V

    return-object v1
.end method

.method private doScheduleAllTaskRetry(IZ)V
    .locals 2

    .line 317
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    .line 318
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$2;-><init>(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;IZ)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method private doSchedulerRetryInSubThread(IIZ)V
    .locals 8

    .line 374
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mContext:Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    .line 379
    :cond_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    monitor-enter v1

    .line 380
    :try_start_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    invoke-virtual {v2, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;

    if-nez v2, :cond_1

    .line 382
    monitor-exit v1

    return-void

    .line 384
    :cond_1
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->access$500(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;)Z

    move-result v3

    const/4 v4, 0x1

    const/4 v5, 0x0

    if-eqz v3, :cond_2

    .line 385
    invoke-static {v2, v5}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->access$502(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;Z)Z

    .line 386
    iget v3, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    sub-int/2addr v3, v4

    iput v3, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    if-gez v3, :cond_2

    .line 388
    iput v5, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    .line 391
    :cond_2
    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 392
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "doSchedulerRetryInSubThread: downloadId = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", retryCount = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 393
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->access$300(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;)I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", mWaitingRetryTasksCount = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "RetryScheduler"

    .line 392
    invoke-static {v3, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 395
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v1

    if-nez v1, :cond_3

    .line 398
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->removeRetryInfo(I)V

    return-void

    .line 401
    :cond_3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "doSchedulerRetryInSubThread\uff0cid:"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v6, "RetryScheduler"

    invoke-static {v6, v3}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 403
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRealStatus()I

    move-result v3

    const/4 v6, -0x3

    if-eq v3, v6, :cond_13

    const/4 v6, -0x4

    if-ne v3, v6, :cond_4

    goto/16 :goto_4

    :cond_4
    const/4 v6, -0x5

    const/4 v7, -0x2

    if-eq v3, v6, :cond_10

    if-ne v3, v7, :cond_5

    .line 411
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isPauseReserveOnWifi()Z

    move-result v6

    if-eqz v6, :cond_5

    goto/16 :goto_3

    :cond_5
    const/4 p1, -0x1

    if-eq v3, p1, :cond_6

    return-void

    :cond_6
    if-nez p2, :cond_8

    .line 437
    iget-boolean v3, v2, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->useJobScheduler:Z

    if-eqz v3, :cond_7

    move v3, v5

    goto :goto_0

    :cond_7
    return-void

    :cond_8
    move v3, v4

    .line 446
    :goto_0
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getFailedException()Lcom/ss/android/socialbase/downloader/exception/BaseException;

    move-result-object v6

    if-eqz v3, :cond_9

    .line 447
    invoke-static {v6}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isInsufficientSpaceError(Ljava/lang/Throwable;)Z

    move-result v7

    if-eqz v7, :cond_9

    .line 448
    invoke-direct {p0, v1, v6}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->canRetryWhenInsufficientSpace(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result v3

    .line 451
    :cond_9
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->increaseRetryCount()V

    if-eqz v3, :cond_b

    .line 453
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "doSchedulerRetry: restart task, ****** id = "

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v2, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->id:I

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v3, "RetryScheduler"

    invoke-static {v3, p2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 454
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->updateRetryTimeStamp(J)V

    if-eqz p3, :cond_a

    .line 456
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->increaseRetryInterval()V

    .line 458
    :cond_a
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->access$300(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;)I

    move-result p2

    invoke-virtual {v1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setRetryScheduleCount(I)V

    .line 459
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result p2

    if-ne p2, p1, :cond_f

    .line 461
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->restart(I)V

    goto :goto_2

    :cond_b
    if-eqz p3, :cond_c

    .line 466
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->increaseRetryInterval()V

    .line 468
    :cond_c
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isOnlyWifi()Z

    move-result p1

    if-nez p1, :cond_e

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isPauseReserveOnWifi()Z

    move-result p1

    if-eqz p1, :cond_d

    goto :goto_1

    :cond_d
    move v4, v5

    .line 469
    :cond_e
    :goto_1
    invoke-direct {p0, v1, v4, p2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->tryStartScheduleRetry(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;ZI)V

    :cond_f
    :goto_2
    return-void

    :cond_10
    :goto_3
    const/4 p2, 0x3

    if-ne v3, v7, :cond_11

    .line 414
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object p3

    invoke-static {p3}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p3

    invoke-virtual {p3}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getReserveWifiStatusListener()Lcom/ss/android/socialbase/downloader/downloader/IReserveWifiStatusListener;

    move-result-object p3

    if-eqz p3, :cond_11

    const/4 v0, 0x4

    .line 416
    invoke-interface {p3, v1, v0, p2}, Lcom/ss/android/socialbase/downloader/downloader/IReserveWifiStatusListener;->onStatusChanged(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;II)V

    .line 420
    :cond_11
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadLaunchHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;

    move-result-object p3

    if-eqz p3, :cond_12

    .line 422
    invoke-static {v1}, Ljava/util/Collections;->singletonList(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    invoke-interface {p3, v0, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;->onLaunchResume(Ljava/util/List;I)V

    .line 424
    :cond_12
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->removeRetryInfo(I)V

    return-void

    .line 407
    :cond_13
    :goto_4
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->removeRetryInfo(I)V

    return-void

    :catchall_0
    move-exception p1

    .line 391
    :try_start_1
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public static getInstance()Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;
    .locals 2

    .line 134
    sget-object v0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->sInstance:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    if-nez v0, :cond_1

    .line 135
    const-class v0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    monitor-enter v0

    .line 136
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->sInstance:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    if-nez v1, :cond_0

    .line 137
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->sInstance:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    .line 139
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 141
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->sInstance:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    return-object v0
.end method

.method private getNetWorkType()I
    .locals 3

    const/4 v0, 0x0

    .line 577
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mConnectivityManager:Landroid/net/ConnectivityManager;

    if-nez v1, :cond_0

    .line 578
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mContext:Landroid/content/Context;

    .line 579
    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "connectivity"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/ConnectivityManager;

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mConnectivityManager:Landroid/net/ConnectivityManager;

    .line 582
    :cond_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mConnectivityManager:Landroid/net/ConnectivityManager;

    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 583
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v2

    if-nez v2, :cond_1

    goto :goto_0

    .line 586
    :cond_1
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getType()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_2

    const/4 v0, 0x2

    return v0

    :cond_2
    return v1

    :catch_0
    :cond_3
    :goto_0
    return v0
.end method

.method private obtainRetryInfo(I)Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;
    .locals 3

    .line 487
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;

    if-nez v0, :cond_1

    .line 489
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    monitor-enter v1

    .line 490
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;

    if-nez v0, :cond_0

    .line 492
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->createRetryInfo(I)Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;

    move-result-object v0

    .line 494
    :cond_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    invoke-virtual {v2, p1, v0}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    .line 495
    monitor-exit v1

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_1
    :goto_0
    return-object v0
.end method

.method private parserAllowErrorCode(Ljava/lang/String;)[I
    .locals 4

    .line 538
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    const-string v0, ","

    .line 542
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 543
    array-length v0, p1

    if-gtz v0, :cond_1

    return-object v1

    .line 546
    :cond_1
    array-length v0, p1

    new-array v0, v0, [I

    const/4 v2, 0x0

    .line 547
    :goto_0
    array-length v3, p1

    if-ge v2, v3, :cond_2

    .line 548
    aget-object v3, p1, v2

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    aput v3, v0, v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    return-object v0

    :catchall_0
    return-object v1
.end method

.method private registerNetworkCallback()V
    .locals 3

    .line 153
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "use_network_callback"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    return-void

    .line 156
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    .line 157
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$1;

    invoke-direct {v1, p0}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$1;-><init>(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method private removeRetryInfo(I)V
    .locals 2

    .line 501
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    monitor-enter v0

    .line 502
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    invoke-virtual {v1, p1}, Landroid/util/SparseArray;->remove(I)V

    .line 503
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method private scheduleAllTaskRetry(IZ)V
    .locals 6

    .line 293
    iget v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    if-gtz v0, :cond_0

    return-void

    .line 297
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 298
    monitor-enter p0

    if-nez p2, :cond_1

    .line 299
    :try_start_0
    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mLastHandleAllTaskTime:J

    sub-long v2, v0, v2

    const-wide/16 v4, 0x2710

    cmp-long v2, v2, v4

    if-gez v2, :cond_1

    .line 301
    monitor-exit p0

    return-void

    .line 303
    :cond_1
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mLastHandleAllTaskTime:J

    .line 304
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 305
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "scheduleAllTaskRetry, level = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "], force = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RetryScheduler"

    invoke-static {v1, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    if-eqz p2, :cond_2

    .line 307
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mHandler:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 309
    :cond_2
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    .line 310
    iput v0, v1, Landroid/os/Message;->what:I

    .line 311
    iput p1, v1, Landroid/os/Message;->arg1:I

    .line 312
    iput p2, v1, Landroid/os/Message;->arg2:I

    .line 313
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mHandler:Landroid/os/Handler;

    const-wide/16 v2, 0x7d0

    invoke-virtual {p1, v1, v2, v3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    return-void

    :catchall_0
    move-exception p1

    .line 304
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public static setRetryScheduleHandler(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryScheduleHandler;)V
    .locals 0

    .line 145
    sput-object p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->sRetryScheduleHandler:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryScheduleHandler;

    return-void
.end method

.method private tryStartScheduleRetry(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;ZI)V
    .locals 9

    .line 189
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getFailedException()Lcom/ss/android/socialbase/downloader/exception/BaseException;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 194
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-direct {p0, v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->obtainRetryInfo(I)Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;

    move-result-object v1

    .line 195
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->access$300(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;)I

    move-result v2

    iget v3, v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->maxCount:I

    if-le v2, v3, :cond_1

    .line 196
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "tryStartScheduleRetry, id = "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->id:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ", mRetryCount = "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 197
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->access$300(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;)I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ", maxCount = "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->maxCount:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "RetryScheduler"

    .line 196
    invoke-static {p2, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 201
    :cond_1
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v2

    .line 202
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isInsufficientSpaceError(Ljava/lang/Throwable;)Z

    move-result v3

    if-nez v3, :cond_4

    .line 203
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isNetworkError(Ljava/lang/Throwable;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 205
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->statusInPause()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 206
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isPauseReserveOnWifi()Z

    move-result v0

    if-nez v0, :cond_4

    .line 208
    :cond_2
    invoke-direct {p0, v1, v2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->canRetryForAllowErrorCode(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;I)Z

    move-result v0

    if-nez v0, :cond_3

    return-void

    .line 212
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "allow error code, id = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->id:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", error code = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "RetryScheduler"

    invoke-static {v2, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 215
    :cond_4
    invoke-static {v1, p2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->access$402(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;Z)Z

    .line 216
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    monitor-enter v0

    .line 217
    :try_start_0
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->access$500(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;)Z

    move-result v2

    if-nez v2, :cond_5

    const/4 v2, 0x1

    .line 218
    invoke-static {v1, v2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->access$502(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;Z)Z

    .line 219
    iget v3, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    add-int/2addr v3, v2

    iput v3, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    .line 221
    :cond_5
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 223
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->getCurrentRetryIntervalMs()I

    move-result v0

    .line 224
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "tryStartScheduleRetry: id = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->id:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", delayTimeMills = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", mWaitingRetryTasks = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "RetryScheduler"

    invoke-static {v3, v2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 228
    iget-boolean v2, v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->useJobScheduler:Z

    if-eqz v2, :cond_8

    if-nez p3, :cond_6

    .line 231
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->resetRetryInterval()V

    .line 233
    :cond_6
    sget-object v3, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->sRetryScheduleHandler:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryScheduleHandler;

    if-eqz v3, :cond_7

    int-to-long v5, v0

    move-object v4, p1

    move v7, p2

    move v8, p3

    .line 235
    invoke-interface/range {v3 .. v8}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryScheduleHandler;->scheduleRetry(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;JZI)V

    .line 237
    :cond_7
    iget-boolean p1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mIsDownloaderProcess:Z

    if-eqz p1, :cond_a

    .line 241
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    invoke-virtual {v1, p1, p2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->updateRetryTimeStamp(J)V

    .line 242
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->increaseRetryCount()V

    .line 243
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->increaseRetryInterval()V

    goto :goto_0

    :cond_8
    if-eqz p2, :cond_9

    return-void

    .line 250
    :cond_9
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mHandler:Landroid/os/Handler;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p3

    invoke-virtual {p2, p3}, Landroid/os/Handler;->removeMessages(I)V

    .line 251
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mHandler:Landroid/os/Handler;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    int-to-long v0, v0

    invoke-virtual {p2, p1, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    :cond_a
    :goto_0
    return-void

    :catchall_0
    move-exception p1

    .line 221
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method


# virtual methods
.method public doSchedulerRetry(I)V
    .locals 2

    .line 360
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    .line 361
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$3;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$3;-><init>(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;I)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public handleMessage(Landroid/os/Message;)Z
    .locals 3

    .line 283
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-nez v0, :cond_1

    .line 284
    iget v0, p1, Landroid/os/Message;->arg1:I

    iget p1, p1, Landroid/os/Message;->arg2:I

    if-ne p1, v1, :cond_0

    move p1, v1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-direct {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->doScheduleAllTaskRetry(IZ)V

    goto :goto_1

    .line 286
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "handleMessage, doSchedulerRetry, id = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Landroid/os/Message;->what:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "RetryScheduler"

    invoke-static {v2, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 287
    iget p1, p1, Landroid/os/Message;->what:I

    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->doSchedulerRetry(I)V

    :goto_1
    return v1
.end method

.method public onAppBackground()V
    .locals 2

    const/4 v0, 0x3

    const/4 v1, 0x0

    .line 564
    invoke-direct {p0, v0, v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->scheduleAllTaskRetry(IZ)V

    return-void
.end method

.method public onAppForeground()V
    .locals 2

    const/4 v0, 0x4

    const/4 v1, 0x0

    .line 559
    invoke-direct {p0, v0, v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->scheduleAllTaskRetry(IZ)V

    return-void
.end method

.method public scheduleRetryWhenHasTaskConnected()V
    .locals 2

    const/4 v0, 0x5

    const/4 v1, 0x0

    .line 572
    invoke-direct {p0, v0, v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->scheduleAllTaskRetry(IZ)V

    return-void
.end method

.method public scheduleRetryWhenHasTaskSucceed()V
    .locals 2

    const/4 v0, 0x2

    const/4 v1, 0x1

    .line 568
    invoke-direct {p0, v0, v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->scheduleAllTaskRetry(IZ)V

    return-void
.end method

.method public tryCancelScheduleRetry(I)V
    .locals 4

    .line 257
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    monitor-enter v0

    .line 258
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mRetryInfoList:Landroid/util/SparseArray;

    invoke-virtual {v1, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;

    if-nez v1, :cond_0

    .line 260
    monitor-exit v0

    return-void

    .line 262
    :cond_0
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->access$500(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/4 v2, 0x0

    .line 263
    invoke-static {v1, v2}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->access$502(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;Z)Z

    .line 264
    iget v3, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    add-int/lit8 v3, v3, -0x1

    iput v3, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    if-gez v3, :cond_1

    .line 266
    iput v2, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mWaitingRetryTasksCount:I

    .line 269
    :cond_1
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 270
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryInfo;->useJobScheduler:Z

    if-eqz v0, :cond_2

    .line 271
    sget-object v0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->sRetryScheduleHandler:Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryScheduleHandler;

    if-eqz v0, :cond_3

    .line 273
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryScheduleHandler;->cancelRetry(I)V

    goto :goto_0

    .line 276
    :cond_2
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->mHandler:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->removeMessages(I)V

    :cond_3
    :goto_0
    return-void

    :catchall_0
    move-exception p1

    .line 269
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public tryStartScheduleRetry(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2

    if-eqz p1, :cond_3

    .line 181
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->MIME_APK:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->MIME_APK:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMimeType()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_2

    .line 184
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isOnlyWifi()Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isPauseReserveOnWifi()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    goto :goto_1

    :cond_2
    :goto_0
    const/4 v0, 0x1

    .line 185
    :goto_1
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->getNetWorkType()I

    move-result v1

    invoke-direct {p0, p1, v0, v1}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->tryStartScheduleRetry(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;ZI)V

    :cond_3
    :goto_2
    return-void
.end method
