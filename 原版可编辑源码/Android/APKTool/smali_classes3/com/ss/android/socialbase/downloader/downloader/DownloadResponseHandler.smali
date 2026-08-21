.class public Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;
.super Ljava/lang/Object;


# static fields
.field private static final DEBUG:Z = false

.field public static final MIN_SYNC_STEP_BYTE:I = 0x10000

.field public static final MIN_SYNC_TIME_MS:J = 0x1f4L

.field private static TAG:Ljava/lang/String; = "ResponseHandler"


# instance fields
.field private final appStatusManager:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

.field private final bugfixCancelThenUpdate:Z

.field private final callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

.field private volatile canceled:Z

.field private curOffset:J

.field private customCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

.field private debugReadTimeNs:J

.field private debugSyncTimeNs:J

.field private debugTotalTimeNs:J

.field private debugWriteTimeNs:J

.field private downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

.field private final downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

.field private volatile downloadChunkContentLen:J

.field private final downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

.field private volatile endOffset:J

.field private exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

.field private handleStartOffset:J

.field private final hasSyncStrategy:Z

.field private final httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

.field private final isMonitorRw:Z

.field private volatile lastSyncBytes:J

.field private volatile lastSyncTimestamp:J

.field openLimitSpeed:Z

.field private outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

.field private volatile paused:Z

.field private rwConcurrent:Z

.field private final setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

.field private sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

.field private final syncIntervalMsBg:J

.field private final syncIntervalMsFg:J

