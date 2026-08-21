.class Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;
.super Ljava/lang/Object;


# static fields
.field private static final DEBUG:Z = false

.field private static final MIN_CACHE_BYTES:I = 0x10000

.field private static final MIN_CACHE_TIME_MS:I = 0x64

.field private static final MIN_SYNC_STEP_BYTE:I = 0x10000

.field private static final MIN_SYNC_TIME_MS:J = 0x1f4L

.field private static final TAG:Ljava/lang/String; = "MultiSegmentWriter"


# instance fields
.field private final appStatusManager:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

.field private final callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

.field private volatile canceled:Z

.field private final doneOutputs:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;",
            ">;"
        }
    .end annotation
.end field

.field private final downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

.field private final downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

.field private exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

.field private final hasSyncStrategy:Z

.field private final isMonitorRw:Z

.field private volatile lastSyncBytes:J

.field private volatile lastSyncTimestamp:J

.field private final outputs:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;",
            ">;"
        }
    .end annotation
.end field

.field private volatile paused:Z

.field private final pool:Lcom/ss/android/socialbase/downloader/segment/IBufferPool;

.field private final setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

.field private final syncIntervalMsBg:J

.field private final syncIntervalMsFg:J

.field private syncTimeNs:J

.field private volatile threadDirty:Z


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;Lcom/ss/android/socialbase/downloader/segment/IBufferPool;)V
    .locals 7

    .line 70
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    .line 45
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->doneOutputs:Ljava/util/List;

    const/4 v0, 0x0

    .line 53
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->threadDirty:Z

    .line 54
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    .line 55
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    const-wide/16 v1, 0x0

    .line 278
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->lastSyncBytes:J

    .line 279
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->lastSyncTimestamp:J

    .line 71
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 72
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move-result-object v3

    iput-object v3, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    .line 73
    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    .line 74
    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->pool:Lcom/ss/android/socialbase/downloader/segment/IBufferPool;

    .line 75
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object p2

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->appStatusManager:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    .line 76
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string p2, "sync_strategy"

    .line 77
    invoke-virtual {p1, p2, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    move p1, p2

    goto :goto_0

    :cond_0
    move p1, v0

    :goto_0
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->hasSyncStrategy:Z

    if-eqz p1, :cond_1

    .line 79
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const/16 p3, 0x1388

    const-string v1, "sync_interval_ms_fg"

    invoke-virtual {p1, v1, p3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    int-to-long v1, p1

    .line 81
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const/16 p3, 0x3e8

    const-string v3, "sync_interval_ms_bg"

    invoke-virtual {p1, v3, p3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    int-to-long v3, p1

    const-wide/16 v5, 0x1f4

    .line 83
    invoke-static {v1, v2, v5, v6}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncIntervalMsFg:J

    .line 84
    invoke-static {v3, v4, v5, v6}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncIntervalMsBg:J

    goto :goto_1

    .line 86
    :cond_1
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncIntervalMsFg:J

    .line 87
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncIntervalMsBg:J

    .line 89
    :goto_1
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string p3, "monitor_rw"

    invoke-virtual {p1, p3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result p1

    if-ne p1, p2, :cond_2

    move v0, p2

    :cond_2
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->isMonitorRw:Z

    return-void
.end method

.method private checkAndSync(JZ)V
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 282
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->lastSyncTimestamp:J

    sub-long v0, p1, v0

    .line 284
    iget-boolean v2, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->hasSyncStrategy:Z

    if-eqz v2, :cond_1

    .line 285
    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->appStatusManager:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    invoke-virtual {p3}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->isAppForeground()Z

    move-result p3

    if-eqz p3, :cond_0

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncIntervalMsFg:J

    goto :goto_0

    :cond_0
    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncIntervalMsBg:J

    :goto_0
    cmp-long p3, v0, v2

    if-lez p3, :cond_3

    .line 286
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->flushAndSync()V

    .line 287
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->lastSyncTimestamp:J

    goto :goto_1

    .line 290
    :cond_1
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->lastSyncBytes:J

    sub-long/2addr v2, v4

    if-nez p3, :cond_2

    .line 291
    invoke-direct {p0, v2, v3, v0, v1}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->isNeedSync(JJ)Z

    move-result p3

    if-eqz p3, :cond_3

    .line 292
    :cond_2
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->flushAndSync()V

    .line 293
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->lastSyncTimestamp:J

    :cond_3
    :goto_1
    return-void
.end method

.method private close(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;",
            ">;)V"
        }
    .end annotation

    .line 386
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;

    .line 387
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;->close()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private flush(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 374
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;

    .line 375
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;->flush()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private flushAndSync()V
    .locals 11
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 316
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->isMonitorRw:Z

    if-eqz v0, :cond_0

    .line 317
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v1

    goto :goto_0

    :cond_0
    const-wide/16 v1, 0x0

    .line 319
    :goto_0
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 320
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    .line 321
    iget-object v5, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    .line 322
    iget-object v6, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->doneOutputs:Ljava/util/List;

    .line 324
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v7

    invoke-interface {v4, v7}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getSegmentMap(I)Ljava/util/Map;

    move-result-object v7

    if-nez v7, :cond_1

    .line 326
    new-instance v7, Ljava/util/HashMap;

    const/4 v8, 0x4

    invoke-direct {v7, v8}, Ljava/util/HashMap;-><init>(I)V

    :cond_1
    const/4 v8, 0x0

    .line 330
    monitor-enter p0

    .line 332
    :try_start_0
    invoke-direct {p0, v5}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->flush(Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v9, 0x1

    .line 338
    :try_start_1
    invoke-direct {p0, v5}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->sync(Ljava/util/List;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move v8, v9

    goto :goto_1

    :catchall_0
    move-exception v10

    .line 341
    :try_start_2
    invoke-virtual {v10}, Ljava/lang/Throwable;->printStackTrace()V

    .line 345
    :goto_1
    invoke-direct {p0, v5, v7}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->updateSegmentToMap(Ljava/util/List;Ljava/util/Map;)V

    .line 347
    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v10

    if-lez v10, :cond_2

    .line 349
    invoke-direct {p0, v6}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->close(Ljava/util/List;)V

    .line 350
    invoke-interface {v5, v6}, Ljava/util/List;->removeAll(Ljava/util/Collection;)Z

    .line 351
    invoke-interface {v6}, Ljava/util/List;->clear()V

    .line 353
    :cond_2
    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    if-eqz v8, :cond_3

    .line 357
    invoke-virtual {v3, v9}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateRealDownloadTime(Z)V

    .line 358
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v5

    invoke-interface {v4, v5, v7}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateSegments(ILjava/util/Map;)Z

    .line 359
    invoke-interface {v4, v3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    .line 360
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v3

    iput-wide v3, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->lastSyncBytes:J

    :cond_3
    if-eqz v0, :cond_4

    .line 364
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v3

    sub-long/2addr v3, v1

    .line 365
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncTimeNs:J

    add-long/2addr v0, v3

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncTimeNs:J

    :cond_4
    return-void

    :catchall_1
    move-exception v0

    .line 353
    :try_start_3
    monitor-exit p0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    throw v0
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

.method private outputDone(Lcom/ss/android/socialbase/downloader/segment/IOutput;)V
    .locals 1

    .line 307
    monitor-enter p0

    .line 308
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->doneOutputs:Ljava/util/List;

    check-cast p1, Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 309
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method private sync(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 380
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;

    .line 381
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;->sync()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private updateSegmentToMap(Ljava/util/List;Ljava/util/Map;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;)V"
        }
    .end annotation

    .line 392
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;

    .line 393
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;->getSegment()Lcom/ss/android/socialbase/downloader/segment/Segment;

    move-result-object v0

    .line 394
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getStartOffset()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/segment/Segment;

    if-nez v1, :cond_0

    .line 396
    new-instance v1, Lcom/ss/android/socialbase/downloader/segment/Segment;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/segment/Segment;-><init>(Lcom/ss/android/socialbase/downloader/segment/Segment;)V

    .line 397
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getStartOffset()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 399
    :cond_0
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getCurrentOffset()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/ss/android/socialbase/downloader/segment/Segment;->setCurrentOffset(J)V

    .line 400
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getEndOffset()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/ss/android/socialbase/downloader/segment/Segment;->setEndOffset(J)V

    goto :goto_0

    :cond_1
    return-void
.end method


# virtual methods
.method assignOutput(Lcom/ss/android/socialbase/downloader/segment/SegmentOutput;)V
    .locals 1

    .line 93
    monitor-enter p0

    .line 94
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 95
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public cancel()V
    .locals 1

    const/4 v0, 0x1

    .line 406
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    .line 407
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->threadDirty:Z

    return-void
.end method

.method public getLastSyncBytes()J
    .locals 2

    .line 303
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->lastSyncBytes:J

    return-wide v0
.end method

.method loopAndWrite(Lcom/ss/android/socialbase/downloader/segment/IInput;)V
    .locals 30
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    move-object/from16 v1, p0

    .line 100
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    if-nez v0, :cond_2c

    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-eqz v0, :cond_0

    goto/16 :goto_2c

    .line 104
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->updateWifiStatus()V

    const/4 v2, 0x0

    .line 106
    iput-object v2, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 109
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 110
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->callback:Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;

    .line 111
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->pool:Lcom/ss/android/socialbase/downloader/segment/IBufferPool;

    .line 112
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v5

    .line 113
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v7

    .line 114
    iget-boolean v14, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->isMonitorRw:Z

    const-wide/16 v9, 0x0

    const/16 v22, 0x1

    const/4 v15, 0x0

    .line 125
    :try_start_0
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateRealStartDownloadTime()V
    :try_end_0
    .catch Lcom/ss/android/socialbase/downloader/segment/StreamClosedException; {:try_start_0 .. :try_end_0} :catch_16
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_0 .. :try_end_0} :catch_14
    .catchall {:try_start_0 .. :try_end_0} :catchall_b

    move-wide v11, v9

    move-wide/from16 v16, v11

    move-wide/from16 v18, v16

    move v13, v15

    :goto_0
    if-eqz v14, :cond_1

    .line 133
    :try_start_1
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v11
    :try_end_1
    .catch Lcom/ss/android/socialbase/downloader/segment/StreamClosedException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_6

    :catchall_0
    move-exception v0

    move-wide/from16 v23, v9

    :goto_1
    move/from16 v27, v15

    move-wide/from16 v17, v16

    :goto_2
    move v15, v13

    goto/16 :goto_17

    :catch_0
    move-exception v0

    move-wide/from16 v23, v9

    :goto_3
    move/from16 v27, v15

    move-wide/from16 v17, v16

    :goto_4
    move v15, v13

    goto/16 :goto_21

    :catch_1
    move-exception v0

    move/from16 v27, v15

    move-wide/from16 v25, v16

    :goto_5
    move v15, v13

    goto/16 :goto_26

    .line 134
    :cond_1
    :goto_6
    :try_start_2
    invoke-interface/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/segment/IInput;->read()Lcom/ss/android/socialbase/downloader/segment/Buffer;

    move-result-object v2
    :try_end_2
    .catch Lcom/ss/android/socialbase/downloader/segment/StreamClosedException; {:try_start_2 .. :try_end_2} :catch_10
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_2 .. :try_end_2} :catch_f
    .catchall {:try_start_2 .. :try_end_2} :catchall_a

    if-eqz v14, :cond_2

    .line 135
    :try_start_3
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v23
    :try_end_3
    .catch Lcom/ss/android/socialbase/downloader/segment/StreamClosedException; {:try_start_3 .. :try_end_3} :catch_1
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    sub-long v23, v23, v11

    add-long v9, v9, v23

    :cond_2
    move-wide/from16 v23, v9

    .line 137
    :try_start_4
    iget v9, v2, Lcom/ss/android/socialbase/downloader/segment/Buffer;->size:I
    :try_end_4
    .catch Lcom/ss/android/socialbase/downloader/segment/StreamClosedException; {:try_start_4 .. :try_end_4} :catch_e
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_4 .. :try_end_4} :catch_d
    .catchall {:try_start_4 .. :try_end_4} :catchall_9

    const/4 v10, -0x1

    if-ne v9, v10, :cond_3

    .line 140
    :try_start_5
    iget-object v9, v2, Lcom/ss/android/socialbase/downloader/segment/Buffer;->output:Lcom/ss/android/socialbase/downloader/segment/IOutput;

    invoke-direct {v1, v9}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputDone(Lcom/ss/android/socialbase/downloader/segment/IOutput;)V

    .line 141
    invoke-interface {v0, v2}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    move-wide/from16 v9, v23

    :goto_7
    const/4 v2, 0x0

    goto :goto_0

    :catchall_1
    move-exception v0

    goto :goto_1

    :catch_2
    move-exception v0

    goto :goto_3

    :catch_3
    move-exception v0

    move/from16 v27, v15

    move-wide/from16 v25, v16

    :goto_8
    move-wide/from16 v9, v23

    goto :goto_5

    :cond_3
    if-eqz v14, :cond_4

    .line 145
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v10
    :try_end_5
    .catch Lcom/ss/android/socialbase/downloader/segment/StreamClosedException; {:try_start_5 .. :try_end_5} :catch_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_5 .. :try_end_5} :catch_2
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    move-wide v11, v10

    .line 146
    :cond_4
    :try_start_6
    iget-object v10, v2, Lcom/ss/android/socialbase/downloader/segment/Buffer;->output:Lcom/ss/android/socialbase/downloader/segment/IOutput;

    invoke-interface {v10, v2}, Lcom/ss/android/socialbase/downloader/segment/IOutput;->write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    :try_end_6
    .catch Lcom/ss/android/socialbase/downloader/segment/StreamClosedException; {:try_start_6 .. :try_end_6} :catch_e
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_6 .. :try_end_6} :catch_d
    .catchall {:try_start_6 .. :try_end_6} :catchall_9

    if-eqz v14, :cond_5

    .line 147
    :try_start_7
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v25
    :try_end_7
    .catch Lcom/ss/android/socialbase/downloader/segment/StreamClosedException; {:try_start_7 .. :try_end_7} :catch_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_7 .. :try_end_7} :catch_2
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    sub-long v25, v25, v11

    add-long v16, v16, v25

    :cond_5
    move-wide/from16 v25, v16

    .line 149
    :try_start_8
    invoke-interface {v0, v2}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    .line 151
    iget-boolean v2, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->threadDirty:Z

    if-eqz v2, :cond_d

    .line 152
    iget-boolean v2, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z
    :try_end_8
    .catch Lcom/ss/android/socialbase/downloader/segment/StreamClosedException; {:try_start_8 .. :try_end_8} :catch_c
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_8 .. :try_end_8} :catch_b
    .catchall {:try_start_8 .. :try_end_8} :catchall_8

    if-nez v2, :cond_7

    :try_start_9
    iget-boolean v2, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-eqz v2, :cond_6

    goto :goto_9

    .line 155
    :cond_6
    iput-boolean v15, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->threadDirty:Z
    :try_end_9
    .catch Lcom/ss/android/socialbase/downloader/segment/StreamClosedException; {:try_start_9 .. :try_end_9} :catch_5
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_9 .. :try_end_9} :catch_4
    .catchall {:try_start_9 .. :try_end_9} :catchall_2

    goto/16 :goto_e

    :catchall_2
    move-exception v0

    move/from16 v27, v15

    move-wide/from16 v17, v25

    goto :goto_2

    :catch_4
    move-exception v0

    move/from16 v27, v15

    move-wide/from16 v17, v25

    goto :goto_4

    :catch_5
    move-exception v0

    move/from16 v27, v15

    goto :goto_8

    :cond_7
    :goto_9
    if-lez v13, :cond_8

    int-to-long v9, v13

    .line 223
    :try_start_a
    invoke-interface {v3, v9, v10}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onProgress(J)Z
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_3

    .line 230
    :catchall_3
    :cond_8
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-nez v0, :cond_9

    .line 233
    :try_start_b
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->flushAndSync()V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_4

    goto :goto_a

    :catchall_4
    move-exception v0

    move-object v2, v0

    .line 236
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "loopAndWrite: finally sync, e = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "MultiSegmentWriter"

    invoke-static {v3, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_b

    :cond_9
    :goto_a
    const/4 v2, 0x0

    .line 239
    :goto_b
    monitor-enter p0

    .line 240
    :try_start_c
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->close(Ljava/util/List;)V

    .line 241
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 242
    monitor-exit p0
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_5

    .line 244
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v9

    sub-long v10, v9, v5

    .line 245
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v5

    sub-long v12, v5, v7

    .line 257
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    iget-boolean v7, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    iget-boolean v8, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    move v0, v7

    iget-wide v6, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncTimeNs:J

    move-wide/from16 v19, v6

    const/16 v21, 0x0

    move/from16 v27, v15

    move-wide/from16 v15, v23

    move-wide/from16 v17, v25

    move v7, v0

    const/4 v6, 0x0

    invoke-static/range {v3 .. v21}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorDownloadIO(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;ZZLcom/ss/android/socialbase/downloader/exception/BaseException;JJZJJJLorg/json/JSONObject;)V

    if-eqz v2, :cond_c

    .line 263
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    if-nez v0, :cond_b

    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-nez v0, :cond_b

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    if-eqz v0, :cond_a

    goto :goto_c

    :cond_a
    move/from16 v22, v27

    :cond_b
    :goto_c
    if-nez v22, :cond_c

    :try_start_d
    const-string v0, "loopAndWrite_finally"

    .line 268
    invoke-static {v2, v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_d
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_d .. :try_end_d} :catch_6

    goto :goto_d

    :catch_6
    move-exception v0

    .line 270
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 271
    throw v0

    :cond_c
    :goto_d
    return-void

    :catchall_5
    move-exception v0

    .line 242
    :try_start_e
    monitor-exit p0
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_5

    throw v0

    :cond_d
    :goto_e
    move/from16 v27, v15

    add-int/2addr v13, v9

    const/high16 v2, 0x10000

    if-lt v13, v2, :cond_11

    .line 160
    :try_start_f
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v9

    sub-long v15, v9, v18

    const-wide/16 v28, 0x64

    cmp-long v2, v15, v28

    if-lez v2, :cond_11

    move-wide/from16 v28, v11

    int-to-long v11, v13

    .line 163
    invoke-interface {v3, v11, v12}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onProgress(J)Z

    move-result v2
    :try_end_f
    .catch Lcom/ss/android/socialbase/downloader/segment/StreamClosedException; {:try_start_f .. :try_end_f} :catch_a
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_f .. :try_end_f} :catch_9
    .catchall {:try_start_f .. :try_end_f} :catchall_7

    .line 168
    :try_start_10
    invoke-direct {v1, v9, v10, v2}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->checkAndSync(JZ)V

    .line 172
    sget-boolean v2, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->isWifi:Z

    if-nez v2, :cond_10

    .line 175
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isOnlyWifi()Z

    move-result v2

    if-nez v2, :cond_f

    .line 180
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isDownloadFromReserveWifi()Z

    move-result v2

    if-eqz v2, :cond_10

    .line 181
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isPauseReserveOnWifi()Z

    move-result v2

    if-nez v2, :cond_e

    goto :goto_f

    .line 182
    :cond_e
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/DownloadPauseReserveWifiException;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/exception/DownloadPauseReserveWifiException;-><init>()V

    throw v0

    .line 176
    :cond_f
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/DownloadOnlyWifiException;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/exception/DownloadOnlyWifiException;-><init>()V

    throw v0
    :try_end_10
    .catch Lcom/ss/android/socialbase/downloader/segment/StreamClosedException; {:try_start_10 .. :try_end_10} :catch_8
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_10 .. :try_end_10} :catch_7
    .catchall {:try_start_10 .. :try_end_10} :catchall_6

    :cond_10
    :goto_f
    move-wide/from16 v18, v9

    move-wide/from16 v9, v23

    move-wide/from16 v16, v25

    move/from16 v13, v27

    move v15, v13

    goto :goto_10

    :catchall_6
    move-exception v0

    move-wide/from16 v17, v25

    move/from16 v15, v27

    goto/16 :goto_17

    :catch_7
    move-exception v0

    move-wide/from16 v17, v25

    move/from16 v15, v27

    goto/16 :goto_21

    :catch_8
    move-exception v0

    move-wide/from16 v9, v23

    move/from16 v15, v27

    goto/16 :goto_26

    :catchall_7
    move-exception v0

    goto :goto_11

    :catch_9
    move-exception v0

    goto :goto_12

    :catch_a
    move-exception v0

    goto :goto_13

    :cond_11
    move-wide/from16 v28, v11

    move-wide/from16 v9, v23

    move-wide/from16 v16, v25

    move/from16 v15, v27

    :goto_10
    move-wide/from16 v11, v28

    goto/16 :goto_7

    :catchall_8
    move-exception v0

    move/from16 v27, v15

    :goto_11
    move v15, v13

    move-wide/from16 v17, v25

    goto :goto_17

    :catch_b
    move-exception v0

    move/from16 v27, v15

    :goto_12
    move v15, v13

    move-wide/from16 v17, v25

    goto/16 :goto_21

    :catch_c
    move-exception v0

    move/from16 v27, v15

    :goto_13
    move v15, v13

    goto :goto_14

    :catchall_9
    move-exception v0

    move/from16 v27, v15

    goto :goto_15

    :catch_d
    move-exception v0

    move/from16 v27, v15

    goto :goto_16

    :catch_e
    move-exception v0

    move/from16 v27, v15

    move v15, v13

    move-wide/from16 v25, v16

    :goto_14
    move-wide/from16 v9, v23

    goto/16 :goto_26

    :catchall_a
    move-exception v0

    move/from16 v27, v15

    move-wide/from16 v23, v9

    :goto_15
    move v15, v13

    move-wide/from16 v17, v16

    goto :goto_17

    :catch_f
    move-exception v0

    move/from16 v27, v15

    move-wide/from16 v23, v9

    :goto_16
    move v15, v13

    move-wide/from16 v17, v16

    goto/16 :goto_21

    :catch_10
    move-exception v0

    move/from16 v27, v15

    move v15, v13

    move-wide/from16 v25, v16

    goto/16 :goto_26

    :catchall_b
    move-exception v0

    move/from16 v27, v15

    move-wide/from16 v17, v9

    move-wide/from16 v23, v17

    .line 207
    :goto_17
    :try_start_11
    iget-boolean v2, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    if-nez v2, :cond_19

    iget-boolean v2, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-eqz v2, :cond_12

    goto/16 :goto_1c

    .line 210
    :cond_12
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result v2

    if-eqz v2, :cond_13

    .line 211
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_13
    const-string v2, "MultiSegmentWriter"

    .line 213
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "loopAndWrite:  e = "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v2, v9}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_11
    .catchall {:try_start_11 .. :try_end_11} :catchall_15

    :try_start_12
    const-string v2, "loopAndWrite"

    .line 215
    invoke-static {v0, v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_12
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_12 .. :try_end_12} :catch_12
    .catchall {:try_start_12 .. :try_end_12} :catchall_15

    if-lez v15, :cond_14

    int-to-long v9, v15

    .line 223
    :try_start_13
    invoke-interface {v3, v9, v10}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onProgress(J)Z
    :try_end_13
    .catchall {:try_start_13 .. :try_end_13} :catchall_c

    .line 230
    :catchall_c
    :cond_14
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-nez v0, :cond_15

    .line 233
    :try_start_14
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->flushAndSync()V
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_d

    goto :goto_18

    :catchall_d
    move-exception v0

    move-object v2, v0

    .line 236
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "loopAndWrite: finally sync, e = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "MultiSegmentWriter"

    invoke-static {v3, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_19

    :cond_15
    :goto_18
    const/4 v2, 0x0

    .line 239
    :goto_19
    monitor-enter p0

    .line 240
    :try_start_15
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->close(Ljava/util/List;)V

    .line 241
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 242
    monitor-exit p0
    :try_end_15
    .catchall {:try_start_15 .. :try_end_15} :catchall_e

    .line 244
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v9

    sub-long v10, v9, v5

    .line 245
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v5

    sub-long v12, v5, v7

    .line 257
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    iget-boolean v7, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    iget-boolean v8, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    move v0, v7

    iget-wide v6, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncTimeNs:J

    move-wide/from16 v19, v6

    const/16 v21, 0x0

    move-wide/from16 v15, v23

    move v7, v0

    const/4 v6, 0x0

    invoke-static/range {v3 .. v21}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorDownloadIO(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;ZZLcom/ss/android/socialbase/downloader/exception/BaseException;JJZJJJLorg/json/JSONObject;)V

    if-eqz v2, :cond_18

    .line 263
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    if-nez v0, :cond_17

    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-nez v0, :cond_17

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    if-eqz v0, :cond_16

    goto :goto_1a

    :cond_16
    move/from16 v22, v27

    :cond_17
    :goto_1a
    if-nez v22, :cond_18

    :try_start_16
    const-string v0, "loopAndWrite_finally"

    .line 268
    invoke-static {v2, v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_16
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_16 .. :try_end_16} :catch_11

    goto :goto_1b

    :catch_11
    move-exception v0

    .line 270
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 271
    throw v0

    :cond_18
    :goto_1b
    return-void

    :catchall_e
    move-exception v0

    .line 242
    :try_start_17
    monitor-exit p0
    :try_end_17
    .catchall {:try_start_17 .. :try_end_17} :catchall_e

    throw v0

    :catch_12
    move-exception v0

    .line 217
    :try_start_18
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 218
    throw v0
    :try_end_18
    .catchall {:try_start_18 .. :try_end_18} :catchall_15

    :cond_19
    :goto_1c
    if-lez v15, :cond_1a

    int-to-long v9, v15

    .line 223
    :try_start_19
    invoke-interface {v3, v9, v10}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onProgress(J)Z
    :try_end_19
    .catchall {:try_start_19 .. :try_end_19} :catchall_f

    .line 230
    :catchall_f
    :cond_1a
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-nez v0, :cond_1b

    .line 233
    :try_start_1a
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->flushAndSync()V
    :try_end_1a
    .catchall {:try_start_1a .. :try_end_1a} :catchall_10

    goto :goto_1d

    :catchall_10
    move-exception v0

    move-object v2, v0

    .line 236
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "loopAndWrite: finally sync, e = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "MultiSegmentWriter"

    invoke-static {v3, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1e

    :cond_1b
    :goto_1d
    const/4 v2, 0x0

    .line 239
    :goto_1e
    monitor-enter p0

    .line 240
    :try_start_1b
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->close(Ljava/util/List;)V

    .line 241
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 242
    monitor-exit p0
    :try_end_1b
    .catchall {:try_start_1b .. :try_end_1b} :catchall_11

    .line 244
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v9

    sub-long v10, v9, v5

    .line 245
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v5

    sub-long v12, v5, v7

    .line 257
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    iget-boolean v7, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    iget-boolean v8, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    move v0, v7

    iget-wide v6, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncTimeNs:J

    move-wide/from16 v19, v6

    const/16 v21, 0x0

    move-wide/from16 v15, v23

    move v7, v0

    const/4 v6, 0x0

    invoke-static/range {v3 .. v21}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorDownloadIO(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;ZZLcom/ss/android/socialbase/downloader/exception/BaseException;JJZJJJLorg/json/JSONObject;)V

    if-eqz v2, :cond_1e

    .line 263
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    if-nez v0, :cond_1d

    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-nez v0, :cond_1d

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    if-eqz v0, :cond_1c

    goto :goto_1f

    :cond_1c
    move/from16 v22, v27

    :cond_1d
    :goto_1f
    if-nez v22, :cond_1e

    :try_start_1c
    const-string v0, "loopAndWrite_finally"

    .line 268
    invoke-static {v2, v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_1c
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_1c .. :try_end_1c} :catch_13

    goto :goto_20

    :catch_13
    move-exception v0

    .line 270
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 271
    throw v0

    :cond_1e
    :goto_20
    return-void

    :catchall_11
    move-exception v0

    .line 242
    :try_start_1d
    monitor-exit p0
    :try_end_1d
    .catchall {:try_start_1d .. :try_end_1d} :catchall_11

    throw v0

    :catch_14
    move-exception v0

    move/from16 v27, v15

    move-wide/from16 v17, v9

    move-wide/from16 v23, v17

    .line 195
    :goto_21
    :try_start_1e
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string v9, "ignore_base_ex_on_stop_status"

    invoke-virtual {v2, v9}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_25

    .line 196
    iget-boolean v2, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    if-nez v2, :cond_1f

    iget-boolean v2, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z
    :try_end_1e
    .catchall {:try_start_1e .. :try_end_1e} :catchall_15

    if-eqz v2, :cond_25

    :cond_1f
    if-lez v15, :cond_20

    int-to-long v9, v15

    .line 223
    :try_start_1f
    invoke-interface {v3, v9, v10}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onProgress(J)Z
    :try_end_1f
    .catchall {:try_start_1f .. :try_end_1f} :catchall_12

    .line 230
    :catchall_12
    :cond_20
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-nez v0, :cond_21

    .line 233
    :try_start_20
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->flushAndSync()V
    :try_end_20
    .catchall {:try_start_20 .. :try_end_20} :catchall_13

    goto :goto_22

    :catchall_13
    move-exception v0

    move-object v2, v0

    .line 236
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "loopAndWrite: finally sync, e = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "MultiSegmentWriter"

    invoke-static {v3, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_23

    :cond_21
    :goto_22
    const/4 v2, 0x0

    .line 239
    :goto_23
    monitor-enter p0

    .line 240
    :try_start_21
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    invoke-direct {v1, v0}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->close(Ljava/util/List;)V

    .line 241
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 242
    monitor-exit p0
    :try_end_21
    .catchall {:try_start_21 .. :try_end_21} :catchall_14

    .line 244
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v9

    sub-long v10, v9, v5

    .line 245
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v5

    sub-long v12, v5, v7

    .line 257
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    iget-boolean v7, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    iget-boolean v8, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    move v0, v7

    iget-wide v6, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncTimeNs:J

    move-wide/from16 v19, v6

    const/16 v21, 0x0

    move-wide/from16 v15, v23

    move v7, v0

    const/4 v6, 0x0

    invoke-static/range {v3 .. v21}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorDownloadIO(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;ZZLcom/ss/android/socialbase/downloader/exception/BaseException;JJZJJJLorg/json/JSONObject;)V

    if-eqz v2, :cond_24

    .line 263
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    if-nez v0, :cond_23

    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-nez v0, :cond_23

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    if-eqz v0, :cond_22

    goto :goto_24

    :cond_22
    move/from16 v22, v27

    :cond_23
    :goto_24
    if-nez v22, :cond_24

    :try_start_22
    const-string v0, "loopAndWrite_finally"

    .line 268
    invoke-static {v2, v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_22
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_22 .. :try_end_22} :catch_15

    goto :goto_25

    :catch_15
    move-exception v0

    .line 270
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 271
    throw v0

    :cond_24
    :goto_25
    return-void

    :catchall_14
    move-exception v0

    .line 242
    :try_start_23
    monitor-exit p0
    :try_end_23
    .catchall {:try_start_23 .. :try_end_23} :catchall_14

    throw v0

    .line 200
    :cond_25
    :try_start_24
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result v2

    if-eqz v2, :cond_26

    .line 201
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->printStackTrace()V

    :cond_26
    const-string v2, "MultiSegmentWriter"

    .line 203
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "loopAndWrite:  BaseException e = "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v2, v9}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 204
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 205
    throw v0
    :try_end_24
    .catchall {:try_start_24 .. :try_end_24} :catchall_15

    :catchall_15
    move-exception v0

    move-object v2, v0

    goto :goto_27

    :catch_16
    move-exception v0

    move/from16 v27, v15

    move-wide/from16 v25, v9

    .line 192
    :goto_26
    :try_start_25
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 193
    throw v0
    :try_end_25
    .catchall {:try_start_25 .. :try_end_25} :catchall_16

    :catchall_16
    move-exception v0

    move-object v2, v0

    move-wide/from16 v23, v9

    move-wide/from16 v17, v25

    :goto_27
    if-lez v15, :cond_27

    int-to-long v9, v15

    .line 223
    :try_start_26
    invoke-interface {v3, v9, v10}, Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;->onProgress(J)Z
    :try_end_26
    .catchall {:try_start_26 .. :try_end_26} :catchall_17

    .line 230
    :catchall_17
    :cond_27
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-nez v0, :cond_28

    .line 233
    :try_start_27
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->flushAndSync()V
    :try_end_27
    .catchall {:try_start_27 .. :try_end_27} :catchall_18

    goto :goto_28

    :catchall_18
    move-exception v0

    move-object v3, v0

    .line 236
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "loopAndWrite: finally sync, e = "

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v9, "MultiSegmentWriter"

    invoke-static {v9, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    move-object v0, v3

    goto :goto_29

    :cond_28
    :goto_28
    const/4 v0, 0x0

    .line 239
    :goto_29
    monitor-enter p0

    .line 240
    :try_start_28
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    invoke-direct {v1, v3}, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->close(Ljava/util/List;)V

    .line 241
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->outputs:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->clear()V

    .line 242
    monitor-exit p0
    :try_end_28
    .catchall {:try_start_28 .. :try_end_28} :catchall_19

    .line 244
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v9

    sub-long v10, v9, v5

    .line 245
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v5

    sub-long v12, v5, v7

    .line 257
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    iget-boolean v7, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    iget-boolean v8, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    move/from16 v25, v7

    iget-wide v6, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->syncTimeNs:J

    move-wide/from16 v19, v6

    const/16 v21, 0x0

    move-wide/from16 v15, v23

    move/from16 v7, v25

    const/4 v6, 0x0

    invoke-static/range {v3 .. v21}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorDownloadIO(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;ZZLcom/ss/android/socialbase/downloader/exception/BaseException;JJZJJJLorg/json/JSONObject;)V

    if-eqz v0, :cond_2b

    .line 263
    iget-boolean v3, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    if-nez v3, :cond_2a

    iget-boolean v3, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->canceled:Z

    if-nez v3, :cond_2a

    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    if-eqz v3, :cond_29

    goto :goto_2a

    :cond_29
    move/from16 v22, v27

    :cond_2a
    :goto_2a
    if-nez v22, :cond_2b

    :try_start_29
    const-string v3, "loopAndWrite_finally"

    .line 268
    invoke-static {v0, v3}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_29
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_29 .. :try_end_29} :catch_17

    goto :goto_2b

    :catch_17
    move-exception v0

    .line 270
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->exception:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 271
    throw v0

    .line 275
    :cond_2b
    :goto_2b
    throw v2

    :catchall_19
    move-exception v0

    .line 242
    :try_start_2a
    monitor-exit p0
    :try_end_2a
    .catchall {:try_start_2a .. :try_end_2a} :catchall_19

    throw v0

    :cond_2c
    :goto_2c
    return-void
.end method

.method public pause()V
    .locals 1

    const/4 v0, 0x1

    .line 411
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->paused:Z

    .line 412
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/MultiSegmentWriter;->threadDirty:Z

    return-void
.end method
