.class public Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/Parcelable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    }
.end annotation


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation
.end field

.field private static final DEFAULT_MAX_PROCESS_POST_COUNT:I = 0x64

.field private static final DEFAULT_MIN_BYTES_INTERVAL:J = 0x100000L

.field private static final RESERVE_STATUS_NEVER:I = 0x0

.field private static final RESERVE_STATUS_NOW:I = 0x2

.field private static final RESERVE_STATUS_ONCE:I = 0x1

.field private static final TAG:Ljava/lang/String; = "DownloadInfo"


# instance fields
.field private addListenerToSameTask:Z

.field private allConnectTime:Ljava/util/concurrent/atomic/AtomicLong;

.field private appVersionCode:I

.field private asyncHandleStatus:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

.field private autoResumed:Z

.field private backUpUrlRetryCount:I

.field private backUpUrlUsed:Z

.field private backUpUrls:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private backUpUrlsStr:Ljava/lang/String;

.field private bindValueCount:I

.field private byteInvalidRetryStatus:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

.field private chunkCount:I

.field private chunkDowngradeRetryUsed:Z

.field private curBackUpUrlIndex:I

.field private curBytes:Ljava/util/concurrent/atomic/AtomicLong;

.field private curRetryTime:I

.field private dbJsonData:Lorg/json/JSONObject;

.field private dbJsonDataString:Ljava/lang/String;

.field private deleteCacheIfCheckFailed:Z

.field private distinctDirectory:Z

.field private downloadTime:J

.field private eTag:Ljava/lang/String;

.field private enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

.field private errorBytesLog:Ljava/lang/StringBuffer;

.field private expiredRedownload:Z

.field private extra:Ljava/lang/String;

.field private extraHeaders:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;"
        }
    .end annotation
.end field

.field private extraMonitorStatus:[I

.field private failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

.field private filePackageName:Ljava/lang/String;

.field private forbiddenBackupUrls:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private force:Z

.field private forceIgnoreRecommendSize:Z

.field private headConnectionAvailable:Z

.field private headConnectionException:Ljava/lang/String;

.field private httpStatusCode:I

.field private httpStatusMessage:Ljava/lang/String;

.field private httpsToHttpRetryUsed:Z

.field private iconUrl:Ljava/lang/String;

.field private id:I

.field private ignoreDataVerify:Z

.field private isAutoInstallWithoutNotification:Ljava/lang/Boolean;

.field private isFirstDownload:Z

.field private isFirstSuccess:Z

.field private isForbiddenRetryed:Z

.field private volatile isSaveTempFile:Z

.field private lastNotifyProgressTime:Ljava/util/concurrent/atomic/AtomicLong;

.field private mDownloadFromReserveWifi:Z

.field private maxBytes:I

.field private maxProgressCount:I

.field private md5:Ljava/lang/String;

.field private mimeType:Ljava/lang/String;

.field private minProgressTimeMsInterval:I

.field private monitorScene:Ljava/lang/String;

.field private name:Ljava/lang/String;

.field private needChunkDowngradeRetry:Z

.field private needDefaultHttpServiceBackUp:Z

.field private needHttpsToHttpRetry:Z

.field private needIndependentProcess:Z

.field private needPostProgress:Z

.field private needRetryDelay:Z

.field private needReuseChunkRunnable:Z

.field private needReuseFirstConnection:Z

.field private needSDKMonitor:Z

.field private networkQuality:Ljava/lang/String;

.field private notificationVisibility:I

.field private onlyWifi:Z

.field private openLimitSpeed:Z

.field private outIp:[Ljava/lang/String;

.field private outSize:[I

.field private packageInfoRef:Ljava/lang/ref/SoftReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/SoftReference<",
            "Landroid/content/pm/PackageInfo;",
            ">;"
        }
    .end annotation
.end field

.field private packageName:Ljava/lang/String;

.field private realDownloadTime:J

.field private realStartDownloadTime:J

.field private retryCount:I

.field private retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

.field private retryDelayTimeArray:Ljava/lang/String;

.field private retryScheduleMinutes:I
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field private savePath:Ljava/lang/String;

.field private showNotification:Z

.field private showNotificationForAutoResumed:Z

.field private showNotificationForNetworkResumed:Z

.field private spData:Lorg/json/JSONObject;

.field private startDownloadTime:J

.field private status:Ljava/util/concurrent/atomic/AtomicInteger;

.field private statusAtDbInit:I

.field private successByCache:Z

.field private supportPartial:Z

.field private taskId:Ljava/lang/String;

.field private tempCacheData:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private volatile tempFileSaveCompleteCallbacks:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/ITempFileSaveCompleteCallback;",
            ">;"
        }
    .end annotation
.end field

.field private tempPath:Ljava/lang/String;

.field private throttleNetSpeed:J

.field private title:Ljava/lang/String;

.field private totalBytes:J

.field private ttnetProtectTimeout:J

.field private url:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 562
    new-instance v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$1;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$1;-><init>()V

    sput-object v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    .line 250
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 105
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needDefaultHttpServiceBackUp:Z

    .line 109
    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_NONE:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    const/4 v1, 0x0

    .line 110
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseFirstConnection:Z

    .line 111
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;->ASYNC_HANDLE_NONE:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->asyncHandleStatus:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    .line 115
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->supportPartial:Z

    .line 124
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needSDKMonitor:Z

    .line 136
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->expiredRedownload:Z

    .line 143
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->deleteCacheIfCheckFailed:Z

    .line 145
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->successByCache:Z

    .line 159
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    .line 163
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstDownload:Z

    .line 164
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstSuccess:Z

    .line 177
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->byteInvalidRetryStatus:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    .line 178
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_NONE:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    .line 182
    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    const-wide/16 v1, 0x0

    invoke-direct {v0, v1, v2}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->lastNotifyProgressTime:Ljava/util/concurrent/atomic/AtomicLong;

    const/4 v0, 0x0

    .line 1645
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isAutoInstallWithoutNotification:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Landroid/database/Cursor;)V
    .locals 8

    .line 603
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 105
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needDefaultHttpServiceBackUp:Z

    .line 109
    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_NONE:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    const/4 v1, 0x0

    .line 110
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseFirstConnection:Z

    .line 111
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;->ASYNC_HANDLE_NONE:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->asyncHandleStatus:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    .line 115
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->supportPartial:Z

    .line 124
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needSDKMonitor:Z

    .line 136
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->expiredRedownload:Z

    .line 143
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->deleteCacheIfCheckFailed:Z

    .line 145
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->successByCache:Z

    .line 159
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    .line 163
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstDownload:Z

    .line 164
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstSuccess:Z

    .line 177
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->byteInvalidRetryStatus:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    .line 178
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_NONE:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    .line 182
    new-instance v2, Ljava/util/concurrent/atomic/AtomicLong;

    const-wide/16 v3, 0x0

    invoke-direct {v2, v3, v4}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->lastNotifyProgressTime:Ljava/util/concurrent/atomic/AtomicLong;

    const/4 v2, 0x0

    .line 1645
    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isAutoInstallWithoutNotification:Ljava/lang/Boolean;

    if-nez p1, :cond_0

    return-void

    :cond_0
    :try_start_0
    const-string v2, "_id"

    .line 608
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    const/4 v5, -0x1

    if-eq v2, v5, :cond_1

    .line 610
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    iput v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->id:I

    :cond_1
    const-string v2, "name"

    .line 612
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_2

    .line 614
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    :cond_2
    const-string v2, "title"

    .line 616
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_3

    .line 618
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->title:Ljava/lang/String;

    :cond_3
    const-string v2, "url"

    .line 620
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_4

    .line 622
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    :cond_4
    const-string v2, "savePath"

    .line 624
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_5

    .line 626
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    :cond_5
    const-string v2, "tempPath"

    .line 628
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_6

    .line 630
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempPath:Ljava/lang/String;

    :cond_6
    const-string v2, "chunkCount"

    .line 632
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_7

    .line 634
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    iput v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    :cond_7
    const-string v2, "status"

    .line 636
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_8

    .line 638
    new-instance v6, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    invoke-direct {v6, v2}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v6, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->status:Ljava/util/concurrent/atomic/AtomicInteger;

    goto :goto_0

    .line 640
    :cond_8
    new-instance v2, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v2, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->status:Ljava/util/concurrent/atomic/AtomicInteger;

    :goto_0
    const-string v2, "curBytes"

    .line 642
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_9

    .line 644
    new-instance v3, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-interface {p1, v2}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v6

    invoke-direct {v3, v6, v7}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBytes:Ljava/util/concurrent/atomic/AtomicLong;

    goto :goto_1

    .line 646
    :cond_9
    new-instance v2, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-direct {v2, v3, v4}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBytes:Ljava/util/concurrent/atomic/AtomicLong;

    :goto_1
    const-string v2, "totalBytes"

    .line 648
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_a

    .line 650
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v2

    iput-wide v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    :cond_a
    const-string v2, "eTag"

    .line 652
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_b

    .line 654
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->eTag:Ljava/lang/String;

    :cond_b
    const-string v2, "onlyWifi"

    .line 656
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_d

    .line 658
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    if-eqz v2, :cond_c

    move v2, v0

    goto :goto_2

    :cond_c
    move v2, v1

    :goto_2
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->onlyWifi:Z

    :cond_d
    const-string v2, "force"

    .line 660
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_f

    .line 662
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    if-eqz v2, :cond_e

    move v2, v0

    goto :goto_3

    :cond_e
    move v2, v1

    :goto_3
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->force:Z

    :cond_f
    const-string v2, "retryCount"

    .line 664
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_10

    .line 666
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    iput v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryCount:I

    :cond_10
    const-string v2, "extra"

    .line 668
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_11

    .line 670
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extra:Ljava/lang/String;

    :cond_11
    const-string v2, "mimeType"

    .line 672
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_12

    .line 674
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->mimeType:Ljava/lang/String;

    :cond_12
    const-string v2, "notificationEnable"

    .line 676
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_14

    .line 678
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    if-eqz v2, :cond_13

    move v2, v0

    goto :goto_4

    :cond_13
    move v2, v1

    :goto_4
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotification:Z

    :cond_14
    const-string v2, "notificationVisibility"

    .line 680
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_15

    .line 682
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    iput v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->notificationVisibility:I

    :cond_15
    const-string v2, "isFirstDownload"

    .line 684
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_17

    .line 686
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    if-ne v2, v0, :cond_16

    move v2, v0

    goto :goto_5

    :cond_16
    move v2, v1

    :goto_5
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstDownload:Z

    :cond_17
    const-string v2, "isFirstSuccess"

    .line 688
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_19

    .line 690
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    if-ne v2, v0, :cond_18

    move v2, v0

    goto :goto_6

    :cond_18
    move v2, v1

    :goto_6
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstSuccess:Z

    :cond_19
    const-string v2, "needHttpsToHttpRetry"

    .line 692
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_1b

    .line 694
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    if-ne v2, v0, :cond_1a

    move v2, v0

    goto :goto_7

    :cond_1a
    move v2, v1

    :goto_7
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needHttpsToHttpRetry:Z

    :cond_1b
    const-string v2, "downloadTime"

    .line 696
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_1c

    .line 698
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v2

    iput-wide v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    :cond_1c
    const-string v2, "packageName"

    .line 700
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_1d

    .line 702
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->packageName:Ljava/lang/String;

    :cond_1d
    const-string v2, "md5"

    .line 704
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_1e

    .line 706
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->md5:Ljava/lang/String;

    :cond_1e
    const-string v2, "retryDelay"

    .line 708
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_20

    .line 710
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    if-ne v2, v0, :cond_1f

    move v2, v0

    goto :goto_8

    :cond_1f
    move v2, v1

    :goto_8
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needRetryDelay:Z

    :cond_20
    const-string v2, "curRetryTime"

    .line 712
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_21

    .line 714
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    iput v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curRetryTime:I

    :cond_21
    const-string v2, "retryDelayStatus"

    .line 716
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_25

    .line 718
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    .line 719
    sget-object v3, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_WAITING:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->ordinal()I

    move-result v3

    if-ne v2, v3, :cond_22

    .line 720
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_WAITING:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    goto :goto_9

    .line 721
    :cond_22
    sget-object v3, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_DOWNLOADING:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->ordinal()I

    move-result v3

    if-ne v2, v3, :cond_23

    .line 722
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_DOWNLOADING:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    goto :goto_9

    .line 723
    :cond_23
    sget-object v3, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_DOWNLOADED:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->ordinal()I

    move-result v3

    if-ne v2, v3, :cond_24

    .line 724
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_DOWNLOADED:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    goto :goto_9

    .line 726
    :cond_24
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_NONE:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    :cond_25
    :goto_9
    const-string v2, "defaultHttpServiceBackUp"

    .line 729
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_27

    .line 731
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    if-ne v2, v0, :cond_26

    move v2, v0

    goto :goto_a

    :cond_26
    move v2, v1

    :goto_a
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needDefaultHttpServiceBackUp:Z

    :cond_27
    const-string v2, "chunkRunnableReuse"

    .line 733
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_29

    .line 735
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    if-ne v2, v0, :cond_28

    move v2, v0

    goto :goto_b

    :cond_28
    move v2, v1

    :goto_b
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseChunkRunnable:Z

    :cond_29
    const-string v2, "retryDelayTimeArray"

    .line 737
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_2a

    .line 739
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayTimeArray:Ljava/lang/String;

    :cond_2a
    const-string v2, "chunkDowngradeRetry"

    .line 742
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_2c

    .line 744
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    if-ne v2, v0, :cond_2b

    move v2, v0

    goto :goto_c

    :cond_2b
    move v2, v1

    :goto_c
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needChunkDowngradeRetry:Z

    :cond_2c
    const-string v2, "backUpUrlsStr"

    .line 747
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_2d

    .line 749
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setBackUpUrlsStr(Ljava/lang/String;)V

    :cond_2d
    const-string v2, "backUpUrlRetryCount"

    .line 752
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_2e

    .line 754
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    iput v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlRetryCount:I

    :cond_2e
    const-string v2, "realDownloadTime"

    .line 757
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_2f

    .line 759
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v2

    iput-wide v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    :cond_2f
    const-string v2, "retryScheduleMinutes"

    .line 762
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_30

    .line 764
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    iput v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryScheduleMinutes:I

    :cond_30
    const-string v2, "independentProcess"

    .line 767
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v5, :cond_32

    .line 769
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    if-ne v2, v0, :cond_31

    goto :goto_d

    :cond_31
    move v0, v1

    :goto_d
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needIndependentProcess:Z

    :cond_32
    const-string v0, "auxiliaryJsonobjectString"

    .line 772
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    if-eq v0, v5, :cond_33

    .line 774
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonDataString:Ljava/lang/String;

    :cond_33
    const-string v0, "iconUrl"

    .line 777
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    if-eq v0, v5, :cond_34

    .line 779
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->iconUrl:Ljava/lang/String;

    :cond_34
    const-string v0, "appVersionCode"

    .line 782
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    if-eq v0, v5, :cond_35

    .line 784
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->appVersionCode:I

    :cond_35
    const-string v0, "taskId"

    .line 787
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    if-eq v0, v5, :cond_36

    .line 789
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->taskId:Ljava/lang/String;

    .line 792
    :cond_36
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->parseMonitorSetting()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_e

    :catch_0
    move-exception p1

    .line 795
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_e
    return-void
