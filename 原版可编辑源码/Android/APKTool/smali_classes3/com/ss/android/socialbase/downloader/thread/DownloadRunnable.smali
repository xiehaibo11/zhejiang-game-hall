.class public Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;
.implements Ljava/lang/Runnable;


# static fields
.field private static final MAX_RESET_RETAIN_RETRY_TIMES_COUNT:I = 0x3

.field private static final TAG:Ljava/lang/String;


# instance fields
.field private acceptPartial:Z

.field private volatile bytesRetryCount:I

.field private canResumeFromCache:Z

.field private curBytesNeedCheckSpaceOverFlow:J

.field private diskSpaceHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

.field private final downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

.field private final downloadChunkRunnableList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;",
            ">;"
        }
    .end annotation
.end field

.field private downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

.field private final downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

.field private volatile errorException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

.field private existTargetFileName:Ljava/lang/String;

.field private firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

.field private firstHeadConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

.field private firstHeadConnectionFailed:Z

.field private volatile firstHttpResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

.field private forbiddenHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

.field private final globalChunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

.field private final globalChunkCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

.field private final isAlive:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private isChunked:Z

.field private isResponseFromBegin:Z

.field private isSingleChunk:Z

.field private volatile isTriedFixRangeNotSatisfiable:Z

.field private mFuture:Ljava/util/concurrent/Future;

.field private needCheckIfModified:Z

.field private needJumpToStart:Z

.field private prepareDownloadTime:J

.field private resetRetainRetryTimesCount:I

.field private retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

.field private retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

.field private volatile runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

.field private volatile segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

.field private final setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

.field private final statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

.field private taskChunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

