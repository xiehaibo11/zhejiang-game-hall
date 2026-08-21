.class public Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String;

.field private static volatile instance:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

.field public static volatile isWifi:Z

.field private static sPreviousBytes:J


# instance fields
.field private final mHandler:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;

.field private mLastTimeReading:J

.field private final mNetTrafficManager:Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;

.field private final mSamplingCounter:Ljava/util/concurrent/atomic/AtomicInteger;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 21
    const-class v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->TAG:Ljava/lang/String;

    const-wide/16 v0, -0x1

    .line 34
    sput-wide v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->sPreviousBytes:J

    const/4 v0, 0x0

    .line 35
    sput-object v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->instance:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 52
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 53
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;->getInstance()Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mNetTrafficManager:Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;

    .line 54
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mSamplingCounter:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 55
    new-instance v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;

    invoke-static {}, Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog;->getThreadLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;-><init>(Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mHandler:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;

    return-void
.end method

.method public static getAllRxBytesWifi()J
    .locals 4

    .line 90
    invoke-static {}, Landroid/net/TrafficStats;->getTotalRxBytes()J

    move-result-wide v0

    invoke-static {}, Landroid/net/TrafficStats;->getMobileRxBytes()J

    move-result-wide v2

    sub-long/2addr v0, v2

    return-wide v0
.end method

.method public static getInstance()Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;
    .locals 2

    .line 43
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->instance:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    if-nez v0, :cond_1

    .line 44
    const-class v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    monitor-enter v0

    .line 45
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->instance:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    if-nez v1, :cond_0

    .line 46
    new-instance v1, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->instance:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    .line 47
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 49
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->instance:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;

    return-object v0
.end method

.method public static updateWifiStatus()V
    .locals 1

    .line 94
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isWifi(Landroid/content/Context;)Z

    move-result v0

    sput-boolean v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->isWifi:Z

    return-void
.end method


# virtual methods
.method protected addFinalSample()V
    .locals 2

    .line 133
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->addSample()V

    const-wide/16 v0, -0x1

    .line 134
    sput-wide v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->sPreviousBytes:J

    return-void
.end method

.method protected addSample()V
    .locals 9

    .line 104
    :try_start_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->updateWifiStatus()V

    .line 107
    sget-boolean v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->isWifi:Z

    if-eqz v0, :cond_0

    .line 108
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->getAllRxBytesWifi()J

    move-result-wide v0

    goto :goto_0

    .line 110
    :cond_0
    invoke-static {}, Landroid/net/TrafficStats;->getMobileRxBytes()J

    move-result-wide v0

    .line 112
    :goto_0
    sget-wide v2, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->sPreviousBytes:J

    sub-long v2, v0, v2

    .line 113
    sget-wide v4, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->sPreviousBytes:J

    const-wide/16 v6, 0x0

    cmp-long v4, v4, v6

    if-ltz v4, :cond_1

    .line 114
    monitor-enter p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 115
    :try_start_1
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v4

    .line 116
    iget-object v6, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mNetTrafficManager:Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;

    iget-wide v7, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mLastTimeReading:J

    sub-long v7, v4, v7

    invoke-virtual {v6, v2, v3, v7, v8}, Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;->addBandwidth(JJ)V

    .line 118
    iput-wide v4, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mLastTimeReading:J

    .line 119
    monitor-exit p0

    goto :goto_1

    :catchall_0
    move-exception v0

    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v0

    .line 121
    :cond_1
    :goto_1
    sput-wide v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->sPreviousBytes:J
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 123
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    return-void
.end method

.method public isSampling()Z
    .locals 1

    .line 141
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mSamplingCounter:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public startSampling()V
    .locals 3

    .line 63
    :try_start_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "startSampling: mSamplingCounter = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mSamplingCounter:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 64
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mSamplingCounter:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->getAndIncrement()I

    move-result v0

    if-nez v0, :cond_0

    .line 65
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mHandler:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;->startSamplingThread()V

    .line 66
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mLastTimeReading:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public stopSampling()V
    .locals 3

    .line 79
    :try_start_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "stopSampling: mSamplingCounter = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mSamplingCounter:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 80
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mSamplingCounter:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    move-result v0

    if-nez v0, :cond_0

    .line 81
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->mHandler:Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler$SamplingHandler;->stopSamplingThread()V

    .line 82
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/network/DeviceBandwidthSampler;->addFinalSample()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method