.end method

.method protected constructor <init>(Landroid/os/Parcel;)V
    .locals 3

    .line 538
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 105
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needDefaultHttpServiceBackUp:Z

    .line 109
    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_NONE:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    const/4 v1, 0x0

    .line 110
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseFirstConnection:Z

    .line 111
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;->ASYNC_HANDLE_NONE:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->asyncHandleStatus:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    .line 115
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->supportPartial:Z

    .line 124
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needSDKMonitor:Z

    .line 136
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->expiredRedownload:Z

    .line 143
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->deleteCacheIfCheckFailed:Z

    .line 145
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->successByCache:Z

    .line 159
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    .line 163
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstDownload:Z

    .line 164
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstSuccess:Z

    .line 177
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->byteInvalidRetryStatus:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    .line 178
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_NONE:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    .line 182
    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    const-wide/16 v1, 0x0

    invoke-direct {v0, v1, v2}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->lastNotifyProgressTime:Ljava/util/concurrent/atomic/AtomicLong;

    const/4 v0, 0x0

    .line 1645
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isAutoInstallWithoutNotification:Ljava/lang/Boolean;

    .line 539
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->readFromParcel(Landroid/os/Parcel;)V

    return-void
.end method

.method private constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)V
    .locals 6

    .line 253
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 105
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needDefaultHttpServiceBackUp:Z

    .line 109
    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_NONE:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    const/4 v1, 0x0

    .line 110
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseFirstConnection:Z

    .line 111
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;->ASYNC_HANDLE_NONE:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->asyncHandleStatus:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    .line 115
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->supportPartial:Z

    .line 124
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needSDKMonitor:Z

    .line 136
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->expiredRedownload:Z

    .line 143
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->deleteCacheIfCheckFailed:Z

    .line 145
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->successByCache:Z

    .line 159
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    .line 163
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstDownload:Z

    .line 164
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstSuccess:Z

    .line 177
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->byteInvalidRetryStatus:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    .line 178
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_NONE:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    .line 182
    new-instance v2, Ljava/util/concurrent/atomic/AtomicLong;

    const-wide/16 v3, 0x0

    invoke-direct {v2, v3, v4}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->lastNotifyProgressTime:Ljava/util/concurrent/atomic/AtomicLong;

    const/4 v2, 0x0

    .line 1645
    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isAutoInstallWithoutNotification:Ljava/lang/Boolean;

    if-nez p1, :cond_0

    return-void

    .line 256
    :cond_0
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$000(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    .line 257
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$100(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->title:Ljava/lang/String;

    .line 258
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$200(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    .line 259
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$300(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;

    move-result-object v2

    .line 260
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 262
    :try_start_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getDownloadPath()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v5

    .line 264
    invoke-virtual {v5}, Ljava/lang/Throwable;->printStackTrace()V

    .line 267
    :cond_1
    :goto_0
    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    .line 268
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$400(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempPath:Ljava/lang/String;

    .line 269
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isSavePathSecurity(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 270
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getDownloadTempPath()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempPath:Ljava/lang/String;

    .line 272
    :cond_2
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$500(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 273
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move-result-object v2

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v5

    invoke-interface {v2, v5}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v2

    if-nez v2, :cond_4

    .line 274
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    iget-object v5, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    invoke-static {v2, v5}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->generateDistinctDirectory(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    .line 275
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempPath:Ljava/lang/String;

    iget-object v5, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    invoke-static {v2, v5}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->generateDistinctDirectory(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempPath:Ljava/lang/String;

    goto :goto_1

    :cond_3
    const-string v2, "DownloadInfo"

    const-string v5, "The distinct directory option is not set, which may cause 1005 problems and file downloads being covered"

    .line 278
    invoke-static {v2, v5}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 281
    :cond_4
    :goto_1
    new-instance v2, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v2, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->status:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 282
    new-instance v1, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-direct {v1, v3, v4}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBytes:Ljava/util/concurrent/atomic/AtomicLong;

    .line 283
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$600(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extra:Ljava/lang/String;

    .line 284
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$700(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->onlyWifi:Z

    .line 285
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$800(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/util/List;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extraHeaders:Ljava/util/List;

    .line 286
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$900(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)I

    move-result v1

    iput v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->maxBytes:I

    .line 287
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$1000(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)I

    move-result v1

    iput v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryCount:I

    .line 288
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$1100(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)I

    move-result v1

    iput v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlRetryCount:I

    .line 289
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$1200(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->force:Z

    .line 290
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$1300(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)[Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->outIp:[Ljava/lang/String;

    .line 291
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$1400(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)[I

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->outSize:[I

    .line 292
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$1500(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needPostProgress:Z

    .line 293
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$1600(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)I

    move-result v1

    iput v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->maxProgressCount:I

    .line 294
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$1700(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)I

    move-result v1

    iput v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->minProgressTimeMsInterval:I

    .line 295
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$1800(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/util/List;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    .line 296
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$1900(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotification:Z

    .line 297
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$2000(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->mimeType:Ljava/lang/String;

    .line 298
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$2100(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needHttpsToHttpRetry:Z

    .line 299
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$2200(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needRetryDelay:Z

    .line 300
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$2300(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayTimeArray:Ljava/lang/String;

    .line 301
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$2400(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->autoResumed:Z

    .line 302
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$2500(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotificationForAutoResumed:Z

    .line 303
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$2600(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needDefaultHttpServiceBackUp:Z

    .line 304
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$2700(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseChunkRunnable:Z

    .line 305
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$2800(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->packageName:Ljava/lang/String;

    .line 306
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$2900(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->md5:Ljava/lang/String;

    .line 307
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$3000(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseFirstConnection:Z

    .line 308
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$3100(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needIndependentProcess:Z

    .line 309
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$3200(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    .line 310
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$3300(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->headConnectionAvailable:Z

    .line 311
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$3400(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ignoreDataVerify:Z

    .line 312
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$3500(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->addListenerToSameTask:Z

    .line 313
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$3600(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needChunkDowngradeRetry:Z

    .line 314
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$3700(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->iconUrl:Ljava/lang/String;

    .line 315
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$3800(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->throttleNetSpeed:J

    .line 316
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$3900(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->openLimitSpeed:Z

    .line 317
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$4000(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_5

    .line 319
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "download_setting"

    invoke-virtual {p0, v2, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    .line 321
    :cond_5
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$4100(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "dbjson_key_expect_file_length"

    invoke-virtual {p0, v2, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    .line 322
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$4200(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "executor_group"

    invoke-virtual {p0, v2, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    .line 323
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$4300(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "auto_install"

    invoke-virtual {p0, v2, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    .line 324
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$4400(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needSDKMonitor:Z

    .line 325
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$4500(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->monitorScene:Ljava/lang/String;

    .line 326
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$4600(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)[I

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extraMonitorStatus:[I

    .line 327
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$4700(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->expiredRedownload:Z

    .line 328
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$4800(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->deleteCacheIfCheckFailed:Z

    .line 329
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$4900(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ttnetProtectTimeout:J

    .line 330
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->access$500(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->distinctDirectory:Z

    .line 332
    iget-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->expiredRedownload:Z

    if-eqz p1, :cond_6

    iget p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryCount:I

    if-gtz p1, :cond_6

    .line 333
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryCount:I

    .line 335
    :cond_6
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->putMonitorSetting()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;Lcom/ss/android/socialbase/downloader/model/DownloadInfo$1;)V
    .locals 0

    .line 53
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)V

    return-void
.end method

.method private convertEnqueueType(I)V
    .locals 1

    .line 543
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_HEAD:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ordinal()I

    move-result v0

    if-ne p1, v0, :cond_0

    .line 544
    sget-object p1, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_HEAD:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    goto :goto_0

    .line 545
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_TAIL:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ordinal()I

    move-result v0

    if-ne p1, v0, :cond_1

    .line 546
    sget-object p1, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_TAIL:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    goto :goto_0

    .line 548
    :cond_1
    sget-object p1, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_NONE:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    :goto_0
    return-void
.end method

.method private convertRetryDelayStatus(I)V
    .locals 1

    .line 552
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_WAITING:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->ordinal()I

    move-result v0

    if-ne p1, v0, :cond_0

    .line 553
    sget-object p1, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_WAITING:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    goto :goto_0

    .line 554
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_DOWNLOADING:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->ordinal()I

    move-result v0

    if-ne p1, v0, :cond_1

    .line 555
    sget-object p1, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_DOWNLOADING:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    goto :goto_0

    .line 556
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_DOWNLOADED:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->ordinal()I

    move-result v0

    if-ne p1, v0, :cond_2

    .line 557
    sget-object p1, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_DOWNLOADED:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    goto :goto_0

    .line 559
    :cond_2
    sget-object p1, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_NONE:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    :goto_0
    return-void
.end method

.method private convertStrToJson(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 1

    .line 459
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 460
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception p1

    .line 463
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private ensureDBJsonData()V
    .locals 2

    .line 1829
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    if-nez v0, :cond_2

    .line 1830
    monitor-enter p0

    .line 1831
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v0, :cond_1

    .line 1833
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonDataString:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1834
    new-instance v0, Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonDataString:Ljava/lang/String;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const/4 v0, 0x0

    .line 1837
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonDataString:Ljava/lang/String;

    goto :goto_0

    .line 1839
    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 1842
    :catchall_0
    :try_start_2
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    .line 1845
    :cond_1
    :goto_0
    monitor-exit p0

    goto :goto_1

    :catchall_1
    move-exception v0

    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw v0

    :cond_2
    :goto_1
    return-void
.end method

.method private ensureSpData()V
    .locals 3

    .line 2300
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    if-nez v0, :cond_1

    .line 2301
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    const-string v2, "sp_download_info"

    .line 2303
    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 2304
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    int-to-long v1, v1

    invoke-static {v1, v2}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v1

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2305
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 2307
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2309
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 2313
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    if-nez v0, :cond_1

    .line 2314
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    :cond_1
    return-void
.end method

.method private ensureTempCacheData()V
    .locals 1

    .line 2484
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempCacheData:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v0, :cond_1

    .line 2485
    monitor-enter p0

    .line 2486
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempCacheData:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v0, :cond_0

    .line 2487
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempCacheData:Ljava/util/concurrent/ConcurrentHashMap;

    .line 2489
    :cond_0
    monitor-exit p0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0

    :cond_1
    :goto_0
    return-void
.end method

.method private getBackUpUrlsStr()Ljava/lang/String;
    .locals 4

    .line 469
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlsStr:Ljava/lang/String;

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    .line 471
    :try_start_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 472
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 473
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 474
    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    .line 477
    :cond_1
    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlsStr:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 479
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 482
    :cond_2
    :goto_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlsStr:Ljava/lang/String;

    if-nez v0, :cond_3

    const-string v0, ""

    .line 483
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlsStr:Ljava/lang/String;

    .line 485
    :cond_3
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlsStr:Ljava/lang/String;

    return-object v0
.end method

.method private getDBJsonDataString()Ljava/lang/String;
    .locals 2

    .line 848
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonDataString:Ljava/lang/String;

    if-eqz v0, :cond_0

    return-object v0

    .line 851
    :cond_0
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 852
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    monitor-enter v0

    .line 853
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonDataString:Ljava/lang/String;

    .line 854
    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 855
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private getReserveWifiStatus()I
    .locals 3

    .line 1276
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    const/4 v0, 0x0

    .line 1278
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v2, "pause_reserve_on_wifi"

    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return v0
.end method

.method private mergeAuxiliaryJSONObject(Lorg/json/JSONObject;)V
    .locals 5

    if-nez p1, :cond_0

    return-void

    .line 1861
    :cond_0
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 1862
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    monitor-enter v0

    .line 1864
    :try_start_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 1865
    :cond_1
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 1866
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 1867
    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    .line 1868
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_1

    if-nez v3, :cond_2

    goto :goto_0

    .line 1871
    :cond_2
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    invoke-virtual {v4, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    :cond_3
    const/4 p1, 0x0

    .line 1876
    :try_start_1
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonDataString:Ljava/lang/String;

    .line 1877
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1879
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->parseMonitorSetting()V

    return-void

    .line 1877
    :goto_1
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p1
.end method

.method private parseMonitorSetting()V
    .locals 4

    .line 364
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 365
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const/4 v1, 0x0

    const-string v2, "need_sdk_monitor"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needSDKMonitor:Z

    .line 366
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v2, "monitor_scene"

    const-string v3, ""

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->monitorScene:Ljava/lang/String;

    .line 367
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v2, "extra_monitor_status"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 368
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-lez v2, :cond_0

    .line 369
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    new-array v2, v2, [I

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extraMonitorStatus:[I

    .line 370
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 371
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extraMonitorStatus:[I

    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->optInt(I)I

    move-result v3

    aput v3, v2, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private putMonitorSetting()V
    .locals 3

    .line 343
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needSDKMonitor:Z

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    const-string v1, "need_sdk_monitor"

    invoke-virtual {p0, v1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    .line 345
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->monitorScene:Ljava/lang/String;

    const-string v1, "monitor_scene"

    invoke-virtual {p0, v1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    .line 348
    :try_start_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 349
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extraMonitorStatus:[I

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extraMonitorStatus:[I

    array-length v1, v1

    if-lez v1, :cond_0

    const/4 v1, 0x0

    .line 350
    :goto_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extraMonitorStatus:[I

    array-length v2, v2

    if-ge v1, v2, :cond_0

    .line 351
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extraMonitorStatus:[I

    aget v2, v2, v1

    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->put(I)Lorg/json/JSONArray;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    const-string v1, "extra_monitor_status"

    .line 355
    invoke-virtual {p0, v1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 357
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    return-void
.end method

.method private refreshBackupUrls(Z)V
    .locals 2

    .line 1153
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forbiddenBackupUrls:Ljava/util/List;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-le v0, p1, :cond_1

    .line 1154
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    if-nez v0, :cond_0

    .line 1155
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    goto :goto_0

    .line 1157
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->clear()V

    :goto_0
    const/4 v0, 0x0

    .line 1159
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    .line 1160
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    .line 1161
    :goto_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forbiddenBackupUrls:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-ge p1, v0, :cond_1

    .line 1162
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forbiddenBackupUrls:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 p1, p1, 0x1

    goto :goto_1

    :cond_1
    return-void
.end method

.method private setBackUpUrlsStr(Ljava/lang/String;)V
    .locals 4

    .line 491
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v1, -0x3

    if-ne v0, v1, :cond_0

    goto :goto_1

    .line 494
    :cond_0
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlsStr:Ljava/lang/String;

    .line 496
    :try_start_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 497
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result p1

    if-lez p1, :cond_3

    .line 498
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    .line 499
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 500
    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    .line 501
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 502
    invoke-interface {p1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 505
    :cond_2
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 508
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_1
    return-void
.end method


# virtual methods
.method public addErrorBytesLog(JILjava/lang/String;)V
    .locals 2

    .line 584
    :try_start_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 585
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->errorBytesLog:Ljava/lang/StringBuffer;

    if-nez v0, :cond_0

    .line 586
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->errorBytesLog:Ljava/lang/StringBuffer;

    .line 587
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->errorBytesLog:Ljava/lang/StringBuffer;

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->length()I

    move-result v0

    if-eqz v0, :cond_1

    .line 588
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->errorBytesLog:Ljava/lang/StringBuffer;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 590
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->errorBytesLog:Ljava/lang/StringBuffer;

    const-string v1, "[type:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuffer;->append(I)Ljava/lang/StringBuffer;

    const-string p3, ",bytes:"

    invoke-virtual {v0, p3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    const-string p1, ",method:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string p1, "]"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 593
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method

.method public bindValue(Landroid/database/sqlite/SQLiteStatement;)V
    .locals 9

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 862
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    .line 863
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteStatement;->clearBindings()V

    .line 864
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->id:I

    int-to-long v1, v1

    invoke-virtual {p1, v0, v1, v2}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 865
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    const-string v2, ""

    if-nez v1, :cond_1

    move-object v1, v2

    :cond_1
    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 866
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    if-nez v1, :cond_2

    move-object v1, v2

    :cond_2
    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 867
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempPath:Ljava/lang/String;

    if-nez v1, :cond_3

    move-object v1, v2

    :cond_3
    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 868
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    if-nez v1, :cond_4

    move-object v1, v2

    :cond_4
    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 869
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    int-to-long v3, v1

    invoke-virtual {p1, v0, v3, v4}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 870
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v1

    int-to-long v3, v1

    invoke-virtual {p1, v0, v3, v4}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 871
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v3

    invoke-virtual {p1, v0, v3, v4}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 872
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-wide v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    invoke-virtual {p1, v0, v3, v4}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 873
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->eTag:Ljava/lang/String;

    if-nez v1, :cond_5

    move-object v1, v2

    :cond_5
    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 874
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->onlyWifi:Z

    const-wide/16 v3, 0x1

    const-wide/16 v5, 0x0

    if-eqz v1, :cond_6

    move-wide v7, v3

    goto :goto_0

    :cond_6
    move-wide v7, v5

    :goto_0
    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 875
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->force:Z

    if-eqz v1, :cond_7

    move-wide v7, v3

    goto :goto_1

    :cond_7
    move-wide v7, v5

    :goto_1
    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 876
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryCount:I

    int-to-long v7, v1

    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 877
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extra:Ljava/lang/String;

    if-nez v1, :cond_8

    move-object v1, v2

    :cond_8
    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 878
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->mimeType:Ljava/lang/String;

    if-nez v1, :cond_9

    move-object v1, v2

    :cond_9
    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 879
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->title:Ljava/lang/String;

    if-nez v1, :cond_a

    move-object v1, v2

    :cond_a
    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 880
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotification:Z

    if-eqz v1, :cond_b

    move-wide v7, v3

    goto :goto_2

    :cond_b
    move-wide v7, v5

    :goto_2
    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 881
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->notificationVisibility:I

    int-to-long v7, v1

    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 882
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstDownload:Z

    if-eqz v1, :cond_c

    move-wide v7, v3

    goto :goto_3

    :cond_c
    move-wide v7, v5

    :goto_3
    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 883
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstSuccess:Z

    if-eqz v1, :cond_d

    move-wide v7, v3

    goto :goto_4

    :cond_d
    move-wide v7, v5

    :goto_4
    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 884
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needHttpsToHttpRetry:Z

    if-eqz v1, :cond_e

    move-wide v7, v3

    goto :goto_5

    :cond_e
    move-wide v7, v5

    :goto_5
    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 885
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-wide v7, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 886
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->packageName:Ljava/lang/String;

    if-nez v1, :cond_f

    move-object v1, v2

    :cond_f
    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 887
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->md5:Ljava/lang/String;

    if-nez v1, :cond_10

    move-object v1, v2

    :cond_10
    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 888
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needRetryDelay:Z

    if-eqz v1, :cond_11

    move-wide v7, v3

    goto :goto_6

    :cond_11
    move-wide v7, v5

    :goto_6
    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 889
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curRetryTime:I

    int-to-long v7, v1

    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 890
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->ordinal()I

    move-result v1

    int-to-long v7, v1

    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 891
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needDefaultHttpServiceBackUp:Z

    if-eqz v1, :cond_12

    move-wide v7, v3

    goto :goto_7

    :cond_12
    move-wide v7, v5

    :goto_7
    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 892
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseChunkRunnable:Z

    if-eqz v1, :cond_13

    move-wide v7, v3

    goto :goto_8

    :cond_13
    move-wide v7, v5

    :goto_8
    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 893
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayTimeArray:Ljava/lang/String;

    if-nez v1, :cond_14

    move-object v1, v2

    :cond_14
    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 894
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needChunkDowngradeRetry:Z

    if-eqz v1, :cond_15

    move-wide v7, v3

    goto :goto_9

    :cond_15
    move-wide v7, v5

    :goto_9
    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 895
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getBackUpUrlsStr()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 896
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlRetryCount:I

    int-to-long v7, v1

    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 897
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-wide v7, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 898
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryScheduleMinutes:I

    int-to-long v7, v1

    invoke-virtual {p1, v0, v7, v8}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 899
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needIndependentProcess:Z

    if-eqz v1, :cond_16

    goto :goto_a

    :cond_16
    move-wide v3, v5

    :goto_a
    invoke-virtual {p1, v0, v3, v4}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 900
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDBJsonDataString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 901
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->iconUrl:Ljava/lang/String;

    if-nez v1, :cond_17

    move-object v1, v2

    :cond_17
    invoke-virtual {p1, v0, v1}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 902
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->appVersionCode:I

    int-to-long v3, v1

    invoke-virtual {p1, v0, v3, v4}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 903
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->taskId:Ljava/lang/String;

    if-nez v1, :cond_18

    goto :goto_b

    :cond_18
    move-object v2, v1

    :goto_b
    invoke-virtual {p1, v0, v2}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    return-void
.end method

.method public cacheExpierd()Z
    .locals 1

    .line 2587
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isDownloaded()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    .line 2591
    :cond_0
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->cacheExpired(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v0

    return v0
.end method

.method public canNotifyProgress()Z
    .locals 4

    .line 522
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->lastNotifyProgressTime:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-eqz v2, :cond_1

    .line 523
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v2

    sub-long/2addr v2, v0

    const-wide/16 v0, 0x14

    cmp-long v0, v2, v0

    if-lez v0, :cond_0

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

.method public canReStartAsyncTask()Z
    .locals 2

    .line 1768
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v1, -0x3

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->asyncHandleStatus:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;->ASYNC_HANDLE_WAITING:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public canReplaceHttpForRetry()Z
    .locals 2

    .line 1998
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    const-string v1, "https"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needHttpsToHttpRetry:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpsToHttpRetryUsed:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public canShowNotification()Z
    .locals 1

    .line 1633
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->autoResumed:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotification:Z

    if-nez v0, :cond_1

    :cond_0
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->autoResumed:Z

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotificationForAutoResumed:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotificationForNetworkResumed:Z

    if-eqz v0, :cond_2

    :cond_1
    const/4 v0, 0x1

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public canSkipStatusHandler()Z
    .locals 3

    .line 1741
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v1, 0x7

    if-eq v0, v1, :cond_1

    .line 1742
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_WAITING:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    if-eq v1, v2, :cond_1

    const/16 v1, 0x8

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->asyncHandleStatus:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;->ASYNC_HANDLE_WAITING:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->asyncHandleStatus:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;->ASYNC_HANDLE_RESTART:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->byteInvalidRetryStatus:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_RESTART:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

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

.method public canStartRetryDelayTask()Z
    .locals 2

    .line 1760
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedRetryDelay()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v1, -0x3

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_WAITING:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public changeSkipStatus()V
    .locals 3

    .line 1749
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v1, 0x7

    if-eq v0, v1, :cond_0

    .line 1750
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_WAITING:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    if-ne v1, v2, :cond_1

    .line 1751
    :cond_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->DELAY_RETRY_DOWNLOADING:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setRetryDelayStatus(Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;)V

    :cond_1
    const/16 v1, 0x8

    if-eq v0, v1, :cond_2

    .line 1752
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->asyncHandleStatus:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;->ASYNC_HANDLE_WAITING:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    if-eq v0, v1, :cond_2

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->asyncHandleStatus:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;->ASYNC_HANDLE_RESTART:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    if-ne v0, v1, :cond_3

    .line 1754
    :cond_2
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;->ASYNC_HANDLE_DOWNLOADING:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setAsyncHandleStatus(Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;)V

    .line 1755
    :cond_3
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->byteInvalidRetryStatus:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_RESTART:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    if-ne v0, v1, :cond_4

    .line 1756
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_DOWNLOADING:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setByteInvalidRetryStatus(Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;)V

    :cond_4
    return-void
.end method

.method public checkMd5Status()I
    .locals 3

    .line 2192
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->md5:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->checkMd5Status(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public checkMd5Valid()Z
    .locals 3

    .line 2188
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->md5:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->checkMd5Valid(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public clearSpData()V
    .locals 3

    .line 2331
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_0
    const-string v1, "sp_download_info"

    const/4 v2, 0x0

    .line 2334
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 2335
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 2337
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public copyFromCacheData(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Z)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    .line 1794
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setChunkCount(I)V

    .line 1795
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setTotalBytes(J)V

    .line 1796
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v0

    const/4 v2, 0x1

    invoke-virtual {p0, v0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setCurBytes(JZ)V

    .line 1797
    iget-wide v0, p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    .line 1798
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->canSkipStatusHandler()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->canSkipStatusHandler()Z

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x0

    .line 1799
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curRetryTime:I

    .line 1800
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isForbiddenRetryed:Z

    .line 1801
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    .line 1802
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    .line 1803
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpsToHttpRetryUsed:Z

    goto :goto_0

    .line 1805
    :cond_1
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurRetryTime()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curRetryTime:I

    .line 1807
    :goto_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->geteTag()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->seteTag(Ljava/lang/String;)V

    if-eqz p2, :cond_2

    .line 1809
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result p2

    invoke-virtual {p0, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setStatus(I)V

    .line 1810
    :cond_2
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getIsFirstDownload()Z

    move-result p2

    iput-boolean p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstDownload:Z

    .line 1811
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstSuccess()Z

    move-result p2

    iput-boolean p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstSuccess:Z

    .line 1813
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRetryDelayStatus()Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    move-result-object p2

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    .line 1814
    iget-object p1, p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->mergeAuxiliaryJSONObject(Lorg/json/JSONObject;)V

    return-void
.end method

.method public copyTaskIdFromCacheData(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

    if-nez p1, :cond_0

    return-void

    .line 1821
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTaskId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->taskId:Ljava/lang/String;

    return-void
.end method

.method public describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public equalsTask(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 1893
    :cond_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 v0, 0x1

    :cond_1
    return v0
.end method

.method public erase()V
    .locals 3

    const/4 v0, 0x1

    const-wide/16 v1, 0x0

    .line 2049
    invoke-virtual {p0, v1, v2, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setCurBytes(JZ)V

    .line 2050
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    .line 2051
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    .line 2052
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    .line 2053
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realStartDownloadTime:J

    .line 2054
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    const/4 v1, 0x0

    .line 2057
    iput v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curRetryTime:I

    .line 2058
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstDownload:Z

    .line 2059
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstSuccess:Z

    .line 2060
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    .line 2061
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpsToHttpRetryUsed:Z

    const/4 v0, 0x0

    .line 2062
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->eTag:Ljava/lang/String;

    .line 2063
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 2064
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempCacheData:Ljava/util/concurrent/ConcurrentHashMap;

    .line 2065
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->packageInfoRef:Ljava/lang/ref/SoftReference;

    return-void
.end method

.method public generateTaskId()V
    .locals 1

    .line 1721
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->taskId:Ljava/lang/String;

    return-void
.end method

.method public getAllConnectTime()J
    .locals 3

    .line 1043
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 1044
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->allConnectTime:Ljava/util/concurrent/atomic/AtomicLong;

    if-nez v0, :cond_0

    .line 1045
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "dbjson_key_all_connect_time"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    .line 1046
    new-instance v2, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-direct {v2, v0, v1}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->allConnectTime:Ljava/util/concurrent/atomic/AtomicLong;

    .line 1048
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->allConnectTime:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v0

    return-wide v0
.end method

.method public getAntiHijackErrorCode(I)I
    .locals 2

    .line 2441
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 2442
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "anti_hijack_error_code"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    return p1
.end method

.method public getAppVersionCode()I
    .locals 1

    .line 1713
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->appVersionCode:I

    return v0
.end method

.method public getAsyncHandleStatus()Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;
    .locals 1

    .line 1737
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->asyncHandleStatus:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    return-object v0
.end method

.method public getBackUpUrl()Ljava/lang/String;
    .locals 2

    .line 1190
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    if-ltz v0, :cond_0

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 1191
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 1192
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, ""

    :goto_0
    return-object v0
.end method

.method public getBackUpUrlRetryCount()I
    .locals 1

    .line 1119
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlRetryCount:I

    return v0
.end method

.method public getBackUpUrls()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1921
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    return-object v0
.end method

.method public getBindValueCount()I
    .locals 1

    .line 907
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValueCount:I

    return v0
.end method

.method public getByteInvalidRetryStatus()Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;
    .locals 1

    .line 1525
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->byteInvalidRetryStatus:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    return-object v0
.end method

.method public getCacheControl()Ljava/lang/String;
    .locals 3

    .line 1344
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    const/4 v0, 0x0

    .line 1347
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v2, "cache-control"

    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-object v0
.end method

.method public getCacheExpiredTime()J
    .locals 4

    .line 1323
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    const-wide/16 v0, -0x1

    .line 1326
    :try_start_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v3, "cache-control/expired_time"

    invoke-virtual {v2, v3, v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-wide v0
.end method

.method public getChunkCount()I
    .locals 1

    .line 2210
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    return v0
.end method

.method public getConnectionUrl()Ljava/lang/String;
    .locals 3

    .line 1168
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    .line 1169
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v1

    const/16 v2, 0x8

    if-ne v1, v2, :cond_0

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forbiddenBackupUrls:Ljava/util/List;

    if-eqz v1, :cond_0

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    if-nez v1, :cond_0

    .line 1170
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forbiddenBackupUrls:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 1172
    :cond_0
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    if-eqz v1, :cond_1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    if-ltz v1, :cond_1

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 1173
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    iget v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 1174
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    move-object v0, v1

    goto :goto_0

    .line 1176
    :cond_1
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    const-string v2, "https"

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needHttpsToHttpRetry:Z

    if-eqz v1, :cond_2

    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpsToHttpRetryUsed:Z

    if-eqz v1, :cond_2

    .line 1177
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    const-string v1, "http"

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_2
    :goto_0
    return-object v0
.end method

.method public getCurBackUpUrlIndex()I
    .locals 1

    .line 974
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    return v0
.end method

.method public getCurBytes()J
    .locals 2

    .line 1501
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBytes:Ljava/util/concurrent/atomic/AtomicLong;

    if-eqz v0, :cond_0

    .line 1502
    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public getCurRetryTime()I
    .locals 1

    .line 1689
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curRetryTime:I

    return v0
.end method

.method public getCurRetryTimeInTotal()I
    .locals 3

    .line 1131
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curRetryTime:I

    .line 1132
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    if-eqz v1, :cond_0

    .line 1133
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryCount:I

    add-int/2addr v0, v1

    .line 1134
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    if-lez v1, :cond_0

    .line 1135
    iget v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlRetryCount:I

    mul-int/2addr v1, v2

    add-int/2addr v0, v1

    :cond_0
    return v0
.end method

.method public getDBJsonInt(Ljava/lang/String;)I
    .locals 1

    .line 2513
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 2514
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public getDBJsonString(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 2508
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 2509
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadPrepareTime()J
    .locals 2

    .line 1062
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 1063
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "dbjson_key_download_prepare_time"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    return-wide v0
.end method

.method public getDownloadProcess()I
    .locals 4

    .line 575
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 577
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    cmp-long v0, v0, v2

    if-lez v0, :cond_1

    const/16 v0, 0x64

    return v0

    .line 579
    :cond_1
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v0

    const-wide/16 v2, 0x64

    mul-long/2addr v0, v2

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    div-long/2addr v0, v2

    long-to-int v0, v0

    return v0
.end method

.method public getDownloadSettingString()Ljava/lang/String;
    .locals 2

    .line 1222
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 1223
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "download_setting"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getDownloadSpeed()D
    .locals 7

    .line 2555
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v0

    long-to-double v0, v0

    const-wide/high16 v2, 0x4130000000000000L    # 1048576.0

    div-double/2addr v0, v2

    .line 2556
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRealDownloadTime()J

    move-result-wide v2

    long-to-double v2, v2

    const-wide v4, 0x408f400000000000L    # 1000.0

    div-double/2addr v2, v4

    const-wide/16 v4, 0x0

    cmpl-double v6, v0, v4

    if-lez v6, :cond_0

    cmpl-double v4, v2, v4

    if-lez v4, :cond_0

    div-double/2addr v0, v2

    goto :goto_0

    :cond_0
    const-wide/high16 v0, -0x4010000000000000L    # -1.0

    :goto_0
    return-wide v0
.end method

.method public getDownloadTime()J
    .locals 2

    .line 1783
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    return-wide v0
.end method

.method public getEnqueueType()Lcom/ss/android/socialbase/downloader/constants/EnqueueType;
    .locals 1

    .line 970
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    return-object v0
.end method

.method public getErrorBytesLog()Ljava/lang/String;
    .locals 1

    .line 598
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->errorBytesLog:Ljava/lang/StringBuffer;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->length()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 600
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->errorBytesLog:Ljava/lang/StringBuffer;

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    :goto_0
    const-string v0, ""

    return-object v0
.end method

.method public getExecutorGroup()I
    .locals 3

    .line 2503
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 2504
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "executor_group"

    const/4 v2, 0x2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public getExpectFileLength()J
    .locals 2

    .line 1094
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 1095
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "dbjson_key_expect_file_length"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    return-wide v0
.end method

.method public getExtra()Ljava/lang/String;
    .locals 1

    .line 1074
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extra:Ljava/lang/String;

    return-object v0
.end method

.method public getExtraHeaders()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;"
        }
    .end annotation

    .line 1099
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extraHeaders:Ljava/util/List;

    return-object v0
.end method

.method public getExtraMonitorStatus()[I
    .locals 1

    .line 1399
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extraMonitorStatus:[I

    return-object v0
.end method

.method public getFailedException()Lcom/ss/android/socialbase/downloader/exception/BaseException;
    .locals 1

    .line 2292
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    return-object v0
.end method

.method public getFailedResumeCount()I
    .locals 3

    .line 2344
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2345
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "failed_resume_count"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public getFilePackageName()Ljava/lang/String;
    .locals 1

    .line 1082
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->filePackageName:Ljava/lang/String;

    return-object v0
.end method

.method public getFirstSpeedTime()J
    .locals 2

    .line 1022
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 1023
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "dbjson_key_first_speed_time"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    return-wide v0
.end method

.method public getForbiddenBackupUrls()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1143
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forbiddenBackupUrls:Ljava/util/List;

    return-object v0
.end method

.method public getHeadConnectionException()Ljava/lang/String;
    .locals 1

    .line 531
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->headConnectionException:Ljava/lang/String;

    return-object v0
.end method

.method public getHttpStatusCode()I
    .locals 1

    .line 1617
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpStatusCode:I

    return v0
.end method

.method public getHttpStatusMessage()Ljava/lang/String;
    .locals 1

    .line 1625
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpStatusMessage:Ljava/lang/String;

    return-object v0
.end method

.method public getIconUrl()Ljava/lang/String;
    .locals 1

    .line 1705
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->iconUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getId()I
    .locals 1

    .line 911
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->id:I

    if-nez v0, :cond_0

    .line 912
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadId(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->id:I

    .line 913
    :cond_0
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->id:I

    return v0
.end method

.method public getIsFirstDownload()Z
    .locals 1

    .line 1883
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstDownload:Z

    return v0
.end method

.method public getLastDownloadTime()J
    .locals 4

    .line 2431
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 2432
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "dbjson_last_start_download_time"

    const-wide/16 v2, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    return-wide v0
.end method

.method public getLastFailedResumeTime()J
    .locals 4

    .line 2358
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2359
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "last_failed_resume_time"

    const-wide/16 v2, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    return-wide v0
.end method

.method public getLastModified()Ljava/lang/String;
    .locals 3

    .line 1365
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    const/4 v0, 0x0

    .line 1368
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v2, "last-modified"

    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-object v0
.end method

.method public getLastUninstallResumeTime()J
    .locals 4

    .line 2386
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2387
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "last_unins_resume_time"

    const-wide/16 v2, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    return-wide v0
.end method

.method public getLinkMode()I
    .locals 2

    .line 1245
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 1246
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "link_mode"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public getMaxBytes()I
    .locals 1

    .line 1103
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->maxBytes:I

    return v0
.end method

.method public getMaxProgressCount()I
    .locals 1

    .line 1936
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->maxProgressCount:I

    return v0
.end method

.method public getMd5()Ljava/lang/String;
    .locals 1

    .line 1090
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->md5:Ljava/lang/String;

    return-object v0
.end method

.method public getMimeType()Ljava/lang/String;
    .locals 1

    .line 1673
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->mimeType:Ljava/lang/String;

    return-object v0
.end method

.method public getMinByteIntervalForPostToMainThread(J)J
    .locals 2

    .line 1940
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->maxProgressCount:I

    if-gtz v0, :cond_0

    const/16 v0, 0x64

    :cond_0
    add-int/lit8 v0, v0, 0x1

    int-to-long v0, v0

    .line 1943
    div-long/2addr p1, v0

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-gtz v0, :cond_1

    const-wide/32 p1, 0x100000

    :cond_1
    return-wide p1
.end method

.method public getMinProgressTimeMsInterval()I
    .locals 2

    .line 1948
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->minProgressTimeMsInterval:I

    const/16 v1, 0x3e8

    if-ge v0, v1, :cond_0

    move v0, v1

    :cond_0
    return v0
.end method

.method public getMonitorScene()Ljava/lang/String;
    .locals 1

    .line 1395
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->monitorScene:Ljava/lang/String;

    return-object v0
.end method

.method public getName()Ljava/lang/String;
    .locals 1

    .line 917
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkQuality()Ljava/lang/String;
    .locals 1

    .line 1588
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->networkQuality:Ljava/lang/String;

    return-object v0
.end method

.method public getNotificationVisibility()I
    .locals 1

    .line 1601
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->notificationVisibility:I

    return v0
.end method

.method public getOpenLimitSpeed()Z
    .locals 1

    .line 2526
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->openLimitSpeed:Z

    return v0
.end method

.method public getOutIp()[Ljava/lang/String;
    .locals 1

    .line 1107
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->outIp:[Ljava/lang/String;

    return-object v0
.end method

.method public getOutSize()[I
    .locals 1

    .line 1111
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->outSize:[I

    return-object v0
.end method

.method public getPackageInfo()Landroid/content/pm/PackageInfo;
    .locals 1

    .line 2546
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->packageInfoRef:Ljava/lang/ref/SoftReference;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/pm/PackageInfo;

    :goto_0
    return-object v0
.end method

.method public getPackageName()Ljava/lang/String;
    .locals 1

    .line 1078
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->packageName:Ljava/lang/String;

    return-object v0
.end method

.method public getPausedResumeCount()I
    .locals 3

    .line 2569
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2570
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "paused_resume_count"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public getPreconnectLevel()I
    .locals 3

    .line 2474
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 2475
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "dbjson_key_preconnect_level"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public getRealDownloadTime()J
    .locals 3

    .line 1787
    sget-object v0, Ljava/util/concurrent/TimeUnit;->NANOSECONDS:Ljava/util/concurrent/TimeUnit;

    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    invoke-virtual {v0, v1, v2}, Ljava/util/concurrent/TimeUnit;->toMillis(J)J

    move-result-wide v0

    return-wide v0
.end method

.method public getRealStatus()I
    .locals 1

    .line 1006
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->status:Ljava/util/concurrent/atomic/AtomicInteger;

    if-eqz v0, :cond_0

    .line 1007
    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getRetryCount()I
    .locals 1

    .line 1115
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryCount:I

    return v0
.end method

.method public getRetryDelayStatus()Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;
    .locals 1

    .line 1733
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    return-object v0
.end method

.method public getRetryDelayTimeArray()Ljava/lang/String;
    .locals 1

    .line 1685
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayTimeArray:Ljava/lang/String;

    return-object v0
.end method

.method public getRetryScheduleCount()I
    .locals 3

    .line 1227
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 1228
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "retry_schedule_count"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public getSavePath()Ljava/lang/String;
    .locals 1

    .line 932
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    return-object v0
.end method

.method public getSpIntVal(Ljava/lang/String;)I
    .locals 2

    .line 2408
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2409
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    return p1
.end method

.method public getSpLongVal(Ljava/lang/String;)J
    .locals 3

    .line 2413
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2414
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-wide/16 v1, 0x0

    invoke-virtual {v0, p1, v1, v2}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    return-wide v0
.end method

.method public getSpStringVal(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 2403
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2404
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getStatus()I
    .locals 2

    .line 960
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->status:Ljava/util/concurrent/atomic/AtomicInteger;

    if-eqz v0, :cond_1

    .line 961
    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v1, -0x5

    if-ne v0, v1, :cond_0

    const/4 v0, -0x2

    :cond_0
    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public getStatusAtDbInit()I
    .locals 1

    .line 2534
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->statusAtDbInit:I

    return v0
.end method

.method public getTTMd5CheckStatus()I
    .locals 3

    .line 1034
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 1035
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "ttmd5_check_status"

    const/4 v2, -0x1

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public getTargetFilePath()Ljava/lang/String;
    .locals 2

    .line 944
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getTargetFilePath(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getTaskId()Ljava/lang/String;
    .locals 1

    .line 1717
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->taskId:Ljava/lang/String;

    return-object v0
.end method

.method public getTempCacheData()Ljava/util/concurrent/ConcurrentHashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 2494
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureTempCacheData()V

    .line 2495
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempCacheData:Ljava/util/concurrent/ConcurrentHashMap;

    return-object v0
.end method

.method public getTempFilePath()Ljava/lang/String;
    .locals 3

    .line 948
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempPath:Ljava/lang/String;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getTempFilePath(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getTempName()Ljava/lang/String;
    .locals 1

    .line 940
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getTempFileName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getTempPath()Ljava/lang/String;
    .locals 2

    .line 936
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempPath:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getTempFileSavePath(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getThrottleNetSpeed()J
    .locals 2

    .line 2530
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->throttleNetSpeed:J

    return-wide v0
.end method

.method public getTitle()Ljava/lang/String;
    .locals 1

    .line 921
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->title:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 922
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    return-object v0

    .line 924
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->title:Ljava/lang/String;

    return-object v0
.end method

.method public getTotalBytes()J
    .locals 2

    .line 1580
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    return-wide v0
.end method

.method public getTotalRetryCount()I
    .locals 3

    .line 1123
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryCount:I

    .line 1124
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    if-eqz v1, :cond_0

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    .line 1125
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlRetryCount:I

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    mul-int/2addr v1, v2

    add-int/2addr v0, v1

    :cond_0
    return v0
.end method

.method public getTtnetProtectTimeout()J
    .locals 2

    .line 2565
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ttnetProtectTimeout:J

    return-wide v0
.end method

.method public getUninstallResumeCount()I
    .locals 3

    .line 2372
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2373
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "unins_resume_count"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public getUrl()Ljava/lang/String;
    .locals 1

    .line 928
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    return-object v0
.end method

.method public geteTag()Ljava/lang/String;
    .locals 1

    .line 1584
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->eTag:Ljava/lang/String;

    return-object v0
.end method

.method public declared-synchronized handleTempSaveCallback(ZLcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 3

    monitor-enter p0

    const/4 v0, 0x0

    .line 2149
    :try_start_0
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isSaveTempFile:Z

    .line 2150
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempFileSaveCompleteCallbacks:Ljava/util/List;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 2151
    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    const-string v0, "DownloadInfo"

    .line 2153
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "handleTempSaveCallback isSuccess "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, " callback size:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempFileSaveCompleteCallbacks:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2154
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempFileSaveCompleteCallbacks:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 2155
    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 2156
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/depend/ITempFileSaveCompleteCallback;

    if-eqz v1, :cond_1

    if-eqz p1, :cond_2

    .line 2159
    invoke-interface {v1}, Lcom/ss/android/socialbase/downloader/depend/ITempFileSaveCompleteCallback;->onSuccess()V

    goto :goto_0

    .line 2161
    :cond_2
    invoke-interface {v1, p2}, Lcom/ss/android/socialbase/downloader/depend/ITempFileSaveCompleteCallback;->onFailed(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 2164
    :cond_3
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public hasNextBackupUrl()Z
    .locals 3

    .line 1993
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    if-ltz v0, :cond_0

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    .line 1994
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    sub-int/2addr v2, v1

    if-ge v0, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :cond_1
    :goto_0
    return v1
.end method

.method public hasPauseReservedOnWifi()Z
    .locals 2

    .line 1265
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getReserveWifiStatus()I

    move-result v0

    const/4 v1, 0x1

    and-int/2addr v0, v1

    if-lez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public increaseAllConnectTime(J)V
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-lez v0, :cond_0

    .line 1053
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getAllConnectTime()J

    .line 1054
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->allConnectTime:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/atomic/AtomicLong;->addAndGet(J)J

    move-result-wide p1

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    const-string p2, "dbjson_key_all_connect_time"

    invoke-virtual {p0, p2, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public increaseCurBytes(J)V
    .locals 1

    .line 1541
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBytes:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/atomic/AtomicLong;->addAndGet(J)J

    return-void
.end method

.method public increaseDownloadPrepareTime(J)V
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-lez v0, :cond_0

    .line 1068
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDownloadPrepareTime()J

    move-result-wide v0

    add-long/2addr v0, p1

    .line 1069
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    const-string p2, "dbjson_key_download_prepare_time"

    invoke-virtual {p0, p2, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public isAddListenerToSameTask()Z
    .locals 1

    .line 1473
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->addListenerToSameTask:Z

    return v0
.end method

.method public isAutoInstall()Z
    .locals 3

    .line 1664
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 1665
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const/4 v1, 0x1

    const-string v2, "auto_install"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public isAutoInstallWithoutNotification()Z
    .locals 3

    .line 1648
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isAutoInstallWithoutNotification:Ljava/lang/Boolean;

    if-nez v0, :cond_1

    .line 1649
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extra:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 1651
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extra:Ljava/lang/String;

    invoke-direct {v0, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v2, "auto_install_without_notification"

    .line 1652
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isAutoInstallWithoutNotification:Ljava/lang/Boolean;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 1654
    :catch_0
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isAutoInstallWithoutNotification:Ljava/lang/Boolean;

    goto :goto_0

    .line 1657
    :cond_0
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isAutoInstallWithoutNotification:Ljava/lang/Boolean;

    .line 1660
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isAutoInstallWithoutNotification:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public isAutoResumed()Z
    .locals 1

    .line 982
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->autoResumed:Z

    return v0
.end method

.method public isBackUpUrlUsed()Z
    .locals 1

    .line 1185
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    return v0
.end method

.method public isBreakpointAvailable()Z
    .locals 1

    .line 2171
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFileDataValid()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 2173
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isChunkBreakpointAvailable()Z

    move-result v0

    return v0
.end method

.method public isCanResumeFromBreakPointStatus()Z
    .locals 6

    .line 2196
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x4

    if-eq v0, v2, :cond_2

    const/4 v2, 0x3

    if-eq v0, v2, :cond_2

    const/4 v2, -0x1

    if-eq v0, v2, :cond_2

    const/4 v2, 0x5

    if-eq v0, v2, :cond_2

    const/16 v2, 0x8

    if-eq v0, v2, :cond_2

    if-eq v0, v1, :cond_0

    const/4 v2, 0x2

    if-ne v0, v2, :cond_1

    .line 2201
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-lez v0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :cond_2
    :goto_0
    return v1
.end method

.method public isChunkBreakpointAvailable()Z
    .locals 6

    .line 2118
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    const/4 v1, 0x1

    if-le v0, v1, :cond_4

    .line 2119
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 2121
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-interface {v0, v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->getDownloadChunk(I)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 2122
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    iget v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    if-eq v2, v3, :cond_0

    goto :goto_1

    :cond_0
    const-wide/16 v2, 0x0

    .line 2126
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-eqz v4, :cond_1

    .line 2128
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getDownloadChunkBytes()J

    move-result-wide v4

    add-long/2addr v2, v4

    goto :goto_0

    .line 2131
    :cond_2
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v4

    cmp-long v0, v2, v4

    if-eqz v0, :cond_4

    .line 2132
    invoke-virtual {p0, v2, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setCurBytes(J)V

    goto :goto_2

    :cond_3
    :goto_1
    const/4 v0, 0x0

    return v0

    :cond_4
    :goto_2
    return v1
.end method

.method public isChunkDowngradeRetryUsed()Z
    .locals 1

    .line 1729
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkDowngradeRetryUsed:Z

    return v0
.end method

.method public isChunked()Z
    .locals 2

    .line 1925
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isChunkedTask(J)Z

    move-result v0

    return v0
.end method

.method public isDeleteCacheIfCheckFailed()Z
    .locals 1

    .line 1457
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->deleteCacheIfCheckFailed:Z

    return v0
.end method

.method public isDownloadFromReserveWifi()Z
    .locals 1

    .line 1237
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->mDownloadFromReserveWifi:Z

    return v0
.end method

.method public isDownloadOverStatus()Z
    .locals 1

    .line 1917
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/constants/DownloadStatus;->isDownloadOver(I)Z

    move-result v0

    return v0
.end method

.method public isDownloadWithWifiValid()Z
    .locals 1

    .line 1901
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isOnlyWifi()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isWifi(Landroid/content/Context;)Z

    move-result v0

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

.method public isDownloaded()Z
    .locals 1

    .line 1959
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isFileDownloaded(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v0

    return v0
.end method

.method public isDownloadingStatus()Z
    .locals 1

    .line 1913
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/constants/DownloadStatus;->isDownloading(I)Z

    move-result v0

    return v0
.end method

.method public isEntityInvalid()Z
    .locals 1

    .line 1955
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

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

.method public isExpiredRedownload()Z
    .locals 3

    .line 1481
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "force_close_download_cache_check"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    .line 1482
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "isExpiredRedownload force to false, reason(global setting) id="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " name="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;)V

    return v1

    .line 1485
    :cond_0
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->expiredRedownload:Z

    return v0
.end method

.method public isFileDataExists()Z
    .locals 4

    .line 2104
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isEntityInvalid()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 2107
    :cond_0
    new-instance v0, Ljava/io/File;

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempPath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempName()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v0, v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 2108
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    .line 2109
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v0

    if-eqz v2, :cond_2

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x1

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public isFileDataValid()Z
    .locals 14

    .line 2074
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isEntityInvalid()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 2078
    :cond_0
    new-instance v0, Ljava/io/File;

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempPath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempName()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v0, v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 2079
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    .line 2080
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v3

    if-eqz v2, :cond_6

    if-eqz v3, :cond_1

    goto/16 :goto_1

    .line 2086
    :cond_1
    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v2

    .line 2088
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v4

    .line 2089
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v6, "fix_file_data_valid"

    invoke-virtual {v0, v6}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v0

    const-string v6, ",fileLength="

    const-string v7, ",totalBytes ="

    const-string v8, "isFileDataValid: cur = "

    const-string v9, "DownloadInfo"

    const-wide/16 v10, 0x0

    if-eqz v0, :cond_3

    cmp-long v0, v4, v10

    if-lez v0, :cond_2

    .line 2090
    iget-wide v12, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    cmp-long v0, v12, v10

    if-lez v0, :cond_2

    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    if-lez v0, :cond_2

    cmp-long v0, v2, v4

    if-ltz v0, :cond_2

    cmp-long v0, v2, v12

    if-lez v0, :cond_4

    .line 2091
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v9, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    :cond_3
    cmp-long v0, v2, v10

    if-lez v0, :cond_5

    cmp-long v0, v4, v10

    if-lez v0, :cond_5

    .line 2095
    iget-wide v12, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    cmp-long v0, v12, v10

    if-lez v0, :cond_5

    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    if-lez v0, :cond_5

    cmp-long v0, v2, v4

    if-ltz v0, :cond_5

    cmp-long v0, v2, v12

    if-gtz v0, :cond_5

    cmp-long v0, v4, v12

    if-ltz v0, :cond_4

    goto :goto_0

    :cond_4
    const/4 v0, 0x1

    return v0

    .line 2096
    :cond_5
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v9, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    :goto_1
    return v1
.end method

.method public isFirstDownload()Z
    .locals 3

    .line 2177
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstDownload:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 2180
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempPath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 2182
    :cond_1
    new-instance v0, Ljava/io/File;

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempPath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempName()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 2183
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public isFirstSuccess()Z
    .locals 1

    .line 1887
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstSuccess:Z

    return v0
.end method

.method public isForbiddenRetryed()Z
    .locals 1

    .line 1693
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isForbiddenRetryed:Z

    return v0
.end method

.method public isForce()Z
    .locals 1

    .line 1477
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->force:Z

    return v0
.end method

.method public isForceIgnoreRecommendSize()Z
    .locals 1

    .line 1609
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forceIgnoreRecommendSize:Z

    return v0
.end method

.method public isHeadConnectionAvailable()Z
    .locals 1

    .line 1465
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->headConnectionAvailable:Z

    return v0
.end method

.method public isHttpsToHttpRetryUsed()Z
    .locals 1

    .line 978
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpsToHttpRetryUsed:Z

    return v0
.end method

.method public isIgnoreDataVerify()Z
    .locals 1

    .line 1469
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ignoreDataVerify:Z

    return v0
.end method

.method public isNeedChunkDowngradeRetry()Z
    .locals 1

    .line 1725
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needChunkDowngradeRetry:Z

    return v0
.end method

.method public isNeedDefaultHttpServiceBackUp()Z
    .locals 1

    .line 952
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needDefaultHttpServiceBackUp:Z

    return v0
.end method

.method public isNeedHttpsToHttpRetry()Z
    .locals 1

    .line 1677
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needHttpsToHttpRetry:Z

    return v0
.end method

.method public isNeedIndependentProcess()Z
    .locals 1

    .line 1453
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needIndependentProcess:Z

    return v0
.end method

.method public isNeedPostProgress()Z
    .locals 1

    .line 1929
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needPostProgress:Z

    return v0
.end method

.method public isNeedRetryDelay()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public isNeedReuseChunkRunnable()Z
    .locals 1

    .line 956
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseChunkRunnable:Z

    return v0
.end method

.method public isNeedReuseFirstConnection()Z
    .locals 1

    .line 1449
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseFirstConnection:Z

    return v0
.end method

.method public isNeedSDKMonitor()Z
    .locals 1

    .line 1391
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needSDKMonitor:Z

    return v0
.end method

.method public isNewTask()Z
    .locals 1

    .line 2205
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isOnlyWifi()Z
    .locals 1

    .line 1013
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->onlyWifi:Z

    return v0
.end method

.method public isPauseReserveOnWifi()Z
    .locals 1

    .line 1257
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getReserveWifiStatus()I

    move-result v0

    and-int/lit8 v0, v0, 0x2

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isPauseReserveWithWifiValid()Z
    .locals 2

    .line 1906
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->mDownloadFromReserveWifi:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 1907
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isPauseReserveOnWifi()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isWifi(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :cond_1
    :goto_0
    return v1
.end method

.method public isRwConcurrent()Z
    .locals 3

    .line 1386
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 1387
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const/4 v1, 0x0

    const-string v2, "rw_concurrent"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    move v1, v2

    :cond_0
    return v1
.end method

.method public isSavePathRedirected()Z
    .locals 3

    .line 2453
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 2454
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    const-string v1, "is_save_path_redirected"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v0

    return v0
.end method

.method public declared-synchronized isSaveTempFile()Z
    .locals 1

    monitor-enter p0

    .line 2141
    :try_start_0
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isSaveTempFile:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public isShowNotification()Z
    .locals 1

    .line 1642
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotification:Z

    return v0
.end method

.method public isShowNotificationForAutoResumed()Z
    .locals 1

    .line 990
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotificationForAutoResumed:Z

    return v0
.end method

.method public isShowNotificationForNetworkResumed()Z
    .locals 1

    .line 998
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotificationForNetworkResumed:Z

    return v0
.end method

.method public isSuccessByCache()Z
    .locals 1

    .line 1493
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->successByCache:Z

    return v0
.end method

.method public isSupportPartial()Z
    .locals 1

    .line 2499
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->supportPartial:Z

    return v0
.end method

.method public isWaitingWifiStatus()Z
    .locals 2

    .line 518
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v0

    const/16 v1, 0x3f5

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public readFromParcel(Landroid/os/Parcel;)V
    .locals 5

    .line 377
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->id:I

    .line 378
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    .line 379
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->title:Ljava/lang/String;

    .line 380
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    .line 381
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    .line 382
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempPath:Ljava/lang/String;

    .line 383
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->onlyWifi:Z

    .line 384
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extra:Ljava/lang/String;

    .line 385
    sget-object v0, Lcom/ss/android/socialbase/downloader/model/HttpHeader;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extraHeaders:Ljava/util/List;

    .line 386
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->maxBytes:I

    .line 387
    invoke-virtual {p1}, Landroid/os/Parcel;->createStringArray()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->outIp:[Ljava/lang/String;

    .line 388
    invoke-virtual {p1}, Landroid/os/Parcel;->createIntArray()[I

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->outSize:[I

    .line 389
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryCount:I

    .line 390
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlRetryCount:I

    .line 391
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_1

    move v0, v1

    goto :goto_1

    :cond_1
    move v0, v2

    :goto_1
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->force:Z

    .line 392
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_2

    move v0, v1

    goto :goto_2

    :cond_2
    move v0, v2

    :goto_2
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needPostProgress:Z

    .line 393
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->maxProgressCount:I

    .line 394
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->minProgressTimeMsInterval:I

    .line 395
    invoke-virtual {p1}, Landroid/os/Parcel;->createStringArrayList()Ljava/util/ArrayList;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    .line 396
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_3

    move v0, v1

    goto :goto_3

    :cond_3
    move v0, v2

    :goto_3
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotification:Z

    .line 397
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->mimeType:Ljava/lang/String;

    .line 398
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_4

    move v0, v1

    goto :goto_4

    :cond_4
    move v0, v2

    :goto_4
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needHttpsToHttpRetry:Z

    .line 399
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->packageName:Ljava/lang/String;

    .line 400
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->md5:Ljava/lang/String;

    .line 401
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_5

    move v0, v1

    goto :goto_5

    :cond_5
    move v0, v2

    :goto_5
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needRetryDelay:Z

    .line 402
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_6

    move v0, v1

    goto :goto_6

    :cond_6
    move v0, v2

    :goto_6
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needDefaultHttpServiceBackUp:Z

    .line 403
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_7

    move v0, v1

    goto :goto_7

    :cond_7
    move v0, v2

    :goto_7
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseChunkRunnable:Z

    .line 404
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayTimeArray:Ljava/lang/String;

    .line 405
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->eTag:Ljava/lang/String;

    .line 406
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curRetryTime:I

    .line 407
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    invoke-direct {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->convertRetryDelayStatus(I)V

    .line 408
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_8

    move v0, v1

    goto :goto_8

    :cond_8
    move v0, v2

    :goto_8
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseFirstConnection:Z

    .line 409
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_9

    move v0, v1

    goto :goto_9

    :cond_9
    move v0, v2

    :goto_9
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forceIgnoreRecommendSize:Z

    .line 410
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->networkQuality:Ljava/lang/String;

    .line 411
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    .line 412
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->notificationVisibility:I

    .line 413
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    .line 414
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v3

    invoke-virtual {p0, v3, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setCurBytes(J)V

    .line 415
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v3

    iput-wide v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    .line 416
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setStatus(I)V

    .line 417
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v3

    iput-wide v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    .line 418
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v3

    iput-wide v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    .line 419
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_a

    move v0, v1

    goto :goto_a

    :cond_a
    move v0, v2

    :goto_a
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    .line 420
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_b

    move v0, v1

    goto :goto_b

    :cond_b
    move v0, v2

    :goto_b
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpsToHttpRetryUsed:Z

    .line 422
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->errorBytesLog:Ljava/lang/StringBuffer;

    if-nez v0, :cond_c

    .line 423
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v0, v3}, Ljava/lang/StringBuffer;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->errorBytesLog:Ljava/lang/StringBuffer;

    goto :goto_c

    .line 425
    :cond_c
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->errorBytesLog:Ljava/lang/StringBuffer;

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->errorBytesLog:Ljava/lang/StringBuffer;

    invoke-virtual {v3}, Ljava/lang/StringBuffer;->length()I

    move-result v3

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuffer;->delete(II)Ljava/lang/StringBuffer;

    move-result-object v0

    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_c

    :catch_0
    move-exception v0

    .line 427
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 429
    :goto_c
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_d

    move v0, v1

    goto :goto_d

    :cond_d
    move v0, v2

    :goto_d
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->autoResumed:Z

    .line 430
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_e

    move v0, v1

    goto :goto_e

    :cond_e
    move v0, v2

    :goto_e
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotificationForAutoResumed:Z

    .line 431
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_f

    move v0, v1

    goto :goto_f

    :cond_f
    move v0, v2

    :goto_f
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotificationForNetworkResumed:Z

    .line 432
    invoke-virtual {p1}, Landroid/os/Parcel;->createStringArrayList()Ljava/util/ArrayList;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forbiddenBackupUrls:Ljava/util/List;

    .line 433
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_10

    move v0, v1

    goto :goto_10

    :cond_10
    move v0, v2

    :goto_10
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needIndependentProcess:Z

    .line 434
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    invoke-direct {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->convertEnqueueType(I)V

    .line 435
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_11

    move v0, v1

    goto :goto_11

    :cond_11
    move v0, v2

    :goto_11
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->headConnectionAvailable:Z

    .line 436
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpStatusCode:I

    .line 437
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpStatusMessage:Ljava/lang/String;

    .line 438
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_12

    move v0, v1

    goto :goto_12

    :cond_12
    move v0, v2

    :goto_12
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isSaveTempFile:Z

    .line 439
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_13

    move v0, v1

    goto :goto_13

    :cond_13
    move v0, v2

    :goto_13
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isForbiddenRetryed:Z

    .line 440
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_14

    move v0, v1

    goto :goto_14

    :cond_14
    move v0, v2

    :goto_14
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->addListenerToSameTask:Z

    .line 441
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_15

    move v0, v1

    goto :goto_15

    :cond_15
    move v0, v2

    :goto_15
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needChunkDowngradeRetry:Z

    .line 442
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_16

    move v0, v1

    goto :goto_16

    :cond_16
    move v0, v2

    :goto_16
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkDowngradeRetryUsed:Z

    .line 443
    const-class v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->readParcelable(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 444
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryScheduleMinutes:I

    .line 445
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonDataString:Ljava/lang/String;

    .line 446
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_17

    move v0, v1

    goto :goto_17

    :cond_17
    move v0, v2

    :goto_17
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->supportPartial:Z

    .line 447
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->iconUrl:Ljava/lang/String;

    .line 448
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->appVersionCode:I

    .line 449
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->taskId:Ljava/lang/String;

    .line 450
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_18

    move v0, v1

    goto :goto_18

    :cond_18
    move v0, v2

    :goto_18
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->expiredRedownload:Z

    .line 451
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-eqz v0, :cond_19

    move v0, v1

    goto :goto_19

    :cond_19
    move v0, v2

    :goto_19
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->deleteCacheIfCheckFailed:Z

    .line 452
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result p1

    if-eqz p1, :cond_1a

    goto :goto_1a

    :cond_1a
    move v1, v2

    :goto_1a
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->successByCache:Z

    .line 453
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->parseMonitorSetting()V

    return-void
.end method

.method public declared-synchronized registerTempFileSaveCallback(Lcom/ss/android/socialbase/downloader/depend/ITempFileSaveCompleteCallback;)V
    .locals 4

    monitor-enter p0

    if-nez p1, :cond_0

    .line 2011
    monitor-exit p0

    return-void

    :cond_0
    :try_start_0
    const-string v0, "DownloadInfo"

    const-string v1, "registerTempFileSaveCallback"

    .line 2013
    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2014
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempFileSaveCompleteCallbacks:Ljava/util/List;

    if-nez v0, :cond_1

    .line 2015
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempFileSaveCompleteCallbacks:Ljava/util/List;

    .line 2016
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempFileSaveCompleteCallbacks:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 2017
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempFileSaveCompleteCallbacks:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 2020
    :try_start_1
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 2021
    new-instance v1, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v2, 0x40e

    const-string v3, "registerTempFileSaveCallback"

    invoke-static {v0, v3}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getErrorMsgWithTagPrefix(Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v2, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    invoke-interface {p1, v1}, Lcom/ss/android/socialbase/downloader/depend/ITempFileSaveCompleteCallback;->onFailed(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 2023
    :cond_2
    :goto_0
    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public reset()V
    .locals 3

    const/4 v0, 0x1

    const-wide/16 v1, 0x0

    .line 2036
    invoke-virtual {p0, v1, v2, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setCurBytes(JZ)V

    .line 2037
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    .line 2038
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    .line 2039
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    .line 2040
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realStartDownloadTime:J

    .line 2041
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    return-void
.end method

.method public resetDataForEtagEndure(Ljava/lang/String;)V
    .locals 3

    const/4 v0, 0x1

    const-wide/16 v1, 0x0

    .line 2026
    invoke-virtual {p0, v1, v2, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setCurBytes(JZ)V

    .line 2027
    invoke-virtual {p0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setTotalBytes(J)V

    .line 2028
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->seteTag(Ljava/lang/String;)V

    .line 2029
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setChunkCount(I)V

    .line 2030
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    .line 2031
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realStartDownloadTime:J

    .line 2032
    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    return-void
.end method

.method public resetRealStartDownloadTime()V
    .locals 2

    const-wide/16 v0, 0x0

    .line 1419
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realStartDownloadTime:J

    return-void
.end method

.method public safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 2

    .line 1210
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 1211
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    monitor-enter v0

    .line 1213
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonData:Lorg/json/JSONObject;

    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    :goto_0
    const/4 p1, 0x0

    .line 1217
    :try_start_1
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->dbJsonDataString:Ljava/lang/String;

    .line 1218
    monitor-exit v0

    return-void

    :goto_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public setAddListenerToSameTask(Z)V
    .locals 0

    .line 339
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->addListenerToSameTask:Z

    return-void
.end method

.method public setAntiHijackErrorCode(I)V
    .locals 1

    .line 2446
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v0, "anti_hijack_error_code"

    invoke-virtual {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setAppVersionCode(I)V
    .locals 0

    .line 1709
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->appVersionCode:I

    return-void
.end method

.method public setAsyncHandleStatus(Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;)V
    .locals 0

    .line 1772
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->asyncHandleStatus:Lcom/ss/android/socialbase/downloader/constants/AsyncHandleStatus;

    return-void
.end method

.method public setAutoResumed(Z)V
    .locals 0

    .line 986
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->autoResumed:Z

    return-void
.end method

.method public setByteInvalidRetryStatus(Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;)V
    .locals 0

    .line 1529
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->byteInvalidRetryStatus:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    return-void
.end method

.method public setCacheControl(Ljava/lang/String;)V
    .locals 2

    .line 1334
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 1336
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "cache-control"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1337
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateSpData()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public setCacheExpiredTime(J)V
    .locals 2

    .line 1313
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 1315
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "cache-control/expired_time"

    invoke-virtual {v0, v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 1316
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateSpData()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public setChunkCount(I)V
    .locals 0

    .line 1596
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    return-void
.end method

.method public setChunkDowngradeRetryUsed(Z)V
    .locals 0

    .line 2167
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkDowngradeRetryUsed:Z

    return-void
.end method

.method public setCurBytes(J)V
    .locals 1

    .line 1508
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBytes:Ljava/util/concurrent/atomic/AtomicLong;

    if-eqz v0, :cond_0

    .line 1509
    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/atomic/AtomicLong;->set(J)V

    goto :goto_0

    .line 1511
    :cond_0
    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-direct {v0, p1, p2}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBytes:Ljava/util/concurrent/atomic/AtomicLong;

    :goto_0
    return-void
.end method

.method public setCurBytes(JZ)V
    .locals 2

    if-eqz p3, :cond_0

    .line 1516
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setCurBytes(J)V

    goto :goto_0

    .line 1518
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v0

    cmp-long p3, p1, v0

    if-lez p3, :cond_1

    .line 1520
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setCurBytes(J)V

    :cond_1
    :goto_0
    return-void
.end method

.method public setDeleteCacheIfCheckFailed()V
    .locals 1

    const/4 v0, 0x1

    .line 1461
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->deleteCacheIfCheckFailed:Z

    return-void
.end method

.method public setDownloadFromReserveWifi(Z)V
    .locals 0

    .line 1241
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->mDownloadFromReserveWifi:Z

    return-void
.end method

.method public setDownloadTime(J)V
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-ltz v0, :cond_0

    .line 1445
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    :cond_0
    return-void
.end method

.method public setExtra(Ljava/lang/String;)V
    .locals 0

    .line 1572
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extra:Ljava/lang/String;

    return-void
.end method

.method public setFailedException(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 0

    .line 2296
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    return-void
.end method

.method public setFailedResumeCount(I)V
    .locals 2

    .line 2349
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2351
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "failed_resume_count"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2353
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public setFilePackageName(Ljava/lang/String;)V
    .locals 0

    .line 1086
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->filePackageName:Ljava/lang/String;

    return-void
.end method

.method public setFirstDownload(Z)V
    .locals 0

    .line 1533
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstDownload:Z

    return-void
.end method

.method public setFirstSpeedTime(J)V
    .locals 0

    .line 1027
    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    const-string p2, "dbjson_key_first_speed_time"

    invoke-virtual {p0, p2, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setFirstSuccess(Z)V
    .locals 0

    .line 1537
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstSuccess:Z

    return-void
.end method

.method public setForbiddenBackupUrls(Ljava/util/List;Z)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;Z)V"
        }
    .end annotation

    .line 1147
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forbiddenBackupUrls:Ljava/util/List;

    .line 1148
    invoke-direct {p0, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->refreshBackupUrls(Z)V

    return-void
.end method

.method public setForbiddenRetryed()V
    .locals 1

    const/4 v0, 0x1

    .line 1697
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isForbiddenRetryed:Z

    return-void
.end method

.method public setForceIgnoreRecommendSize(Z)V
    .locals 0

    .line 1613
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forceIgnoreRecommendSize:Z

    return-void
.end method

.method public setHeadConnectionException(Ljava/lang/String;)V
    .locals 0

    .line 535
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->headConnectionException:Ljava/lang/String;

    return-void
.end method

.method public setHttpStatusCode(I)V
    .locals 0

    .line 1621
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpStatusCode:I

    return-void
.end method

.method public setHttpStatusMessage(Ljava/lang/String;)V
    .locals 0

    .line 1629
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpStatusMessage:Ljava/lang/String;

    return-void
.end method

.method public setHttpsToHttpRetryUsed(Z)V
    .locals 0

    .line 2002
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpsToHttpRetryUsed:Z

    return-void
.end method

.method public setIconUrl(Ljava/lang/String;)V
    .locals 0

    .line 1701
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->iconUrl:Ljava/lang/String;

    return-void
.end method

.method public setId(I)V
    .locals 0

    .line 1897
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->id:I

    return-void
.end method

.method public setIsRwConcurrent(Z)V
    .locals 1

    .line 1379
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v0, "rw_concurrent"

    invoke-virtual {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public declared-synchronized setIsSaveTempFile(Z)V
    .locals 0

    monitor-enter p0

    .line 2145
    :try_start_0
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isSaveTempFile:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2146
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public setLastFailedResumeTime(J)V
    .locals 2

    .line 2363
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2365
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "last_failed_resume_time"

    invoke-virtual {v0, v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2367
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public setLastModified(Ljava/lang/String;)V
    .locals 2

    .line 1355
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 1357
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "last-modified"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1358
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateSpData()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public setLastNotifyProgressTime()V
    .locals 3

    .line 527
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->lastNotifyProgressTime:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/util/concurrent/atomic/AtomicLong;->set(J)V

    return-void
.end method

.method public setLastUninstallResumeTime(J)V
    .locals 2

    .line 2391
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2393
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "last_unins_resume_time"

    invoke-virtual {v0, v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2395
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public setLinkMode(I)V
    .locals 1

    .line 1250
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v0, "link_mode"

    invoke-virtual {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setMd5(Ljava/lang/String;)V
    .locals 0

    .line 1850
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->md5:Ljava/lang/String;

    return-void
.end method

.method public setMimeType(Ljava/lang/String;)V
    .locals 0

    .line 1669
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->mimeType:Ljava/lang/String;

    return-void
.end method

.method public setName(Ljava/lang/String;)V
    .locals 0

    .line 1549
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    return-void
.end method

.method public setNetworkQuality(Ljava/lang/String;)V
    .locals 0

    .line 1592
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->networkQuality:Ljava/lang/String;

    return-void
.end method

.method public setNotificationVisibility(I)V
    .locals 0

    .line 1605
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->notificationVisibility:I

    return-void
.end method

.method public setOnlyWifi(Z)V
    .locals 0

    .line 1017
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->onlyWifi:Z

    return-void
.end method

.method public setOpenLimitSpeed(Z)V
    .locals 0

    .line 2522
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->openLimitSpeed:Z

    return-void
.end method

.method public setPackageInfo(Landroid/content/pm/PackageInfo;)V
    .locals 1

    .line 2542
    new-instance v0, Ljava/lang/ref/SoftReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/SoftReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->packageInfoRef:Ljava/lang/ref/SoftReference;

    return-void
.end method

.method public setPackageName(Ljava/lang/String;)V
    .locals 0

    .line 1576
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->packageName:Ljava/lang/String;

    return-void
.end method

.method public setPausedResumeCount(I)V
    .locals 2

    .line 2574
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2576
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "paused_resume_count"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2578
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public setPreconnectLevel(I)V
    .locals 1

    .line 2479
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureDBJsonData()V

    .line 2480
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v0, "dbjson_key_preconnect_level"

    invoke-virtual {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setRetryDelayStatus(Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;)V
    .locals 0

    .line 1764
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    return-void
.end method

.method public setRetryScheduleCount(I)V
    .locals 1

    .line 1232
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v0, "retry_schedule_count"

    invoke-virtual {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setSavePath(Ljava/lang/String;)V
    .locals 0

    .line 2006
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    return-void
.end method

.method public setSavePathRedirected(Z)V
    .locals 1

    .line 2459
    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    const-string v0, "is_save_path_redirected"

    invoke-virtual {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setShowNotification(Z)V
    .locals 0

    .line 1638
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotification:Z

    return-void
.end method

.method public setShowNotificationForAutoResumed(Z)V
    .locals 0

    .line 994
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotificationForAutoResumed:Z

    return-void
.end method

.method public setShowNotificationForNetworkResumed(Z)V
    .locals 0

    .line 1002
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotificationForNetworkResumed:Z

    return-void
.end method

.method public setSpValue(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 2418
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2420
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2421
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateSpData()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2423
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public setStatus(I)V
    .locals 1

    .line 1561
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->status:Ljava/util/concurrent/atomic/AtomicInteger;

    if-eqz v0, :cond_0

    .line 1562
    invoke-virtual {v0, p1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    goto :goto_0

    .line 1564
    :cond_0
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0, p1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->status:Ljava/util/concurrent/atomic/AtomicInteger;

    :goto_0
    return-void
.end method

.method public setStatusAtDbInit(I)V
    .locals 0

    .line 2538
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->statusAtDbInit:I

    return-void
.end method

.method public setSuccessByCache(Z)V
    .locals 0

    .line 1497
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->successByCache:Z

    return-void
.end method

.method public setSupportPartial(Z)V
    .locals 0

    .line 1568
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->supportPartial:Z

    return-void
.end method

.method public setTTMd5CheckStatus(I)V
    .locals 1

    .line 1039
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v0, "ttmd5_check_status"

    invoke-virtual {p0, v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setThrottleNetSpeed(J)V
    .locals 0

    .line 2518
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->throttleNetSpeed:J

    return-void
.end method

.method public setTotalBytes(J)V
    .locals 0

    .line 1557
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    return-void
.end method

.method public setUninstallResumeCount(I)V
    .locals 2

    .line 2377
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 2379
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "unins_resume_count"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2381
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public setUrl(Ljava/lang/String;)V
    .locals 0

    .line 1553
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    return-void
.end method

.method public seteTag(Ljava/lang/String;)V
    .locals 0

    .line 1545
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->eTag:Ljava/lang/String;

    return-void
.end method

.method public startPauseReserveOnWifi()V
    .locals 3

    .line 1289
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 1291
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "pause_reserve_on_wifi"

    const/4 v2, 0x3

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1292
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateSpData()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public statusInPause()Z
    .locals 2

    .line 1270
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRealStatus()I

    move-result v0

    const/4 v1, -0x2

    if-eq v0, v1, :cond_1

    .line 1271
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRealStatus()I

    move-result v0

    const/4 v1, -0x5

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

.method public stopPauseReserveOnWifi()V
    .locals 3

    .line 1303
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->ensureSpData()V

    .line 1305
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    const-string v1, "pause_reserve_on_wifi"

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1306
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateSpData()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public toContentValues()Landroid/content/ContentValues;
    .locals 3

    .line 800
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    .line 801
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->id:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "_id"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 802
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    const-string v2, "url"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 803
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    const-string v2, "savePath"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 804
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempPath:Ljava/lang/String;

    const-string v2, "tempPath"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 805
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    const-string v2, "name"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 806
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "chunkCount"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 807
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "status"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 808
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "curBytes"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 809
    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "totalBytes"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 810
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->eTag:Ljava/lang/String;

    const-string v2, "eTag"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 811
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->onlyWifi:Z

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "onlyWifi"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 812
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->force:Z

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "force"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 813
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryCount:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "retryCount"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 814
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extra:Ljava/lang/String;

    const-string v2, "extra"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 815
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->mimeType:Ljava/lang/String;

    const-string v2, "mimeType"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 816
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->title:Ljava/lang/String;

    const-string v2, "title"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 817
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotification:Z

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "notificationEnable"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 818
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->notificationVisibility:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "notificationVisibility"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 819
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstDownload:Z

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "isFirstDownload"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 820
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isFirstSuccess:Z

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "isFirstSuccess"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 821
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needHttpsToHttpRetry:Z

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "needHttpsToHttpRetry"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 822
    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "downloadTime"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 823
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->packageName:Ljava/lang/String;

    const-string v2, "packageName"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 824
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->md5:Ljava/lang/String;

    const-string v2, "md5"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 825
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needRetryDelay:Z

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "retryDelay"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 826
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curRetryTime:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "curRetryTime"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 827
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->ordinal()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "retryDelayStatus"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 828
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needDefaultHttpServiceBackUp:Z

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "defaultHttpServiceBackUp"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 829
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseChunkRunnable:Z

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "chunkRunnableReuse"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 830
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayTimeArray:Ljava/lang/String;

    const-string v2, "retryDelayTimeArray"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 831
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needChunkDowngradeRetry:Z

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "chunkDowngradeRetry"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 832
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getBackUpUrlsStr()Ljava/lang/String;

    move-result-object v1

    const-string v2, "backUpUrlsStr"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 833
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlRetryCount:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "backUpUrlRetryCount"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 834
    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "realDownloadTime"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 835
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryScheduleMinutes:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "retryScheduleMinutes"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 836
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needIndependentProcess:Z

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "independentProcess"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 837
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDBJsonDataString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "auxiliaryJsonobjectString"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 838
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->iconUrl:Ljava/lang/String;

    const-string v2, "iconUrl"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 839
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->appVersionCode:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "appVersionCode"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 840
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->taskId:Ljava/lang/String;

    const-string v2, "taskId"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 2464
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "DownloadInfo{id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->id:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", name=\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x27

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", title=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->title:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", url=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", savePath=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public trySwitchToNextBackupUrl()Z
    .locals 4

    .line 1970
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 1971
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    add-int/2addr v0, v1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    .line 1972
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    const/4 v2, 0x0

    if-eqz v0, :cond_3

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    if-gez v0, :cond_1

    goto :goto_1

    .line 1974
    :cond_1
    :goto_0
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-ge v0, v3, :cond_3

    .line 1975
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    iget v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 1976
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 1977
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    return v1

    .line 1980
    :cond_2
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    add-int/2addr v0, v1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    goto :goto_0

    :cond_3
    :goto_1
    return v2
.end method

.method public updateCurRetryTime(I)V
    .locals 1

    .line 1776
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlRetryCount:I

    goto :goto_0

    :cond_0
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryCount:I

    :goto_0
    sub-int/2addr v0, p1

    .line 1777
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curRetryTime:I

    if-gez v0, :cond_1

    const/4 p1, 0x0

    .line 1779
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curRetryTime:I

    :cond_1
    return-void
.end method

.method public updateDownloadTime()V
    .locals 6

    .line 1403
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->startDownloadTime:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    return-void

    .line 1405
    :cond_0
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->startDownloadTime:J

    sub-long/2addr v0, v4

    .line 1406
    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    cmp-long v4, v4, v2

    if-gez v4, :cond_1

    .line 1407
    iput-wide v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    :cond_1
    cmp-long v2, v0, v2

    if-lez v2, :cond_2

    .line 1409
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    :cond_2
    return-void
.end method

.method public updateRealDownloadTime(Z)V
    .locals 7

    .line 1423
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v0

    .line 1424
    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realStartDownloadTime:J

    const-wide/16 v4, 0x0

    cmp-long v6, v2, v4

    if-gtz v6, :cond_1

    if-eqz p1, :cond_0

    .line 1426
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realStartDownloadTime:J

    :cond_0
    return-void

    :cond_1
    sub-long v2, v0, v2

    if-eqz p1, :cond_2

    .line 1433
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realStartDownloadTime:J

    goto :goto_0

    .line 1435
    :cond_2
    iput-wide v4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realStartDownloadTime:J

    :goto_0
    cmp-long p1, v2, v4

    if-lez p1, :cond_3

    .line 1439
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    add-long/2addr v0, v2

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    :cond_3
    return-void
.end method

.method public updateRealStartDownloadTime()V
    .locals 4

    .line 1413
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realStartDownloadTime:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    .line 1414
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realStartDownloadTime:J

    :cond_0
    return-void
.end method

.method public updateSpData()V
    .locals 3

    .line 2320
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    if-nez v0, :cond_0

    return-void

    .line 2323
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    const-string v2, "sp_download_info"

    .line 2325
    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 2326
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->spData:Lorg/json/JSONObject;

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_1
    return-void
.end method

.method public updateStartDownloadTime()V
    .locals 2

    .line 1202
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->startDownloadTime:J

    .line 1203
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    const-string v1, "dbjson_last_start_download_time"

    invoke-virtual {p0, v1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    .line 2220
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->id:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2221
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->name:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2222
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->title:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2223
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->url:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2224
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->savePath:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2225
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->tempPath:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2226
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->onlyWifi:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2227
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extra:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2228
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->extraHeaders:Ljava/util/List;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeTypedList(Ljava/util/List;)V

    .line 2229
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->maxBytes:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2230
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->outIp:[Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeStringArray([Ljava/lang/String;)V

    .line 2231
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->outSize:[I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeIntArray([I)V

    .line 2232
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryCount:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2233
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlRetryCount:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2234
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->force:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2235
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needPostProgress:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2236
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->maxProgressCount:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2237
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->minProgressTimeMsInterval:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2238
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrls:Ljava/util/List;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeStringList(Ljava/util/List;)V

    .line 2239
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotification:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2240
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->mimeType:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2241
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needHttpsToHttpRetry:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2242
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->packageName:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2243
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->md5:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2244
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needRetryDelay:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2245
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needDefaultHttpServiceBackUp:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2246
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseChunkRunnable:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2247
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayTimeArray:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2248
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->eTag:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2249
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curRetryTime:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2250
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryDelayStatus:Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/constants/RetryDelayStatus;->ordinal()I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2251
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needReuseFirstConnection:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2252
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forceIgnoreRecommendSize:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2253
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->networkQuality:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2254
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->curBackUpUrlIndex:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2255
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->notificationVisibility:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2256
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkCount:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2257
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 2258
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->totalBytes:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 2259
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRealStatus()I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2260
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->downloadTime:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 2261
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->realDownloadTime:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 2262
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->backUpUrlUsed:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2263
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpsToHttpRetryUsed:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2264
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->errorBytesLog:Ljava/lang/StringBuffer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, ""

    :goto_0
    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2265
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->autoResumed:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2266
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotificationForAutoResumed:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2267
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->showNotificationForNetworkResumed:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2268
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->forbiddenBackupUrls:Ljava/util/List;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeStringList(Ljava/util/List;)V

    .line 2269
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needIndependentProcess:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2270
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ordinal()I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2271
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->headConnectionAvailable:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2272
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpStatusCode:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2273
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->httpStatusMessage:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2274
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isSaveTempFile:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2275
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isForbiddenRetryed:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2276
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->addListenerToSameTask:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2277
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->needChunkDowngradeRetry:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2278
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->chunkDowngradeRetryUsed:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2279
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->failedException:Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-virtual {p1, v0, p2}, Landroid/os/Parcel;->writeParcelable(Landroid/os/Parcelable;I)V

    .line 2280
    iget p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->retryScheduleMinutes:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 2281
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDBJsonDataString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2282
    iget-boolean p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->supportPartial:Z

    int-to-byte p2, p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByte(B)V

    .line 2283
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->iconUrl:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2284
    iget p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->appVersionCode:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 2285
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->taskId:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 2286
    iget-boolean p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->expiredRedownload:Z

    int-to-byte p2, p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByte(B)V

    .line 2287
    iget-boolean p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->deleteCacheIfCheckFailed:Z

    int-to-byte p2, p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByte(B)V

    .line 2288
    iget-boolean p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->successByCache:Z

    int-to-byte p2, p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByte(B)V

    return-void
.end method