.field private taskChunkCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 90
    const-class v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadTask;Landroid/os/Handler;)V
    .locals 2

    .line 149
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 96
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isTriedFixRangeNotSatisfiable:Z

    .line 98
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadChunkRunnableList:Ljava/util/ArrayList;

    .line 107
    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/4 v1, 0x5

    .line 128
    iput v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->bytesRetryCount:I

    .line 130
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->needJumpToStart:Z

    .line 131
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHeadConnectionFailed:Z

    .line 136
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->needCheckIfModified:Z

    .line 144
    iput v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->resetRetainRetryTimesCount:I

    const/4 v0, 0x0

    .line 146
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    .line 150
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    if-eqz p1, :cond_0

    .line 152
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 153
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getChunkStrategy()Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->taskChunkCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    .line 154
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getChunkAdjustCalculator()Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->taskChunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    .line 155
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getForbiddenHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->forbiddenHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

    .line 156
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDiskSpaceHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->diskSpaceHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    .line 157
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->getRetryDelayTimeCalculator(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    .line 158
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    goto :goto_0

    .line 160
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    .line 163
    :goto_0
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->updateRetainRetryTimes()V

    .line 164
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    .line 165
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getChunkCntCalculator()Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->globalChunkCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    .line 166
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getChunkAdjustCalculator()Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->globalChunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    .line 167
    new-instance v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-direct {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadTask;Landroid/os/Handler;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    .line 169
    new-instance p1, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 p2, 0x1

    invoke-direct {p1, p2}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isAlive:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method static synthetic access$000(Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;Ljava/util/List;)V
    .locals 0

    .line 88
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleForbiddenCallback(Ljava/util/List;)V

    return-void
.end method

.method static synthetic access$100(Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;)V
    .locals 0

    .line 88
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleDiskSpaceCallback()V

    return-void
.end method

.method private calculateChunkCount(JLjava/util/List;)I
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(J",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;)I"
        }
    .end annotation

    .line 234
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isMultiChunkDownloadAvailable()Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_4

    .line 235
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->canResumeFromCache:Z

    if-eqz v0, :cond_1

    if-eqz p3, :cond_0

    .line 237
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p3

    goto :goto_1

    .line 239
    :cond_0
    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result p3

    goto :goto_1

    .line 242
    :cond_1
    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->taskChunkCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    if-eqz p3, :cond_2

    .line 243
    invoke-interface {p3, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;->calculateChunkCount(J)I

    move-result p3

    goto :goto_0

    .line 245
    :cond_2
    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->globalChunkCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    invoke-interface {p3, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;->calculateChunkCount(J)I

    move-result p3

    .line 247
    :goto_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;->getInstance()Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;->getCurrentNetworkQuality()Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    move-result-object v0

    .line 248
    sget-object v3, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-array v4, v2, [Ljava/lang/Object;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->name()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v1

    const-string v5, "NetworkQuality is : %s"

    invoke-static {v5, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 249
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->name()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setNetworkQuality(Ljava/lang/String;)V

    .line 251
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->taskChunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    if-eqz v3, :cond_3

    .line 252
    invoke-interface {v3, p3, v0}, Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;->calculateChunkCount(ILcom/ss/android/socialbase/downloader/network/NetworkQuality;)I

    move-result p3

    goto :goto_1

    .line 254
    :cond_3
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->globalChunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    invoke-interface {v3, p3, v0}, Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;->calculateChunkCount(ILcom/ss/android/socialbase/downloader/network/NetworkQuality;)I

    move-result p3

    :goto_1
    if-gtz p3, :cond_5

    :cond_4
    move p3, v2

    .line 263
    :cond_5
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 264
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    const/4 v3, 0x3

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    aput-object v4, v3, v1

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v3, v2

    const/4 v1, 0x2

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v3, v1

    const-string p1, "chunk count : %s for %s contentLen:%s"

    invoke-static {p1, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    return p3
.end method

.method private cancelAllChunkRunnable()V
    .locals 4

    .line 1723
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadChunkRunnableList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    .line 1724
    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;

    if-eqz v1, :cond_0

    .line 1726
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->cancel()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 1730
    sget-object v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "cancelAllChunkRunnable: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private checkCompletedByteValid()Z
    .locals 4

    .line 966
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isChunked()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 967
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setTotalBytes(J)V

    .line 969
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "checkCompletedByteValid: downloadInfo.getCurBytes() = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ",  downloadInfo.getTotalBytes() = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 970
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isIgnoreDataVerify()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v0

    cmp-long v0, v0, v2

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v0

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v2

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x1

    return v0

    .line 971
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_RESTART:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setByteInvalidRetryStatus(Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;)V

    .line 972
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->reset()V

    .line 973
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    .line 974
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeAllDownloadChunk(I)V

    .line 975
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeSegments(I)V

    .line 976
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->deleteAllDownloadFiles(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    const/4 v0, 0x0

    return v0
.end method

.method private checkHasAnotherSameTask()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;,
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    .line 1027
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    .line 1028
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadId(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)I

    move-result v1

    .line 1029
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isDownloaded()Z

    move-result v2

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isExpiredRedownload()Z

    move-result v2

    if-nez v2, :cond_1

    iget-boolean v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->needCheckIfModified:Z

    if-eqz v2, :cond_0

    goto :goto_0

    .line 1030
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v1, 0x3f1

    const-string v2, "file has downloaded"

    invoke-direct {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0

    .line 1033
    :cond_1
    :goto_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v2, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v2

    if-eqz v2, :cond_4

    .line 1036
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadEngine()Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    move-result-object v3

    if-eqz v3, :cond_4

    .line 1038
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v4

    if-eq v4, v0, :cond_4

    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->equalsTask(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 1040
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v4

    invoke-virtual {v3, v4}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->isDownloading(I)Z

    move-result v3

    if-nez v3, :cond_3

    .line 1045
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v3, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getDownloadChunk(I)Ljava/util/List;

    move-result-object v3

    .line 1046
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->deleteAllDownloadFiles(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 1047
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v4, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeDownloadTaskData(I)Z

    if-eqz v2, :cond_4

    .line 1049
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isBreakpointAvailable()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 1050
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const/4 v4, 0x0

    invoke-virtual {v1, v2, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->copyFromCacheData(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Z)V

    .line 1051
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {v1, v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    if-eqz v3, :cond_2

    .line 1054
    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    .line 1055
    invoke-virtual {v2, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setId(I)V

    .line 1056
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v3, v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    goto :goto_1

    .line 1059
    :cond_2
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;

    const-string v1, "retry task because id generator changed"

    invoke-direct {v0, v1}, Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;-><init>(Ljava/lang/String;)V

    throw v0

    .line 1041
    :cond_3
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeDownloadTaskData(I)Z

    .line 1042
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v1, 0x401

    const-string v2, "another same task is downloading"

    invoke-direct {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0

    :cond_4
    return-void
.end method

.method private checkIsStoppedByUser()Z
    .locals 2

    .line 892
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isStoppedStatus()Z

    move-result v0

    const/4 v1, -0x2

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    .line 893
    :cond_1
    :goto_0
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isStoppedStatus()Z

    move-result v0

    if-nez v0, :cond_3

    .line 894
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    if-ne v0, v1, :cond_2

    .line 895
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    goto :goto_1

    .line 896
    :cond_2
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v1, -0x4

    if-ne v0, v1, :cond_3

    .line 897
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    :cond_3
    :goto_1
    const/4 v0, 0x1

    return v0
.end method

.method private checkNeedRetryDelay()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method private checkSavePathValid()V
    .locals 9
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    .line 1390
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_8

    .line 1393
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 1396
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1397
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_3

    .line 1399
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    move-result v1

    if-nez v1, :cond_6

    .line 1400
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_6

    .line 1401
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v2

    const/4 v3, 0x0

    const-string v4, "opt_mkdir_failed"

    invoke-virtual {v2, v4, v3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v2

    const/16 v4, 0x406

    const/4 v5, 0x1

    const-string v6, "download savePath directory can not created:"

    if-ne v2, v5, :cond_2

    :goto_0
    if-nez v1, :cond_0

    add-int/lit8 v2, v3, 0x1

    const/4 v5, 0x3

    if-ge v3, v5, :cond_0

    const-wide/16 v7, 0xa

    .line 1405
    :try_start_0
    invoke-static {v7, v8}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 1409
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    move-result v1

    move v3, v2

    goto :goto_0

    :catch_0
    :cond_0
    if-nez v1, :cond_6

    .line 1411
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_6

    .line 1412
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getAvailableSpaceBytes(Ljava/lang/String;)J

    move-result-wide v0

    const-wide/16 v2, 0x4000

    cmp-long v0, v0, v2

    if-gez v0, :cond_1

    .line 1414
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v1, 0x3ee

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0

    .line 1416
    :cond_1
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v4, v1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0

    .line 1420
    :cond_2
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v4, v1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0

    .line 1423
    :cond_3
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v1

    if-nez v1, :cond_6

    .line 1424
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadSettingsUtils;->isOptimizeSavePath(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v1

    const/16 v2, 0x407

    if-eqz v1, :cond_5

    .line 1425
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    .line 1426
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    move-result v1

    if-nez v1, :cond_6

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_4

    goto :goto_1

    .line 1427
    :cond_4
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "download savePath is not directory:path="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0

    .line 1430
    :cond_5
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "download savePath is not a directory:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0

    :cond_6
    :goto_1
    return-void

    .line 1394
    :cond_7
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v1, 0x405

    const-string v2, "download name can not be empty"

    invoke-direct {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0

    .line 1391
    :cond_8
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v1, 0x404

    const-string v2, "download savePath can not be empty"

    invoke-direct {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0
.end method

.method private checkSpaceOverflowInProgress()V
    .locals 16
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    move-object/from16 v0, p0

    const-wide/16 v1, 0x0

    .line 1343
    :try_start_0
    iget-object v3, v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempPath()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getAvailableSpaceBytes(Ljava/lang/String;)J

    move-result-wide v3
    :try_end_0
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-wide v3, v1

    .line 1346
    :goto_0
    sget-object v5, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "checkSpaceOverflowInProgress: available = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v3, v4}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->byteToMb(J)D

    move-result-wide v7

    invoke-virtual {v6, v7, v8}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v7, "MB"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    cmp-long v5, v3, v1

    if-lez v5, :cond_1

    .line 1348
    iget-object v5, v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v5

    iget-object v8, v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v8

    sub-long/2addr v5, v8

    cmp-long v8, v3, v5

    if-gez v8, :cond_1

    .line 1351
    iget-object v8, v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v8

    invoke-static {v8}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v8

    const/16 v9, 0x64

    const-string v10, "space_fill_min_keep_mb"

    invoke-virtual {v8, v10, v9}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v8

    if-lez v8, :cond_1

    int-to-long v9, v8

    const-wide/32 v11, 0x100000

    mul-long/2addr v9, v11

    sub-long v9, v3, v9

    .line 1356
    sget-object v13, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "checkSpaceOverflowInProgress: minKeep  = "

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "MB, canDownload = "

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1357
    invoke-static {v9, v10}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->byteToMb(J)D

    move-result-wide v11

    invoke-virtual {v14, v11, v12}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 1356
    invoke-static {v13, v7}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    cmp-long v7, v9, v1

    if-lez v7, :cond_0

    .line 1363
    iget-object v1, v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v1

    const-wide/32 v3, 0x100000

    add-long/2addr v9, v3

    add-long/2addr v1, v9

    iput-wide v1, v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->curBytesNeedCheckSpaceOverFlow:J

    return-void

    .line 1359
    :cond_0
    iput-wide v1, v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->curBytesNeedCheckSpaceOverFlow:J

    .line 1360
    new-instance v1, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;

    invoke-direct {v1, v3, v4, v5, v6}, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;-><init>(JJ)V

    throw v1

    .line 1370
    :cond_1
    iput-wide v1, v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->curBytesNeedCheckSpaceOverFlow:J

    return-void
.end method

.method private checkTaskCache()V
    .locals 10
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException;
        }
    .end annotation

    const-string v0, "fix_file_exist_update_download_info"

    const/4 v1, 0x0

    const/4 v2, 0x1

    .line 285
    :try_start_0
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v3

    .line 286
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    if-eqz v4, :cond_7

    const/16 v4, 0x800

    .line 287
    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/utils/DownloadExpSwitchCode;->isSwitchEnable(I)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 288
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->ensureDownloadCacheSyncSuccess()Z

    .line 290
    :cond_0
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v4, v3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v4

    if-eqz v4, :cond_6

    .line 291
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNewTask()Z

    move-result v5

    if-eqz v5, :cond_1

    goto/16 :goto_4

    .line 295
    :cond_1
    iget-object v5, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v5

    .line 296
    iget-object v6, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMd5()Ljava/lang/String;

    move-result-object v6

    .line 297
    iget-object v7, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v7, v4, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->copyFromCacheData(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Z)V

    const/16 v7, 0x1000

    .line 298
    invoke-static {v7}, Lcom/ss/android/socialbase/downloader/utils/DownloadExpSwitchCode;->isSwitchEnable(I)Z

    move-result v7

    if-eqz v7, :cond_2

    iget-object v7, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    :try_end_0
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_0 .. :try_end_0} :catch_5
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    if-eq v4, v7, :cond_2

    move v7, v2

    goto :goto_0

    :cond_2
    move v7, v1

    .line 301
    :goto_0
    :try_start_1
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v5, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_4

    invoke-static {v4, v1, v6}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isFileDownloaded(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;ZLjava/lang/String;)Z

    move-result v5
    :try_end_1
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-nez v5, :cond_3

    goto :goto_1

    .line 303
    :cond_3
    :try_start_2
    new-instance v1, Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v3}, Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException;-><init>(Ljava/lang/String;)V

    throw v1
    :try_end_2
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    move-exception v1

    move-object v3, v1

    goto :goto_2

    :catch_0
    move-exception v1

    move-object v3, v1

    goto :goto_3

    .line 305
    :cond_4
    :goto_1
    :try_start_3
    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadId(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)I

    move-result v4
    :try_end_3
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_3 .. :try_end_3} :catch_2
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eq v4, v3, :cond_5

    .line 308
    :try_start_4
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v4, v3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeDownloadTaskData(I)Z
    :try_end_4
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_4 .. :try_end_4} :catch_1
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_4 .. :try_end_4} :catch_2
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    goto :goto_5

    :catch_1
    move-exception v3

    .line 310
    :try_start_5
    invoke-virtual {v3}, Landroid/database/sqlite/SQLiteException;->printStackTrace()V
    :try_end_5
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_5 .. :try_end_5} :catch_2
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    goto :goto_5

    :cond_5
    move v2, v7

    goto :goto_5

    :catchall_1
    move-exception v2

    move-object v3, v2

    move v2, v1

    :goto_2
    move v1, v7

    goto :goto_6

    :catch_2
    move-exception v2

    move-object v3, v2

    move v2, v1

    :goto_3
    move v1, v7

    goto/16 :goto_8

    .line 292
    :cond_6
    :goto_4
    :try_start_6
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->reset()V
    :try_end_6
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_6 .. :try_end_6} :catch_5
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    goto :goto_5

    :cond_7
    move v2, v1

    .line 316
    :goto_5
    :try_start_7
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->updateRetainRetryTimes()V
    :try_end_7
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_7 .. :try_end_7} :catch_3
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    if-eqz v2, :cond_a

    .line 327
    :try_start_8
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    :try_end_8
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_8 .. :try_end_8} :catch_4

    goto :goto_7

    :catchall_2
    move-exception v3

    move v9, v2

    move v2, v1

    move v1, v9

    goto :goto_6

    :catch_3
    move-exception v3

    move v9, v2

    move v2, v1

    move v1, v9

    goto :goto_8

    :catchall_3
    move-exception v2

    move-object v3, v2

    move v2, v1

    .line 320
    :goto_6
    :try_start_9
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    if-eqz v4, :cond_8

    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v4, :cond_8

    .line 321
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    move-result-object v4

    iget-object v5, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    new-instance v6, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v7, 0x3eb

    const-string v8, "checkTaskCache"

    invoke-static {v3, v8}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getErrorMsgWithTagPrefix(Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v6, v7, v3}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v3

    invoke-static {v4, v5, v6, v3}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSendWithTaskMonitor(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_4

    :cond_8
    if-eqz v1, :cond_a

    if-eqz v2, :cond_9

    .line 326
    :try_start_a
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 327
    :cond_9
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    :try_end_a
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_a .. :try_end_a} :catch_4

    goto :goto_7

    :catch_4
    move-exception v0

    .line 330
    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteException;->printStackTrace()V

    :cond_a
    :goto_7
    return-void

    :catch_5
    move-exception v2

    move-object v3, v2

    move v2, v1

    .line 318
    :goto_8
    :try_start_b
    throw v3
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_4

    :catchall_4
    move-exception v3

    if-eqz v1, :cond_c

    if-eqz v2, :cond_b

    .line 326
    :try_start_c
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_c

    .line 327
    :cond_b
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    :try_end_c
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_c .. :try_end_c} :catch_6

    goto :goto_9

    :catch_6
    move-exception v0

    .line 330
    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteException;->printStackTrace()V

    .line 331
    :cond_c
    :goto_9
    throw v3
.end method

.method private checkTaskCanResume()V
    .locals 7

    .line 1622
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getCurByte(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)J

    move-result-wide v0

    .line 1623
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v2

    cmp-long v4, v0, v2

    if-eqz v4, :cond_0

    .line 1625
    sget-object v4, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "checkTaskCanResume: offset = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v6, ", curBytes = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 1627
    :cond_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2, v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setCurBytes(J)V

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_1

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    .line 1628
    :goto_0
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->canResumeFromCache:Z

    if-nez v0, :cond_2

    .line 1629
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->needCheckIfModified:Z

    if-nez v0, :cond_2

    .line 1630
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    const-string v1, "checkTaskCanResume: deleteAllDownloadFiles"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1631
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeAllDownloadChunk(I)V

    .line 1632
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeSegments(I)V

    .line 1633
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->deleteAllDownloadFiles(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :cond_2
    return-void
.end method

.method private checkTaskStatusValid()Z
    .locals 5

    .line 271
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    .line 272
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->canSkipStatusHandler()Z

    move-result v2

    if-nez v2, :cond_1

    const/4 v1, -0x2

    if-eq v0, v1, :cond_0

    const/4 v1, -0x4

    if-eq v0, v1, :cond_0

    .line 274
    new-instance v1, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v2, 0x3e8

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "The download Task can\'t start, because its status is not prepare:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v2, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    return v1
.end method

.method private checkWifiTaskValid()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;
        }
    .end annotation

    .line 1375
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isOnlyWifi()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "android.permission.ACCESS_NETWORK_STATE"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->checkPermission(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 1376
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;

    const/16 v2, 0x3fb

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    const/4 v4, 0x0

    aput-object v1, v3, v4

    const-string v1, "download task need permission:%s"

    invoke-static {v1, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;-><init>(ILjava/lang/String;)V

    throw v0

    .line 1379
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isDownloadWithWifiValid()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1383
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isPauseReserveWithWifiValid()Z

    move-result v0

    if-eqz v0, :cond_2

    return-void

    .line 1384
    :cond_2
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/DownloadPauseReserveWifiException;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/exception/DownloadPauseReserveWifiException;-><init>()V

    throw v0

    .line 1380
    :cond_3
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/DownloadOnlyWifiException;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/exception/DownloadOnlyWifiException;-><init>()V

    throw v0
.end method

.method private clearCurrentDownloadData()V
    .locals 3

    .line 1683
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "clearCurrentDownloadData::"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/Throwable;

    invoke-direct {v2}, Ljava/lang/Throwable;-><init>()V

    invoke-static {v2}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 1685
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeAllDownloadChunk(I)V

    .line 1686
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeSegments(I)V

    .line 1687
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->deleteAllDownloadFiles(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    const/4 v0, 0x0

    .line 1688
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->canResumeFromCache:Z

    .line 1689
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const-string v1, ""

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->resetDataForEtagEndure(Ljava/lang/String;)V

    .line 1690
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 1692
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private closeConnection()V
    .locals 0

    .line 847
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeFirstHeadConnection()V

    .line 848
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeFirstConnection()V

    return-void
.end method

.method private closeFirstConnection()V
    .locals 1

    .line 840
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_0

    .line 841
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->end()V

    const/4 v0, 0x0

    .line 842
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    :cond_0
    return-void
.end method

.method private closeFirstHeadConnection()V
    .locals 1

    .line 833
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHeadConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    if-eqz v0, :cond_0

    .line 834
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;->cancel()V

    const/4 v0, 0x0

    .line 835
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHeadConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    :cond_0
    return-void
.end method

.method public static createFirstDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk;
    .locals 3

    .line 852
    new-instance v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-direct {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;-><init>(I)V

    const/4 v1, -0x1

    .line 853
    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->chunkIndex(I)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v0

    const-wide/16 v1, 0x0

    .line 854
    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->startOffset(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v0

    .line 855
    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->oldOffset(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v0

    .line 856
    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->currentOffset(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v0

    .line 857
    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->endOffset(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v0

    .line 858
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v1

    sub-long/2addr v1, p1

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->contentLength(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object p0

    .line 859
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->build()Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    move-result-object p0

    return-object p0
.end method

.method private createFirstGetConnection(Ljava/lang/String;Ljava/util/List;)V
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;
        }
    .end annotation

    .line 784
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 788
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    .line 790
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->getInstance()Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->getCachedDownloadConnection(Ljava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;

    move-result-object v0

    :cond_1
    if-eqz v0, :cond_2

    .line 793
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->setHttpResponseStatus(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)V

    .line 794
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const/4 p2, 0x2

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setPreconnectLevel(I)V

    .line 795
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    goto/16 :goto_3

    .line 798
    :cond_2
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedDefaultHttpServiceBackUp()Z

    move-result v3

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 799
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMaxBytes()I

    move-result v4

    const/4 v6, 0x0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string v1, "net_lib_strategy"

    .line 800
    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v8

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string v1, "monitor_download_connect"

    const/4 v5, 0x0

    .line 801
    invoke-virtual {v0, v1, v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-lez v0, :cond_3

    move v9, v2

    goto :goto_0

    :cond_3
    move v9, v5

    :goto_0
    iget-object v10, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-object v5, p1

    move-object v7, p2

    .line 798
    invoke-static/range {v3 .. v10}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadWithConnection(ZILjava/lang/String;Ljava/lang/String;Ljava/util/List;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;
    :try_end_0
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto/16 :goto_2

    :catchall_0
    move-exception p1

    .line 806
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isExpiredRedownload()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isResponseCode304Error(Ljava/lang/Throwable;)Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->hasDownloadCacheHeader(Ljava/util/List;)Z

    move-result p2

    if-eqz p2, :cond_5

    .line 808
    sget-object p1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "dcache=execepiton responseCode=304 lastModified not changed, use local file.. old cacheControl="

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 809
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCacheControl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 808
    invoke-static {p1, p2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 810
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCacheControl()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parserMaxAge(Ljava/lang/String;)J

    move-result-wide p1

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-gtz v0, :cond_4

    .line 812
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const-string p2, "default_304_max_age"

    const/16 v0, 0x12c

    invoke-virtual {p1, p2, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    int-to-long p1, p1

    .line 814
    :cond_4
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-wide/16 v3, 0x3e8

    mul-long/2addr p1, v3

    add-long/2addr v1, p1

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setCacheExpiredTime(J)V

    .line 815
    new-instance p1, Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException;

    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->existTargetFileName:Ljava/lang/String;

    invoke-direct {p1, p2}, Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 816
    :cond_5
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isResponseCode416Error(Ljava/lang/Throwable;)Z

    move-result p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    const-string v0, ""

    if-eqz p2, :cond_6

    :try_start_2
    const-string p1, "http code 416"

    .line 817
    invoke-direct {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleResponseCodeError(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 818
    :cond_6
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isResponseCode412Error(Ljava/lang/Throwable;)Z

    move-result p2

    if-eqz p2, :cond_7

    const-string p1, "http code 412"

    .line 819
    invoke-direct {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleResponseCodeError(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_7
    const-string p2, "CreateFirstConnection"

    .line 821
    invoke-static {p1, p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 824
    :goto_1
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    :goto_2
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->setHttpResponseStatus(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)V

    .line 828
    :goto_3
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz p1, :cond_8

    return-void

    .line 829
    :cond_8
    new-instance p1, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 p2, 0x3fe

    new-instance v0, Ljava/io/IOException;

    const-string v1, "download can\'t continue, firstConnection is null"

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    invoke-direct {p1, p2, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    throw p1

    :catch_0
    move-exception p1

    .line 804
    :try_start_3
    throw p1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :catchall_1
    move-exception p1

    .line 824
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-virtual {p0, p2}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->setHttpResponseStatus(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)V

    throw p1
.end method

.method private createFirstHeadConnection(Ljava/lang/String;Ljava/util/List;J)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;J)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;
        }
    .end annotation

    .line 763
    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result p3

    const/4 p4, 0x1

    if-ne p3, p4, :cond_0

    .line 765
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->getInstance()Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;

    move-result-object p3

    invoke-virtual {p3, p1, p2}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->getCachedHeadConnection(Ljava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;

    move-result-object p3

    if-eqz p3, :cond_0

    .line 767
    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHeadConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    .line 768
    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p3, p4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setPreconnectLevel(I)V

    .line 771
    :cond_0
    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHeadConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    if-nez p3, :cond_2

    iget-boolean p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHeadConnectionFailed:Z

    if-nez p3, :cond_2

    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isHeadConnectionAvailable()Z

    move-result p3

    if-eqz p3, :cond_2

    .line 773
    :try_start_0
    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string v0, "net_lib_strategy"

    .line 774
    invoke-virtual {p3, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result p3

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string v1, "monitor_download_connect"

    const/4 v2, 0x0

    .line 775
    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-lez v0, :cond_1

    goto :goto_0

    :cond_1
    move p4, v2

    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 773
    invoke-static {p1, p2, p3, p4, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadWithHeadConnection(Ljava/lang/String;Ljava/util/List;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHeadConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 778
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getThrowableMsg(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setHeadConnectionException(Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method

.method private doFirstConnect(Ljava/lang/String;Ljava/util/List;J)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;J)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;
        }
    .end annotation

    .line 700
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->createFirstHeadConnection(Ljava/lang/String;Ljava/util/List;J)V

    .line 701
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHeadConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    if-eqz v0, :cond_0

    .line 704
    :try_start_0
    invoke-virtual {p0, p1, v0, p3, p4}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleFirstConnection(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const/4 v0, 0x1

    .line 707
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHeadConnectionFailed:Z

    .line 712
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHeadConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHeadConnectionFailed:Z

    if-eqz v0, :cond_2

    .line 714
    :cond_1
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->createFirstGetConnection(Ljava/lang/String;Ljava/util/List;)V

    .line 715
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-virtual {p0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleFirstConnection(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;J)V

    :cond_2
    return-void
.end method

.method private doTaskStatusHandle()Z
    .locals 5

    .line 907
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_ERROR:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/4 v2, 0x1

    if-ne v0, v1, :cond_0

    .line 908
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->errorException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    goto/16 :goto_1

    .line 909
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_1

    .line 910
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onCancel()V

    goto/16 :goto_1

    .line 911
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_2

    .line 912
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onPause()V

    goto/16 :goto_1

    .line 913
    :cond_2
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_END_RIGHT_NOW:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_3

    .line 915
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onCompleteForFileExist()V
    :try_end_0
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_1

    :catch_0
    move-exception v0

    .line 917
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    goto/16 :goto_1

    .line 919
    :cond_3
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_END_FOR_FILE_EXIST:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_4

    .line 921
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->existTargetFileName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onCompleteForFileExist(Ljava/lang/String;)V
    :try_end_1
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 923
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    goto :goto_1

    .line 925
    :cond_4
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_ALL_CHUNK_RETRY_WITH_RESET:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/4 v3, 0x0

    if-ne v0, v1, :cond_5

    .line 926
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->errorException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-virtual {v0, v1, v3}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;Z)V

    return v3

    .line 928
    :cond_5
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_WAITING_ASYNC_HANDLER:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_6

    return v2

    .line 930
    :cond_6
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_RETRY_DELAY:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_8

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isAllChunkDownloadComplete()Z

    move-result v0

    if-nez v0, :cond_8

    .line 931
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    const-string v1, "doTaskStatusHandle retryDelay"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 932
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->startRetryDelayAlarm()V

    .line 933
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_RETRY_DELAY:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_7

    goto :goto_0

    :cond_7
    move v2, v3

    :goto_0
    return v2

    .line 936
    :cond_8
    :try_start_2
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkCompletedByteValid()Z

    move-result v0

    if-nez v0, :cond_9

    return v3

    .line 938
    :cond_9
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onCompleted()V

    .line 939
    invoke-static {}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->getInstance()Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->scheduleRetryWhenHasTaskSucceed()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 941
    new-instance v1, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x3f0

    const-string v4, "doTaskStatusHandle onComplete"

    invoke-static {v0, v4}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getErrorMsgWithTagPrefix(Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v3, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    :goto_1
    return v2
.end method

.method private downloadInner()V
    .locals 17

    move-object/from16 v1, p0

    .line 413
    :try_start_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 414
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateStartDownloadTime()V

    .line 415
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->resetRealStartDownloadTime()V

    .line 417
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 420
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const-wide/16 v4, -0x1

    invoke-virtual {v0, v4, v5}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setFirstSpeedTime(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    const/4 v4, 0x1

    const/4 v5, 0x0

    .line 424
    :try_start_1
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkTaskCache()V
    :try_end_1
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_4

    move v0, v5

    goto :goto_0

    :catch_0
    move-exception v0

    move-object v6, v0

    .line 426
    :try_start_2
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "file exist "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException;->getExistTargetFileName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v0, v7}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 427
    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException;->getExistTargetFileName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->existTargetFileName:Ljava/lang/String;

    move v0, v4

    .line 432
    :goto_0
    iget-boolean v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->needJumpToStart:Z

    if-nez v6, :cond_0

    .line 433
    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onStart()V

    .line 435
    :cond_0
    iput-boolean v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->needJumpToStart:Z

    .line 437
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkIsStoppedByUser()Z

    move-result v6
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_4

    if-eqz v6, :cond_1

    .line 613
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    return-void

    .line 440
    :cond_1
    :try_start_3
    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->existTargetFileName:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_3

    if-eqz v0, :cond_3

    .line 442
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isExpiredRedownload()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 443
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->cacheExpired(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v0

    iput-boolean v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->needCheckIfModified:Z

    .line 446
    :cond_2
    iget-boolean v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->needCheckIfModified:Z

    if-nez v0, :cond_3

    .line 447
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->finishWithFileExist()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_4

    .line 613
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    return-void

    .line 453
    :cond_3
    :goto_1
    :try_start_4
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkIsStoppedByUser()Z

    move-result v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    if-eqz v0, :cond_4

    .line 613
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    return-void

    .line 458
    :cond_4
    :try_start_5
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkSavePathValid()V

    .line 460
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkHasAnotherSameTask()V

    .line 462
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkWifiTaskValid()V

    .line 464
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v8, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v8

    invoke-interface {v0, v8}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getDownloadChunk(I)Ljava/util/List;

    move-result-object v0

    .line 466
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkTaskCanResume()V

    .line 469
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadSegments()Z

    move-result v8

    if-eqz v8, :cond_5

    .line 470
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    const-string v8, "downloadSegments return"

    invoke-static {v0, v8}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_5 .. :try_end_5} :catch_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_5 .. :try_end_5} :catch_2
    .catch Lcom/ss/android/socialbase/downloader/exception/RetryThrowable; {:try_start_5 .. :try_end_5} :catch_1
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    .line 607
    :try_start_6
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    .line 613
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    return-void

    .line 474
    :cond_5
    :try_start_7
    iget-object v8, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getConnectionUrl()Ljava/lang/String;

    move-result-object v8

    .line 476
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkIsStoppedByUser()Z

    move-result v9
    :try_end_7
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_7 .. :try_end_7} :catch_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_7 .. :try_end_7} :catch_2
    .catch Lcom/ss/android/socialbase/downloader/exception/RetryThrowable; {:try_start_7 .. :try_end_7} :catch_1
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    if-eqz v9, :cond_6

    .line 607
    :try_start_8
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    .line 613
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    return-void

    .line 480
    :cond_6
    :try_start_9
    iget-boolean v9, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->canResumeFromCache:Z

    if-eqz v9, :cond_7

    .line 481
    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v9}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getFirstOffset(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)J

    move-result-wide v9

    goto :goto_2

    :cond_7
    const-wide/16 v9, 0x0

    .line 485
    :goto_2
    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v11, v9, v10}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->createFirstDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    move-result-object v11

    .line 488
    invoke-direct {v1, v11}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->getExtraHeaders(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)Ljava/util/List;

    move-result-object v12

    .line 490
    iget-object v13, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v12, v13}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->addThrottleNetSpeed(Ljava/util/List;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 491
    iget-object v13, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v12, v13}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->addTTNetProtectTimeout(Ljava/util/List;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 492
    iget-object v13, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v13, v5}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setPreconnectLevel(I)V

    .line 494
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v13
    :try_end_9
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_9 .. :try_end_9} :catch_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_9 .. :try_end_9} :catch_2
    .catch Lcom/ss/android/socialbase/downloader/exception/RetryThrowable; {:try_start_9 .. :try_end_9} :catch_1
    .catchall {:try_start_9 .. :try_end_9} :catchall_2

    .line 498
    :try_start_a
    invoke-direct {v1, v8, v12, v9, v10}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->doFirstConnect(Ljava/lang/String;Ljava/util/List;J)V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_1

    .line 500
    :try_start_b
    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v15

    sub-long v6, v15, v13

    invoke-virtual {v9, v6, v7}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->increaseAllConnectTime(J)V

    .line 503
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkIsStoppedByUser()Z

    move-result v6
    :try_end_b
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_b .. :try_end_b} :catch_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_b .. :try_end_b} :catch_2
    .catch Lcom/ss/android/socialbase/downloader/exception/RetryThrowable; {:try_start_b .. :try_end_b} :catch_1
    .catchall {:try_start_b .. :try_end_b} :catchall_2

    if-eqz v6, :cond_8

    .line 607
    :try_start_c
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_4

    .line 613
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    return-void

    .line 506
    :cond_8
    :try_start_d
    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v6

    .line 507
    invoke-virtual {v1, v6, v7}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkSpaceOverflow(J)V

    .line 509
    invoke-direct {v1, v6, v7, v0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->calculateChunkCount(JLjava/util/List;)I

    move-result v9

    .line 511
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkIsStoppedByUser()Z

    move-result v10
    :try_end_d
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_d .. :try_end_d} :catch_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_d .. :try_end_d} :catch_2
    .catch Lcom/ss/android/socialbase/downloader/exception/RetryThrowable; {:try_start_d .. :try_end_d} :catch_1
    .catchall {:try_start_d .. :try_end_d} :catchall_2

    if-eqz v10, :cond_9

    .line 607
    :try_start_e
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_4

    .line 613
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    return-void

    :cond_9
    if-lez v9, :cond_12

    if-ne v9, v4, :cond_a

    move v10, v4

    goto :goto_3

    :cond_a
    move v10, v5

    .line 518
    :goto_3
    :try_start_f
    iput-boolean v10, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isSingleChunk:Z

    if-eqz v10, :cond_d

    .line 522
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;
    :try_end_f
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_f .. :try_end_f} :catch_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_f .. :try_end_f} :catch_2
    .catch Lcom/ss/android/socialbase/downloader/exception/RetryThrowable; {:try_start_f .. :try_end_f} :catch_1
    .catchall {:try_start_f .. :try_end_f} :catchall_2

    if-nez v0, :cond_b

    .line 524
    :try_start_10
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v13

    .line 525
    invoke-direct {v1, v8, v12}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->createFirstGetConnection(Ljava/lang/String;Ljava/util/List;)V
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_0

    .line 527
    :try_start_11
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long/2addr v6, v13

    invoke-virtual {v0, v6, v7}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->increaseAllConnectTime(J)V

    goto :goto_4

    :catchall_0
    move-exception v0

    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    sub-long/2addr v7, v13

    invoke-virtual {v6, v7, v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->increaseAllConnectTime(J)V

    throw v0

    .line 531
    :cond_b
    :goto_4
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkIsStoppedByUser()Z

    move-result v0
    :try_end_11
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_11 .. :try_end_11} :catch_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_11 .. :try_end_11} :catch_2
    .catch Lcom/ss/android/socialbase/downloader/exception/RetryThrowable; {:try_start_11 .. :try_end_11} :catch_1
    .catchall {:try_start_11 .. :try_end_11} :catchall_2

    if-eqz v0, :cond_c

    .line 607
    :try_start_12
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V
    :try_end_12
    .catchall {:try_start_12 .. :try_end_12} :catchall_4

    .line 613
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    return-void

    .line 535
    :cond_c
    :try_start_13
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long/2addr v6, v2

    invoke-virtual {v0, v6, v7}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setFirstSpeedTime(J)V

    .line 537
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->resetRetainRetryTimes()V

    .line 539
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-direct {v1, v11, v8, v0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleResponseWithSingleChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;)V

    goto :goto_5

    .line 542
    :cond_d
    iget-object v8, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedReuseFirstConnection()Z

    move-result v8

    if-nez v8, :cond_e

    .line 543
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeFirstConnection()V

    .line 545
    :cond_e
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkIsStoppedByUser()Z

    move-result v8
    :try_end_13
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_13 .. :try_end_13} :catch_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_13 .. :try_end_13} :catch_2
    .catch Lcom/ss/android/socialbase/downloader/exception/RetryThrowable; {:try_start_13 .. :try_end_13} :catch_1
    .catchall {:try_start_13 .. :try_end_13} :catchall_2

    if-eqz v8, :cond_f

    .line 607
    :try_start_14
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_4

    .line 613
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    return-void

    .line 548
    :cond_f
    :try_start_15
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->resetRetainRetryTimes()V

    .line 551
    iget-object v8, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    sub-long/2addr v10, v2

    invoke-virtual {v8, v10, v11}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setFirstSpeedTime(J)V

    .line 552
    iget-boolean v8, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->canResumeFromCache:Z

    if-eqz v8, :cond_10

    .line 553
    invoke-direct {v1, v9, v0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleResponseWithMultiChunkFromResume(ILjava/util/List;)V

    goto :goto_5

    .line 555
    :cond_10
    invoke-direct {v1, v6, v7, v9}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleResponseMultiChunkFromBegin(JI)V
    :try_end_15
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_15 .. :try_end_15} :catch_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_15 .. :try_end_15} :catch_2
    .catch Lcom/ss/android/socialbase/downloader/exception/RetryThrowable; {:try_start_15 .. :try_end_15} :catch_1
    .catchall {:try_start_15 .. :try_end_15} :catchall_2

    .line 607
    :cond_11
    :goto_5
    :try_start_16
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V
    :try_end_16
    .catchall {:try_start_16 .. :try_end_16} :catchall_4

    goto/16 :goto_8

    .line 515
    :cond_12
    :try_start_17
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v6, 0x408

    const-string v7, "chunkCount is 0"

    invoke-direct {v0, v6, v7}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0

    :catchall_1
    move-exception v0

    move-object v6, v0

    .line 500
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    sub-long/2addr v7, v13

    invoke-virtual {v0, v7, v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->increaseAllConnectTime(J)V

    throw v6
    :try_end_17
    .catch Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException; {:try_start_17 .. :try_end_17} :catch_3
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_17 .. :try_end_17} :catch_2
    .catch Lcom/ss/android/socialbase/downloader/exception/RetryThrowable; {:try_start_17 .. :try_end_17} :catch_1
    .catchall {:try_start_17 .. :try_end_17} :catchall_2

    :catchall_2
    move-exception v0

    .line 602
    :try_start_18
    sget-object v2, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "downloadInner: throwable =  "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 603
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v3, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-eq v2, v3, :cond_11

    .line 604
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x415

    invoke-direct {v2, v3, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    goto :goto_5

    :catch_1
    move-exception v0

    .line 582
    sget-object v6, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "downloadInner: retry throwable for "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;->getErrorMsg()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 583
    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v7, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-eq v6, v7, :cond_11

    .line 584
    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v7, 0x5

    if-eqz v6, :cond_14

    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v6}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v6

    if-lez v6, :cond_14

    .line 585
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v6}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    move-result v6

    invoke-virtual {v0, v6}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateCurRetryTime(I)V

    .line 586
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0, v7}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setStatus(I)V
    :try_end_18
    .catchall {:try_start_18 .. :try_end_18} :catchall_3

    .line 607
    :cond_13
    :goto_6
    :try_start_19
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V
    :try_end_19
    .catchall {:try_start_19 .. :try_end_19} :catchall_4

    goto/16 :goto_1

    .line 588
    :cond_14
    :try_start_1a
    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    if-eqz v6, :cond_16

    .line 589
    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->trySwitchToNextBackupUrl()Z

    move-result v6

    if-eqz v6, :cond_15

    .line 590
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0, v7}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setStatus(I)V

    .line 591
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRetryCount()I

    move-result v6

    invoke-virtual {v0, v6}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 592
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v6}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v6

    invoke-virtual {v0, v6}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateCurRetryTime(I)V

    goto :goto_6

    .line 595
    :cond_15
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x3fa

    const-string v6, "retry for Throwable, but retry Time %s all used, last error is %s"

    const/4 v7, 0x2

    new-array v7, v7, [Ljava/lang/Object;

    iget-object v8, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRetryCount()I

    move-result v8

    invoke-static {v8}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v5

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;->getErrorMsg()Ljava/lang/String;

    move-result-object v0

    aput-object v0, v7, v4

    invoke-static {v6, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v3, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    goto/16 :goto_5

    .line 598
    :cond_16
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x413

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "retry for Throwable, but retain retry time is NULL, last error is"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;->getErrorMsg()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v3, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    goto/16 :goto_5

    :catch_2
    move-exception v0

    .line 562
    sget-object v6, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "downloadInner: baseException = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 563
    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v7, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-eq v6, v7, :cond_11

    .line 564
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v6

    const/16 v7, 0x401

    if-eq v6, v7, :cond_1a

    .line 565
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v6

    const/16 v7, 0x3f1

    if-ne v6, v7, :cond_17

    goto :goto_7

    .line 568
    :cond_17
    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->canRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result v6

    if-eqz v6, :cond_19

    .line 569
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isHttpDataDirtyError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result v6

    if-eqz v6, :cond_18

    .line 570
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->clearCurrentDownloadData()V

    :cond_18
    const-wide/16 v6, 0x0

    .line 572
    invoke-virtual {v1, v0, v6, v7}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;J)Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    move-result-object v0

    .line 573
    sget-object v6, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;
    :try_end_1a
    .catchall {:try_start_1a .. :try_end_1a} :catchall_3

    if-ne v0, v6, :cond_13

    .line 607
    :try_start_1b
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V
    :try_end_1b
    .catchall {:try_start_1b .. :try_end_1b} :catchall_4

    .line 613
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    return-void

    .line 578
    :cond_19
    :try_start_1c
    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    goto/16 :goto_5

    .line 566
    :cond_1a
    :goto_7
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_END_RIGHT_NOW:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;
    :try_end_1c
    .catchall {:try_start_1c .. :try_end_1c} :catchall_3

    .line 607
    :try_start_1d
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V
    :try_end_1d
    .catchall {:try_start_1d .. :try_end_1d} :catchall_4

    .line 613
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    return-void

    .line 560
    :catch_3
    :try_start_1e
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->finishWithFileExist()V
    :try_end_1e
    .catchall {:try_start_1e .. :try_end_1e} :catchall_3

    goto/16 :goto_5

    .line 613
    :goto_8
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    return-void

    :catchall_3
    move-exception v0

    .line 607
    :try_start_1f
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V

    throw v0
    :try_end_1f
    .catchall {:try_start_1f .. :try_end_1f} :catchall_4

    :catchall_4
    move-exception v0

    .line 613
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    throw v0
.end method

.method private downloadSegments()Z
    .locals 9
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Ljava/lang/InterruptedException;
        }
    .end annotation

    .line 639
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isExpiredRedownload()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 643
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_8

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getThrottleNetSpeed()J

    move-result-wide v3

    const-wide/16 v5, 0x0

    cmp-long v0, v3, v5

    if-lez v0, :cond_1

    goto :goto_3

    .line 649
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v3, "segment_config"

    invoke-virtual {v0, v3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    .line 651
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v4

    invoke-interface {v3, v4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getSegments(I)Ljava/util/List;

    move-result-object v3

    .line 652
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v7

    cmp-long v4, v7, v5

    if-lez v4, :cond_4

    if-eqz v3, :cond_3

    .line 655
    invoke-interface {v3}, Ljava/util/List;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_2

    goto :goto_0

    :cond_2
    if-nez v0, :cond_4

    .line 663
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    goto :goto_1

    :cond_3
    :goto_0
    return v1

    :cond_4
    :goto_1
    if-nez v0, :cond_5

    return v1

    .line 673
    :cond_5
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentStrategy;->from(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/segment/SegmentStrategy;

    move-result-object v0

    .line 674
    new-instance v1, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-direct {v1, v4, v0, p0}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/segment/SegmentStrategy;Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;)V

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    .line 676
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkIsStoppedByUser()Z

    move-result v0

    if-eqz v0, :cond_7

    .line 677
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    const-string v1, "downloadSegments: is stopped by user"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 678
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_6

    .line 679
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->cancel()V

    goto :goto_2

    .line 681
    :cond_6
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->pause()V

    :goto_2
    return v2

    .line 686
    :cond_7
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-virtual {v0, v3}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->downloadSegments(Ljava/util/List;)Z

    move-result v0

    return v0

    :cond_8
    :goto_3
    return v1
.end method

.method private endDownloadRunnable()V
    .locals 7

    .line 720
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "endDownloadRunnable::runStatus="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 724
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-eq v0, v1, :cond_0

    move v0, v3

    goto :goto_0

    :cond_0
    move v0, v2

    .line 726
    :goto_0
    :try_start_0
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->doTaskStatusHandle()Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v4, v2

    goto :goto_2

    :catch_0
    move-exception v1

    .line 728
    instance-of v4, v1, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    if-eqz v4, :cond_1

    .line 729
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    check-cast v1, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-virtual {v4, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    goto :goto_1

    .line 731
    :cond_1
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    new-instance v5, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v6, 0x416

    invoke-direct {v5, v6, v1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    invoke-virtual {v4, v5}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    :goto_1
    move v1, v3

    move v4, v1

    :goto_2
    if-nez v1, :cond_3

    if-eqz v4, :cond_2

    goto :goto_3

    .line 757
    :cond_2
    iput-boolean v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->needJumpToStart:Z

    .line 758
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    const-string v1, "jump to restart"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    .line 737
    :cond_3
    :goto_3
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isAlive:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    if-eqz v0, :cond_5

    .line 740
    :try_start_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadEngine()Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 749
    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->removeDownloadRunnable(Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_4

    :catchall_0
    move-exception v0

    .line 752
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 753
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    move-result-object v1

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    new-instance v4, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v5, 0x3f6

    const-string v6, "removeDownloadRunnable"

    invoke-static {v0, v6}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getErrorMsgWithTagPrefix(Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v4, v5, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v2

    :cond_4
    invoke-static {v1, v3, v4, v2}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSendWithTaskMonitor(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V

    :cond_5
    :goto_4
    return-void
.end method

.method private finishWithFileExist()V
    .locals 3

    .line 618
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    const-string v1, "finishWithFileExist"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 619
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "fix_end_for_file_exist_error"

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 622
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->existTargetFileName:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 624
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_END_RIGHT_NOW:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    goto :goto_0

    .line 627
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_END_FOR_FILE_EXIST:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    goto :goto_0

    .line 630
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->existTargetFileName:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTargetFilePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 631
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_END_RIGHT_NOW:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    goto :goto_0

    .line 633
    :cond_2
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_END_FOR_FILE_EXIST:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    :goto_0
    return-void
.end method

.method private getDelayTime()J
    .locals 3

    .line 1022
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurRetryTimeInTotal()I

    move-result v1

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalRetryCount()I

    move-result v2

    invoke-interface {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;->calculateRetryDelayTime(II)J

    move-result-wide v0

    return-wide v0
.end method

.method private getExtraHeaders(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;"
        }
    .end annotation

    .line 863
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExtraHeaders()Ljava/util/List;

    move-result-object v0

    .line 864
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->geteTag()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->addRangeHeader(Ljava/util/List;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)Ljava/util/List;

    move-result-object p1

    .line 865
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isExpiredRedownload()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->needCheckIfModified:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getLastModified()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 866
    new-instance v0, Lcom/ss/android/socialbase/downloader/model/HttpHeader;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getLastModified()Ljava/lang/String;

    move-result-object v1

    const-string v2, "if-modified-since"

    invoke-direct {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 867
    new-instance v0, Lcom/ss/android/socialbase/downloader/model/HttpHeader;

    const-string v1, "download-tc21-1-15"

    invoke-direct {v0, v1, v1}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 868
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "dcache::add head IF_MODIFIED_SINCE="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getLastModified()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-object p1
.end method

.method private getRetryDelayTimeCalculator(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;
    .locals 1

    .line 2040
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getRetryDelayTimeCalculator()Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    .line 2044
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 2046
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRetryDelayTimeArray()Ljava/lang/String;

    move-result-object p1

    .line 2047
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 2048
    new-instance v0, Lcom/ss/android/socialbase/downloader/impls/RetryDelayTimeParamCalculator;

    invoke-direct {v0, p1}, Lcom/ss/android/socialbase/downloader/impls/RetryDelayTimeParamCalculator;-><init>(Ljava/lang/String;)V

    return-object v0

    .line 2051
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getRetryDelayTimeCalculator()Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    move-result-object p1

    return-object p1
.end method

.method private getUnCompletedSubChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;I)Lcom/ss/android/socialbase/downloader/model/DownloadChunk;
    .locals 8

    .line 1982
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isHostChunk()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    const/4 v0, 0x1

    .line 1985
    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getRetainLength(Z)J

    move-result-wide v2

    .line 1987
    sget-object v4, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "reuseChunk retainLen:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v6, " chunkIndex:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v4, 0x0

    .line 1990
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasChunkDivided()Z

    move-result v5

    if-nez v5, :cond_1

    sget-wide v5, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->MIN_CHUNK_REUSE_SIZE:J

    cmp-long v2, v2, v5

    if-lez v2, :cond_1

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedReuseChunkRunnable()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 1991
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v2

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v3

    invoke-virtual {p1, v2, v3, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->divideChunkForReuse(IJ)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 1993
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    .line 1994
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v4, v3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->addSubDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    goto :goto_0

    .line 1998
    :cond_1
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasChunkDivided()Z

    move-result v2

    if-eqz v2, :cond_3

    :cond_2
    move v4, v0

    :cond_3
    if-eqz v4, :cond_7

    .line 2001
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasChunkDivided()Z

    move-result v2

    if-eqz v2, :cond_7

    move v2, v0

    .line 2003
    :goto_1
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getSubChunkList()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_6

    .line 2004
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getSubChunkList()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-eqz v3, :cond_5

    .line 2006
    sget-object v4, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "check can checkUnCompletedChunk -- chunkIndex:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, " currentOffset:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v6

    invoke-virtual {v5, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v6, "  startOffset:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getStartOffset()J

    move-result-wide v6

    invoke-virtual {v5, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v6, " contentLen:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getContentLength()J

    move-result-wide v6

    invoke-virtual {v5, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2007
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v4

    if-ltz v4, :cond_4

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasNoBytesDownload()Z

    move-result v4

    if-nez v4, :cond_5

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isDownloading()Z

    move-result v4

    if-nez v4, :cond_5

    :cond_4
    move-object v1, v3

    goto :goto_2

    :cond_5
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_6
    :goto_2
    if-eqz v1, :cond_7

    .line 2015
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v2

    .line 2017
    sget-object v4, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "unComplete chunk "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result p1

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " curOffset:"

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " reuseChunk chunkIndex:"

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " for subChunk:"

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result p1

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2018
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getId()I

    move-result v2

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v3

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getHostChunkIndex()I

    move-result v4

    invoke-interface {p1, v2, v3, v4, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateSubDownloadChunkIndex(IIII)V

    .line 2019
    invoke-virtual {v1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setChunkIndex(I)V

    .line 2020
    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setDownloading(Z)V

    :cond_7
    return-object v1
.end method

.method private handleDiskSpaceCallback()V
    .locals 2

    .line 1744
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkIsStoppedByUser()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 1745
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadEngine()Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1747
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->restartAsyncWaitingTask(I)Z

    :cond_1
    return-void
.end method

.method private handleFirstResponse()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    .line 874
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHttpResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    if-eqz v0, :cond_2

    .line 875
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_0

    .line 876
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const/4 v1, -0x4

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setStatus(I)V

    .line 877
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHttpResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->cancel()V

    goto :goto_0

    .line 878
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_1

    .line 879
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const/4 v1, -0x2

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setStatus(I)V

    .line 880
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHttpResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->pause()V

    goto :goto_0

    .line 882
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHttpResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->handleResponse()V

    :cond_2
    :goto_0
    return-void
.end method

.method private handleForbiddenCallback(Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_2

    .line 1735
    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 1737
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_WAITING_ASYNC_HANDLER:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v1, v2, :cond_1

    const/4 v1, 0x1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0, p1, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setForbiddenBackupUrls(Ljava/util/List;Z)V

    .line 1738
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadEngine()Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 1740
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;->restartAsyncWaitingTask(I)Z

    :cond_2
    :goto_1
    return-void
.end method

.method private handleResponseCodeError(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;
        }
    .end annotation

    .line 1446
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeAllDownloadChunk(I)V

    .line 1447
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->removeSegments(I)V

    .line 1448
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->deleteAllDownloadFiles(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    const/4 v0, 0x0

    .line 1449
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->canResumeFromCache:Z

    .line 1450
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->resetDataForEtagEndure(Ljava/lang/String;)V

    .line 1451
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {p1, v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    .line 1452
    new-instance p1, Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;

    invoke-direct {p1, p2}, Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private handleResponseMultiChunkFromBegin(JI)V
    .locals 17
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    move-object/from16 v0, p0

    move-wide/from16 v1, p1

    move/from16 v3, p3

    int-to-long v4, v3

    .line 1075
    div-long v4, v1, v4

    .line 1076
    iget-object v6, v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v6

    .line 1078
    new-instance v7, Ljava/util/ArrayList;

    invoke-direct {v7}, Ljava/util/ArrayList;-><init>()V

    const-wide/16 v8, 0x0

    const/4 v10, 0x0

    move-wide v11, v8

    :goto_0
    if-ge v10, v3, :cond_1

    add-int/lit8 v13, v3, -0x1

    if-ne v10, v13, :cond_0

    move-wide v13, v8

    goto :goto_1

    :cond_0
    add-long v13, v11, v4

    const-wide/16 v15, 0x1

    sub-long/2addr v13, v15

    .line 1090
    :goto_1
    new-instance v15, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    invoke-direct {v15, v6}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;-><init>(I)V

    .line 1091
    invoke-virtual {v15, v10}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->chunkIndex(I)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v15

    .line 1092
    invoke-virtual {v15, v11, v12}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->startOffset(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v15

    .line 1093
    invoke-virtual {v15, v11, v12}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->oldOffset(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v15

    .line 1094
    invoke-virtual {v15, v11, v12}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->currentOffset(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v15

    .line 1095
    invoke-virtual {v15, v13, v14}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->endOffset(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v13

    .line 1096
    invoke-virtual {v13}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->build()Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    move-result-object v13

    .line 1097
    invoke-interface {v7, v13}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1098
    iget-object v14, v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v14, v13}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    add-long/2addr v11, v4

    add-int/lit8 v10, v10, 0x1

    goto :goto_0

    .line 1102
    :cond_1
    iget-object v4, v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setChunkCount(I)V

    .line 1103
    iget-object v4, v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    invoke-interface {v4, v6, v3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateChunkCount(II)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 1105
    invoke-direct {v0, v7, v1, v2}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleResponseWithMultiChunk(Ljava/util/List;J)V

    return-void
.end method

.method private handleResponseWithMultiChunk(Ljava/util/List;J)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;J)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    .line 1116
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_7

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-nez v0, :cond_1

    goto :goto_0

    .line 1122
    :cond_1
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getEndOffset()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-nez v1, :cond_2

    .line 1123
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v1

    sub-long v1, p2, v1

    goto :goto_1

    .line 1125
    :cond_2
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getEndOffset()J

    move-result-wide v1

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v5

    sub-long/2addr v1, v5

    const-wide/16 v5, 0x1

    add-long/2addr v1, v5

    :goto_1
    cmp-long v3, v1, v3

    if-gtz v3, :cond_3

    goto :goto_0

    .line 1130
    :cond_3
    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setContentLength(J)V

    .line 1132
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedReuseFirstConnection()Z

    move-result v1

    if-eqz v1, :cond_6

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v1, :cond_6

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isHeadConnectionAvailable()Z

    move-result v1

    if-eqz v1, :cond_4

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHeadConnectionFailed:Z

    if-eqz v1, :cond_6

    .line 1133
    :cond_4
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v1

    if-nez v1, :cond_5

    .line 1134
    new-instance v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-direct {v1, v0, v2, v3, p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;)V

    .line 1135
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadChunkRunnableList:Ljava/util/ArrayList;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 1136
    :cond_5
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result v1

    if-lez v1, :cond_0

    .line 1137
    new-instance v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-direct {v1, v0, v2, p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;)V

    .line 1138
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadChunkRunnableList:Ljava/util/ArrayList;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 1141
    :cond_6
    new-instance v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-direct {v1, v0, v2, p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;)V

    .line 1142
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadChunkRunnableList:Ljava/util/ArrayList;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto/16 :goto_0

    :cond_7
    const/16 p1, 0x40

    .line 1146
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadExpSwitchCode;->isSwitchEnable(I)Z

    move-result p1

    if-eqz p1, :cond_e

    .line 1147
    new-instance p1, Ljava/util/ArrayList;

    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadChunkRunnableList:Ljava/util/ArrayList;

    invoke-virtual {p2}, Ljava/util/ArrayList;->size()I

    move-result p2

    invoke-direct {p1, p2}, Ljava/util/ArrayList;-><init>(I)V

    .line 1148
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadChunkRunnableList:Ljava/util/ArrayList;

    invoke-virtual {p2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_2
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result p3

    if-eqz p3, :cond_a

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;

    .line 1149
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_8

    .line 1150
    invoke-virtual {p3}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->cancel()V

    goto :goto_2

    .line 1152
    :cond_8
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_9

    .line 1153
    invoke-virtual {p3}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->pause()V

    goto :goto_2

    .line 1156
    :cond_9
    invoke-interface {p1, p3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_a
    const/4 p2, 0x0

    .line 1158
    invoke-interface {p1, p2}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Runnable;

    .line 1162
    :try_start_0
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadEngine;->executeFutureTasks(Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    :goto_3
    if-eqz p2, :cond_c

    .line 1166
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkIsStoppedByUser()Z

    move-result p3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-eqz p3, :cond_b

    return-void

    .line 1169
    :cond_b
    :try_start_1
    invoke-interface {p2}, Ljava/lang/Runnable;->run()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_4

    :catchall_0
    move-exception p2

    .line 1171
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1174
    :goto_4
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadEngine;->getUnstartedTask(Ljava/util/List;)Ljava/lang/Runnable;

    move-result-object p2

    goto :goto_3

    :cond_c
    if-eqz p1, :cond_13

    .line 1178
    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result p2

    if-nez p2, :cond_13

    .line 1179
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :catchall_1
    :cond_d
    :goto_5
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_13

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/util/concurrent/Future;

    if-eqz p2, :cond_d

    .line 1181
    invoke-interface {p2}, Ljava/util/concurrent/Future;->isDone()Z

    move-result p3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    if-nez p3, :cond_d

    .line 1183
    :try_start_3
    invoke-interface {p2}, Ljava/util/concurrent/Future;->get()Ljava/lang/Object;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_5

    .line 1194
    :cond_e
    new-instance p1, Ljava/util/ArrayList;

    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadChunkRunnableList:Ljava/util/ArrayList;

    invoke-virtual {p2}, Ljava/util/ArrayList;->size()I

    move-result p2

    invoke-direct {p1, p2}, Ljava/util/ArrayList;-><init>(I)V

    .line 1195
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadChunkRunnableList:Ljava/util/ArrayList;

    invoke-virtual {p2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_6
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result p3

    if-eqz p3, :cond_11

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;

    .line 1196
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_f

    .line 1197
    invoke-virtual {p3}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->cancel()V

    goto :goto_6

    .line 1199
    :cond_f
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_10

    .line 1200
    invoke-virtual {p3}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->pause()V

    goto :goto_6

    .line 1204
    :cond_10
    invoke-static {p3}, Ljava/util/concurrent/Executors;->callable(Ljava/lang/Runnable;)Ljava/util/concurrent/Callable;

    move-result-object p3

    invoke-interface {p1, p3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_6

    .line 1208
    :cond_11
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkIsStoppedByUser()Z

    move-result p2

    if-eqz p2, :cond_12

    return-void

    .line 1212
    :cond_12
    :try_start_4
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadEngine;->invokeFutureTasks(Ljava/util/List;)V
    :try_end_4
    .catch Ljava/lang/InterruptedException; {:try_start_4 .. :try_end_4} :catch_0

    :catchall_2
    :cond_13
    return-void

    :catch_0
    move-exception p1

    .line 1214
    new-instance p2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 p3, 0x3fc

    invoke-direct {p2, p3, p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    throw p2
.end method

.method private handleResponseWithMultiChunkFromResume(ILjava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    .line 1067
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-ne v0, p1, :cond_0

    .line 1070
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v0

    invoke-direct {p0, p2, v0, v1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleResponseWithMultiChunk(Ljava/util/List;J)V

    return-void

    .line 1068
    :cond_0
    new-instance p1, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 p2, 0x409

    new-instance v0, Ljava/lang/IllegalArgumentException;

    invoke-direct {v0}, Ljava/lang/IllegalArgumentException;-><init>()V

    invoke-direct {p1, p2, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    throw p1
.end method

.method private handleResponseWithSingleChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;)V
    .locals 9
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    .line 1222
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v0

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v2

    sub-long/2addr v0, v2

    invoke-virtual {p1, v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setContentLength(J)V

    .line 1223
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setChunkCount(I)V

    .line 1224
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-interface {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateChunkCount(II)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 1225
    new-instance v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-object v3, v0

    move-object v5, p2

    move-object v6, p3

    move-object v7, p1

    move-object v8, p0

    invoke-direct/range {v3 .. v8}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHttpResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    .line 1226
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleFirstResponse()V

    return-void
.end method

.method private handleRetryTime(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z
    .locals 6

    .line 1913
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x1

    if-eqz v0, :cond_6

    .line 1914
    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v2, 0x0

    if-lez v0, :cond_0

    if-eqz p1, :cond_3

    .line 1916
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v0

    const/16 v3, 0x42e

    if-eq v0, v3, :cond_0

    goto :goto_1

    .line 1918
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->trySwitchToNextBackupUrl()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1919
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getBackUpUrlRetryCount()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 1920
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateCurRetryTime(I)V

    goto :goto_0

    :cond_1
    if-eqz p1, :cond_5

    .line 1921
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v0

    const/16 v3, 0x3f3

    if-eq v0, v3, :cond_2

    .line 1922
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getCause()Ljava/lang/Throwable;

    move-result-object v0

    if-eqz v0, :cond_5

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getCause()Ljava/lang/Throwable;

    move-result-object v0

    instance-of v0, v0, Ljavax/net/ssl/SSLHandshakeException;

    if-eqz v0, :cond_5

    :cond_2
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->canReplaceHttpForRetry()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 1923
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRetryCount()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 1924
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateCurRetryTime(I)V

    .line 1925
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setHttpsToHttpRetryUsed(Z)V

    :goto_0
    move v1, v2

    .line 1935
    :cond_3
    :goto_1
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_RETRY_DELAY:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-eq p1, v0, :cond_4

    if-eqz v1, :cond_4

    .line 1936
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateCurRetryTime(I)V

    :cond_4
    return v2

    .line 1927
    :cond_5
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v3

    const/4 v4, 0x3

    new-array v4, v4, [Ljava/lang/Object;

    iget-object v5, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-static {v5}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v2

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRetryCount()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v4, v1

    const/4 v2, 0x2

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorMessage()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v4, v2

    const-string p1, "retry for exception, but current retry time : %s , retry Time %s all used, last error is %s"

    invoke-static {p1, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, v3, p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    return v1

    .line 1931
    :cond_6
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v2, 0x413

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "retry for exception, but retain retry time is null, last error is :"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, v2, p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    return v1
.end method

.method private isAllChunkDownloadComplete()Z
    .locals 7

    .line 949
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-gt v0, v2, :cond_1

    .line 950
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v3

    const-wide/16 v5, 0x0

    cmp-long v0, v3, v5

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v3

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v5

    cmp-long v0, v3, v5

    if-nez v0, :cond_0

    return v2

    :cond_0
    return v1

    .line 955
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v3

    invoke-interface {v0, v3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getDownloadChunk(I)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 956
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-gt v3, v2, :cond_2

    goto :goto_0

    .line 958
    :cond_2
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_3
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-eqz v3, :cond_4

    .line 959
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasNoBytesDownload()Z

    move-result v3

    if-nez v3, :cond_3

    :cond_4
    return v1

    :cond_5
    return v2

    :cond_6
    :goto_0
    return v1
.end method

.method private isMultiChunkDownloadAvailable()Z
    .locals 3

    .line 1231
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isExpiredRedownload()Z

    move-result v0

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->canResumeFromCache:Z

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 1232
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v0

    if-le v0, v2, :cond_2

    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isChunkDowngradeRetryUsed()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 1236
    :cond_1
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->acceptPartial:Z

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isChunked:Z

    if-nez v0, :cond_2

    move v1, v2

    :cond_2
    :goto_0
    return v1
.end method

.method private isResponseCodeError(ILjava/lang/String;Ljava/lang/String;)Z
    .locals 3

    const/4 v0, 0x1

    const/16 v1, 0x19c

    if-ne p1, v1, :cond_0

    return v0

    .line 1439
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-virtual {p2, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-nez p2, :cond_2

    iget-boolean p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isResponseFromBegin:Z

    if-nez p2, :cond_1

    iget-boolean p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->acceptPartial:Z

    if-eqz p2, :cond_2

    :cond_1
    return v0

    :cond_2
    const/16 p2, 0xc9

    if-eq p1, p2, :cond_3

    const/16 p2, 0x1a0

    if-ne p1, p2, :cond_4

    .line 1442
    :cond_3
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide p1

    const-wide/16 v1, 0x0

    cmp-long p1, p1, v1

    if-lez p1, :cond_4

    goto :goto_0

    :cond_4
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private isStoppedStatus()Z
    .locals 2

    .line 888
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v0, v1, :cond_0

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

.method private resetRetainRetryTimes()V
    .locals 3

    .line 691
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "reset_retain_retry_times"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    iget v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->resetRetainRetryTimesCount:I

    const/4 v2, 0x3

    if-ge v0, v2, :cond_1

    .line 693
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isBackUpUrlUsed()Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getBackUpUrlRetryCount()I

    move-result v2

    goto :goto_0

    :cond_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRetryCount()I

    move-result v2

    :goto_0
    invoke-virtual {v0, v2}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 694
    iget v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->resetRetainRetryTimesCount:I

    add-int/2addr v0, v1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->resetRetainRetryTimesCount:I

    :cond_1
    return-void
.end method

.method private runInner()V
    .locals 7

    const/16 v0, 0xa

    .line 352
    invoke-static {v0}, Landroid/os/Process;->setThreadPriority(I)V

    const-wide/16 v0, 0x0

    .line 355
    :try_start_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v2, :cond_0

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->prepareDownloadTime:J

    cmp-long v2, v2, v0

    if-lez v2, :cond_0

    .line 356
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-wide v5, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->prepareDownloadTime:J

    sub-long/2addr v3, v5

    invoke-virtual {v2, v3, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->increaseDownloadPrepareTime(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 364
    :catchall_0
    :cond_0
    :try_start_1
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getInterceptor()Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 365
    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;->intercepte()Z

    move-result v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v2, :cond_1

    .line 373
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onIntercept()V

    return-void

    :catchall_1
    move-exception v2

    .line 370
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 377
    :cond_1
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkTaskStatusValid()Z

    move-result v2

    if-nez v2, :cond_3

    .line 378
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x3eb

    const-string v4, "task status is invalid"

    invoke-direct {v2, v3, v4}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v3, :cond_2

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v3

    goto :goto_0

    :cond_2
    const/4 v3, 0x0

    :goto_0
    invoke-static {v0, v1, v2, v3}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSendWithTaskMonitor(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V

    return-void

    .line 384
    :cond_3
    :goto_1
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInner()V

    .line 385
    iget-boolean v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->needJumpToStart:Z

    if-nez v2, :cond_4

    goto/16 :goto_2

    .line 387
    :cond_4
    iget v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->bytesRetryCount:I

    if-lez v2, :cond_5

    .line 388
    iget v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->bytesRetryCount:I

    add-int/lit8 v2, v2, -0x1

    iput v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->bytesRetryCount:I

    goto :goto_1

    .line 390
    :cond_5
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v2

    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v4

    cmp-long v2, v2, v4

    if-eqz v2, :cond_6

    .line 391
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getErrorBytesLog()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 392
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    new-instance v1, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;

    const/16 v2, 0x403

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "current bytes is not equals to total bytes, bytes invalid retry status is : "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getByteInvalidRetryStatus()Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;-><init>(ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    goto :goto_2

    .line 394
    :cond_6
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v2

    cmp-long v2, v2, v0

    if-gtz v2, :cond_7

    .line 395
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getErrorBytesLog()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 396
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    new-instance v1, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;

    const/16 v2, 0x402

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "curBytes is 0, bytes invalid retry status is : "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getByteInvalidRetryStatus()Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;-><init>(ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    goto :goto_2

    .line 398
    :cond_7
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v2

    cmp-long v2, v2, v0

    if-gtz v2, :cond_3

    .line 399
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getErrorBytesLog()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 400
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    new-instance v1, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;

    const/16 v2, 0x414

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "TotalBytes is 0, bytes invalid retry status is : "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getByteInvalidRetryStatus()Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;-><init>(ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    :goto_2
    return-void

    :catchall_2
    move-exception v0

    .line 373
    throw v0
.end method

.method private startRetryDelayAlarm()V
    .locals 1

    .line 983
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    return-void
.end method

.method private updateRetainRetryTimes()V
    .locals 2

    .line 173
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-nez v0, :cond_0

    return-void

    .line 175
    :cond_0
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRetryCount()I

    move-result v0

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurRetryTime()I

    move-result v1

    sub-int/2addr v0, v1

    if-gez v0, :cond_1

    const/4 v0, 0x0

    .line 178
    :cond_1
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    if-nez v1, :cond_2

    .line 179
    new-instance v1, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v1, v0}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    goto :goto_0

    .line 181
    :cond_2
    invoke-virtual {v1, v0}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    :goto_0
    return-void
.end method


# virtual methods
.method public canRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z
    .locals 4

    .line 1657
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isNetworkError(Ljava/lang/Throwable;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRetryCount()I

    move-result v2

    if-ge v0, v2, :cond_0

    return v1

    .line 1661
    :cond_0
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isResponseCodeError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result v0

    const/4 v2, 0x1

    if-eqz v0, :cond_2

    .line 1662
    iget-boolean p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isSingleChunk:Z

    if-eqz p1, :cond_1

    iget-boolean p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isTriedFixRangeNotSatisfiable:Z

    if-nez p1, :cond_1

    .line 1663
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->deleteAllDownloadFiles(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 1664
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isTriedFixRangeNotSatisfiable:Z

    :cond_1
    return v2

    .line 1668
    :cond_2
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->retainRetryTimes:Ljava/util/concurrent/atomic/AtomicInteger;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-gtz v0, :cond_5

    :cond_3
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->hasNextBackupUrl()Z

    move-result v0

    if-nez v0, :cond_5

    if-eqz p1, :cond_6

    .line 1669
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v0

    const/16 v3, 0x3f3

    if-eq v0, v3, :cond_4

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getCause()Ljava/lang/Throwable;

    move-result-object v0

    if-eqz v0, :cond_6

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getCause()Ljava/lang/Throwable;

    move-result-object v0

    instance-of v0, v0, Ljavax/net/ssl/SSLHandshakeException;

    if-eqz v0, :cond_6

    :cond_4
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->canReplaceHttpForRetry()Z

    move-result v0

    if-eqz v0, :cond_6

    :cond_5
    instance-of p1, p1, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;

    if-nez p1, :cond_6

    move v1, v2

    :cond_6
    return v1
.end method

.method public cancel()V
    .locals 1

    .line 211
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 212
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    if-eqz v0, :cond_0

    .line 213
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->cancel()V

    .line 215
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHttpResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    if-eqz v0, :cond_1

    .line 216
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHttpResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->cancel()V

    .line 218
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHttpResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    if-nez v0, :cond_2

    .line 219
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V

    .line 220
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 221
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    .line 224
    :cond_2
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->cancelAllChunkRunnable()V

    return-void
.end method

.method public checkSpaceOverflow(J)V
    .locals 23
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    move-object/from16 v1, p0

    move-wide/from16 v2, p1

    const-string v0, "MB"

    const-string v4, ", mustSetLength = "

    .line 1241
    iget-object v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempPath()Ljava/lang/String;

    move-result-object v5

    .line 1242
    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempName()Ljava/lang/String;

    move-result-object v6

    .line 1244
    invoke-static/range {p1 .. p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isChunkedTask(J)Z

    move-result v7

    if-eqz v7, :cond_0

    return-void

    .line 1248
    :cond_0
    iget-object v7, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const/4 v8, -0x1

    invoke-static {v7, v5, v6, v8}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->createOutputStream(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;I)Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;

    move-result-object v7

    const/4 v8, 0x0

    .line 1250
    :try_start_0
    new-instance v10, Ljava/io/File;

    invoke-direct {v10, v5, v6}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v10}, Ljava/io/File;->length()J

    move-result-wide v10

    sub-long v12, v2, v10

    .line 1252
    invoke-static {v5}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getAvailableSpaceBytes(Ljava/lang/String;)J

    move-result-wide v5

    .line 1256
    iget-object v14, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v14}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v14

    invoke-static {v14}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v14

    const-string v15, "space_fill_part_download"

    .line 1257
    invoke-virtual {v14, v15, v8}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v15
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const-string v8, " 0"

    const-string v16, "="

    const-string v17, "<"

    const-string v9, "availableSpace "

    move-object/from16 v18, v4

    move-wide/from16 v19, v5

    const-wide/16 v4, 0x0

    const/4 v6, 0x1

    if-ne v15, v6, :cond_7

    .line 1259
    :try_start_1
    iput-wide v4, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->curBytesNeedCheckSpaceOverFlow:J

    cmp-long v6, v12, v4

    if-gtz v6, :cond_1

    .line 1261
    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v12

    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v21

    sub-long v12, v12, v21

    :cond_1
    cmp-long v6, v19, v12

    if-gez v6, :cond_a

    .line 1264
    sget-object v6, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "checkSpaceOverflow: contentLength = "

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static/range {p1 .. p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->byteToMb(J)D

    move-result-wide v4

    invoke-virtual {v15, v4, v5}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v4, "MB, downloaded = "

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1265
    invoke-static {v10, v11}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->byteToMb(J)D

    move-result-wide v4

    invoke-virtual {v15, v4, v5}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v4, "MB, required = "

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1266
    invoke-static {v12, v13}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->byteToMb(J)D

    move-result-wide v4

    invoke-virtual {v15, v4, v5}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v4, "MB, available = "

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1267
    invoke-static/range {v19 .. v20}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->byteToMb(J)D

    move-result-wide v4

    invoke-virtual {v15, v4, v5}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 1264
    invoke-static {v6, v4}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    const-wide/16 v4, 0x0

    cmp-long v6, v19, v4

    if-lez v6, :cond_4

    const-string v4, "space_fill_min_keep_mb"

    const/16 v5, 0x64

    .line 1269
    invoke-virtual {v14, v4, v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v4

    if-lez v4, :cond_3

    int-to-long v5, v4

    const-wide/32 v8, 0x100000

    mul-long/2addr v5, v8

    sub-long v5, v19, v5

    .line 1275
    sget-object v8, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "checkSpaceOverflow: minKeep = "

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "MB, canDownload = "

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1276
    invoke-static {v5, v6}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->byteToMb(J)D

    move-result-wide v14

    invoke-virtual {v9, v14, v15}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1275
    invoke-static {v8, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    const-wide/16 v8, 0x0

    cmp-long v0, v5, v8

    if-lez v0, :cond_2

    .line 1280
    iget-object v0, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v8

    add-long/2addr v8, v5

    iput-wide v8, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->curBytesNeedCheckSpaceOverFlow:J

    goto :goto_0

    .line 1278
    :cond_2
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;

    move-wide/from16 v4, v19

    invoke-direct {v0, v4, v5, v12, v13}, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;-><init>(JJ)V

    throw v0

    :cond_3
    move-wide/from16 v4, v19

    move-wide v5, v4

    :goto_0
    cmp-long v0, v10, v2

    if-gez v0, :cond_a

    add-long/2addr v5, v10

    cmp-long v0, v5, v2

    if-lez v0, :cond_b

    goto :goto_3

    :cond_4
    const-string v0, "download_when_space_negative"

    const/4 v4, 0x0

    .line 1293
    invoke-virtual {v14, v0, v4}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v4, 0x1

    if-ne v0, v4, :cond_5

    move-wide v5, v2

    const/4 v4, 0x0

    goto :goto_4

    .line 1296
    :cond_5
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez v6, :cond_6

    move-object/from16 v3, v16

    goto :goto_1

    :cond_6
    move-object/from16 v3, v17

    :goto_1
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x41c

    invoke-direct {v0, v3, v2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0

    :cond_7
    move-wide v14, v4

    move-wide/from16 v4, v19

    cmp-long v0, v4, v14

    if-gtz v0, :cond_9

    .line 1304
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez v0, :cond_8

    move-object/from16 v0, v16

    goto :goto_2

    :cond_8
    move-object/from16 v0, v17

    :goto_2
    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/16 v3, 0x41c

    invoke-direct {v2, v3, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :cond_9
    cmp-long v0, v4, v12

    if-ltz v0, :cond_f

    :cond_a
    :goto_3
    move-wide v5, v2

    :cond_b
    const/4 v4, 0x1

    .line 1315
    :goto_4
    :try_start_2
    invoke-virtual {v7, v2, v3}, Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;->setLength(J)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :goto_5
    const/4 v2, 0x1

    goto :goto_6

    :catchall_0
    move-exception v0

    move-object v8, v0

    .line 1317
    :try_start_3
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "checkSpaceOverflow: setLength1 e = "

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-object/from16 v12, v18

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v0, v9}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    cmp-long v0, v5, v2

    const/16 v2, 0x410

    if-gez v0, :cond_d

    const-wide/16 v13, 0x0

    cmp-long v0, v5, v13

    if-lez v0, :cond_d

    cmp-long v0, v5, v10

    if-lez v0, :cond_d

    .line 1320
    :try_start_4
    invoke-virtual {v7, v5, v6}, Lcom/ss/android/socialbase/downloader/model/RandomAccessOutputStream;->setLength(J)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    goto :goto_5

    :catchall_1
    move-exception v0

    move-object v3, v0

    .line 1322
    :try_start_5
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "checkSpaceOverflow: setLength2 ex = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V

    if-nez v4, :cond_c

    goto :goto_5

    .line 1324
    :cond_c
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-direct {v0, v2, v3}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    throw v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    :cond_d
    if-nez v4, :cond_e

    goto :goto_5

    :goto_6
    new-array v0, v2, [Ljava/io/Closeable;

    const/4 v2, 0x0

    aput-object v7, v0, v2

    .line 1336
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    return-void

    .line 1329
    :cond_e
    :try_start_6
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-direct {v0, v2, v8}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    throw v0

    .line 1309
    :cond_f
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;

    invoke-direct {v0, v4, v5, v12, v13}, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;-><init>(JJ)V

    throw v0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :catchall_2
    move-exception v0

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/io/Closeable;

    const/4 v3, 0x0

    aput-object v7, v2, v3

    .line 1336
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    throw v0
.end method

.method public getDownloadId()I
    .locals 1

    .line 1613
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public getDownloadTask()Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 1

    .line 228
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    return-object v0
.end method

.method public getFuture()Ljava/util/concurrent/Future;
    .locals 1

    .line 2055
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->mFuture:Ljava/util/concurrent/Future;

    return-object v0
.end method

.method public declared-synchronized getUnCompletedSubChunk(I)Lcom/ss/android/socialbase/downloader/model/DownloadChunk;
    .locals 4

    monitor-enter p0

    .line 1943
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v1, 0x2

    const/4 v2, 0x0

    if-ge v0, v1, :cond_0

    .line 1944
    monitor-exit p0

    return-object v2

    .line 1946
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getDownloadChunk(I)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 1947
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_2

    :cond_1
    const/4 v1, 0x0

    .line 1950
    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-ge v1, v3, :cond_4

    .line 1951
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-nez v3, :cond_2

    goto :goto_1

    .line 1954
    :cond_2
    invoke-direct {p0, v3, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->getUnCompletedSubChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;I)Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    move-result-object v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v3, :cond_3

    .line 1956
    monitor-exit p0

    return-object v3

    :cond_3
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1959
    :cond_4
    monitor-exit p0

    return-object v2

    .line 1948
    :cond_5
    :goto_2
    monitor-exit p0

    return-object v2

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public handleFirstConnection(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;J)V
    .locals 19
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    move-wide/from16 v3, p3

    const-string v5, " before="

    const-string v6, " cur="

    const-string v7, "dcache=responseCode="

    if-nez v2, :cond_0

    return-void

    .line 1462
    :cond_0
    :try_start_0
    new-instance v8, Lcom/ss/android/socialbase/downloader/model/HttpResponse;

    move-object/from16 v9, p1

    invoke-direct {v8, v9, v2}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;-><init>(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)V

    .line 1463
    iget v9, v8, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->responseCode:I

    .line 1465
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getContentType()Ljava/lang/String;

    move-result-object v10

    .line 1466
    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMimeType()Ljava/lang/String;

    move-result-object v11

    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-eqz v11, :cond_1

    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_1

    .line 1467
    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v11, v10}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setMimeType(Ljava/lang/String;)V

    .line 1470
    :cond_1
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->acceptPartial()Z

    move-result v10

    iput-boolean v10, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->acceptPartial:Z

    .line 1471
    iget-object v11, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v11, v10}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setSupportPartial(Z)V

    .line 1473
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->isResponseDataFromBegin()Z

    move-result v10

    iput-boolean v10, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isResponseFromBegin:Z

    .line 1475
    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v10}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->geteTag()Ljava/lang/String;

    move-result-object v10

    .line 1476
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getEtag()Ljava/lang/String;

    move-result-object v11

    .line 1478
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getLastModified()Ljava/lang/String;

    move-result-object v12

    .line 1479
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getCacheControl()Ljava/lang/String;

    move-result-object v13

    .line 1480
    sget-object v14, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " last_modified="

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " CACHE_CONTROL="

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " max-age="

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 p1, v10

    move-object v2, v11

    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getMaxAge()J

    move-result-wide v10

    invoke-virtual {v15, v10, v11}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v10, " isDeleteCacheIfCheckFailed="

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v10}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isDeleteCacheIfCheckFailed()Z

    move-result v10

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v14, v10}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1481
    sget-object v10, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "dcache=firstOffset="

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v14, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v14}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getLastModified()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getTotalLength()J

    move-result-wide v14

    invoke-virtual {v11, v14, v15}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v5

    invoke-virtual {v11, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v10, v5}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1483
    invoke-static {v13}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    const-wide/16 v10, 0x0

    if-nez v5, :cond_2

    .line 1485
    iget-object v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v5, v13}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setCacheControl(Ljava/lang/String;)V

    .line 1486
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getMaxAge()J

    move-result-wide v5

    cmp-long v5, v5, v10

    if-lez v5, :cond_2

    .line 1487
    iget-object v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v13

    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getMaxAge()J

    move-result-wide v15

    const-wide/16 v17, 0x3e8

    mul-long v15, v15, v17

    add-long/2addr v13, v15

    invoke-virtual {v5, v13, v14}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setCacheExpiredTime(J)V

    .line 1490
    :cond_2
    iget-object v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isExpiredRedownload()Z

    move-result v5

    if-eqz v5, :cond_7

    iget-boolean v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->needCheckIfModified:Z

    if-eqz v5, :cond_7

    iget-object v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->existTargetFileName:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_7

    const/16 v5, 0x130

    const/4 v13, 0x0

    if-ne v9, v5, :cond_3

    :goto_0
    const/4 v13, 0x1

    goto :goto_1

    .line 1496
    :cond_3
    iget-object v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getLastModified()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_4

    iget-object v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isDeleteCacheIfCheckFailed()Z

    move-result v5

    if-eqz v5, :cond_4

    goto :goto_1

    .line 1499
    :cond_4
    iget-object v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getLastModified()Ljava/lang/String;

    move-result-object v5

    invoke-static {v12, v5}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_5

    goto :goto_0

    :cond_5
    :goto_1
    if-nez v13, :cond_6

    .line 1509
    iget-object v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {v5}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->deleteAllDownloadFiles(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    goto :goto_2

    .line 1505
    :cond_6
    sget-object v2, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " lastModified not changed, use local file  "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1506
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException;

    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->existTargetFileName:Ljava/lang/String;

    invoke-direct {v2, v3}, Lcom/ss/android/socialbase/downloader/exception/DownloadFileExistException;-><init>(Ljava/lang/String;)V

    throw v2
    :try_end_0
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Lcom/ss/android/socialbase/downloader/exception/RetryThrowable; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_7
    :goto_2
    cmp-long v5, v3, v10

    const-string v7, ""

    if-lez v5, :cond_8

    .line 1514
    :try_start_1
    iget-object v13, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v13}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isExpiredRedownload()Z

    move-result v13

    if-eqz v13, :cond_8

    .line 1516
    iget-object v13, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v13}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getLastModified()Ljava/lang/String;

    move-result-object v13

    invoke-static {v12, v13}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v13

    if-nez v13, :cond_8

    .line 1517
    sget-object v13, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    const-string v14, "dcache cdn file change, so retry"

    invoke-static {v13, v14}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string v13, "cdn file changed"

    .line 1518
    invoke-direct {v1, v7, v13}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleResponseCodeError(Ljava/lang/String;Ljava/lang/String;)V

    .line 1522
    :cond_8
    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v13

    if-nez v13, :cond_9

    .line 1524
    iget-object v13, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v13, v12}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setLastModified(Ljava/lang/String;)V

    :cond_9
    move-object/from16 v12, p1

    .line 1527
    invoke-direct {v1, v9, v12, v2}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isResponseCodeError(ILjava/lang/String;Ljava/lang/String;)Z

    move-result v13

    if-eqz v13, :cond_c

    move-object/from16 v13, p2

    .line 1530
    instance-of v14, v13, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v14, :cond_b

    .line 1531
    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_a

    invoke-virtual {v12, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_a

    move-object v2, v7

    :cond_a
    const-string v12, "eTag of server file changed"

    .line 1533
    invoke-direct {v1, v2, v12}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleResponseCodeError(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 1535
    :cond_b
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/DownloadHttpException;

    const/16 v3, 0x3ea

    invoke-direct {v2, v3, v9, v7}, Lcom/ss/android/socialbase/downloader/exception/DownloadHttpException;-><init>(IILjava/lang/String;)V

    throw v2

    :cond_c
    move-object/from16 v13, p2

    .line 1539
    :goto_3
    iget-boolean v12, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->acceptPartial:Z

    const/16 v14, 0x3ec

    if-nez v12, :cond_f

    iget-boolean v12, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isResponseFromBegin:Z

    if-eqz v12, :cond_d

    goto :goto_4

    :cond_d
    const/16 v2, 0x193

    if-ne v9, v2, :cond_e

    .line 1595
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x417

    const-string v4, "response code error : 403"

    invoke-direct {v2, v3, v4}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v2

    .line 1597
    :cond_e
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/DownloadHttpException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "response code error : "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v14, v9, v3}, Lcom/ss/android/socialbase/downloader/exception/DownloadHttpException;-><init>(IILjava/lang/String;)V

    throw v2

    .line 1540
    :cond_f
    :goto_4
    iget-boolean v9, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isResponseFromBegin:Z

    if-eqz v9, :cond_11

    if-lez v5, :cond_11

    .line 1541
    instance-of v5, v13, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v5, :cond_10

    const-string v5, "http head request not support"

    .line 1542
    invoke-direct {v1, v7, v5}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleResponseCodeError(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_5

    .line 1544
    :cond_10
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const-string v3, "isResponseFromBegin but firstOffset > 0"

    invoke-direct {v2, v14, v3}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v2

    :cond_11
    :goto_5
    move-object/from16 p1, v7

    .line 1547
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getContentLength()J

    move-result-wide v6

    .line 1549
    instance-of v9, v13, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-nez v9, :cond_13

    cmp-long v9, v6, v10

    if-gez v9, :cond_13

    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 1551
    invoke-static {v9}, Lcom/ss/android/socialbase/downloader/utils/DownloadSettingsUtils;->isOptimizeHeadRequest(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v9

    if-nez v9, :cond_12

    goto :goto_6

    .line 1552
    :cond_12
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    move-object/from16 v9, p1

    invoke-direct {v2, v14, v9}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v2

    :cond_13
    :goto_6
    move-object/from16 v9, p1

    .line 1555
    iget-object v12, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v12}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-eqz v12, :cond_14

    .line 1556
    iget-object v12, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v12}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v12

    invoke-static {v13, v12}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getFileNameFromConnection(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    goto :goto_7

    :cond_14
    move-object v12, v9

    .line 1558
    :goto_7
    invoke-virtual {v8}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->isChunked()Z

    move-result v8

    iput-boolean v8, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isChunked:Z

    if-nez v8, :cond_16

    cmp-long v8, v6, v10

    if-nez v8, :cond_16

    .line 1560
    instance-of v8, v13, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v8, :cond_15

    goto :goto_8

    .line 1561
    :cond_15
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-direct {v2, v14, v9}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v2

    .line 1564
    :cond_16
    :goto_8
    iget-boolean v8, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isChunked:Z

    if-nez v8, :cond_18

    const-string v8, "Content-Range"

    .line 1565
    invoke-static {v13, v8}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getRespHeadFieldIgnoreCase(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 1566
    sget-object v9, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "firstConnection: contentRange = "

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-static {v9, v13}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1567
    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_17

    iget-object v9, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->setting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const-string v13, "fix_get_total_bytes"

    const/4 v5, 0x1

    invoke-virtual {v9, v13, v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;Z)Z

    move-result v9

    if-eqz v9, :cond_17

    .line 1569
    invoke-static {v8}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseContentRangeOfInstanceLength(Ljava/lang/String;)J

    move-result-wide v3

    .line 1570
    sget-object v6, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "firstConnection: 1 totalLength = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_9

    :cond_17
    add-long/2addr v3, v6

    .line 1574
    sget-object v8, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "firstConnection: 2 totalLength = "

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v13, ", contentLength = "

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v8, v6}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_9

    :cond_18
    const-wide/16 v3, -0x1

    .line 1580
    :goto_9
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkIsStoppedByUser()Z

    move-result v6

    if-eqz v6, :cond_19

    return-void

    .line 1584
    :cond_19
    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExpectFileLength()J

    move-result-wide v6

    cmp-long v6, v6, v10

    if-lez v6, :cond_1b

    iget-object v6, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 1585
    invoke-virtual {v6}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v6

    invoke-static {v6}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v6

    const-string v7, "force_check_file_length"

    invoke-virtual {v6, v7}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v6

    const/4 v5, 0x1

    if-ne v6, v5, :cond_1b

    .line 1586
    iget-object v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExpectFileLength()J

    move-result-wide v5

    cmp-long v5, v5, v3

    if-nez v5, :cond_1a

    goto :goto_a

    .line 1587
    :cond_1a
    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v5, 0x42e

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "expectFileLength = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 1588
    invoke-virtual {v7}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExpectFileLength()J

    move-result-wide v7

    invoke-virtual {v6, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v7, " , totalLength = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v5, v3}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v2

    .line 1592
    :cond_1b
    :goto_a
    iget-object v5, v1, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {v5, v3, v4, v2, v12}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onFirstConnectionSuccessed(JLjava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Lcom/ss/android/socialbase/downloader/exception/BaseException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Lcom/ss/android/socialbase/downloader/exception/RetryThrowable; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_b

    :catchall_0
    move-exception v0

    move-object v2, v0

    const-string v3, "HandleFirstConnection"

    .line 1604
    invoke-static {v2, v3}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V

    :goto_b
    return-void

    :catch_0
    move-exception v0

    move-object v2, v0

    .line 1602
    throw v2

    :catch_1
    move-exception v0

    move-object v2, v0

    .line 1600
    throw v2
.end method

.method public isAlive()Z
    .locals 1

    .line 1609
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isAlive:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    return v0
.end method

.method public onAllChunkRetryWithReset(Lcom/ss/android/socialbase/downloader/exception/BaseException;Z)V
    .locals 2

    .line 1706
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    const-string v1, "onAllChunkRetryWithReset"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1707
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_ALL_CHUNK_RETRY_WITH_RESET:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 1708
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->errorException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 1709
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->cancelAllChunkRunnable()V

    if-eqz p2, :cond_0

    .line 1713
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleRetryTime(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    if-nez p1, :cond_1

    .line 1717
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->clearCurrentDownloadData()V

    :cond_1
    return-void
.end method

.method public onChunkDowngradeRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 2

    .line 1698
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 1699
    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setChunkDowngradeRetryUsed(Z)V

    :cond_0
    const/4 v0, 0x0

    .line 1701
    invoke-virtual {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onAllChunkRetryWithReset(Lcom/ss/android/socialbase/downloader/exception/BaseException;Z)V

    return-void
.end method

.method public onCompleted(Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;)V
    .locals 1

    .line 1648
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isSingleChunk:Z

    if-nez v0, :cond_0

    .line 1649
    monitor-enter p0

    .line 1650
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadChunkRunnableList:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    .line 1651
    monitor-exit p0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_0
    :goto_0
    return-void
.end method

.method public onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 3

    .line 1675
    sget-object v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onError:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1676
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_ERROR:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 1677
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->errorException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 1679
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->cancelAllChunkRunnable()V

    return-void
.end method

.method public onProgress(J)Z
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    .line 1639
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->curBytesNeedCheckSpaceOverFlow:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 1640
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->curBytesNeedCheckSpaceOverFlow:J

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    .line 1641
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkSpaceOverflowInProgress()V

    .line 1643
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onProgress(J)Z

    move-result p1

    return p1
.end method

.method public onRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;J)Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;
    .locals 7

    .line 1805
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->errorException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 1806
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    neg-long p2, p2

    invoke-virtual {v0, p2, p3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->increaseCurBytes(J)V

    .line 1807
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {p2, p3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    .line 1808
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isStoppedStatus()Z

    move-result p2

    if-eqz p2, :cond_0

    .line 1809
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    return-object p1

    :cond_0
    const/4 p2, 0x1

    const/4 p3, 0x0

    if-eqz p1, :cond_3

    .line 1812
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v0

    const/16 v1, 0x417

    if-ne v0, v1, :cond_3

    .line 1813
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->forbiddenHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isForbiddenRetryed()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 1817
    :cond_1
    new-instance v0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable$1;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable$1;-><init>(Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;)V

    .line 1824
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->forbiddenHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

    invoke-interface {v1, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;->onForbidden(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;)Z

    move-result v1

    .line 1825
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setForbiddenRetryed()V

    if-eqz v1, :cond_d

    .line 1827
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/depend/AbsDownloadForbiddenCallback;->hasCallback()Z

    move-result v0

    if-nez v0, :cond_9

    .line 1828
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->cancelAllChunkRunnable()V

    .line 1829
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->handleWaitingAsyncHandler()V

    .line 1830
    sget-object p1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_WAITING_ASYNC_HANDLER:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 1831
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    return-object p1

    .line 1814
    :cond_2
    :goto_0
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleRetryTime(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result v0

    if-eqz v0, :cond_d

    .line 1815
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    return-object p1

    .line 1837
    :cond_3
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isInsufficientSpaceError(Ljava/lang/Throwable;)Z

    move-result v0

    if-eqz v0, :cond_c

    .line 1839
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->diskSpaceHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    if-nez v0, :cond_4

    .line 1840
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    .line 1841
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    return-object p1

    .line 1843
    :cond_4
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0, p3}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    .line 1844
    new-instance v6, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable$2;

    invoke-direct {v6, p0, v0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable$2;-><init>(Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;Ljava/util/concurrent/atomic/AtomicBoolean;)V

    .line 1855
    instance-of v1, p1, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;

    if-eqz v1, :cond_5

    .line 1856
    move-object v1, p1

    check-cast v1, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;->getAvaliableSpaceBytes()J

    move-result-wide v2

    .line 1857
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;->getRequiredSpaceBytes()J

    move-result-wide v4

    goto :goto_1

    :cond_5
    const-wide/16 v1, -0x1

    .line 1860
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v3

    move-wide v4, v3

    move-wide v2, v1

    .line 1862
    :goto_1
    monitor-enter p0

    .line 1863
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->diskSpaceHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    invoke-interface/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;->cleanUpDisk(JJLcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;)Z

    move-result v1

    if-eqz v1, :cond_a

    .line 1865
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v2, "not_delete_when_clean_space"

    invoke-virtual {v1, v2, p3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;Z)Z

    move-result v1

    if-nez v1, :cond_6

    .line 1868
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkCompletedByteValid()Z

    .line 1870
    :cond_6
    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_8

    .line 1871
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object p2, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_WAITING_ASYNC_HANDLER:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-eq p1, p2, :cond_7

    .line 1872
    sget-object p1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_WAITING_ASYNC_HANDLER:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 1873
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->cancelAllChunkRunnable()V

    .line 1874
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->handleWaitingAsyncHandler()V

    .line 1876
    :cond_7
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    monitor-exit p0

    return-object p1

    .line 1886
    :cond_8
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1888
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleRetryTime(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 1889
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    return-object p1

    :cond_9
    move v0, p2

    goto :goto_2

    .line 1880
    :cond_a
    :try_start_1
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object p3, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_WAITING_ASYNC_HANDLER:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne p2, p3, :cond_b

    .line 1881
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    monitor-exit p0

    return-object p1

    .line 1883
    :cond_b
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    .line 1884
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    monitor-exit p0

    return-object p1

    :catchall_0
    move-exception p1

    .line 1886
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1

    .line 1891
    :cond_c
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleRetryTime(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result v0

    if-eqz v0, :cond_d

    .line 1892
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    return-object p1

    :cond_d
    move v0, p3

    :goto_2
    if-nez v0, :cond_e

    .line 1896
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->checkNeedRetryDelay()Z

    move-result v0

    if-eqz v0, :cond_e

    .line 1898
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->cancelAllChunkRunnable()V

    .line 1901
    :cond_e
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_RETRY_DELAY:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne v1, v2, :cond_f

    goto :goto_3

    :cond_f
    move p2, p3

    :goto_3
    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;Z)V

    .line 1902
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object p2, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_RETRY_DELAY:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne p1, p2, :cond_10

    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    goto :goto_4

    :cond_10
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->CONTINUE:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    :goto_4
    return-object p1
.end method

.method public onSingleChunkRetry(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/exception/BaseException;J)Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;
    .locals 2

    .line 1760
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->isStoppedStatus()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1761
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    return-object p1

    :cond_0
    if-eqz p2, :cond_2

    .line 1764
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v0

    const/16 v1, 0x417

    if-eq v0, v1, :cond_1

    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isInsufficientSpaceError(Ljava/lang/Throwable;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1766
    :cond_1
    invoke-virtual {p0, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->onRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;J)Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    move-result-object p1

    return-object p1

    .line 1770
    :cond_2
    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->errorException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 1772
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    neg-long p3, p3

    invoke-virtual {v0, p3, p4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->increaseCurBytes(J)V

    .line 1774
    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    iget-object p4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    .line 1776
    invoke-direct {p0, p2}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->handleRetryTime(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z

    move-result p3

    if-eqz p3, :cond_3

    .line 1778
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    return-object p1

    .line 1781
    :cond_3
    iget-object p3, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    iget-object p4, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_RETRY_DELAY:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-ne p4, v0, :cond_4

    const/4 p4, 0x1

    goto :goto_0

    :cond_4
    const/4 p4, 0x0

    :goto_0
    invoke-virtual {p3, p1, p2, p4}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onSingleChunkRetry(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/exception/BaseException;Z)V

    .line 1783
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    sget-object p2, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_RETRY_DELAY:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    if-eq p1, p2, :cond_5

    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedRetryDelay()Z

    move-result p1

    if-eqz p1, :cond_5

    .line 1784
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->getDelayTime()J

    move-result-wide p1

    const-wide/16 p3, 0x0

    cmp-long p3, p1, p3

    if-lez p3, :cond_5

    .line 1786
    sget-object p3, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onSingleChunkRetry with delay time "

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {p3, p4}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1791
    :try_start_0
    invoke-static {p1, p2}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 1793
    sget-object p2, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->TAG:Ljava/lang/String;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "onSingleChunkRetry:"

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 1797
    :cond_5
    :goto_1
    sget-object p1, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->CONTINUE:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    return-object p1
.end method

.method public pause()V
    .locals 2

    .line 186
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 187
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    if-eqz v0, :cond_0

    .line 188
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;->pause()V

    .line 190
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHttpResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    if-eqz v0, :cond_1

    .line 191
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHttpResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;->pause()V

    .line 193
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->segmentDispatcher:Lcom/ss/android/socialbase/downloader/segment/SegmentDispatcher;

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstHttpResponseHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadResponseHandler;

    if-nez v0, :cond_2

    .line 194
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->closeConnection()V

    .line 195
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runStatus:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 196
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->endDownloadRunnable()V

    .line 199
    :cond_2
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadChunkRunnableList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    .line 200
    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_3
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;

    if-eqz v1, :cond_3

    .line 202
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->pause()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 206
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_4
    return-void
.end method

.method public prepareDownload()V
    .locals 2

    .line 1617
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->prepareDownloadTime:J

    .line 1618
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->statusHandler:Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadStatusHandler;->onPrepare()V

    return-void
.end method

.method public run()V
    .locals 2

    .line 338
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    const/4 v1, 0x3

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->onDownloadTaskStart(Lcom/ss/android/socialbase/downloader/model/DownloadTask;I)V

    .line 341
    :try_start_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->getInstance()Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->startSampling()V

    .line 342
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->runInner()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 344
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->getInstance()Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->stopSampling()V

    .line 347
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->onDownloadTaskFinish(Lcom/ss/android/socialbase/downloader/model/DownloadTask;I)V

    return-void

    :catchall_0
    move-exception v0

    .line 344
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->getInstance()Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->stopSampling()V

    throw v0
.end method

.method public setFuture(Ljava/util/concurrent/Future;)V
    .locals 0

    .line 2059
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->mFuture:Ljava/util/concurrent/Future;

    return-void
.end method

.method public setHttpResponseStatus(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 1967
    :try_start_0
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;->getResponseCode()I

    move-result p1

    .line 1968
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setHttpStatusCode(I)V

    .line 1969
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadHttpUtils;->httpCodeToMessage(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setHttpStatusMessage(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1972
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    :goto_0
    if-nez p1, :cond_1

    .line 1976
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const/4 v0, -0x1

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setHttpStatusCode(I)V

    .line 1977
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->downloadInfo:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const-string v0, ""

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setHttpStatusMessage(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public setThrottleNetSpeed(J)V
    .locals 2

    .line 2063
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadRunnable;->firstGetConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-nez v0, :cond_0

    return-void

    .line 2068
    :cond_0
    instance-of v1, v0, Lcom/ss/android/socialbase/downloader/network/AbsDownloadHttpConnection;

    if-eqz v1, :cond_1

    .line 2070
    :try_start_0
    check-cast v0, Lcom/ss/android/socialbase/downloader/network/AbsDownloadHttpConnection;

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/network/AbsDownloadHttpConnection;->setThrottleNetSpeedWhenRunning(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 2072
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method
