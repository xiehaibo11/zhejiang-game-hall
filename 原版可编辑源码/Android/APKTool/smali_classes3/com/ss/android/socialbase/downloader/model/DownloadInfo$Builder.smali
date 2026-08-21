.class public Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Builder"
.end annotation


# instance fields
.field private addListenerToSameTask:Z

.field private appVersionCode:I

.field private autoInstall:Z

.field private autoResumed:Z

.field private backUpUrlRetryCount:I

.field private backUpUrls:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private deleteCacheIfCheckFailed:Z

.field private distinctDirectory:Z

.field private downloadSetting:Lorg/json/JSONObject;

.field private enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

.field private executorGroup:I

.field private expectFileLength:J

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

.field private force:Z

.field private headConnectionAvailable:Z

.field private iconUrl:Ljava/lang/String;

.field private ignoreDataVerify:Z

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

.field private onlyWifi:Z

.field private openLimitSpeed:Z

.field private outIp:[Ljava/lang/String;

.field private outSize:[I

.field private packageName:Ljava/lang/String;

.field private retryCount:I

.field private retryDelayTimeArray:Ljava/lang/String;

.field private savePath:Ljava/lang/String;

.field private showNotification:Z

.field private showNotificationForAutoResumed:Z

.field private tempPath:Ljava/lang/String;

.field private throttleNetSpeed:J

.field private title:Ljava/lang/String;

.field private ttnetProtectTimeout:J

.field private url:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 2676
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 2610
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needPostProgress:Z

    .line 2615
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->autoInstall:Z

    .line 2620
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needDefaultHttpServiceBackUp:Z

    .line 2629
    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_NONE:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    .line 2654
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needSDKMonitor:Z

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    .line 2679
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 2610
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needPostProgress:Z

    .line 2615
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->autoInstall:Z

    .line 2620
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needDefaultHttpServiceBackUp:Z

    .line 2629
    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_NONE:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    .line 2654
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needSDKMonitor:Z

    .line 2680
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->url:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$000(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->name:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$100(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->title:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$1000(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)I
    .locals 0

    .line 2594
    iget p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->retryCount:I

    return p0
.end method

.method static synthetic access$1100(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)I
    .locals 0

    .line 2594
    iget p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->backUpUrlRetryCount:I

    return p0
.end method

.method static synthetic access$1200(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->force:Z

    return p0
.end method

.method static synthetic access$1300(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)[Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->outIp:[Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$1400(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)[I
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->outSize:[I

    return-object p0
.end method

.method static synthetic access$1500(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needPostProgress:Z

    return p0
.end method

.method static synthetic access$1600(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)I
    .locals 0

    .line 2594
    iget p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->maxProgressCount:I

    return p0
.end method

.method static synthetic access$1700(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)I
    .locals 0

    .line 2594
    iget p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->minProgressTimeMsInterval:I

    return p0
.end method

.method static synthetic access$1800(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/util/List;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->backUpUrls:Ljava/util/List;

    return-object p0
.end method

.method static synthetic access$1900(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->showNotification:Z

    return p0
.end method

.method static synthetic access$200(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->url:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$2000(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->mimeType:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$2100(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needHttpsToHttpRetry:Z

    return p0
.end method

.method static synthetic access$2200(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needRetryDelay:Z

    return p0
.end method

.method static synthetic access$2300(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->retryDelayTimeArray:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$2400(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->autoResumed:Z

    return p0
.end method

.method static synthetic access$2500(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->showNotificationForAutoResumed:Z

    return p0
.end method

.method static synthetic access$2600(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needDefaultHttpServiceBackUp:Z

    return p0
.end method

.method static synthetic access$2700(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needReuseChunkRunnable:Z

    return p0
.end method

.method static synthetic access$2800(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->packageName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$2900(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->md5:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$300(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->savePath:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$3000(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needReuseFirstConnection:Z

    return p0
.end method

.method static synthetic access$3100(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needIndependentProcess:Z

    return p0
.end method

.method static synthetic access$3200(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Lcom/ss/android/socialbase/downloader/constants/EnqueueType;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    return-object p0
.end method

.method static synthetic access$3300(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->headConnectionAvailable:Z

    return p0
.end method

.method static synthetic access$3400(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->ignoreDataVerify:Z

    return p0
.end method

.method static synthetic access$3500(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->addListenerToSameTask:Z

    return p0
.end method

.method static synthetic access$3600(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needChunkDowngradeRetry:Z

    return p0
.end method

.method static synthetic access$3700(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->iconUrl:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$3800(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)J
    .locals 2

    .line 2594
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->throttleNetSpeed:J

    return-wide v0
.end method

.method static synthetic access$3900(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->openLimitSpeed:Z

    return p0
.end method

.method static synthetic access$400(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->tempPath:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$4000(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Lorg/json/JSONObject;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->downloadSetting:Lorg/json/JSONObject;

    return-object p0
.end method

.method static synthetic access$4100(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)J
    .locals 2

    .line 2594
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->expectFileLength:J

    return-wide v0
.end method

.method static synthetic access$4200(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)I
    .locals 0

    .line 2594
    iget p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->executorGroup:I

    return p0
.end method

.method static synthetic access$4300(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->autoInstall:Z

    return p0
.end method

.method static synthetic access$4400(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needSDKMonitor:Z

    return p0
.end method

.method static synthetic access$4500(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->monitorScene:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$4600(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)[I
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->extraMonitorStatus:[I

    return-object p0
.end method

.method static synthetic access$4700(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->expiredRedownload:Z

    return p0
.end method

.method static synthetic access$4800(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->deleteCacheIfCheckFailed:Z

    return p0
.end method

.method static synthetic access$4900(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)J
    .locals 2

    .line 2594
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->ttnetProtectTimeout:J

    return-wide v0
.end method

.method static synthetic access$500(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->distinctDirectory:Z

    return p0
.end method

.method static synthetic access$600(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/lang/String;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->extra:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$700(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Z
    .locals 0

    .line 2594
    iget-boolean p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->onlyWifi:Z

    return p0
.end method

.method static synthetic access$800(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)Ljava/util/List;
    .locals 0

    .line 2594
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->extraHeaders:Ljava/util/List;

    return-object p0
.end method

.method static synthetic access$900(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;)I
    .locals 0

    .line 2594
    iget p0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->maxBytes:I

    return p0
.end method


# virtual methods
.method public addListenerToSameTask(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2865
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->addListenerToSameTask:Z

    return-object p0
.end method

.method public autoResumed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2790
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->autoResumed:Z

    return-object p0
.end method

.method public backUpUrlRetryCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2745
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->backUpUrlRetryCount:I

    return-object p0
.end method

.method public backUpUrls(Ljava/util/List;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;"
        }
    .end annotation

    .line 2770
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->backUpUrls:Ljava/util/List;

    return-object p0
.end method

.method public build()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 2

    .line 2935
    new-instance v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;Lcom/ss/android/socialbase/downloader/model/DownloadInfo$1;)V

    return-object v0
.end method

.method public deleteCacheIfCheckFailed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2915
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->deleteCacheIfCheckFailed:Z

    return-object p0
.end method

.method public distinctDirectory(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2925
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->distinctDirectory:Z

    return-object p0
.end method

.method public downloadSetting(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2870
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->downloadSetting:Lorg/json/JSONObject;

    return-object p0
.end method

.method public enqueueType(Lcom/ss/android/socialbase/downloader/constants/EnqueueType;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2845
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->enqueueType:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    return-object p0
.end method

.method public executorGroup(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2895
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->executorGroup:I

    return-object p0
.end method

.method public expectFileLength(J)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2820
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->expectFileLength:J

    return-object p0
.end method

.method public expiredRedownload(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2910
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->expiredRedownload:Z

    return-object p0
.end method

.method public extra(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2709
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->extra:Ljava/lang/String;

    return-object p0
.end method

.method public extraHeaders(Ljava/util/List;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;)",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;"
        }
    .end annotation

    .line 2719
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->extraHeaders:Ljava/util/List;

    return-object p0
.end method

.method public extraMonitorStatus([I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2885
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->extraMonitorStatus:[I

    return-object p0
.end method

.method public force(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2750
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->force:Z

    return-object p0
.end method

.method public headConnectionAvailable(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2850
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->headConnectionAvailable:Z

    return-object p0
.end method

.method public iconUrl(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2890
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->iconUrl:Ljava/lang/String;

    return-object p0
.end method

.method public ignoreDataVerify(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2855
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->ignoreDataVerify:Z

    return-object p0
.end method

.method public isOpenLimitSpeed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2905
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->openLimitSpeed:Z

    return-object p0
.end method

.method public maxBytes(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2724
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->maxBytes:I

    return-object p0
.end method

.method public maxProgressCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2760
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->maxProgressCount:I

    return-object p0
.end method

.method public md5(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2815
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->md5:Ljava/lang/String;

    return-object p0
.end method

.method public mimeType(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2775
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->mimeType:Ljava/lang/String;

    return-object p0
.end method

.method public minProgressTimeMsInterval(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2765
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->minProgressTimeMsInterval:I

    return-object p0
.end method

.method public monitorScene(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2880
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->monitorScene:Ljava/lang/String;

    return-object p0
.end method

.method public name(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2684
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->name:Ljava/lang/String;

    return-object p0
.end method

.method public needChunkDowngradeRetry(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2860
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needChunkDowngradeRetry:Z

    return-object p0
.end method

.method public needDefaultHttpServiceBackUp(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2800
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needDefaultHttpServiceBackUp:Z

    return-object p0
.end method

.method public needHttpsToHttpRetry(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2780
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needHttpsToHttpRetry:Z

    return-object p0
.end method

.method public needIndependentProcess(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2840
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needIndependentProcess:Z

    return-object p0
.end method

.method public needPostProgress(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2755
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needPostProgress:Z

    return-object p0
.end method

.method public needRetryDelay(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2825
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needRetryDelay:Z

    return-object p0
.end method

.method public needReuseChunkRunnable(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2805
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needReuseChunkRunnable:Z

    return-object p0
.end method

.method public needReuseFirstConnection(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2835
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needReuseFirstConnection:Z

    return-object p0
.end method

.method public needSDKMonitor(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2875
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->needSDKMonitor:Z

    return-object p0
.end method

.method public onlyWifi(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2714
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->onlyWifi:Z

    return-object p0
.end method

.method public outIp([Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2730
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->outIp:[Ljava/lang/String;

    return-object p0
.end method

.method public outSize([I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2735
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->outSize:[I

    return-object p0
.end method

.method public packageName(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2810
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->packageName:Ljava/lang/String;

    return-object p0
.end method

.method public retryCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2740
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->retryCount:I

    return-object p0
.end method

.method public retryDelayTimeArray(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2830
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->retryDelayTimeArray:Ljava/lang/String;

    return-object p0
.end method

.method public savePath(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2699
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->savePath:Ljava/lang/String;

    return-object p0
.end method

.method public setAutoInstall(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2930
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->autoInstall:Z

    return-object p0
.end method

.method public showNotification(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2785
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->showNotification:Z

    return-object p0
.end method

.method public showNotificationForAutoResumed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2795
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->showNotificationForAutoResumed:Z

    return-object p0
.end method

.method public tempPath(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2704
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->tempPath:Ljava/lang/String;

    return-object p0
.end method

.method public throttleNetSpeed(J)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2900
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->throttleNetSpeed:J

    return-object p0
.end method

.method public title(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2689
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->title:Ljava/lang/String;

    return-object p0
.end method

.method public ttnetProtectTimeout(J)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2920
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->ttnetProtectTimeout:J

    return-object p0
.end method

.method public url(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;
    .locals 0

    .line 2694
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->url:Ljava/lang/String;

    return-object p0
.end method
