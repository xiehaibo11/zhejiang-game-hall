.class Lcom/ss/android/socialbase/downloader/segment/SegmentReader;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# static fields
.field private static final SEGMENT_APPLY_RETRY_MAX_COUNT:I = 0x32

.field private static final SWITCH_URL_MAX_COUNT:I = 0x1e

.field private static final TAG:Ljava/lang/String; = "SegmentReader"


# instance fields
.field private volatile changeSegment:Z

.field private volatile closed:Z

.field volatile connectEndTime:J

.field volatile connectStartTime:J

.field curHostIp:Ljava/lang/String;

.field curHostRealIp:Ljava/lang/String;

.field private curRetryCount:I

.field volatile curSegment:Lcom/ss/android/socialbase/downloader/segment/Segment;

.field private volatile curSegmentReadOffset:J

.field curUrl:Ljava/lang/String;

.field private final downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

.field private volatile endOffsetInConnection:J

.field private exited:Z

.field private failed:Z

.field private failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

.field private future:Ljava/util/concurrent/Future;

.field private final host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

.field private httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

.field private httpResponse:Lcom/ss/android/socialbase/downloader/model/HttpResponse;

.field private httpsToHttpRetryUsed:Z

.field private lastConnectStartTime:J

.field private final pool:Lcom/ss/android/socialbase/downloader/segment/IBufferPool;

.field private volatile readBytes:J

.field volatile readEndTime:J

.field volatile readStartTime:J

.field private volatile reconnect:Z

.field private retryCount:I

.field private segmentApplyRetryTimes:I

.field private volatile segmentNewEndOffset:J

.field private final setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

.field private startOffsetInConnection:J

.field private stenographer:Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer;

.field private final succeedSegments:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;"
        }
    .end annotation
.end field

.field private switchUrlTimes:I

.field private thread:Ljava/lang/Thread;

.field private volatile threadDirty:Z

.field final threadIndex:I

.field urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;Lcom/ss/android/socialbase/downloader/segment/IBufferPool;Lcom/ss/android/socialbase/downloader/segment/UrlRecord;I)V
    .locals 2

    .line 115
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 55
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->succeedSegments:Ljava/util/List;

    const-wide/16 v0, -0x1

    .line 66
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegmentReadOffset:J

    .line 116
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 117
    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    .line 118
    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->pool:Lcom/ss/android/socialbase/downloader/segment/IBufferPool;

    .line 119
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    .line 120
    iput-object p4, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    .line 121
    iput p5, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    return-void
.end method

.method private checkCanUseHttpsToHttpRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z
    .locals 2

    .line 325
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isHttpsError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result p1

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 330
    :cond_0
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    iget-object p1, p1, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->url:Ljava/lang/String;

    .line 331
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "https"

    invoke-virtual {p1, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_1

    goto :goto_0

    .line 335
    :cond_1
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedHttpsToHttpRetry()Z

    move-result p1

    if-nez p1, :cond_2

    return v0

    .line 339
    :cond_2
    iget-boolean p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpsToHttpRetryUsed:Z

    if-eqz p1, :cond_3

    return v0

    :cond_3
    const/4 p1, 0x1

    .line 345
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpsToHttpRetryUsed:Z

    .line 346
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->resetRetryTimes()V

    return p1

    :cond_4
    :goto_0
    return v0
.end method

.method private closeConnection()V
    .locals 4

    .line 255
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_0

    :try_start_0
    const-string v1, "SegmentReader"

    .line 258
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "closeConnection: thread = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 259
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->end()V

    .line 260
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->cancel()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method private createConnection(Lcom/ss/android/socialbase/downloader/segment/Segment;)V
    .locals 24
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    const-string v2, ", threadIndex = "

    const-string v3, ", ip = "

    const-string v4, "https"

    const-string v5, "SegmentReader"

    const-string v6, "createConn"

    .line 362
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    const-wide/16 v9, 0x0

    .line 363
    iput-wide v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->connectEndTime:J

    .line 364
    iput-wide v7, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->connectStartTime:J

    .line 365
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getCurrentOffsetRead()J

    move-result-wide v11

    iput-wide v11, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->startOffsetInConnection:J

    .line 366
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getEndOffset()J

    move-result-wide v11

    iput-wide v11, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->endOffsetInConnection:J

    .line 368
    iget-wide v11, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->endOffsetInConnection:J

    cmp-long v9, v11, v9

    if-lez v9, :cond_1

    iget-wide v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->startOffsetInConnection:J

    iget-wide v11, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->endOffsetInConnection:J

    cmp-long v9, v9, v11

    if-gtz v9, :cond_0

    goto :goto_0

    .line 370
    :cond_0
    new-instance v2, Lcom/ss/android/socialbase/downloader/segment/SegmentApplyException;

    const/4 v3, 0x6

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "createConn, "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v3, v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentApplyException;-><init>(ILjava/lang/String;)V

    throw v2

    .line 373
    :cond_1
    :goto_0
    new-instance v9, Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer;

    invoke-direct {v9}, Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer;-><init>()V

    iput-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->stenographer:Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer;

    .line 375
    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v9}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExtraHeaders()Ljava/util/List;

    move-result-object v10

    .line 376
    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v9}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->geteTag()Ljava/lang/String;

    move-result-object v11

    iget-wide v12, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->startOffsetInConnection:J

    iget-wide v14, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->endOffsetInConnection:J

    invoke-static/range {v10 .. v15}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->addRangeHeader(Ljava/util/List;Ljava/lang/String;JJ)Ljava/util/List;

    move-result-object v9

    .line 380
    new-instance v10, Lcom/ss/android/socialbase/downloader/model/HttpHeader;

    const-string v11, "Segment-Index"

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getIndex()I

    move-result v12

    invoke-static {v12}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v12

    invoke-direct {v10, v11, v12}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v9, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 381
    new-instance v10, Lcom/ss/android/socialbase/downloader/model/HttpHeader;

    const-string v11, "Thread-Index"

    iget v12, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    invoke-static {v12}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v12

    invoke-direct {v10, v11, v12}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v9, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 383
    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v9, v10}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->addThrottleNetSpeed(Ljava/util/List;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 384
    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v9, v10}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->addTTNetProtectTimeout(Ljava/util/List;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 386
    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    iget-object v10, v10, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->url:Ljava/lang/String;

    .line 387
    iget-boolean v11, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpsToHttpRetryUsed:Z

    if-eqz v11, :cond_2

    .line 388
    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_2

    invoke-virtual {v10, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_2

    const-string v11, "http"

    .line 389
    invoke-virtual {v10, v4, v11}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    .line 392
    :cond_2
    iget-object v4, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    iget-object v4, v4, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->ip:Ljava/lang/String;

    .line 393
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "createConnectionBegin: url = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, ", segment = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    invoke-virtual {v11, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 395
    iput-object v10, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curUrl:Ljava/lang/String;

    .line 396
    iput-object v4, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curHostIp:Ljava/lang/String;

    .line 398
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 399
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedDefaultHttpServiceBackUp()Z

    move-result v16

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMaxBytes()I

    move-result v17

    const/16 v21, 0x0

    iget-wide v11, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->lastConnectStartTime:J

    sub-long/2addr v7, v11

    const-wide/16 v11, 0xbb8

    cmp-long v0, v7, v11

    if-lez v0, :cond_3

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string v7, "monitor_download_connect"

    .line 400
    invoke-virtual {v0, v7}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_3

    const/4 v0, 0x1

    goto :goto_1

    :cond_3
    const/4 v0, 0x0

    :goto_1
    move/from16 v22, v0

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-object/from16 v18, v10

    move-object/from16 v19, v4

    move-object/from16 v20, v9

    move-object/from16 v23, v0

    .line 398
    invoke-static/range {v16 .. v23}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadWithConnection(ZILjava/lang/String;Ljava/lang/String;Ljava/util/List;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 405
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    .line 406
    new-instance v7, Lcom/ss/android/socialbase/downloader/model/HttpResponse;

    invoke-direct {v7, v10, v0}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;-><init>(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)V

    iput-object v7, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpResponse:Lcom/ss/android/socialbase/downloader/model/HttpResponse;

    .line 408
    iget-boolean v7, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closed:Z

    if-nez v7, :cond_5

    .line 411
    instance-of v7, v0, Lcom/ss/android/socialbase/downloader/network/AbsDownloadHttpConnection;

    if-eqz v7, :cond_4

    .line 412
    check-cast v0, Lcom/ss/android/socialbase/downloader/network/AbsDownloadHttpConnection;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/AbsDownloadHttpConnection;->getHostIp()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curHostRealIp:Ljava/lang/String;

    .line 414
    :cond_4
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "createConnectionSuccess: url = "

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", hostRealIp = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curHostRealIp:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    .line 409
    :cond_5
    new-instance v0, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;

    invoke-direct {v0, v6}, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 403
    :cond_6
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v2, 0x3fe

    new-instance v3, Ljava/io/IOException;

    const-string v4, "download can\'t continue, chunk connection is null"

    invoke-direct {v3, v4}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    invoke-direct {v0, v2, v3}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    throw v0
    :try_end_0
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    move-exception v0

    .line 419
    :try_start_1
    invoke-static {v0, v6}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 421
    :goto_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->connectEndTime:J

    return-void

    :catch_0
    move-exception v0

    .line 417
    :try_start_2
    throw v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception v0

    .line 421
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->connectEndTime:J

    throw v0
.end method

.method private doConnect(Lcom/ss/android/socialbase/downloader/segment/Segment;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;
        }
    .end annotation

    .line 352
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->createConnection(Lcom/ss/android/socialbase/downloader/segment/Segment;)V

    .line 355
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpResponse:Lcom/ss/android/socialbase/downloader/model/HttpResponse;

    invoke-interface {v0, p0, p1, v1, v2}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->onSegmentConnected(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;Lcom/ss/android/socialbase/downloader/segment/UrlRecord;Lcom/ss/android/socialbase/downloader/model/HttpResponse;)V

    .line 357
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->recordSucceed()V

    return-void
.end method

.method private download(Lcom/ss/android/socialbase/downloader/segment/Segment;)Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    .line 192
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->initParams()V

    .line 197
    :goto_0
    :try_start_0
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->doConnect(Lcom/ss/android/socialbase/downloader/segment/Segment;)V

    .line 200
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->loopAndRead(Lcom/ss/android/socialbase/downloader/segment/Segment;)V
    :try_end_0
    .catch Lcom/ss/android/socialbase/downloader/segment/SegmentApplyException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    .line 240
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->releaseDownload()V

    return p1

    :catchall_0
    move-exception v0

    :try_start_1
    const-string v1, "SegmentReader"

    .line 207
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "download: e = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, ", threadIndex = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", reconnect = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->reconnect:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, ", closed = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closed:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 208
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closed:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 240
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->releaseDownload()V

    return v2

    .line 211
    :cond_0
    :try_start_2
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->reconnect:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    const-string v3, "download"

    if-eqz v1, :cond_2

    .line 212
    :try_start_3
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->reconnect:Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 214
    :try_start_4
    invoke-static {}, Ljava/lang/Thread;->interrupted()Z
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v0

    .line 216
    :try_start_5
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 218
    :goto_1
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->changeSegment:Z
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    if-nez v0, :cond_1

    .line 240
    :goto_2
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->releaseDownload()V

    goto :goto_0

    .line 219
    :cond_1
    :try_start_6
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->changeSegment:Z

    .line 220
    new-instance p1, Lcom/ss/android/socialbase/downloader/segment/SegmentApplyException;

    const/4 v0, 0x5

    invoke-direct {p1, v0, v3}, Lcom/ss/android/socialbase/downloader/segment/SegmentApplyException;-><init>(ILjava/lang/String;)V

    throw p1

    .line 224
    :cond_2
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 v1, 0x0

    .line 226
    instance-of v4, v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    if-eqz v4, :cond_3

    .line 227
    move-object v1, v0

    check-cast v1, Lcom/ss/android/socialbase/downloader/exception/BaseException;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    goto :goto_3

    .line 230
    :cond_3
    :try_start_7
    invoke-static {v0, v3}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_7
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_7 .. :try_end_7} :catch_0
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    goto :goto_3

    :catch_0
    move-exception v1

    :goto_3
    if-eqz v1, :cond_4

    .line 235
    :try_start_8
    invoke-direct {p0, p1, v1}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->handleFailedAndCheckRetry(Lcom/ss/android/socialbase/downloader/segment/Segment;Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result v0
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    if-eqz v0, :cond_4

    goto :goto_2

    .line 240
    :cond_4
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->releaseDownload()V

    return v2

    :catch_1
    move-exception p1

    .line 204
    :try_start_9
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 205
    throw p1
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_2

    :catchall_2
    move-exception p1

    .line 240
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->releaseDownload()V

    throw p1
.end method

.method private handleFailedAndCheckRetry(Lcom/ss/android/socialbase/downloader/segment/Segment;Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z
    .locals 8

    .line 302
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "handleDownloadFailed:  e = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ", curRetryCount = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curRetryCount:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", retryCount = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->retryCount:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SegmentReader"

    invoke-static {v1, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 303
    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 304
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->recordFailed()V

    .line 306
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    iget v6, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curRetryCount:I

    iget v7, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->retryCount:I

    move-object v2, p0

    move-object v4, p1

    move-object v5, p2

    invoke-interface/range {v1 .. v7}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->onSegmentRetry(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/UrlRecord;Lcom/ss/android/socialbase/downloader/segment/Segment;Lcom/ss/android/socialbase/downloader/exception/BaseException;II)V

    .line 307
    iget v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curRetryCount:I

    iget v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->retryCount:I

    const/4 v2, 0x1

    if-ge v0, v1, :cond_0

    add-int/2addr v0, v2

    .line 308
    iput v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curRetryCount:I

    return v2

    .line 314
    :cond_0
    invoke-direct {p0, p2}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->checkCanUseHttpsToHttpRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result v0

    if-eqz v0, :cond_1

    return v2

    .line 319
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    invoke-interface {v0, p0, v1, p1, p2}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->onSegmentFailed(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/UrlRecord;Lcom/ss/android/socialbase/downloader/segment/Segment;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    const/4 p1, 0x0

    return p1
.end method

.method private initParams()V
    .locals 1

    const/4 v0, 0x0

    .line 268
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpsToHttpRetryUsed:Z

    .line 269
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->resetRetryTimes()V

    return-void
.end method

.method private loopAndRead(Lcom/ss/android/socialbase/downloader/segment/Segment;)V
    .locals 31
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    .line 427
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->pool:Lcom/ss/android/socialbase/downloader/segment/IBufferPool;

    .line 432
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    iput-wide v4, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readStartTime:J

    .line 433
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getCurrentOffsetRead()J

    move-result-wide v4

    const/4 v6, -0x1

    const/4 v7, 0x1

    const/4 v8, 0x0

    .line 439
    :try_start_0
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v10
    :try_end_0
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_0 .. :try_end_0} :catch_8
    .catchall {:try_start_0 .. :try_end_0} :catchall_e

    if-eqz v10, :cond_1a

    .line 444
    :try_start_1
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpResponse:Lcom/ss/android/socialbase/downloader/model/HttpResponse;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getContentLength()J

    move-result-wide v11

    const-wide/16 v13, 0x0

    cmp-long v0, v11, v13

    if-eqz v0, :cond_19

    .line 455
    invoke-direct {v1, v3, v10}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->probeFirstBuffer(Lcom/ss/android/socialbase/downloader/segment/IBufferPool;Ljava/io/InputStream;)Lcom/ss/android/socialbase/downloader/segment/Buffer;

    move-result-object v15
    :try_end_1
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_1 .. :try_end_1} :catch_6
    .catchall {:try_start_1 .. :try_end_1} :catchall_d

    .line 457
    :try_start_2
    iget-boolean v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->reconnect:Z

    if-nez v9, :cond_18

    iget-boolean v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closed:Z

    if-nez v9, :cond_18

    .line 462
    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    invoke-interface {v9, v1, v2}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->applySegment(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;)V

    .line 465
    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    invoke-interface {v9, v1, v2}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->createOutput(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;)Lcom/ss/android/socialbase/downloader/segment/IOutput;

    move-result-object v9
    :try_end_2
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_2 .. :try_end_2} :catch_5
    .catchall {:try_start_2 .. :try_end_2} :catchall_c

    .line 469
    :try_start_3
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getEndOffset()J

    move-result-wide v17

    cmp-long v19, v17, v13

    const-wide v20, 0x7fffffffffffffffL

    const-wide/16 v22, 0x1

    if-lez v19, :cond_0

    goto :goto_0

    :cond_0
    if-lez v0, :cond_1

    add-long/2addr v11, v4

    sub-long v17, v11, v22

    goto :goto_0

    :cond_1
    move-wide/from16 v17, v20

    .line 483
    :goto_0
    iget v0, v15, Lcom/ss/android/socialbase/downloader/segment/Buffer;->size:I
    :try_end_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_3 .. :try_end_3} :catch_4
    .catchall {:try_start_3 .. :try_end_3} :catchall_b

    int-to-long v11, v0

    add-long v13, v4, v11

    cmp-long v19, v13, v17

    if-lez v19, :cond_8

    add-long v17, v17, v22

    cmp-long v19, v13, v17

    if-lez v19, :cond_2

    sub-long v19, v13, v17

    sub-long v11, v11, v19

    long-to-int v11, v11

    if-lez v11, :cond_2

    if-ge v11, v0, :cond_2

    .line 490
    :try_start_4
    iput v11, v15, Lcom/ss/android/socialbase/downloader/segment/Buffer;->size:I

    move-wide/from16 v13, v17

    .line 494
    :cond_2
    iput-wide v13, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegmentReadOffset:J

    .line 495
    invoke-interface {v9, v15}, Lcom/ss/android/socialbase/downloader/segment/IOutput;->write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    :try_end_4
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_4 .. :try_end_4} :catch_3
    .catchall {:try_start_4 .. :try_end_4} :catchall_a

    new-array v0, v7, [Ljava/io/Closeable;

    aput-object v10, v0, v8

    .line 586
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    if-eqz v9, :cond_3

    .line 591
    :try_start_5
    invoke-interface {v3}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->obtain()Lcom/ss/android/socialbase/downloader/segment/Buffer;

    move-result-object v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    .line 593
    :try_start_6
    iput v6, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->size:I

    .line 594
    invoke-interface {v9, v0}, Lcom/ss/android/socialbase/downloader/segment/IOutput;->write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    goto :goto_1

    :catchall_0
    move-object v9, v0

    goto :goto_2

    :catchall_1
    :cond_3
    :goto_1
    const/4 v9, 0x0

    :goto_2
    if-eqz v9, :cond_4

    .line 601
    invoke-interface {v3, v9}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    .line 603
    :cond_4
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    iput-wide v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readEndTime:J

    cmp-long v0, v13, v4

    if-lez v0, :cond_7

    .line 605
    iget-object v15, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curUrl:Ljava/lang/String;

    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curHostIp:Ljava/lang/String;

    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curHostRealIp:Ljava/lang/String;

    iget-boolean v10, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closed:Z

    if-nez v10, :cond_6

    iget-boolean v10, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->reconnect:Z

    if-eqz v10, :cond_5

    goto :goto_3

    :cond_5
    move/from16 v20, v8

    goto :goto_4

    :cond_6
    :goto_3
    move/from16 v20, v7

    :goto_4
    iget-object v7, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    iget-object v8, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    sub-long v23, v13, v4

    sget-object v4, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    iget-wide v10, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readEndTime:J

    iget-wide v12, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readStartTime:J

    sub-long/2addr v10, v12

    .line 607
    invoke-virtual {v4, v10, v11}, Ljava/util/concurrent/TimeUnit;->toNanos(J)J

    move-result-wide v25

    move-object/from16 v16, v0

    move-object/from16 v17, v3

    move-object/from16 v18, v6

    move-object/from16 v19, v9

    move-object/from16 v21, v7

    move-object/from16 v22, v8

    .line 605
    invoke-static/range {v15 .. v26}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSegmentIO(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;Lcom/ss/android/socialbase/downloader/exception/BaseException;JJ)V

    .line 609
    :cond_7
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    invoke-interface {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->unApplySegment(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;)V

    return-void

    .line 500
    :cond_8
    :try_start_7
    iput-wide v13, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegmentReadOffset:J

    .line 501
    invoke-interface {v9, v15}, Lcom/ss/android/socialbase/downloader/segment/IOutput;->write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    :try_end_7
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_7 .. :try_end_7} :catch_3
    .catchall {:try_start_7 .. :try_end_7} :catchall_a

    move-wide/from16 v11, v17

    .line 506
    :goto_5
    :try_start_8
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadDirty:Z
    :try_end_8
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_8 .. :try_end_8} :catch_2
    .catchall {:try_start_8 .. :try_end_8} :catchall_9

    if-eqz v0, :cond_d

    .line 509
    :try_start_9
    monitor-enter p0
    :try_end_9
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_9 .. :try_end_9} :catch_1
    .catchall {:try_start_9 .. :try_end_9} :catchall_8

    .line 510
    :try_start_a
    iput-boolean v8, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadDirty:Z

    .line 511
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->reconnect:Z

    if-nez v0, :cond_c

    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closed:Z

    if-nez v0, :cond_c

    .line 514
    monitor-exit p0
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_4

    .line 516
    :try_start_b
    iget-object v15, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    monitor-enter v15
    :try_end_b
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_b .. :try_end_b} :catch_1
    .catchall {:try_start_b .. :try_end_b} :catchall_8

    .line 517
    :try_start_c
    iget-wide v7, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->segmentNewEndOffset:J

    const-wide/16 v24, 0x0

    cmp-long v0, v7, v24

    if-eqz v0, :cond_b

    const-string v0, "SegmentReader"

    .line 519
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "loopAndRead:  change readEnd = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v11, v12}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v8, ", segmentNewEndOffset = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v11, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->segmentNewEndOffset:J

    invoke-virtual {v7, v11, v12}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v8, ", segment = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v0, v7}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 521
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->refreshSegmentEndOffset()J

    move-result-wide v11

    cmp-long v0, v13, v11

    if-lez v0, :cond_a

    add-long v7, v11, v22

    move-wide/from16 v26, v11

    sub-long v11, v13, v7

    const-wide/16 v22, 0x0

    cmp-long v0, v11, v22

    if-lez v0, :cond_9

    const-string v0, "SegmentReader"

    .line 525
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "loopAndRead: redundant = "

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v11, v12}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_3

    .line 528
    :cond_9
    :try_start_d
    iput-wide v7, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegmentReadOffset:J

    .line 529
    monitor-exit v15
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_2

    move-wide v13, v7

    move-wide/from16 v11, v26

    goto :goto_8

    :catchall_2
    move-exception v0

    move-wide v13, v7

    goto :goto_6

    :cond_a
    move-wide/from16 v26, v11

    .line 532
    :cond_b
    :try_start_e
    monitor-exit v15

    goto :goto_7

    :catchall_3
    move-exception v0

    :goto_6
    monitor-exit v15
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_3

    :try_start_f
    throw v0
    :try_end_f
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_f .. :try_end_f} :catch_1
    .catchall {:try_start_f .. :try_end_f} :catchall_8

    .line 512
    :cond_c
    :try_start_10
    new-instance v0, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;

    const-string v2, "loopAndRead"

    invoke-direct {v0, v2}, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;-><init>(Ljava/lang/String;)V

    throw v0

    :catchall_4
    move-exception v0

    .line 514
    monitor-exit p0
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_4

    :try_start_11
    throw v0

    .line 535
    :cond_d
    :goto_7
    invoke-interface {v3}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->obtain()Lcom/ss/android/socialbase/downloader/segment/Buffer;

    move-result-object v15
    :try_end_11
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_11 .. :try_end_11} :catch_1
    .catchall {:try_start_11 .. :try_end_11} :catchall_8

    .line 536
    :try_start_12
    iget-object v0, v15, Lcom/ss/android/socialbase/downloader/segment/Buffer;->data:[B

    invoke-virtual {v10, v0}, Ljava/io/InputStream;->read([B)I

    move-result v0

    .line 537
    iput v0, v15, Lcom/ss/android/socialbase/downloader/segment/Buffer;->size:I

    const/4 v2, -0x1

    if-ne v0, v2, :cond_e

    .line 539
    invoke-interface {v9, v15}, Lcom/ss/android/socialbase/downloader/segment/IOutput;->write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    const-wide/16 v6, 0x0

    const/4 v9, 0x0

    goto :goto_9

    :cond_e
    int-to-long v6, v0

    add-long/2addr v13, v6

    cmp-long v2, v13, v11

    if-lez v2, :cond_17

    add-long v22, v11, v22

    cmp-long v2, v13, v22

    if-lez v2, :cond_f

    sub-long v26, v13, v22

    sub-long v6, v6, v26

    long-to-int v2, v6

    if-lez v2, :cond_f

    if-ge v2, v0, :cond_f

    .line 551
    iput v2, v15, Lcom/ss/android/socialbase/downloader/segment/Buffer;->size:I

    move-wide/from16 v13, v22

    .line 555
    :cond_f
    iput-wide v13, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegmentReadOffset:J

    .line 556
    invoke-interface {v9, v15}, Lcom/ss/android/socialbase/downloader/segment/IOutput;->write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    :try_end_12
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_12 .. :try_end_12} :catch_0
    .catchall {:try_start_12 .. :try_end_12} :catchall_7

    :try_start_13
    const-string v0, "SegmentReader"

    .line 558
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "loopAndRead: bytesRead = "

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sub-long v6, v13, v4

    invoke-virtual {v2, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v6, ", url = "

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    iget-object v6, v6, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->url:Ljava/lang/String;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    :goto_8
    const-wide/16 v6, 0x0

    :goto_9
    cmp-long v0, v11, v6

    if-lez v0, :cond_11

    cmp-long v0, v11, v20

    if-eqz v0, :cond_11

    cmp-long v0, v13, v11

    if-lez v0, :cond_10

    goto :goto_a

    .line 570
    :cond_10
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v2, 0x41b

    const-string v6, "range[%d, %d] , but readCurrent[%d] , readStart[%d]"

    const/4 v7, 0x4

    new-array v7, v7, [Ljava/lang/Object;

    .line 571
    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v8

    const/4 v15, 0x0

    aput-object v8, v7, v15

    invoke-static {v11, v12}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v8

    const/4 v11, 0x1

    aput-object v8, v7, v11

    const/4 v8, 0x2

    invoke-static {v13, v14}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v11

    aput-object v11, v7, v8

    const/4 v8, 0x3

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v11

    aput-object v11, v7, v8

    .line 570
    invoke-static {v6, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-direct {v0, v2, v6}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0
    :try_end_13
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_13 .. :try_end_13} :catch_1
    .catchall {:try_start_13 .. :try_end_13} :catchall_8

    :cond_11
    :goto_a
    const/4 v2, 0x1

    new-array v0, v2, [Ljava/io/Closeable;

    const/4 v2, 0x0

    aput-object v10, v0, v2

    .line 586
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    if-eqz v9, :cond_12

    .line 591
    :try_start_14
    invoke-interface {v3}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->obtain()Lcom/ss/android/socialbase/downloader/segment/Buffer;

    move-result-object v0
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_6

    const/4 v2, -0x1

    .line 593
    :try_start_15
    iput v2, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->size:I

    .line 594
    invoke-interface {v9, v0}, Lcom/ss/android/socialbase/downloader/segment/IOutput;->write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    :try_end_15
    .catchall {:try_start_15 .. :try_end_15} :catchall_5

    goto :goto_b

    :catchall_5
    move-object v9, v0

    goto :goto_c

    :catchall_6
    :cond_12
    :goto_b
    const/4 v9, 0x0

    :goto_c
    if-eqz v9, :cond_13

    .line 601
    invoke-interface {v3, v9}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    .line 603
    :cond_13
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readEndTime:J

    cmp-long v0, v13, v4

    if-lez v0, :cond_16

    .line 605
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curUrl:Ljava/lang/String;

    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curHostIp:Ljava/lang/String;

    iget-object v7, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curHostRealIp:Ljava/lang/String;

    iget-boolean v8, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closed:Z

    if-nez v8, :cond_15

    iget-boolean v8, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->reconnect:Z

    if-eqz v8, :cond_14

    goto :goto_d

    :cond_14
    const/16 v24, 0x0

    goto :goto_e

    :cond_15
    :goto_d
    const/16 v24, 0x1

    :goto_e
    iget-object v8, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    sub-long v27, v13, v4

    sget-object v4, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    iget-wide v10, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readEndTime:J

    iget-wide v12, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readStartTime:J

    sub-long/2addr v10, v12

    .line 607
    invoke-virtual {v4, v10, v11}, Ljava/util/concurrent/TimeUnit;->toNanos(J)J

    move-result-wide v29

    move-object/from16 v19, v0

    move-object/from16 v20, v2

    move-object/from16 v21, v3

    move-object/from16 v22, v6

    move-object/from16 v23, v7

    move-object/from16 v25, v8

    move-object/from16 v26, v9

    .line 605
    invoke-static/range {v19 .. v30}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSegmentIO(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;Lcom/ss/android/socialbase/downloader/exception/BaseException;JJ)V

    .line 609
    :cond_16
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    move-object/from16 v2, p1

    goto/16 :goto_14

    :cond_17
    move-object/from16 v2, p1

    const-wide/16 v6, 0x0

    .line 562
    :try_start_16
    iput-wide v13, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegmentReadOffset:J

    .line 563
    invoke-interface {v9, v15}, Lcom/ss/android/socialbase/downloader/segment/IOutput;->write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    :try_end_16
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_16 .. :try_end_16} :catch_3
    .catchall {:try_start_16 .. :try_end_16} :catchall_a

    const/4 v6, -0x1

    const/4 v7, 0x1

    const/4 v8, 0x0

    goto/16 :goto_5

    :catchall_7
    move-exception v0

    move-object/from16 v2, p1

    goto/16 :goto_10

    :catch_0
    move-exception v0

    move-object/from16 v2, p1

    goto/16 :goto_16

    :catchall_8
    move-exception v0

    move-object/from16 v2, p1

    goto :goto_f

    :catch_1
    move-exception v0

    move-object/from16 v2, p1

    goto/16 :goto_15

    :catchall_9
    move-exception v0

    goto :goto_f

    :catch_2
    move-exception v0

    goto/16 :goto_15

    :catchall_a
    move-exception v0

    goto :goto_10

    :catch_3
    move-exception v0

    goto/16 :goto_16

    :catchall_b
    move-exception v0

    move-wide v13, v4

    goto :goto_10

    :catch_4
    move-exception v0

    move-wide v13, v4

    goto/16 :goto_16

    .line 458
    :cond_18
    :try_start_17
    new-instance v0, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;

    const-string v6, "probe"

    invoke-direct {v0, v6}, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;-><init>(Ljava/lang/String;)V

    throw v0
    :try_end_17
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_17 .. :try_end_17} :catch_5
    .catchall {:try_start_17 .. :try_end_17} :catchall_c

    :catchall_c
    move-exception v0

    move-wide v13, v4

    const/4 v9, 0x0

    goto :goto_10

    :catch_5
    move-exception v0

    move-wide v13, v4

    const/4 v9, 0x0

    goto/16 :goto_16

    .line 446
    :cond_19
    :try_start_18
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;

    const/16 v6, 0x3ec

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "the content-length is 0, contentLength = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v11, v12}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-direct {v0, v6, v7}, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;-><init>(ILjava/lang/String;)V

    throw v0

    :catchall_d
    move-exception v0

    move-wide v13, v4

    const/4 v9, 0x0

    goto :goto_f

    :catch_6
    move-exception v0

    move-wide v13, v4

    const/4 v9, 0x0

    goto/16 :goto_15

    .line 441
    :cond_1a
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v6, 0x412

    new-instance v7, Ljava/io/IOException;

    const-string v8, "inputStream is null"

    invoke-direct {v7, v8}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    invoke-direct {v0, v6, v7}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    throw v0
    :try_end_18
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_18 .. :try_end_18} :catch_6
    .catchall {:try_start_18 .. :try_end_18} :catchall_d

    :catchall_e
    move-exception v0

    move-wide v13, v4

    const/4 v9, 0x0

    const/4 v10, 0x0

    :goto_f
    const/4 v15, 0x0

    :goto_10
    :try_start_19
    const-string v6, "SegmentReader"

    .line 577
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "loopAndRead: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v8, ",stack = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 578
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_19
    .catchall {:try_start_19 .. :try_end_19} :catchall_10

    :try_start_1a
    const-string v6, "loopAndRead"

    .line 580
    invoke-static {v0, v6}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_1a
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_1a .. :try_end_1a} :catch_7
    .catchall {:try_start_1a .. :try_end_1a} :catchall_10

    const/4 v6, 0x1

    new-array v0, v6, [Ljava/io/Closeable;

    const/4 v6, 0x0

    aput-object v10, v0, v6

    .line 586
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    if-eqz v9, :cond_1c

    if-nez v15, :cond_1b

    .line 591
    :try_start_1b
    invoke-interface {v3}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->obtain()Lcom/ss/android/socialbase/downloader/segment/Buffer;

    move-result-object v15

    :cond_1b
    const/4 v6, -0x1

    .line 593
    iput v6, v15, Lcom/ss/android/socialbase/downloader/segment/Buffer;->size:I

    .line 594
    invoke-interface {v9, v15}, Lcom/ss/android/socialbase/downloader/segment/IOutput;->write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    :try_end_1b
    .catchall {:try_start_1b .. :try_end_1b} :catchall_f

    const/4 v9, 0x0

    goto :goto_11

    :catchall_f
    :cond_1c
    move-object v9, v15

    :goto_11
    if-eqz v9, :cond_1d

    .line 601
    invoke-interface {v3, v9}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    .line 603
    :cond_1d
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    iput-wide v6, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readEndTime:J

    cmp-long v0, v13, v4

    if-lez v0, :cond_20

    .line 605
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curUrl:Ljava/lang/String;

    iget-object v7, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curHostIp:Ljava/lang/String;

    iget-object v8, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curHostRealIp:Ljava/lang/String;

    iget-boolean v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closed:Z

    if-nez v9, :cond_1f

    iget-boolean v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->reconnect:Z

    if-eqz v9, :cond_1e

    goto :goto_12

    :cond_1e
    const/16 v24, 0x0

    goto :goto_13

    :cond_1f
    :goto_12
    const/16 v24, 0x1

    :goto_13
    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    sub-long v27, v13, v4

    sget-object v4, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    iget-wide v11, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readEndTime:J

    iget-wide v13, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readStartTime:J

    sub-long/2addr v11, v13

    .line 607
    invoke-virtual {v4, v11, v12}, Ljava/util/concurrent/TimeUnit;->toNanos(J)J

    move-result-wide v29

    move-object/from16 v19, v0

    move-object/from16 v20, v3

    move-object/from16 v21, v6

    move-object/from16 v22, v7

    move-object/from16 v23, v8

    move-object/from16 v25, v9

    move-object/from16 v26, v10

    .line 605
    invoke-static/range {v19 .. v30}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSegmentIO(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;Lcom/ss/android/socialbase/downloader/exception/BaseException;JJ)V

    .line 609
    :cond_20
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    :goto_14
    invoke-interface {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->unApplySegment(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;)V

    return-void

    :catch_7
    move-exception v0

    .line 582
    :try_start_1c
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 583
    throw v0

    :catch_8
    move-exception v0

    move-wide v13, v4

    const/4 v9, 0x0

    const/4 v10, 0x0

    :goto_15
    const/4 v15, 0x0

    .line 574
    :goto_16
    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 575
    throw v0
    :try_end_1c
    .catchall {:try_start_1c .. :try_end_1c} :catchall_10

    :catchall_10
    move-exception v0

    const/4 v6, 0x1

    new-array v7, v6, [Ljava/io/Closeable;

    const/4 v8, 0x0

    aput-object v10, v7, v8

    .line 586
    invoke-static {v7}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    if-eqz v9, :cond_22

    if-nez v15, :cond_21

    .line 591
    :try_start_1d
    invoke-interface {v3}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->obtain()Lcom/ss/android/socialbase/downloader/segment/Buffer;

    move-result-object v15

    :cond_21
    const/4 v7, -0x1

    .line 593
    iput v7, v15, Lcom/ss/android/socialbase/downloader/segment/Buffer;->size:I

    .line 594
    invoke-interface {v9, v15}, Lcom/ss/android/socialbase/downloader/segment/IOutput;->write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    :try_end_1d
    .catchall {:try_start_1d .. :try_end_1d} :catchall_11

    const/4 v9, 0x0

    goto :goto_17

    :catchall_11
    :cond_22
    move-object v9, v15

    :goto_17
    if-eqz v9, :cond_23

    .line 601
    invoke-interface {v3, v9}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    .line 603
    :cond_23
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    iput-wide v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readEndTime:J

    cmp-long v3, v13, v4

    if-lez v3, :cond_26

    .line 605
    iget-object v15, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v7, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curUrl:Ljava/lang/String;

    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curHostIp:Ljava/lang/String;

    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curHostRealIp:Ljava/lang/String;

    iget-boolean v11, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closed:Z

    if-nez v11, :cond_25

    iget-boolean v11, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->reconnect:Z

    if-eqz v11, :cond_24

    goto :goto_18

    :cond_24
    move/from16 v20, v8

    goto :goto_19

    :cond_25
    :goto_18
    move/from16 v20, v6

    :goto_19
    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->httpConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    iget-object v8, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    sub-long v23, v13, v4

    sget-object v4, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    iget-wide v11, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readEndTime:J

    iget-wide v13, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readStartTime:J

    sub-long/2addr v11, v13

    .line 607
    invoke-virtual {v4, v11, v12}, Ljava/util/concurrent/TimeUnit;->toNanos(J)J

    move-result-wide v25

    move-object/from16 v16, v3

    move-object/from16 v17, v7

    move-object/from16 v18, v9

    move-object/from16 v19, v10

    move-object/from16 v21, v6

    move-object/from16 v22, v8

    .line 605
    invoke-static/range {v15 .. v26}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSegmentIO(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;Lcom/ss/android/socialbase/downloader/exception/BaseException;JJ)V

    .line 609
    :cond_26
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    invoke-interface {v3, v1, v2}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->unApplySegment(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;)V

    throw v0
.end method

.method private probeFirstBuffer(Lcom/ss/android/socialbase/downloader/segment/IBufferPool;Ljava/io/InputStream;)Lcom/ss/android/socialbase/downloader/segment/Buffer;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/InterruptedException;,
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Ljava/io/IOException;
        }
    .end annotation

    .line 615
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->obtain()Lcom/ss/android/socialbase/downloader/segment/Buffer;

    move-result-object v0

    const/4 v1, -0x1

    .line 619
    :try_start_0
    iget-object v2, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->data:[B

    invoke-virtual {p2, v2}, Ljava/io/InputStream;->read([B)I

    move-result p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eq p2, v1, :cond_1

    .line 623
    :try_start_1
    iput p2, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->size:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-ne p2, v1, :cond_0

    .line 627
    invoke-interface {p1, v0}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    :cond_0
    return-object v0

    :catchall_0
    move-exception v2

    goto :goto_0

    .line 621
    :cond_1
    :try_start_2
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x431

    const-string v4, "probe"

    invoke-direct {v2, v3, v4}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_1
    move-exception v2

    move p2, v1

    :goto_0
    if-ne p2, v1, :cond_2

    .line 627
    invoke-interface {p1, v0}, Lcom/ss/android/socialbase/downloader/segment/IBufferPool;->recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    :cond_2
    throw v2
.end method

.method private refreshSegmentEndOffset()J
    .locals 4

    .line 633
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->segmentNewEndOffset:J

    const-wide/16 v2, 0x0

    .line 634
    iput-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->segmentNewEndOffset:J

    cmp-long v2, v0, v2

    if-gtz v2, :cond_0

    const-wide v0, 0x7fffffffffffffffL

    :cond_0
    return-wide v0
.end method

.method private releaseDownload()V
    .locals 2

    .line 246
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->connectStartTime:J

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->lastConnectStartTime:J

    const-wide/16 v0, -0x1

    .line 247
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->connectStartTime:J

    .line 248
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->connectEndTime:J

    .line 249
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readStartTime:J

    .line 250
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readEndTime:J

    .line 251
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closeConnection()V

    return-void
.end method

.method private resetRetryTimes()V
    .locals 1

    .line 274
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    iget-boolean v0, v0, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->isMainUrl:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRetryCount()I

    move-result v0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getBackUpUrlRetryCount()I

    move-result v0

    :goto_0
    iput v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->retryCount:I

    const/4 v0, 0x0

    .line 275
    iput v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curRetryCount:I

    return-void
.end method


# virtual methods
.method public adjustSegmentEndOffset(J)Z
    .locals 6

    .line 642
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->endOffsetInConnection:J

    const-wide/16 v2, 0x0

    cmp-long v4, p1, v2

    const/4 v5, 0x0

    if-gtz v4, :cond_0

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    return v5

    :cond_0
    cmp-long v4, p1, v0

    if-lez v4, :cond_1

    cmp-long v0, v0, v2

    if-lez v0, :cond_1

    return v5

    .line 650
    :cond_1
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->segmentNewEndOffset:J

    const/4 p1, 0x1

    .line 651
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadDirty:Z

    return p1
.end method

.method public close()V
    .locals 3

    .line 702
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "close: threadIndex = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SegmentReader"

    invoke-static {v1, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 703
    monitor-enter p0

    const/4 v0, 0x1

    .line 704
    :try_start_0
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closed:Z

    .line 705
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadDirty:Z

    .line 706
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 707
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closeConnection()V

    .line 708
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->future:Ljava/util/concurrent/Future;

    if-eqz v1, :cond_0

    const/4 v2, 0x0

    .line 710
    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->future:Ljava/util/concurrent/Future;

    .line 712
    :try_start_1
    invoke-interface {v1, v0}, Ljava/util/concurrent/Future;->cancel(Z)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 714
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void

    :catchall_1
    move-exception v0

    .line 706
    :try_start_2
    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw v0
.end method

.method getCurRetryCount()I
    .locals 1

    .line 294
    iget v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curRetryCount:I

    return v0
.end method

.method getCurSegmentDownloadSpeed(J)J
    .locals 7

    .line 794
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readStartTime:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    const-wide/16 v5, -0x1

    if-gtz v4, :cond_0

    return-wide v5

    :cond_0
    sub-long/2addr p1, v0

    cmp-long v0, p1, v2

    if-gtz v0, :cond_1

    return-wide v5

    .line 802
    :cond_1
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegmentReadOffset:J

    .line 803
    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->startOffsetInConnection:J

    cmp-long v6, v4, v2

    if-ltz v6, :cond_2

    cmp-long v6, v0, v4

    if-ltz v6, :cond_2

    sub-long/2addr v0, v4

    .line 805
    div-long/2addr v0, p1

    return-wide v0

    :cond_2
    return-wide v2
.end method

.method public getCurSegmentReadOffset()J
    .locals 2

    .line 698
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegmentReadOffset:J

    return-wide v0
.end method

.method getFailedException()Lcom/ss/android/socialbase/downloader/exception/BaseException;
    .locals 1

    .line 766
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    return-object v0
.end method

.method public getReadBytes()J
    .locals 5

    .line 676
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    monitor-enter v0

    .line 677
    :try_start_0
    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readBytes:J

    .line 678
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->getReadingBytes()J

    move-result-wide v3

    add-long/2addr v1, v3

    .line 679
    monitor-exit v0

    return-wide v1

    :catchall_0
    move-exception v1

    .line 680
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public getReadingBytes()J
    .locals 8

    .line 687
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    monitor-enter v0

    .line 688
    :try_start_0
    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegmentReadOffset:J

    .line 689
    iget-wide v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->startOffsetInConnection:J

    const-wide/16 v5, 0x0

    cmp-long v7, v3, v5

    if-ltz v7, :cond_0

    cmp-long v7, v1, v3

    if-lez v7, :cond_0

    sub-long/2addr v1, v3

    .line 691
    monitor-exit v0

    return-wide v1

    .line 693
    :cond_0
    monitor-exit v0

    return-wide v5

    :catchall_0
    move-exception v1

    .line 694
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method getRecentDownloadSpeed(JJ)J
    .locals 1

    .line 783
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->stenographer:Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer;

    if-nez v0, :cond_0

    const-wide/16 p1, -0x1

    return-wide p1

    .line 787
    :cond_0
    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer;->getRecentDownloadSpeed(JJ)J

    move-result-wide p1

    return-wide p1
.end method

.method getRetryCount()I
    .locals 1

    .line 298
    iget v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->retryCount:I

    return v0
.end method

.method getStartOffsetInConnection()J
    .locals 2

    .line 811
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->startOffsetInConnection:J

    return-wide v0
.end method

.method public isExited()Z
    .locals 1

    .line 758
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->exited:Z

    return v0
.end method

.method isFailed()Z
    .locals 1

    .line 754
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->failed:Z

    return v0
.end method

.method markProgress(J)V
    .locals 5

    .line 770
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegmentReadOffset:J

    .line 771
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->stenographer:Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer;

    const-wide/16 v3, 0x0

    cmp-long v3, v0, v3

    if-ltz v3, :cond_1

    if-nez v2, :cond_0

    goto :goto_0

    .line 775
    :cond_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "markProgress: curSegmentReadOffset = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v4, ", threadIndex = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "SegmentReader"

    invoke-static {v4, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 776
    invoke-virtual {v2, v0, v1, p1, p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer;->markProgress(JJ)Z

    :cond_1
    :goto_0
    return-void
.end method

.method public reconnect()V
    .locals 1

    const/4 v0, 0x0

    .line 720
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->reconnect(Z)V

    return-void
.end method

.method public reconnect(Z)V
    .locals 3

    .line 727
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reconnect: threadIndex = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SegmentReader"

    invoke-static {v1, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 728
    monitor-enter p0

    .line 729
    :try_start_0
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->changeSegment:Z

    const/4 p1, 0x1

    .line 730
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->reconnect:Z

    .line 731
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadDirty:Z

    .line 732
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 733
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closeConnection()V

    .line 734
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->thread:Ljava/lang/Thread;

    if-eqz p1, :cond_0

    :try_start_1
    const-string v0, "SegmentReader"

    .line 737
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "reconnect: t.interrupt threadIndex = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 738
    invoke-virtual {p1}, Ljava/lang/Thread;->interrupt()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_0
    return-void

    :catchall_1
    move-exception p1

    .line 732
    :try_start_2
    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw p1
.end method

.method public run()V
    .locals 6

    const/16 v0, 0xa

    .line 126
    invoke-static {v0}, Landroid/os/Process;->setThreadPriority(I)V

    const/4 v0, 0x0

    .line 129
    :try_start_0
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->thread:Ljava/lang/Thread;

    .line 130
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    invoke-interface {v1, p0}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->onReaderRun(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;)V

    .line 131
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    invoke-virtual {v1, p0}, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->recordUse(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;)V

    .line 135
    :goto_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    invoke-interface {v1, p0, v2}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->obtainSegment(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/UrlRecord;)Lcom/ss/android/socialbase/downloader/segment/Segment;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const-string v2, "SegmentReader"

    if-nez v1, :cond_0

    .line 138
    :try_start_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "no more segment, thread_index = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_3

    .line 142
    :cond_0
    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegment:Lcom/ss/android/socialbase/downloader/segment/Segment;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 146
    :try_start_2
    invoke-direct {p0, v1}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->download(Lcom/ss/android/socialbase/downloader/segment/Segment;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 148
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->succeedSegments:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_2
    .catch Lcom/ss/android/socialbase/downloader/segment/SegmentApplyException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 173
    :try_start_3
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegment:Lcom/ss/android/socialbase/downloader/segment/Segment;

    .line 174
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    :goto_1
    invoke-interface {v2, p0, v1}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->unObtainSegment(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_0

    .line 152
    :cond_1
    :try_start_4
    iget-boolean v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->closed:Z

    if-nez v3, :cond_2

    .line 153
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "download segment failed, segment = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v4, ", thread_index = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ", failedException = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Lcom/ss/android/socialbase/downloader/segment/SegmentApplyException; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 173
    :cond_2
    :try_start_5
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegment:Lcom/ss/android/socialbase/downloader/segment/Segment;

    .line 174
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    :goto_2
    invoke-interface {v2, p0, v1}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->unObtainSegment(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    goto :goto_3

    :catchall_0
    move-exception v2

    goto :goto_4

    :catch_0
    move-exception v3

    .line 162
    :try_start_6
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "run: SegmentApplyException, e = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 163
    iget v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->segmentApplyRetryTimes:I

    const/16 v4, 0x32

    if-lt v3, v4, :cond_3

    .line 165
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "segment apply failed "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->segmentApplyRetryTimes:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "times, thread_index = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->threadIndex:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 173
    :try_start_7
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegment:Lcom/ss/android/socialbase/downloader/segment/Segment;

    .line 174
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    goto :goto_2

    .line 181
    :goto_3
    :try_start_8
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    invoke-virtual {v1, p0}, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->recordUnUse(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;)V

    .line 182
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    goto :goto_5

    .line 170
    :cond_3
    :try_start_9
    iget v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->segmentApplyRetryTimes:I

    add-int/lit8 v2, v2, 0x1

    iput v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->segmentApplyRetryTimes:I
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_0

    .line 173
    :try_start_a
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegment:Lcom/ss/android/socialbase/downloader/segment/Segment;

    .line 174
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    goto/16 :goto_1

    .line 173
    :goto_4
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegment:Lcom/ss/android/socialbase/downloader/segment/Segment;

    .line 174
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    invoke-interface {v3, p0, v1}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->unObtainSegment(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;)V

    throw v2
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_1

    :catchall_1
    move-exception v1

    .line 178
    :try_start_b
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_3

    .line 181
    :try_start_c
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    invoke-virtual {v1, p0}, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->recordUnUse(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;)V

    .line 182
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    :goto_5
    invoke-interface {v1, p0}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->onReaderExit(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;)V
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_2

    .line 186
    :catchall_2
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->thread:Ljava/lang/Thread;

    return-void

    :catchall_3
    move-exception v1

    .line 181
    :try_start_d
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    invoke-virtual {v2, p0}, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->recordUnUse(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;)V

    .line 182
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    invoke-interface {v2, p0}, Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;->onReaderExit(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;)V
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_4

    .line 186
    :catchall_4
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->thread:Ljava/lang/Thread;

    throw v1
.end method

.method public setExited(Z)V
    .locals 0

    .line 762
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->exited:Z

    return-void
.end method

.method setFailed(Z)V
    .locals 0

    .line 750
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->failed:Z

    return-void
.end method

.method setFuture(Ljava/util/concurrent/Future;)V
    .locals 0

    .line 746
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->future:Ljava/util/concurrent/Future;

    return-void
.end method

.method switchUrlRecord(Lcom/ss/android/socialbase/downloader/segment/UrlRecord;)Z
    .locals 2

    .line 279
    iget v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->switchUrlTimes:I

    const/16 v1, 0x1e

    if-lt v0, v1, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    const/4 v1, 0x1

    add-int/2addr v0, v1

    .line 282
    iput v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->switchUrlTimes:I

    .line 283
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    if-eqz v0, :cond_1

    .line 285
    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->recordUnUse(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;)V

    .line 287
    :cond_1
    invoke-virtual {p1, p0}, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->recordUse(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;)V

    .line 288
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    .line 289
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->resetRetryTimes()V

    return v1
.end method

.method updateReadBytes()V
    .locals 6

    .line 657
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->urlRecord:Lcom/ss/android/socialbase/downloader/segment/UrlRecord;

    .line 659
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->host:Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;

    monitor-enter v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 660
    :try_start_1
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->getReadingBytes()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v4, v2, v4

    if-lez v4, :cond_0

    .line 662
    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readBytes:J

    add-long/2addr v4, v2

    iput-wide v4, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->readBytes:J

    .line 663
    invoke-virtual {v0, v2, v3}, Lcom/ss/android/socialbase/downloader/segment/UrlRecord;->increaseDownloadBytes(J)V

    :cond_0
    const-wide/16 v2, -0x1

    .line 665
    iput-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->curSegmentReadOffset:J

    .line 666
    monitor-exit v1

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    :goto_0
    return-void
.end method