.field private final url:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;)V
    .locals 5

    .line 100
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 88
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->openLimitSpeed:Z

    const-wide/16 v1, 0x0

    .line 438
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->lastSyncBytes:J

    .line 439
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->lastSyncTimestamp:J

    .line 101
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 102
    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->url:Ljava/lang/String;

    .line 103
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move-result-object p2

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->customCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    .line 104
    instance-of v3, p2, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;

    if-eqz v3, :cond_0

    .line 105
    check-cast p2, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;

    .line 106
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->getDownloadCache()Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    move-result-object v3

    iput-object v3, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    .line 107
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->getSqlDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    move-result-object p2

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    .line 110
    :cond_0
    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    .line 111
    iput-object p4, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    .line 112
    iput-object p5, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    .line 113
    invoke-virtual {p4}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide p2

    iput-wide p2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    .line 114
    iput-wide p2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleStartOffset:J

    .line 115
    invoke-virtual {p4}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isHostChunk()Z

    move-result p2

    if-eqz p2, :cond_1

    .line 116
    invoke-virtual {p4}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getContentLength()J

    move-result-wide p2

    iput-wide p2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunkContentLen:J

    goto :goto_0

    .line 118
    :cond_1
    invoke-virtual {p4, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getRetainLength(Z)J

    move-result-wide p2

    iput-wide p2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunkContentLen:J

    .line 119
    :goto_0
    invoke-virtual {p4}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getEndOffset()J

    move-result-wide p2

    iput-wide p2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->endOffset:J

    .line 120
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object p2

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->appStatusManager:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    .line 121
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string p2, "sync_strategy"

    .line 122
    invoke-virtual {p1, p2, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_2

    move p1, p2

    goto :goto_1

    :cond_2
    move p1, v0

    :goto_1
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->hasSyncStrategy:Z

    if-eqz p1, :cond_3

    .line 124
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const/16 p3, 0x1388

    const-string p4, "sync_interval_ms_fg"

    invoke-virtual {p1, p4, p3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    int-to-long p3, p1

    .line 126
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const/16 p5, 0x3e8

    const-string v1, "sync_interval_ms_bg"

    invoke-virtual {p1, v1, p5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    int-to-long v1, p1

    const-wide/16 v3, 0x1f4

    .line 128
    invoke-static {p3, p4, v3, v4}, Ljava/lang/Math;->max(JJ)J

    move-result-wide p3

    iput-wide p3, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->syncIntervalMsFg:J

    .line 129
    invoke-static {v1, v2, v3, v4}, Ljava/lang/Math;->max(JJ)J

    move-result-wide p3

    iput-wide p3, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->syncIntervalMsBg:J

    goto :goto_2

    .line 131
    :cond_3
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->syncIntervalMsFg:J

    .line 132
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->syncIntervalMsBg:J

    .line 134
    :goto_2
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string p3, "monitor_rw"

    invoke-virtual {p1, p3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result p1

    if-ne p1, p2, :cond_4

    move v0, p2

    :cond_4
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->isMonitorRw:Z

    const/high16 p1, 0x10000

    .line 135
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadExpSwitchCode;->isSwitchEnable(I)Z

    move-result p1

    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->bugfixCancelThenUpdate:Z

    return-void
.end method

.method static synthetic access$000(Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    return-object p0
.end method

.method private canReuseConnection()Z
    .locals 1

    .line 179
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedReuseFirstConnection()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isReuseingFirstConnection()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private cancelConnection()V
    .locals 2

    .line 162
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-nez v0, :cond_0

    return-void

    .line 163
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 165
    new-instance v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler$1;

    invoke-direct {v1, p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler$1;-><init>(Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    :cond_1
    return-void
.end method

.method private checkAndSync(Z)V
    .locals 8

    .line 442
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    .line 443
    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->lastSyncTimestamp:J

    sub-long v2, v0, v2

    .line 445
    iget-boolean v4, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->hasSyncStrategy:Z

    if-eqz v4, :cond_1

    .line 446
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->appStatusManager:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->isAppForeground()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->syncIntervalMsFg:J

    goto :goto_0

    :cond_0
    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->syncIntervalMsBg:J

    :goto_0
    cmp-long p1, v2, v4

    if-lez p1, :cond_3

    .line 447
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V

    .line 448
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->lastSyncTimestamp:J

    goto :goto_1

    .line 451
    :cond_1
    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    iget-wide v6, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->lastSyncBytes:J

    sub-long/2addr v4, v6

    if-nez p1, :cond_2

    .line 452
    invoke-direct {p0, v4, v5, v2, v3}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->isNeedSync(JJ)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 453
    :cond_2
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V

    .line 454
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->lastSyncTimestamp:J

    :cond_3
    :goto_1
    return-void
.end method

.method private createStreamReader(Ljava/io/InputStream;)Lcom/ss/android/socialbase/downloader/reader/IStreamReader;
    .locals 8

    .line 415
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getWriteBufferSize()I

    move-result v0

    .line 416
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const/4 v2, 0x0

    const-string v3, "rw_concurrent"

    invoke-virtual {v1, v3, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v1

    const/4 v3, 0x1

    if-ne v1, v3, :cond_0

    .line 418
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v1

    if-ne v1, v3, :cond_0

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 419
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v4

    const-wide/32 v6, 0x1400000

    cmp-long v1, v4, v6

    if-lez v1, :cond_0

    .line 420
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const/4 v4, 0x4

    const-string v5, "rw_concurrent_max_buffer_count"

    invoke-virtual {v1, v5, v4}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 424
    :try_start_0
    new-instance v4, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;

    invoke-direct {v4, p1, v0, v1}, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;-><init>(Ljava/io/InputStream;II)V

    .line 425
    iput-boolean v3, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->rwConcurrent:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v4

    :catchall_0
    move-exception v1

    .line 428
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 433
    :cond_0
    new-instance v1, Lcom/ss/android/socialbase/downloader/reader/SyncStreamReader;

    invoke-direct {v1, p1, v0}, Lcom/ss/android/socialbase/downloader/reader/SyncStreamReader;-><init>(Ljava/io/InputStream;I)V

    .line 434
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->rwConcurrent:Z

    return-object v1
.end method

.method private isNeedSync(JJ)Z
    .locals 2

    const-wide/32 v0, 0x10000

    cmp-long p1, p1, v0

    if-lez p1, :cond_0

    const-wide/16 p1, 0x1f4

    cmp-long p1, p3, p1

    if-lez p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method private isStoppedStatus()Z
    .locals 1

    .line 143
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->paused:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method private sync()V
    .locals 6

    .line 469
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->isMonitorRw:Z

    if-eqz v0, :cond_0

    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v0

    goto :goto_0

    :cond_0
    const-wide/16 v0, 0x0

    :goto_0
    const/4 v2, 0x0

    const/4 v3, 0x1

    .line 472
    :try_start_0
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;->flushAndSync()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v4, v3

    goto :goto_1

    :catch_0
    move v4, v2

    :goto_1
    if-eqz v4, :cond_5

    .line 479
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateRealDownloadTime(Z)V

    .line 480
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v4

    if-le v4, v3, :cond_1

    move v2, v3

    .line 482
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v3

    if-eqz v2, :cond_3

    .line 484
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    invoke-direct {p0, v2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    if-eqz v3, :cond_2

    .line 486
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {v3, v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    goto :goto_2

    .line 488
    :cond_2
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v3

    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v4

    invoke-interface {v2, v3, v4, v5}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->OnDownloadTaskProgress(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    goto :goto_2

    :cond_3
    if-eqz v3, :cond_4

    .line 491
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {v3, v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    goto :goto_2

    .line 493
    :cond_4
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sqlDownloadCache:Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v3

    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    invoke-interface {v2, v3, v4, v5}, Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;->OnDownloadTaskProgress(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 495
    :goto_2
    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    iput-wide v2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->lastSyncBytes:J

    .line 497
    :cond_5
    iget-boolean v2, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->isMonitorRw:Z

    if-eqz v2, :cond_6

    .line 498
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v2

    sub-long/2addr v2, v0

    .line 499
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugSyncTimeNs:J

    add-long/2addr v0, v2

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugSyncTimeNs:J

    :cond_6
    return-void
.end method

.method private updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V
    .locals 16

    move-object/from16 v0, p0

    move-object/from16 v7, p1

    if-nez v7, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x0

    .line 511
    instance-of v8, v7, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    if-eqz v8, :cond_1

    .line 512
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->needNotifyDownloaderProcess()Z

    move-result v1

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    if-nez v1, :cond_1

    return-void

    :cond_1
    move-object v15, v1

    .line 518
    iget-object v1, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isHostChunk()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 519
    iget-object v1, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getFirstReuseChunk()Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    move-result-object v1

    goto :goto_0

    .line 521
    :cond_2
    iget-object v1, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    :goto_0
    move-object v5, v1

    if-eqz v5, :cond_7

    .line 526
    iget-wide v1, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    invoke-virtual {v5, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setCurrentOffset(J)V

    if-eqz v8, :cond_3

    if-eqz v15, :cond_3

    .line 528
    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v10

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v11

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getHostChunkIndex()I

    move-result v12

    iget-wide v13, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    move-object v9, v15

    invoke-interface/range {v9 .. v14}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateSubDownloadChunk(IIIJ)V

    move-object v11, v5

    goto :goto_1

    .line 530
    :cond_3
    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v2

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v3

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getHostChunkIndex()I

    move-result v4

    iget-wide v9, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    move-object/from16 v1, p1

    move-object v11, v5

    move-wide v5, v9

    invoke-interface/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateSubDownloadChunk(IIIJ)V

    .line 532
    :goto_1
    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->canRefreshCurOffsetForReuseChunk()Z

    move-result v1

    if-eqz v1, :cond_9

    const/4 v1, 0x0

    .line 534
    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasNoBytesDownload()Z

    move-result v2

    if-eqz v2, :cond_5

    .line 535
    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getNextChunkCurOffset()J

    move-result-wide v2

    .line 536
    iget-wide v4, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    cmp-long v4, v2, v4

    if-lez v4, :cond_5

    if-eqz v8, :cond_4

    if-eqz v15, :cond_4

    .line 538
    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v1

    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getHostChunkIndex()I

    move-result v4

    invoke-interface {v15, v1, v4, v2, v3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateDownloadChunk(IIJ)V

    goto :goto_2

    .line 540
    :cond_4
    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v1

    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getHostChunkIndex()I

    move-result v4

    invoke-interface {v7, v1, v4, v2, v3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadChunk(IIJ)V

    :goto_2
    const/4 v1, 0x1

    :cond_5
    if-nez v1, :cond_9

    if-eqz v8, :cond_6

    if-eqz v15, :cond_6

    .line 546
    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v1

    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getHostChunkIndex()I

    move-result v2

    iget-wide v3, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    invoke-interface {v15, v1, v2, v3, v4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateDownloadChunk(IIJ)V

    goto :goto_3

    .line 548
    :cond_6
    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v1

    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getHostChunkIndex()I

    move-result v2

    iget-wide v3, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    invoke-interface {v7, v1, v2, v3, v4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadChunk(IIJ)V

    goto :goto_3

    .line 553
    :cond_7
    iget-object v1, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isHostChunk()Z

    move-result v1

    if-eqz v1, :cond_9

    if-eqz v8, :cond_8

    if-eqz v15, :cond_8

    .line 555
    iget-object v1, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v1

    iget-object v2, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v2

    iget-wide v3, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    invoke-interface {v15, v1, v2, v3, v4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateDownloadChunk(IIJ)V

    goto :goto_3

    .line 557
    :cond_8
    iget-object v1, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v1

    iget-object v2, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v2

    iget-wide v3, v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    invoke-interface {v7, v1, v2, v3, v4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadChunk(IIJ)V

    :cond_9
    :goto_3
    return-void
.end method


# virtual methods
.method public cancel()V
    .locals 2

    .line 153
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    if-eqz v0, :cond_0

    return-void

    .line 154
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    monitor-enter v0

    const/4 v1, 0x1

    .line 155
    :try_start_0
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    .line 156
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 157
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->cancelConnection()V

    return-void

    :catchall_0
    move-exception v1

    .line 156
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method public getCurOffset()J
    .locals 2

    .line 139
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    return-wide v0
.end method

.method public getLastSyncBytes()J
    .locals 2

    .line 464
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->lastSyncBytes:J

    return-wide v0
.end method

.method public handleResponse()V
    .locals 34
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    move-object/from16 v1, p0

    .line 196
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->isStoppedStatus()Z

    move-result v0

    if-nez v0, :cond_39

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-nez v0, :cond_0

    goto/16 :goto_19

    .line 198
    :cond_0
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getContentLength(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-eqz v0, :cond_38

    .line 203
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getStartOffset()J

    move-result-wide v6

    .line 207
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v8

    .line 208
    iget-boolean v15, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->isMonitorRw:Z

    .line 211
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    instance-of v11, v0, Lcom/ss/android/socialbase/downloader/network/AbsDownloadHttpConnection;

    const/4 v14, 0x1

    .line 214
    :try_start_0
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v12, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v12}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempPath()Ljava/lang/String;

    move-result-object v12

    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v10}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempName()Ljava/lang/String;

    move-result-object v10

    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string v5, "flush_buffer_size_byte"

    const/4 v13, -0x1

    .line 215
    invoke-virtual {v4, v5, v13}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v4

    .line 214
    invoke-static {v0, v12, v10, v4}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->createOutputStream(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;I)Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    move-result-object v0

    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;
    :try_end_0
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_0 .. :try_end_0} :catch_9
    .catchall {:try_start_0 .. :try_end_0} :catchall_e

    .line 217
    :try_start_1
    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    invoke-virtual {v0, v4, v5}, Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;->seek(J)V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_6
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_1 .. :try_end_1} :catch_9
    .catchall {:try_start_1 .. :try_end_1} :catchall_e

    .line 222
    :try_start_2
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v0

    if-eqz v0, :cond_1b

    .line 227
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateRealStartDownloadTime()V

    .line 229
    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->createStreamReader(Ljava/io/InputStream;)Lcom/ss/android/socialbase/downloader/reader/IStreamReader;

    move-result-object v10
    :try_end_2
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_2 .. :try_end_2} :catch_9
    .catchall {:try_start_2 .. :try_end_2} :catchall_e

    .line 231
    :try_start_3
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-boolean v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->rwConcurrent:Z

    invoke-virtual {v0, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setIsRwConcurrent(Z)V

    .line 236
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getOpenLimitSpeed()Z

    move-result v0

    iput-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->openLimitSpeed:Z

    .line 237
    sget-wide v4, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->LIMIT_SPEED_EVERTS_ECOND:J

    .line 238
    sget-wide v18, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->LIMIT_INTERVSL:J

    const-wide/16 v20, 0x3e8

    .line 240
    div-long v20, v20, v18

    div-long v4, v4, v20

    .line 243
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v20

    const-wide/16 v22, 0x0

    const-wide/16 v24, 0x0

    .line 247
    :goto_0
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->isStoppedStatus()Z

    move-result v0
    :try_end_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_3 .. :try_end_3} :catch_5
    .catchall {:try_start_3 .. :try_end_3} :catchall_c

    if-eqz v0, :cond_6

    .line 351
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_1

    .line 352
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->end()V

    :cond_1
    if-eqz v10, :cond_2

    .line 355
    invoke-interface {v10}, Lcom/ss/android/socialbase/downloader/reader/IStreamReader;->close()V

    .line 359
    :cond_2
    :try_start_4
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->bugfixCancelThenUpdate:Z

    if-eqz v0, :cond_4

    .line 360
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    monitor-enter v2
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 361
    :try_start_5
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    if-nez v0, :cond_3

    .line 363
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 364
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    if-eqz v0, :cond_3

    .line 365
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V

    .line 368
    :cond_3
    monitor-exit v2

    goto :goto_1

    :catchall_0
    move-exception v0

    monitor-exit v2
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    :try_start_6
    throw v0

    .line 370
    :cond_4
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 371
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    if-eqz v0, :cond_5

    .line 372
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    :cond_5
    :goto_1
    new-array v0, v14, [Ljava/io/Closeable;

    .line 377
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    const/4 v3, 0x0

    aput-object v2, v0, v3

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    .line 380
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v2

    sub-long/2addr v2, v8

    iput-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugTotalTimeNs:J

    .line 393
    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v12, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->url:Ljava/lang/String;

    iget-object v13, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    iget-boolean v14, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->paused:Z

    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    move/from16 v29, v15

    move v15, v0

    :goto_2
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    move-object/from16 v16, v0

    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleStartOffset:J

    sub-long v17, v2, v4

    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugTotalTimeNs:J

    move-wide/from16 v19, v2

    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugReadTimeNs:J

    move-wide/from16 v22, v2

    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugWriteTimeNs:J

    move-wide/from16 v24, v2

    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugSyncTimeNs:J

    move-wide/from16 v26, v2

    const/16 v28, 0x0

    move/from16 v21, v29

    invoke-static/range {v10 .. v28}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorDownloadIO(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;ZZLcom/ss/android/socialbase/downloader/exception/BaseException;JJZJJJLorg/json/JSONObject;)V

    return-void

    :catchall_1
    move-exception v0

    new-array v2, v14, [Ljava/io/Closeable;

    .line 377
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    throw v0

    :cond_6
    move/from16 v29, v15

    if-eqz v29, :cond_7

    .line 249
    :try_start_7
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v22

    .line 250
    :cond_7
    invoke-interface {v10}, Lcom/ss/android/socialbase/downloader/reader/IStreamReader;->read()Lcom/ss/android/socialbase/downloader/segment/Buffer;

    move-result-object v0
    :try_end_7
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_7 .. :try_end_7} :catch_4
    .catchall {:try_start_7 .. :try_end_7} :catchall_b

    if-eqz v29, :cond_8

    .line 251
    :try_start_8
    iget-wide v14, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugReadTimeNs:J

    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v27

    sub-long v27, v27, v22

    add-long v14, v14, v27

    iput-wide v14, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugReadTimeNs:J

    .line 253
    :cond_8
    iget v12, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->size:I

    if-ne v12, v13, :cond_9

    move-wide/from16 v30, v2

    move-wide/from16 v32, v6

    goto/16 :goto_5

    .line 257
    :cond_9
    iget-object v14, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v14}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isIgnoreDataVerify()Z

    move-result v14

    if-nez v14, :cond_b

    iget-wide v14, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunkContentLen:J

    move-wide/from16 v30, v14

    iget-wide v13, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J
    :try_end_8
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_8 .. :try_end_8} :catch_3
    .catchall {:try_start_8 .. :try_end_8} :catchall_a

    move-wide/from16 v32, v6

    :try_start_9
    iget-wide v6, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleStartOffset:J

    sub-long/2addr v13, v6

    cmp-long v6, v30, v13

    if-lez v6, :cond_a

    iget-wide v6, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunkContentLen:J

    iget-wide v13, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J
    :try_end_9
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_9 .. :try_end_9} :catch_3
    .catchall {:try_start_9 .. :try_end_9} :catchall_2

    move-wide/from16 v30, v2

    :try_start_a
    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleStartOffset:J

    sub-long/2addr v13, v2

    int-to-long v2, v12

    add-long/2addr v13, v2

    cmp-long v2, v6, v13

    if-gez v2, :cond_c

    .line 258
    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunkContentLen:J

    iget-wide v6, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    iget-wide v12, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleStartOffset:J

    sub-long/2addr v6, v12

    sub-long/2addr v2, v6

    long-to-int v12, v2

    goto :goto_3

    :cond_a
    move-wide/from16 v30, v2

    goto :goto_3

    :catchall_2
    move-exception v0

    move-wide/from16 v30, v2

    goto/16 :goto_9

    :cond_b
    move-wide/from16 v30, v2

    move-wide/from16 v32, v6

    :cond_c
    :goto_3
    if-eqz v29, :cond_d

    .line 261
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v2

    move-wide/from16 v22, v2

    .line 262
    :cond_d
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    iget-object v3, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->data:[B
    :try_end_a
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_a .. :try_end_a} :catch_3
    .catchall {:try_start_a .. :try_end_a} :catchall_9

    const/4 v6, 0x0

    :try_start_b
    invoke-virtual {v2, v3, v6, v12}, Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;->write([BII)V
    :try_end_b
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_b .. :try_end_b} :catch_2
    .catchall {:try_start_b .. :try_end_b} :catchall_8

    if-eqz v29, :cond_e

    .line 263
    :try_start_c
    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugWriteTimeNs:J

    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v6

    sub-long v6, v6, v22

    add-long/2addr v2, v6

    iput-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugWriteTimeNs:J

    .line 265
    :cond_e
    invoke-interface {v10, v0}, Lcom/ss/android/socialbase/downloader/reader/IStreamReader;->recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    .line 267
    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    int-to-long v6, v12

    add-long/2addr v2, v6

    iput-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    add-long v24, v24, v6

    .line 270
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    monitor-enter v2
    :try_end_c
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_c .. :try_end_c} :catch_3
    .catchall {:try_start_c .. :try_end_c} :catchall_9

    .line 271
    :try_start_d
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->bugfixCancelThenUpdate:Z

    if-eqz v0, :cond_f

    .line 273
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    if-nez v0, :cond_10

    .line 275
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v0, v6, v7}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onProgress(J)Z

    move-result v0

    .line 278
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v3}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 280
    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->checkAndSync(Z)V

    goto :goto_4

    .line 284
    :cond_f
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    invoke-interface {v0, v6, v7}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onProgress(J)Z

    move-result v0

    .line 286
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v3}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 288
    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->checkAndSync(Z)V

    .line 290
    :cond_10
    :goto_4
    monitor-exit v2
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_5

    .line 292
    :try_start_e
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isDownloadWithWifiValid()Z

    move-result v0

    if-eqz v0, :cond_1a

    .line 297
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isPauseReserveWithWifiValid()Z

    move-result v0

    if-eqz v0, :cond_19

    .line 302
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isIgnoreDataVerify()Z

    move-result v0

    if-nez v0, :cond_16

    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunkContentLen:J

    const-wide/16 v6, 0x0

    cmp-long v0, v2, v6

    if-ltz v0, :cond_16

    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunkContentLen:J

    iget-wide v6, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    iget-wide v12, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleStartOffset:J
    :try_end_e
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_e .. :try_end_e} :catch_3
    .catchall {:try_start_e .. :try_end_e} :catchall_9

    sub-long/2addr v6, v12

    cmp-long v0, v2, v6

    if-gtz v0, :cond_16

    .line 351
    :goto_5
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_11

    .line 352
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->end()V

    :cond_11
    if-eqz v10, :cond_12

    .line 355
    invoke-interface {v10}, Lcom/ss/android/socialbase/downloader/reader/IStreamReader;->close()V

    .line 359
    :cond_12
    :try_start_f
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->bugfixCancelThenUpdate:Z

    if-eqz v0, :cond_14

    .line 360
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    monitor-enter v2
    :try_end_f
    .catchall {:try_start_f .. :try_end_f} :catchall_4

    .line 361
    :try_start_10
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    if-nez v0, :cond_13

    .line 363
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 364
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    if-eqz v0, :cond_13

    .line 365
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V

    .line 368
    :cond_13
    monitor-exit v2

    goto :goto_6

    :catchall_3
    move-exception v0

    monitor-exit v2
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_3

    :try_start_11
    throw v0

    .line 370
    :cond_14
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 371
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    if-eqz v0, :cond_15

    .line 372
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V
    :try_end_11
    .catchall {:try_start_11 .. :try_end_11} :catchall_4

    :cond_15
    :goto_6
    const/4 v2, 0x1

    new-array v0, v2, [Ljava/io/Closeable;

    .line 377
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    const/4 v4, 0x0

    aput-object v3, v0, v4

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    .line 380
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v5

    sub-long/2addr v5, v8

    iput-wide v5, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugTotalTimeNs:J

    .line 393
    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v12, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->url:Ljava/lang/String;

    iget-object v13, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    move v3, v4

    iget-boolean v14, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->paused:Z

    move v6, v2

    goto/16 :goto_13

    :catchall_4
    move-exception v0

    const/4 v3, 0x0

    const/4 v6, 0x1

    new-array v2, v6, [Ljava/io/Closeable;

    .line 377
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    aput-object v4, v2, v3

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    throw v0

    :cond_16
    const/4 v3, 0x0

    const/4 v6, 0x1

    .line 307
    :try_start_12
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->openLimitSpeed:Z

    if-eqz v0, :cond_18

    cmp-long v0, v24, v4

    if-lez v0, :cond_18

    .line 308
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v12
    :try_end_12
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_12 .. :try_end_12} :catch_1
    .catchall {:try_start_12 .. :try_end_12} :catchall_6

    sub-long v12, v12, v20

    cmp-long v0, v12, v18

    if-gez v0, :cond_17

    sub-long v12, v18, v12

    .line 311
    :try_start_13
    invoke-static {v12, v13}, Ljava/lang/Thread;->sleep(J)V
    :try_end_13
    .catch Ljava/lang/InterruptedException; {:try_start_13 .. :try_end_13} :catch_0
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_13 .. :try_end_13} :catch_1
    .catchall {:try_start_13 .. :try_end_13} :catchall_6

    goto :goto_7

    :catch_0
    move-exception v0

    move-object v2, v0

    .line 313
    :try_start_14
    invoke-virtual {v2}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 317
    :cond_17
    :goto_7
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v12

    move-wide/from16 v20, v12

    const-wide/16 v24, 0x0

    :cond_18
    move v14, v6

    move/from16 v15, v29

    move-wide/from16 v2, v30

    move-wide/from16 v6, v32

    const/4 v13, -0x1

    goto/16 :goto_0

    :cond_19
    const/4 v3, 0x0

    const/4 v6, 0x1

    .line 299
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/DownloadPauseReserveWifiException;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/exception/DownloadPauseReserveWifiException;-><init>()V

    throw v0

    :cond_1a
    const/4 v3, 0x0

    const/4 v6, 0x1

    .line 293
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/DownloadOnlyWifiException;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/exception/DownloadOnlyWifiException;-><init>()V

    throw v0
    :try_end_14
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_14 .. :try_end_14} :catch_1
    .catchall {:try_start_14 .. :try_end_14} :catchall_6

    :catchall_5
    move-exception v0

    const/4 v3, 0x0

    const/4 v6, 0x1

    .line 290
    :goto_8
    :try_start_15
    monitor-exit v2
    :try_end_15
    .catchall {:try_start_15 .. :try_end_15} :catchall_7

    :try_start_16
    throw v0
    :try_end_16
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_16 .. :try_end_16} :catch_1
    .catchall {:try_start_16 .. :try_end_16} :catchall_6

    :catchall_6
    move-exception v0

    goto/16 :goto_f

    :catch_1
    move-exception v0

    goto/16 :goto_16

    :catchall_7
    move-exception v0

    goto :goto_8

    :catchall_8
    move-exception v0

    move v3, v6

    goto :goto_a

    :catch_2
    move-exception v0

    move v3, v6

    goto :goto_b

    :catchall_9
    move-exception v0

    goto :goto_9

    :catchall_a
    move-exception v0

    move-wide/from16 v30, v2

    move-wide/from16 v32, v6

    :goto_9
    const/4 v3, 0x0

    :goto_a
    const/4 v6, 0x1

    goto/16 :goto_f

    :catch_3
    move-exception v0

    const/4 v3, 0x0

    :goto_b
    const/4 v6, 0x1

    goto/16 :goto_16

    :catchall_b
    move-exception v0

    move-wide/from16 v30, v2

    move-wide/from16 v32, v6

    move v6, v14

    goto :goto_c

    :catch_4
    move-exception v0

    move v6, v14

    goto :goto_d

    :catchall_c
    move-exception v0

    move-wide/from16 v30, v2

    move-wide/from16 v32, v6

    move v6, v14

    move/from16 v29, v15

    :goto_c
    const/4 v3, 0x0

    goto :goto_f

    :catch_5
    move-exception v0

    move v6, v14

    move/from16 v29, v15

    :goto_d
    const/4 v3, 0x0

    goto/16 :goto_16

    :cond_1b
    move-wide/from16 v30, v2

    move-wide/from16 v32, v6

    move v6, v14

    move/from16 v29, v15

    const/4 v3, 0x0

    .line 225
    :try_start_17
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v2, 0x412

    new-instance v4, Ljava/io/IOException;

    const-string v5, "inputStream is null"

    invoke-direct {v4, v5}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    invoke-direct {v0, v2, v4}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    throw v0

    :catch_6
    move-exception v0

    move-wide/from16 v30, v2

    move-wide/from16 v32, v6

    move v6, v14

    move/from16 v29, v15

    const/4 v3, 0x0

    .line 219
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v4, 0x41e

    invoke-direct {v2, v4, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    throw v2
    :try_end_17
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_17 .. :try_end_17} :catch_7
    .catchall {:try_start_17 .. :try_end_17} :catchall_d

    :catchall_d
    move-exception v0

    goto :goto_e

    :catch_7
    move-exception v0

    goto/16 :goto_15

    :catchall_e
    move-exception v0

    move-wide/from16 v30, v2

    move-wide/from16 v32, v6

    move v6, v14

    move/from16 v29, v15

    const/4 v3, 0x0

    :goto_e
    const/4 v10, 0x0

    :goto_f
    if-eqz v11, :cond_1c

    .line 335
    :try_start_18
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    check-cast v2, Lcom/ss/android/socialbase/downloader/network/AbsDownloadHttpConnection;

    invoke-virtual {v2, v0}, Lcom/ss/android/socialbase/downloader/network/AbsDownloadHttpConnection;->onThrowable(Ljava/lang/Throwable;)V

    .line 337
    :cond_1c
    sget-object v2, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->TAG:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "handleResponse: e = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 338
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->isStoppedStatus()Z

    move-result v2
    :try_end_18
    .catchall {:try_start_18 .. :try_end_18} :catchall_15

    if-eqz v2, :cond_22

    .line 351
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_1d

    .line 352
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->end()V

    :cond_1d
    if-eqz v10, :cond_1e

    .line 355
    invoke-interface {v10}, Lcom/ss/android/socialbase/downloader/reader/IStreamReader;->close()V

    .line 359
    :cond_1e
    :try_start_19
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->bugfixCancelThenUpdate:Z

    if-eqz v0, :cond_20

    .line 360
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    monitor-enter v2
    :try_end_19
    .catchall {:try_start_19 .. :try_end_19} :catchall_10

    .line 361
    :try_start_1a
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    if-nez v0, :cond_1f

    .line 363
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 364
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    if-eqz v0, :cond_1f

    .line 365
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V

    .line 368
    :cond_1f
    monitor-exit v2

    goto :goto_10

    :catchall_f
    move-exception v0

    monitor-exit v2
    :try_end_1a
    .catchall {:try_start_1a .. :try_end_1a} :catchall_f

    :try_start_1b
    throw v0

    .line 370
    :cond_20
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 371
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    if-eqz v0, :cond_21

    .line 372
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V
    :try_end_1b
    .catchall {:try_start_1b .. :try_end_1b} :catchall_10

    :cond_21
    :goto_10
    new-array v0, v6, [Ljava/io/Closeable;

    .line 377
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    aput-object v2, v0, v3

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    .line 380
    :goto_11
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v2

    sub-long/2addr v2, v8

    iput-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugTotalTimeNs:J

    .line 393
    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v12, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->url:Ljava/lang/String;

    iget-object v13, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    iget-boolean v14, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->paused:Z

    iget-boolean v15, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    goto/16 :goto_2

    :catchall_10
    move-exception v0

    new-array v2, v6, [Ljava/io/Closeable;

    .line 377
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    aput-object v4, v2, v3

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    throw v0

    .line 341
    :cond_22
    :try_start_1c
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result v2

    if-eqz v2, :cond_23

    .line 342
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_1c
    .catchall {:try_start_1c .. :try_end_1c} :catchall_15

    :cond_23
    :try_start_1d
    const-string v2, "ResponseHandler"

    .line 345
    invoke-static {v0, v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_1d
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_1d .. :try_end_1d} :catch_8
    .catchall {:try_start_1d .. :try_end_1d} :catchall_15

    .line 351
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_24

    .line 352
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->end()V

    :cond_24
    if-eqz v10, :cond_25

    .line 355
    invoke-interface {v10}, Lcom/ss/android/socialbase/downloader/reader/IStreamReader;->close()V

    .line 359
    :cond_25
    :try_start_1e
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->bugfixCancelThenUpdate:Z

    if-eqz v0, :cond_27

    .line 360
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    monitor-enter v2
    :try_end_1e
    .catchall {:try_start_1e .. :try_end_1e} :catchall_12

    .line 361
    :try_start_1f
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    if-nez v0, :cond_26

    .line 363
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 364
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    if-eqz v0, :cond_26

    .line 365
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V

    .line 368
    :cond_26
    monitor-exit v2

    goto :goto_12

    :catchall_11
    move-exception v0

    monitor-exit v2
    :try_end_1f
    .catchall {:try_start_1f .. :try_end_1f} :catchall_11

    :try_start_20
    throw v0

    .line 370
    :cond_27
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 371
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    if-eqz v0, :cond_28

    .line 372
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V
    :try_end_20
    .catchall {:try_start_20 .. :try_end_20} :catchall_12

    :cond_28
    :goto_12
    new-array v0, v6, [Ljava/io/Closeable;

    .line 377
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    aput-object v2, v0, v3

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    .line 380
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v4

    sub-long/2addr v4, v8

    iput-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugTotalTimeNs:J

    .line 393
    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v12, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->url:Ljava/lang/String;

    iget-object v13, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    iget-boolean v14, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->paused:Z

    :goto_13
    iget-boolean v15, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    move-object/from16 v16, v0

    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    iget-wide v7, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleStartOffset:J

    sub-long v17, v4, v7

    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugTotalTimeNs:J

    move-wide/from16 v19, v4

    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugReadTimeNs:J

    move-wide/from16 v22, v4

    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugWriteTimeNs:J

    move-wide/from16 v24, v4

    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugSyncTimeNs:J

    move-wide/from16 v26, v4

    const/16 v28, 0x0

    move/from16 v21, v29

    invoke-static/range {v10 .. v28}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorDownloadIO(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;ZZLcom/ss/android/socialbase/downloader/exception/BaseException;JJZJJJLorg/json/JSONObject;)V

    .line 398
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isIgnoreDataVerify()Z

    move-result v0

    if-eqz v0, :cond_29

    return-void

    .line 401
    :cond_29
    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    iget-wide v7, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleStartOffset:J

    sub-long/2addr v4, v7

    const-wide/16 v7, 0x0

    cmp-long v0, v4, v7

    if-ltz v0, :cond_2b

    .line 404
    iget-wide v9, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunkContentLen:J

    cmp-long v0, v9, v7

    if-ltz v0, :cond_2b

    iget-wide v7, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunkContentLen:J

    cmp-long v0, v7, v4

    if-nez v0, :cond_2a

    goto :goto_14

    .line 405
    :cond_2a
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v2, 0x41b

    const/4 v7, 0x7

    new-array v7, v7, [Ljava/lang/Object;

    .line 407
    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, v7, v3

    invoke-static/range {v30 .. v31}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    aput-object v3, v7, v6

    const/4 v3, 0x2

    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunkContentLen:J

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, v7, v3

    const/4 v3, 0x3

    .line 408
    invoke-static/range {v32 .. v33}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, v7, v3

    const/4 v3, 0x4

    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->endOffset:J

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, v7, v3

    const/4 v3, 0x5

    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, v7, v3

    const/4 v3, 0x6

    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleStartOffset:J

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, v7, v3

    const-string v3, "handle data length[%d] != content length[%d] downloadChunkContentLen[%d], range[%d, %d) , current offset[%d] , handle start from %d"

    .line 405
    invoke-static {v3, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v0, v2, v3}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0

    :cond_2b
    :goto_14
    return-void

    :catchall_12
    move-exception v0

    new-array v2, v6, [Ljava/io/Closeable;

    .line 377
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    aput-object v4, v2, v3

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    throw v0

    :catch_8
    move-exception v0

    .line 347
    :try_start_21
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 348
    throw v0

    :catch_9
    move-exception v0

    move v6, v14

    move/from16 v29, v15

    const/4 v3, 0x0

    :goto_15
    const/4 v10, 0x0

    .line 322
    :goto_16
    sget-object v2, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->TAG:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "handleResponse: BaseException e = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 323
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string v4, "ignore_base_ex_on_stop_status"

    invoke-virtual {v2, v4}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_31

    .line 324
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->isStoppedStatus()Z

    move-result v2
    :try_end_21
    .catchall {:try_start_21 .. :try_end_21} :catchall_15

    if-eqz v2, :cond_31

    .line 351
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_2c

    .line 352
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->end()V

    :cond_2c
    if-eqz v10, :cond_2d

    .line 355
    invoke-interface {v10}, Lcom/ss/android/socialbase/downloader/reader/IStreamReader;->close()V

    .line 359
    :cond_2d
    :try_start_22
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->bugfixCancelThenUpdate:Z

    if-eqz v0, :cond_2f

    .line 360
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    monitor-enter v2
    :try_end_22
    .catchall {:try_start_22 .. :try_end_22} :catchall_14

    .line 361
    :try_start_23
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    if-nez v0, :cond_2e

    .line 363
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 364
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    if-eqz v0, :cond_2e

    .line 365
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V

    .line 368
    :cond_2e
    monitor-exit v2

    goto :goto_17

    :catchall_13
    move-exception v0

    monitor-exit v2
    :try_end_23
    .catchall {:try_start_23 .. :try_end_23} :catchall_13

    :try_start_24
    throw v0

    .line 370
    :cond_2f
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 371
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    if-eqz v0, :cond_30

    .line 372
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V
    :try_end_24
    .catchall {:try_start_24 .. :try_end_24} :catchall_14

    :cond_30
    :goto_17
    new-array v0, v6, [Ljava/io/Closeable;

    .line 377
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    aput-object v2, v0, v3

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    goto/16 :goto_11

    :catchall_14
    move-exception v0

    new-array v2, v6, [Ljava/io/Closeable;

    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    aput-object v4, v2, v3

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    throw v0

    .line 328
    :cond_31
    :try_start_25
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result v2

    if-eqz v2, :cond_32

    .line 329
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->printStackTrace()V

    .line 331
    :cond_32
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 332
    throw v0
    :try_end_25
    .catchall {:try_start_25 .. :try_end_25} :catchall_15

    :catchall_15
    move-exception v0

    .line 351
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v2, :cond_33

    .line 352
    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->end()V

    :cond_33
    if-eqz v10, :cond_34

    .line 355
    invoke-interface {v10}, Lcom/ss/android/socialbase/downloader/reader/IStreamReader;->close()V

    .line 359
    :cond_34
    :try_start_26
    iget-boolean v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->bugfixCancelThenUpdate:Z

    if-eqz v2, :cond_36

    .line 360
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    monitor-enter v2
    :try_end_26
    .catchall {:try_start_26 .. :try_end_26} :catchall_17

    .line 361
    :try_start_27
    iget-boolean v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    if-nez v4, :cond_35

    .line 363
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v4}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 364
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    if-eqz v4, :cond_35

    .line 365
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V

    .line 368
    :cond_35
    monitor-exit v2

    goto :goto_18

    :catchall_16
    move-exception v0

    monitor-exit v2
    :try_end_27
    .catchall {:try_start_27 .. :try_end_27} :catchall_16

    :try_start_28
    throw v0

    .line 370
    :cond_36
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadCache:Lcom/ss/android/socialbase/downloader/impls/DownloadCache;

    invoke-direct {v1, v2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->updateDownloadChunk(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 371
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    if-eqz v2, :cond_37

    .line 372
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->sync()V
    :try_end_28
    .catchall {:try_start_28 .. :try_end_28} :catchall_17

    :cond_37
    :goto_18
    new-array v2, v6, [Ljava/io/Closeable;

    .line 377
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    aput-object v4, v2, v3

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    .line 380
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v2

    sub-long/2addr v2, v8

    iput-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugTotalTimeNs:J

    .line 393
    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v12, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->url:Ljava/lang/String;

    iget-object v13, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    iget-boolean v14, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->paused:Z

    iget-boolean v15, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->canceled:Z

    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    move-object/from16 v16, v2

    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    iget-wide v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleStartOffset:J

    sub-long v17, v2, v4

    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugTotalTimeNs:J

    move-wide/from16 v19, v2

    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugReadTimeNs:J

    move-wide/from16 v22, v2

    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugWriteTimeNs:J

    move-wide/from16 v24, v2

    iget-wide v2, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->debugSyncTimeNs:J

    move-wide/from16 v26, v2

    const/16 v28, 0x0

    move/from16 v21, v29

    invoke-static/range {v10 .. v28}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorDownloadIO(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;ZZLcom/ss/android/socialbase/downloader/exception/BaseException;JJZJJJLorg/json/JSONObject;)V

    throw v0

    :catchall_17
    move-exception v0

    new-array v2, v6, [Ljava/io/Closeable;

    .line 377
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->outputStream:Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    aput-object v4, v2, v3

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    throw v0

    .line 200
    :cond_38
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;

    const/16 v2, 0x3ec

    const-string v3, "the content-length is 0"

    invoke-direct {v0, v2, v3}, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;-><init>(ILjava/lang/String;)V

    throw v0

    :cond_39
    :goto_19
    return-void
.end method

.method public pause()V
    .locals 1

    .line 147
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->paused:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 148
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->paused:Z

    .line 149
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->cancelConnection()V

    return-void
.end method

.method public setChunkOffset(JJJ)V
    .locals 0

    .line 183
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->curOffset:J

    .line 184
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleStartOffset:J

    .line 185
    iput-wide p3, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->endOffset:J

    .line 186
    iput-wide p5, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunkContentLen:J

    return-void
.end method

.method public setEndOffset(JJ)V
    .locals 0

    .line 190
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->endOffset:J

    .line 191
    iput-wide p3, p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->downloadChunkContentLen:J

    return-void
.end method
