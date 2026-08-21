.class public Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;
    }
.end annotation


# static fields
.field public static final NET_LIB_DEFAULT:I = 0x0

.field public static final NET_LIB_HOST:I = 0x1

.field private static volatile appContext:Landroid/content/Context;

.field private static volatile chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

.field private static volatile chunkCntCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

.field private static volatile chunkDownloadExecutor:Ljava/util/concurrent/ExecutorService;

.field private static volatile cpuThreadExecutor:Ljava/util/concurrent/ExecutorService;

.field private static volatile dbThreadExecutor:Ljava/util/concurrent/ExecutorService;

.field private static volatile defaultDownloadDns:Lcom/ss/android/socialbase/downloader/network/IDownloadDns;

.field private static volatile defaultHeadHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

.field private static volatile defaultHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

.field private static volatile downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

.field private static final downloadCacheSyncStatusListeners:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadCacheSyncStatusListener;",
            ">;"
        }
    .end annotation
.end field

.field private static final downloadCompleteHandlers:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile downloadDns:Lcom/ss/android/socialbase/downloader/network/IDownloadDns;

.field private static volatile downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

.field private static downloadEventListener:Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;

.field private static downloadExpSwitchCode:I

.field private static volatile downloadInMultiProcess:Z

.field private static volatile downloadLaunchHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;

.field private static volatile downloadMonitorListener:Lcom/ss/android/socialbase/downloader/monitor/IDownloadMonitorListener;

.field private static volatile downloadReceiver:Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;

.field private static volatile downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

.field private static volatile downloadSettings:Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;

.field private static final downloadTaskExecuteListeners:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadTaskExecuteListener;",
            ">;"
        }
    .end annotation
.end field

.field private static final fixedCPUPoolSize:I

.field private static final fixedDBPoolSize:I

.field private static final fixedIOPoolSize:I

.field private static final fixedMIXPoolSize:I

.field private static volatile hasInit:Z

.field private static volatile headHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

.field private static volatile httpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

.field private static httpServiceInit:Z

.field private static volatile iTTNetHandler:Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;

.field private static volatile idGenerator:Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;

.field private static volatile independentDownloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

.field private static volatile independentHolderCreator:Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;

.field private static volatile ioThreadExecutor:Ljava/util/concurrent/ExecutorService;

.field private static isReceiverRegistered:Z

.field private static maxDownloadPoolSize:I

.field private static volatile mixApkDownloadExecutor:Ljava/util/concurrent/ExecutorService;

.field private static volatile mixDefaultDownloadExecutor:Ljava/util/concurrent/ExecutorService;

.field private static volatile mixFrequentDownloadExecutor:Ljava/util/concurrent/ExecutorService;

.field private static volatile monitorConfig:Lcom/ss/android/socialbase/downloader/downloader/IMonitorConfig;

.field private static needAutoRefreshUnSuccessTask:Z

.field private static notAutoRebootService:Z

.field private static volatile notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

.field private static volatile okHttpDispatcherExecutor:Ljava/util/concurrent/ExecutorService;

.field private static volatile processCallbacks:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;",
            ">;"
        }
    .end annotation
.end field

.field private static reserveWifiStatusListener:Lcom/ss/android/socialbase/downloader/downloader/IReserveWifiStatusListener;

.field private static volatile retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

.field private static volatile sOkHttpClient:Lokhttp3/OkHttpClient;

.field private static writeBufferSize:I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 106
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->processCallbacks:Ljava/util/List;

    const/4 v0, 0x0

    .line 107
    sput-boolean v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadInMultiProcess:Z

    const/4 v1, 0x0

    .line 108
    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->sOkHttpClient:Lokhttp3/OkHttpClient;

    .line 113
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCompleteHandlers:Ljava/util/List;

    .line 116
    sput-boolean v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->isReceiverRegistered:Z

    .line 118
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Runtime;->availableProcessors()I

    move-result v1

    const/4 v2, 0x1

    add-int/2addr v1, v2

    sput v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedCPUPoolSize:I

    .line 119
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Runtime;->availableProcessors()I

    move-result v1

    mul-int/lit8 v1, v1, 0x2

    add-int/2addr v1, v2

    sput v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedIOPoolSize:I

    .line 120
    sget v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedCPUPoolSize:I

    sput v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedMIXPoolSize:I

    .line 121
    sput v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedDBPoolSize:I

    const/16 v1, 0x2000

    .line 122
    sput v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->writeBufferSize:I

    .line 124
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCacheSyncStatusListeners:Ljava/util/List;

    .line 125
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadTaskExecuteListeners:Ljava/util/List;

    .line 128
    sput-boolean v2, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->needAutoRefreshUnSuccessTask:Z

    .line 129
    sput-boolean v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->notAutoRebootService:Z

    .line 144
    sput-boolean v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->hasInit:Z

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 146
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static addDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)V
    .locals 2

    .line 360
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCompleteHandlers:Ljava/util/List;

    monitor-enter v0

    if-eqz p0, :cond_1

    .line 361
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCompleteHandlers:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 363
    :cond_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCompleteHandlers:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 364
    monitor-exit v0

    return-void

    .line 362
    :cond_1
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    .line 364
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static addProcessCallback(Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;)V
    .locals 2

    if-nez p0, :cond_0

    return-void

    .line 348
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->processCallbacks:Ljava/util/List;

    monitor-enter v0

    .line 349
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->processCallbacks:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 350
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method static declared-synchronized coverComponent(Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;)V
    .locals 1

    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 212
    :try_start_0
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setDownloadBuilder(Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 213
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static createDownloadClientBuilder()Lokhttp3/OkHttpClient$Builder;
    .locals 5

    .line 884
    new-instance v0, Lokhttp3/OkHttpClient$Builder;

    invoke-direct {v0}, Lokhttp3/OkHttpClient$Builder;-><init>()V

    .line 885
    sget-object v1, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v2, 0x7530

    invoke-virtual {v0, v2, v3, v1}, Lokhttp3/OkHttpClient$Builder;->connectTimeout(JLjava/util/concurrent/TimeUnit;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v1

    sget-object v4, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    .line 886
    invoke-virtual {v1, v2, v3, v4}, Lokhttp3/OkHttpClient$Builder;->readTimeout(JLjava/util/concurrent/TimeUnit;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v1

    sget-object v4, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    .line 887
    invoke-virtual {v1, v2, v3, v4}, Lokhttp3/OkHttpClient$Builder;->writeTimeout(JLjava/util/concurrent/TimeUnit;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v1

    const/4 v2, 0x1

    .line 888
    invoke-virtual {v1, v2}, Lokhttp3/OkHttpClient$Builder;->retryOnConnectionFailure(Z)Lokhttp3/OkHttpClient$Builder;

    move-result-object v1

    .line 889
    invoke-virtual {v1, v2}, Lokhttp3/OkHttpClient$Builder;->followRedirects(Z)Lokhttp3/OkHttpClient$Builder;

    move-result-object v1

    sget-object v2, Lokhttp3/Protocol;->HTTP_1_1:Lokhttp3/Protocol;

    .line 890
    invoke-static {v2}, Ljava/util/Collections;->singletonList(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v2

    invoke-virtual {v1, v2}, Lokhttp3/OkHttpClient$Builder;->protocols(Ljava/util/List;)Lokhttp3/OkHttpClient$Builder;

    .line 891
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->okHttpDispatcherExecutor:Ljava/util/concurrent/ExecutorService;

    if-eqz v1, :cond_0

    .line 892
    new-instance v1, Lokhttp3/Dispatcher;

    sget-object v2, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->okHttpDispatcherExecutor:Ljava/util/concurrent/ExecutorService;

    invoke-direct {v1, v2}, Lokhttp3/Dispatcher;-><init>(Ljava/util/concurrent/ExecutorService;)V

    invoke-virtual {v0, v1}, Lokhttp3/OkHttpClient$Builder;->dispatcher(Lokhttp3/Dispatcher;)Lokhttp3/OkHttpClient$Builder;

    :cond_0
    return-object v0
.end method

.method public static downloadWithConnection(ZILjava/lang/String;Ljava/lang/String;Ljava/util/List;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;
    .locals 15
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(ZI",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;IZ",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ")",
            "Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 467
    invoke-static/range {p3 .. p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-nez p4, :cond_0

    .line 469
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    goto :goto_0

    :cond_0
    move-object/from16 v0, p4

    .line 471
    :goto_0
    new-instance v1, Lcom/ss/android/socialbase/downloader/model/HttpHeader;

    const-string v2, "ss_d_request_host_ip_114"

    move-object/from16 v10, p3

    invoke-direct {v1, v2, v10}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const/4 v1, 0x1

    move v14, v1

    move-object v1, v0

    move v0, v14

    goto :goto_1

    :cond_1
    move-object/from16 v10, p3

    if-nez p0, :cond_2

    const/4 v0, 0x2

    move-object/from16 v1, p4

    goto :goto_1

    :cond_2
    move-object/from16 v1, p4

    move/from16 v0, p5

    .line 487
    :goto_1
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadNetLibs(I)[I

    move-result-object v2

    .line 488
    array-length v11, v2

    const/4 v0, 0x0

    const/4 v12, 0x0

    move v13, v0

    move-object v0, v12

    :goto_2
    if-ge v13, v11, :cond_6

    aget v7, v2, v13

    move/from16 v3, p1

    move-object/from16 v4, p2

    move-object/from16 v5, p3

    move-object v6, v1

    move/from16 v8, p6

    move-object/from16 v9, p7

    .line 490
    :try_start_0
    invoke-static/range {v3 .. v9}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadWithConnection2(ILjava/lang/String;Ljava/lang/String;Ljava/util/List;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v3, :cond_5

    return-object v3

    :catch_0
    move-exception v0

    move-object v3, v0

    .line 495
    invoke-virtual/range {p7 .. p7}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isExpiredRedownload()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isResponseCode304Error(Ljava/lang/Throwable;)Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->hasDownloadCacheHeader(Ljava/util/List;)Z

    move-result v0

    if-nez v0, :cond_3

    goto :goto_3

    .line 497
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "dcach::http exception 304, throw excepiton, not retry "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;)V

    .line 498
    throw v3

    :cond_4
    :goto_3
    move-object v0, v3

    :cond_5
    add-int/lit8 v13, v13, 0x1

    goto :goto_2

    :cond_6
    if-nez v0, :cond_7

    return-object v12

    .line 504
    :cond_7
    throw v0
.end method

.method public static downloadWithConnection(ZILjava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(ZI",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;)",
            "Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    const/4 v3, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    move v0, p0

    move v1, p1

    move-object v2, p2

    move-object v4, p3

    .line 459
    invoke-static/range {v0 .. v7}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadWithConnection(ZILjava/lang/String;Ljava/lang/String;Ljava/util/List;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    move-result-object p0

    return-object p0
.end method

.method private static downloadWithConnection2(ILjava/lang/String;Ljava/lang/String;Ljava/util/List;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;IZ",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ")",
            "Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Ljava/io/IOException;
        }
    .end annotation

    move v7, p4

    const/4 v0, 0x1

    if-ne v7, v0, :cond_0

    .line 512
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    move-result-object v0

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDefaultHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    move-result-object v0

    :goto_0
    if-eqz v0, :cond_4

    const/4 v1, 0x0

    const/4 v8, 0x0

    const-wide/16 v2, 0x0

    if-eqz p5, :cond_1

    .line 522
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    move-object v5, p1

    goto :goto_3

    :catch_0
    move-exception v0

    move-object v5, p1

    goto :goto_2

    :cond_1
    :goto_1
    move v4, p0

    move-object v5, p1

    move-object v6, p3

    .line 524
    :try_start_1
    invoke-interface {v0, p0, p1, p3}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;->downloadWithConnection(ILjava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    move-result-object v0
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p5, :cond_2

    .line 531
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    sub-long/2addr v9, v2

    const-string v6, "get"

    move-object v1, v0

    move-object v2, p1

    move-object v3, p2

    move-wide v4, v9

    move v7, p4

    move-object/from16 v9, p6

    invoke-static/range {v1 .. v9}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorDownloadConnect(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;ILjava/io/IOException;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :cond_2
    return-object v0

    :catchall_1
    move-exception v0

    goto :goto_3

    :catch_1
    move-exception v0

    :goto_2
    move-object v4, v0

    .line 528
    :try_start_2
    throw v4
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :catchall_2
    move-exception v0

    move-object v8, v4

    :goto_3
    if-eqz p5, :cond_3

    .line 531
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    sub-long/2addr v9, v2

    const-string v6, "get"

    move-object v2, p1

    move-object v3, p2

    move-wide v4, v9

    move v7, p4

    move-object/from16 v9, p6

    invoke-static/range {v1 .. v9}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorDownloadConnect(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;ILjava/io/IOException;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :cond_3
    throw v0

    .line 514
    :cond_4
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v1, 0x3fe

    new-instance v2, Ljava/io/IOException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "httpService not exist, netLib = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    invoke-direct {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    throw v0
.end method

.method public static downloadWithHeadConnection(Ljava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;)",
            "Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 538
    invoke-static {p0, p1, v0, v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadWithHeadConnection(Ljava/lang/String;Ljava/util/List;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    move-result-object p0

    return-object p0
.end method

.method public static downloadWithHeadConnection(Ljava/lang/String;Ljava/util/List;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;IZ",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ")",
            "Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 546
    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadNetLibs(I)[I

    move-result-object p2

    .line 547
    array-length v0, p2

    const/4 v1, 0x0

    const/4 v2, 0x0

    move-object v3, v1

    :goto_0
    if-ge v2, v0, :cond_1

    aget v4, p2, v2

    .line 549
    :try_start_0
    invoke-static {p0, p1, v4, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadWithHeadConnection2(Ljava/lang/String;Ljava/util/List;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    move-result-object v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v4, :cond_0

    return-object v4

    :catch_0
    move-exception v3

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    if-nez v3, :cond_2

    return-object v1

    .line 558
    :cond_2
    throw v3
.end method

.method private static downloadWithHeadConnection2(Ljava/lang/String;Ljava/util/List;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;IZ",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ")",
            "Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Ljava/io/IOException;
        }
    .end annotation

    const/4 v0, 0x1

    if-ne p2, v0, :cond_0

    .line 566
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getHeadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

    move-result-object v0

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDefaultHeadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

    move-result-object v0

    :goto_0
    if-eqz v0, :cond_4

    const/4 v1, 0x0

    const/4 v9, 0x0

    const-wide/16 v2, 0x0

    if-eqz p3, :cond_1

    .line 576
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 578
    :cond_1
    invoke-interface {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;->downloadWithConnection(Ljava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    move-result-object p1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p3, :cond_2

    const/4 v4, 0x0

    .line 585
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sub-long v5, v0, v2

    const-string v7, "head"

    move-object v2, p1

    move-object v3, p0

    move v8, p2

    move-object v10, p4

    invoke-static/range {v2 .. v10}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorDownloadConnect(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;ILjava/io/IOException;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :cond_2
    return-object p1

    :catchall_0
    move-exception p1

    move-object v8, v9

    goto :goto_1

    :catch_0
    move-exception p1

    .line 582
    :try_start_1
    throw p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    move-exception v0

    move-object v8, p1

    move-object p1, v0

    :goto_1
    if-eqz p3, :cond_3

    const/4 p3, 0x0

    .line 585
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long/2addr v4, v2

    const-string v6, "head"

    move-object v2, p0

    move-object v3, p3

    move v7, p2

    move-object v9, p4

    invoke-static/range {v1 .. v9}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorDownloadConnect(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;ILjava/io/IOException;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :cond_3
    throw p1

    .line 568
    :cond_4
    new-instance p0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 p1, 0x3fe

    new-instance p3, Ljava/io/IOException;

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "httpService not exist, netLib = "

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p3, p2}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    invoke-direct {p0, p1, p3}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    throw p0
.end method

.method public static ensureOPPO()V
    .locals 1

    .line 1030
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->LOWER_OPPO:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "oppo"

    .line 1031
    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->LOWER_OPPO:Ljava/lang/String;

    .line 1032
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->LOWER_OPPO:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->UPPER_OPPO:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public static getAlarmManager()Landroid/app/AlarmManager;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public static declared-synchronized getAppContext()Landroid/content/Context;
    .locals 2

    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 1128
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->appContext:Landroid/content/Context;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;
    .locals 11

    .line 768
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->cpuThreadExecutor:Ljava/util/concurrent/ExecutorService;

    if-nez v0, :cond_1

    .line 769
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 770
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->cpuThreadExecutor:Ljava/util/concurrent/ExecutorService;

    if-nez v1, :cond_0

    .line 771
    new-instance v1, Ljava/util/concurrent/ThreadPoolExecutor;

    sget v3, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedCPUPoolSize:I

    sget v4, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedCPUPoolSize:I

    const-wide/16 v5, 0xf

    sget-object v7, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v8, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v8}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    new-instance v9, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;

    const-string v2, "DownloadThreadPool-cpu-fixed"

    const/4 v10, 0x1

    invoke-direct {v9, v2, v10}, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;-><init>(Ljava/lang/String;Z)V

    move-object v2, v1

    invoke-direct/range {v2 .. v9}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 774
    :try_start_1
    invoke-virtual {v1, v10}, Ljava/util/concurrent/ThreadPoolExecutor;->allowCoreThreadTimeOut(Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 776
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 779
    :goto_0
    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->cpuThreadExecutor:Ljava/util/concurrent/ExecutorService;

    .line 781
    :cond_0
    monitor-exit v0

    goto :goto_1

    :catchall_1
    move-exception v1

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw v1

    .line 783
    :cond_1
    :goto_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->cpuThreadExecutor:Ljava/util/concurrent/ExecutorService;

    return-object v0
.end method

.method public static getChunkAdjustCalculator()Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;
    .locals 2

    .line 1092
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    if-nez v0, :cond_1

    .line 1093
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 1094
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    if-nez v1, :cond_0

    .line 1095
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/DefaultChunkAdjustCalculator;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/impls/DefaultChunkAdjustCalculator;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    .line 1096
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 1098
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    return-object v0
.end method

.method public static getChunkCntCalculator()Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;
    .locals 2

    .line 1067
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkCntCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    if-nez v0, :cond_1

    .line 1068
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 1069
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkCntCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    if-nez v1, :cond_0

    .line 1070
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/DefaultChunkCntCalculator;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/impls/DefaultChunkCntCalculator;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkCntCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    .line 1071
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 1073
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkCntCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    return-object v0
.end method

.method public static getChunkDownloadThreadExecutorService()Ljava/util/concurrent/ExecutorService;
    .locals 11

    .line 831
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    if-nez v0, :cond_1

    .line 832
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 833
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    if-nez v1, :cond_0

    .line 834
    new-instance v1, Ljava/util/concurrent/ThreadPoolExecutor;

    sget v3, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedIOPoolSize:I

    sget v4, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedIOPoolSize:I

    const-wide/16 v5, 0xf

    sget-object v7, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v8, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v8}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    new-instance v9, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;

    const-string v2, "DownloadThreadPool-chunk-fixed"

    const/4 v10, 0x1

    invoke-direct {v9, v2, v10}, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;-><init>(Ljava/lang/String;Z)V

    move-object v2, v1

    invoke-direct/range {v2 .. v9}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 837
    :try_start_1
    invoke-virtual {v1, v10}, Ljava/util/concurrent/ThreadPoolExecutor;->allowCoreThreadTimeOut(Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 839
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 842
    :goto_0
    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    .line 844
    :cond_0
    monitor-exit v0

    goto :goto_1

    :catchall_1
    move-exception v1

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw v1

    .line 846
    :cond_1
    :goto_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    return-object v0
.end method

.method public static getDBThreadExecutorService()Ljava/util/concurrent/ExecutorService;
    .locals 11

    .line 853
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->dbThreadExecutor:Ljava/util/concurrent/ExecutorService;

    if-nez v0, :cond_1

    .line 854
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 855
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->dbThreadExecutor:Ljava/util/concurrent/ExecutorService;

    if-nez v1, :cond_0

    .line 856
    new-instance v1, Ljava/util/concurrent/ThreadPoolExecutor;

    sget v3, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedDBPoolSize:I

    sget v4, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedDBPoolSize:I

    const-wide/16 v5, 0xf

    sget-object v7, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v8, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v8}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    new-instance v9, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;

    const-string v2, "DownloadThreadPool-db-fixed"

    const/4 v10, 0x1

    invoke-direct {v9, v2, v10}, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;-><init>(Ljava/lang/String;Z)V

    move-object v2, v1

    invoke-direct/range {v2 .. v9}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 859
    :try_start_1
    invoke-virtual {v1, v10}, Ljava/util/concurrent/ThreadPoolExecutor;->allowCoreThreadTimeOut(Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 861
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 864
    :goto_0
    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->dbThreadExecutor:Ljava/util/concurrent/ExecutorService;

    .line 866
    :cond_0
    monitor-exit v0

    goto :goto_1

    :catchall_1
    move-exception v1

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw v1

    .line 868
    :cond_1
    :goto_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->dbThreadExecutor:Ljava/util/concurrent/ExecutorService;

    return-object v0
.end method

.method public static getDefaultDownloadDns()Lcom/ss/android/socialbase/downloader/network/IDownloadDns;
    .locals 2

    .line 902
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->defaultDownloadDns:Lcom/ss/android/socialbase/downloader/network/IDownloadDns;

    if-nez v0, :cond_1

    .line 903
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 904
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->defaultDownloadDns:Lcom/ss/android/socialbase/downloader/network/IDownloadDns;

    if-nez v1, :cond_0

    .line 905
    new-instance v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$2;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$2;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->defaultDownloadDns:Lcom/ss/android/socialbase/downloader/network/IDownloadDns;

    .line 912
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 914
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->defaultDownloadDns:Lcom/ss/android/socialbase/downloader/network/IDownloadDns;

    return-object v0
.end method

.method public static getDefaultHeadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;
    .locals 2

    .line 621
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->defaultHeadHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

    if-nez v0, :cond_1

    .line 622
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 623
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->defaultHeadHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

    if-nez v1, :cond_0

    .line 624
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHeadHttpService;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->defaultHeadHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

    .line 626
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 628
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->defaultHeadHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

    return-object v0
.end method

.method public static getDefaultHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;
    .locals 2

    .line 610
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->defaultHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    if-nez v0, :cond_1

    .line 611
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 612
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->defaultHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    if-nez v1, :cond_0

    .line 613
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHttpService;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadHttpService;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->defaultHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    .line 615
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 617
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->defaultHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    return-object v0
.end method

.method public static getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;
    .locals 2

    .line 933
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    if-nez v0, :cond_1

    .line 934
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 935
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    if-nez v1, :cond_0

    .line 936
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    .line 938
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 940
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    return-object v0
.end method

.method public static getDownloadClient()Lokhttp3/OkHttpClient;
    .locals 2

    .line 872
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->sOkHttpClient:Lokhttp3/OkHttpClient;

    if-nez v0, :cond_1

    .line 873
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 874
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->sOkHttpClient:Lokhttp3/OkHttpClient;

    if-nez v1, :cond_0

    .line 875
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->createDownloadClientBuilder()Lokhttp3/OkHttpClient$Builder;

    move-result-object v1

    .line 876
    invoke-virtual {v1}, Lokhttp3/OkHttpClient$Builder;->build()Lokhttp3/OkHttpClient;

    move-result-object v1

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->sOkHttpClient:Lokhttp3/OkHttpClient;

    .line 878
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 880
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->sOkHttpClient:Lokhttp3/OkHttpClient;

    return-object v0
.end method

.method public static getDownloadCompleteHandlers()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;",
            ">;"
        }
    .end annotation

    .line 972
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCompleteHandlers:Ljava/util/List;

    return-object v0
.end method

.method public static getDownloadDns()Lcom/ss/android/socialbase/downloader/network/IDownloadDns;
    .locals 1

    .line 898
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadDns:Lcom/ss/android/socialbase/downloader/network/IDownloadDns;

    return-object v0
.end method

.method public static getDownloadEngine()Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;
    .locals 2

    .line 986
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-nez v0, :cond_1

    .line 987
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 988
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-nez v1, :cond_0

    .line 989
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadEngine;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadEngine;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    .line 990
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 992
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    return-object v0
.end method

.method public static getDownloadExpSwitchCode()I
    .locals 1

    .line 1018
    sget v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadExpSwitchCode:I

    return v0
.end method

.method public static getDownloadId(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)I
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    .line 1142
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadId(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getDownloadId(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    .line 1146
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getIdGenerator()Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p0, 0x0

    return p0

    .line 1149
    :cond_0
    invoke-interface {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;->generate(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static declared-synchronized getDownloadLaunchHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;
    .locals 2

    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 918
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadLaunchHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static getDownloadMonitorListener()Lcom/ss/android/socialbase/downloader/monitor/IDownloadMonitorListener;
    .locals 1

    .line 454
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadMonitorListener:Lcom/ss/android/socialbase/downloader/monitor/IDownloadMonitorListener;

    return-object v0
.end method

.method private static getDownloadNetLibs(I)[I
    .locals 3

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eq p0, v1, :cond_2

    const/4 v2, 0x2

    if-eq p0, v2, :cond_1

    const/4 v0, 0x3

    if-eq p0, v0, :cond_0

    new-array p0, v2, [I

    .line 605
    fill-array-data p0, :array_0

    return-object p0

    :cond_0
    new-array p0, v2, [I

    .line 601
    fill-array-data p0, :array_1

    return-object p0

    :cond_1
    new-array p0, v1, [I

    aput v1, p0, v0

    return-object p0

    :cond_2
    new-array p0, v1, [I

    aput v0, p0, v0

    return-object p0

    :array_0
    .array-data 4
        0x1
        0x0
    .end array-data

    :array_1
    .array-data 4
        0x0
        0x1
    .end array-data
.end method

.method public static getDownloadServiceHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;
    .locals 2

    .line 949
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-nez v0, :cond_1

    .line 950
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 951
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-nez v1, :cond_0

    .line 952
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadServiceHandler;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadServiceHandler;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    .line 954
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 956
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    return-object v0
.end method

.method public static getDownloadSetting()Lorg/json/JSONObject;
    .locals 1

    .line 1023
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadSettings:Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadSettings:Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;->get()Lorg/json/JSONObject;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 1026
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadSettings:Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;->get()Lorg/json/JSONObject;

    move-result-object v0

    return-object v0

    .line 1024
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->EMPTY_JSON:Lorg/json/JSONObject;

    return-object v0
.end method

.method public static getEventListener()Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;
    .locals 1

    .line 1158
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadEventListener:Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;

    if-nez v0, :cond_0

    .line 1159
    new-instance v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$3;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$3;-><init>()V

    sput-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadEventListener:Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;

    .line 1171
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadEventListener:Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;

    return-object v0
.end method

.method public static getHeadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;
    .locals 1

    .line 450
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->headHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

    return-object v0
.end method

.method public static getHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;
    .locals 1

    .line 342
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->httpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    return-object v0
.end method

.method public static getIOThreadExecutor()Ljava/util/concurrent/ExecutorService;
    .locals 1

    .line 787
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->ioThreadExecutor:Ljava/util/concurrent/ExecutorService;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->ioThreadExecutor:Ljava/util/concurrent/ExecutorService;

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public static getIdGenerator()Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;
    .locals 2

    .line 976
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->idGenerator:Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;

    if-nez v0, :cond_1

    .line 977
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 978
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->idGenerator:Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;

    if-nez v1, :cond_0

    .line 979
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/DefaultIdGenerator;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/impls/DefaultIdGenerator;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->idGenerator:Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;

    .line 980
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 982
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->idGenerator:Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;

    return-object v0
.end method

.method public static getIndependentDownloadServiceHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;
    .locals 2

    .line 960
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentDownloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-nez v0, :cond_1

    .line 961
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 962
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentDownloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-nez v1, :cond_0

    .line 963
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentHolderCreator:Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;

    invoke-interface {v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;->createServiceHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    move-result-object v1

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentDownloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    .line 966
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 968
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentDownloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    return-object v0
.end method

.method public static getIndependentHolderCreator()Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;
    .locals 1

    .line 1215
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentHolderCreator:Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;

    return-object v0
.end method

.method private static getMaxDownloadPoolSize()I
    .locals 2

    .line 1001
    sget v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->maxDownloadPoolSize:I

    if-lez v0, :cond_0

    sget v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedCPUPoolSize:I

    if-le v0, v1, :cond_1

    .line 1002
    :cond_0
    sget v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedCPUPoolSize:I

    sput v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->maxDownloadPoolSize:I

    .line 1003
    :cond_1
    sget v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->maxDownloadPoolSize:I

    return v0
.end method

.method public static getMixApkThreadExecutor()Ljava/util/concurrent/ExecutorService;
    .locals 1

    .line 802
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->mixApkDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->mixApkDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getMixDefaultThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public static getMixDefaultThreadExecutor()Ljava/util/concurrent/ExecutorService;
    .locals 11

    .line 809
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->mixDefaultDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    if-nez v0, :cond_1

    .line 810
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 811
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->mixDefaultDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    if-nez v1, :cond_0

    .line 812
    new-instance v1, Ljava/util/concurrent/ThreadPoolExecutor;

    sget v3, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedMIXPoolSize:I

    sget v4, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedMIXPoolSize:I

    const-wide/16 v5, 0xf

    sget-object v7, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v8, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v8}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    new-instance v9, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;

    const-string v2, "DownloadThreadPool-mix-fixed"

    const/4 v10, 0x1

    invoke-direct {v9, v2, v10}, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;-><init>(Ljava/lang/String;Z)V

    move-object v2, v1

    invoke-direct/range {v2 .. v9}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 815
    :try_start_1
    invoke-virtual {v1, v10}, Ljava/util/concurrent/ThreadPoolExecutor;->allowCoreThreadTimeOut(Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 817
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 820
    :goto_0
    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->mixDefaultDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    .line 822
    :cond_0
    monitor-exit v0

    goto :goto_1

    :catchall_1
    move-exception v1

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw v1

    .line 824
    :cond_1
    :goto_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->mixDefaultDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    return-object v0
.end method

.method public static getMixFrequentThreadExecutor()Ljava/util/concurrent/ExecutorService;
    .locals 1

    .line 795
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->mixFrequentDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->mixFrequentDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getMixDefaultThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public static declared-synchronized getMonitorConfig()Lcom/ss/android/socialbase/downloader/downloader/IMonitorConfig;
    .locals 2

    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 714
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->monitorConfig:Lcom/ss/android/socialbase/downloader/downloader/IMonitorConfig;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;
    .locals 1

    .line 1088
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    return-object v0
.end method

.method public static getProcessCallbacks()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;",
            ">;"
        }
    .end annotation

    .line 354
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->processCallbacks:Ljava/util/List;

    monitor-enter v0

    .line 355
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->processCallbacks:Ljava/util/List;

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 356
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public static getReserveWifiStatusListener()Lcom/ss/android/socialbase/downloader/downloader/IReserveWifiStatusListener;
    .locals 1

    .line 1174
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->reserveWifiStatusListener:Lcom/ss/android/socialbase/downloader/downloader/IReserveWifiStatusListener;

    return-object v0
.end method

.method public static getRetryDelayTimeCalculator()Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;
    .locals 2

    .line 1107
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    if-nez v0, :cond_1

    .line 1108
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 1109
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    if-nez v1, :cond_0

    .line 1110
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/DefaultRetryDelayTimeCalculator;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/impls/DefaultRetryDelayTimeCalculator;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    .line 1111
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 1113
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    return-object v0
.end method

.method public static getTTNetHandler()Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;
    .locals 2

    .line 1117
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->iTTNetHandler:Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;

    if-nez v0, :cond_1

    .line 1118
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 1119
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->iTTNetHandler:Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;

    if-nez v1, :cond_0

    .line 1120
    new-instance v1, Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler$DefaultTTNetHandler;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler$DefaultTTNetHandler;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->iTTNetHandler:Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;

    .line 1122
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 1124
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->iTTNetHandler:Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;

    return-object v0
.end method

.method public static declared-synchronized getWriteBufferSize()I
    .locals 2

    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 1063
    :try_start_0
    sget v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->writeBufferSize:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method static declared-synchronized initComponent(Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;)V
    .locals 3

    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 150
    :try_start_0
    sget-boolean v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->hasInit:Z

    if-eqz v1, :cond_0

    const-string p0, "DownloadComponentManager"

    const-string v1, "component has init"

    .line 151
    invoke-static {p0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 152
    monitor-exit v0

    return-void

    .line 155
    :cond_0
    :try_start_1
    sget-boolean v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadInMultiProcess:Z

    .line 157
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setDownloadBuilder(Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;)V

    .line 159
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    if-nez p0, :cond_1

    .line 160
    new-instance p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;-><init>()V

    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    .line 161
    :cond_1
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-nez p0, :cond_2

    .line 162
    new-instance p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadServiceHandler;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadServiceHandler;-><init>()V

    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    .line 163
    :cond_2
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentDownloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-nez p0, :cond_3

    .line 164
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentHolderCreator:Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;

    if-eqz p0, :cond_3

    .line 165
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentHolderCreator:Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;

    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;->createServiceHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    move-result-object p0

    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentDownloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    .line 168
    :cond_3
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->idGenerator:Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;

    if-nez p0, :cond_4

    .line 169
    new-instance p0, Lcom/ss/android/socialbase/downloader/impls/DefaultIdGenerator;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultIdGenerator;-><init>()V

    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->idGenerator:Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;

    .line 170
    :cond_4
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    if-nez p0, :cond_5

    .line 171
    new-instance p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadEngine;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadEngine;-><init>()V

    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadEngine:Lcom/ss/android/socialbase/downloader/impls/AbsDownloadEngine;

    .line 172
    :cond_5
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkCntCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    if-nez p0, :cond_6

    .line 173
    new-instance p0, Lcom/ss/android/socialbase/downloader/impls/DefaultChunkCntCalculator;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultChunkCntCalculator;-><init>()V

    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkCntCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    .line 174
    :cond_6
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    if-nez p0, :cond_7

    .line 175
    new-instance p0, Lcom/ss/android/socialbase/downloader/impls/DefaultChunkAdjustCalculator;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultChunkAdjustCalculator;-><init>()V

    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    .line 176
    :cond_7
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    if-nez p0, :cond_8

    .line 177
    new-instance p0, Lcom/ss/android/socialbase/downloader/impls/DefaultRetryDelayTimeCalculator;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultRetryDelayTimeCalculator;-><init>()V

    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    .line 178
    :cond_8
    sget p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->maxDownloadPoolSize:I

    if-lez p0, :cond_9

    sget p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->maxDownloadPoolSize:I

    sget v2, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedCPUPoolSize:I

    if-le p0, v2, :cond_a

    .line 179
    :cond_9
    sget p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->fixedCPUPoolSize:I

    sput p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->maxDownloadPoolSize:I

    .line 181
    :cond_a
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->registerDownloadReceiver()V

    .line 182
    sget-boolean p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadInMultiProcess:Z

    const/4 v2, 0x1

    if-eqz p0, :cond_b

    if-nez v1, :cond_b

    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isDownloaderProcess()Z

    move-result p0

    if-nez p0, :cond_b

    .line 183
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p0

    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->startService()V

    goto :goto_0

    .line 186
    :cond_b
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isMainThread()Z

    move-result p0

    if-eqz p0, :cond_c

    .line 187
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getIOThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object p0

    if-eqz p0, :cond_d

    .line 189
    new-instance v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$1;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$1;-><init>()V

    invoke-interface {p0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 200
    :cond_c
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object p0

    if-eqz p0, :cond_d

    .line 202
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getCurProcessName(Landroid/content/Context;)Ljava/lang/String;

    .line 206
    :cond_d
    :goto_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->ensureOPPO()V

    .line 208
    sput-boolean v2, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->hasInit:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 209
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static declared-synchronized isDownloadInMultiProcess()Z
    .locals 2

    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 338
    :try_start_0
    sget-boolean v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadInMultiProcess:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static declared-synchronized isHttpServiceInit()Z
    .locals 2

    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 1153
    :try_start_0
    sget-boolean v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->httpServiceInit:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static isInit()Z
    .locals 1

    .line 1188
    sget-boolean v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->hasInit:Z

    return v0
.end method

.method private static needAutoRefreshUnSuccessTask(Z)V
    .locals 0

    .line 1050
    sput-boolean p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->needAutoRefreshUnSuccessTask:Z

    return-void
.end method

.method public static needAutoRefreshUnSuccessTask()Z
    .locals 1

    .line 1058
    sget-boolean v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->needAutoRefreshUnSuccessTask:Z

    return v0
.end method

.method public static notAutoRebootService()Z
    .locals 3

    .line 709
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    sget-boolean v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->notAutoRebootService:Z

    const-string v2, "switch_not_auto_boot_service"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static onDownloadCacheSyncCallback(Lcom/ss/android/socialbase/downloader/constants/DownloadCacheSyncStatus;)V
    .locals 4

    .line 408
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCacheSyncStatusListeners:Ljava/util/List;

    monitor-enter v0

    .line 409
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCacheSyncStatusListeners:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 410
    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 411
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/socialbase/downloader/depend/IDownloadCacheSyncStatusListener;

    if-eqz v2, :cond_0

    .line 413
    sget-object v3, Lcom/ss/android/socialbase/downloader/constants/DownloadCacheSyncStatus;->SYNC_START:Lcom/ss/android/socialbase/downloader/constants/DownloadCacheSyncStatus;

    if-ne p0, v3, :cond_1

    .line 414
    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadCacheSyncStatusListener;->onStart()V

    goto :goto_0

    .line 415
    :cond_1
    sget-object v3, Lcom/ss/android/socialbase/downloader/constants/DownloadCacheSyncStatus;->SYNC_SUCCESS:Lcom/ss/android/socialbase/downloader/constants/DownloadCacheSyncStatus;

    if-ne p0, v3, :cond_0

    .line 416
    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadCacheSyncStatusListener;->onSuccess()V

    goto :goto_0

    .line 419
    :cond_2
    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/DownloadCacheSyncStatus;->SYNC_SUCCESS:Lcom/ss/android/socialbase/downloader/constants/DownloadCacheSyncStatus;

    if-ne p0, v1, :cond_3

    .line 420
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCacheSyncStatusListeners:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->clear()V

    .line 422
    :cond_3
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static onDownloadTaskFinish(Lcom/ss/android/socialbase/downloader/model/DownloadTask;I)V
    .locals 3

    .line 438
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadTaskExecuteListeners:Ljava/util/List;

    monitor-enter v0

    .line 439
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadTaskExecuteListeners:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 440
    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 441
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/socialbase/downloader/depend/IDownloadTaskExecuteListener;

    if-eqz v2, :cond_0

    .line 443
    invoke-interface {v2, p0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadTaskExecuteListener;->onFinish(Lcom/ss/android/socialbase/downloader/model/DownloadTask;I)V

    goto :goto_0

    .line 446
    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static onDownloadTaskStart(Lcom/ss/android/socialbase/downloader/model/DownloadTask;I)V
    .locals 3

    .line 426
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadTaskExecuteListeners:Ljava/util/List;

    monitor-enter v0

    .line 427
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadTaskExecuteListeners:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 428
    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 429
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/socialbase/downloader/depend/IDownloadTaskExecuteListener;

    if-eqz v2, :cond_0

    .line 431
    invoke-interface {v2, p0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadTaskExecuteListener;->onStart(Lcom/ss/android/socialbase/downloader/model/DownloadTask;I)V

    goto :goto_0

    .line 434
    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static registerDownloadCacheSyncListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadCacheSyncStatusListener;)V
    .locals 2

    .line 376
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCacheSyncStatusListeners:Ljava/util/List;

    monitor-enter v0

    if-eqz p0, :cond_1

    .line 377
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCacheSyncStatusListeners:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 379
    :cond_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCacheSyncStatusListeners:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 380
    monitor-exit v0

    return-void

    .line 378
    :cond_1
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    .line 380
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method private static registerDownloadReceiver()V
    .locals 3

    .line 286
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadReceiver:Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;

    if-nez v0, :cond_0

    .line 287
    new-instance v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;-><init>()V

    sput-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadReceiver:Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;

    .line 290
    :cond_0
    sget-boolean v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->isReceiverRegistered:Z

    if-eqz v0, :cond_1

    return-void

    .line 294
    :cond_1
    :try_start_0
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.net.conn.CONNECTIVITY_CHANGE"

    .line 295
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 296
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->appContext:Landroid/content/Context;

    sget-object v2, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadReceiver:Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    const/4 v0, 0x1

    .line 297
    sput-boolean v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->isReceiverRegistered:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 299
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static registerDownloadTaskExecuteListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadTaskExecuteListener;)V
    .locals 2

    .line 392
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadTaskExecuteListeners:Ljava/util/List;

    monitor-enter v0

    if-eqz p0, :cond_1

    .line 393
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadTaskExecuteListeners:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 395
    :cond_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadTaskExecuteListeners:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 396
    monitor-exit v0

    return-void

    .line 394
    :cond_1
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    .line 396
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static removeDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)V
    .locals 2

    .line 368
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCompleteHandlers:Ljava/util/List;

    monitor-enter v0

    if-eqz p0, :cond_1

    .line 369
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCompleteHandlers:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 371
    :cond_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCompleteHandlers:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 372
    monitor-exit v0

    return-void

    .line 370
    :cond_1
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    .line 372
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static declared-synchronized setAppContext(Landroid/content/Context;)V
    .locals 2

    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    if-eqz p0, :cond_0

    .line 1132
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->appContext:Landroid/content/Context;

    if-nez v1, :cond_0

    .line 1133
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->appContext:Landroid/content/Context;

    .line 1135
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object p0

    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->appContext:Landroid/content/Context;

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->init(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 1137
    :cond_0
    :goto_0
    monitor-exit v0

    return-void
.end method

.method private static setCPUThreadExecutor(Ljava/util/concurrent/ExecutorService;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 655
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->cpuThreadExecutor:Ljava/util/concurrent/ExecutorService;

    :cond_0
    return-void
.end method

.method private static setChunkAdjustCalculator(Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 1103
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkAdjustCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    :cond_0
    return-void
.end method

.method private static setChunkCntCalculator(Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 1078
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkCntCalculator:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    :cond_0
    return-void
.end method

.method public static setChunkDownloadExecutor(Ljava/util/concurrent/ExecutorService;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 685
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->chunkDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    :cond_0
    return-void
.end method

.method private static setDBThreadExecutor(Ljava/util/concurrent/ExecutorService;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 680
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->dbThreadExecutor:Ljava/util/concurrent/ExecutorService;

    :cond_0
    return-void
.end method

.method private static setDownloadBuilder(Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;)V
    .locals 2

    if-eqz p0, :cond_1b

    .line 217
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 218
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setAppContext(Landroid/content/Context;)V

    .line 219
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 220
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setDownloadCache(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V

    .line 221
    :cond_1
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getIdGenerator()Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 222
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getIdGenerator()Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setIdGenerator(Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;)V

    .line 223
    :cond_2
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getChunkCntCalculator()Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 224
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getChunkCntCalculator()Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setChunkCntCalculator(Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;)V

    .line 225
    :cond_3
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 226
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setNotificationClickCallback(Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;)V

    .line 227
    :cond_4
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getMaxDownloadPoolSize()I

    move-result v0

    if-eqz v0, :cond_5

    .line 228
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getMaxDownloadPoolSize()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setMaxDownloadPoolSize(I)V

    .line 229
    :cond_5
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 230
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setHttpService(Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;)V

    .line 231
    :cond_6
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getHeadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 232
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getHeadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setHeadHttpService(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;)V

    .line 233
    :cond_7
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadLaunchHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;

    move-result-object v0

    if-eqz v0, :cond_8

    .line 234
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadLaunchHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setDownloadLaunchHandler(Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;)V

    .line 235
    :cond_8
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    if-eqz v0, :cond_9

    .line 236
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setCPUThreadExecutor(Ljava/util/concurrent/ExecutorService;)V

    .line 237
    :cond_9
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getIOThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    if-eqz v0, :cond_a

    .line 238
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getIOThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setIOThreadExecutor(Ljava/util/concurrent/ExecutorService;)V

    .line 239
    :cond_a
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getMixDefaultDownloadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    if-eqz v0, :cond_b

    .line 240
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getMixDefaultDownloadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setMixDefaultDownloadExecutor(Ljava/util/concurrent/ExecutorService;)V

    .line 241
    :cond_b
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getMixFrequentDownloadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    if-eqz v0, :cond_c

    .line 242
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getMixFrequentDownloadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setMixFrequentDownloadExecutor(Ljava/util/concurrent/ExecutorService;)V

    .line 243
    :cond_c
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getMixApkDownloadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    if-eqz v0, :cond_d

    .line 244
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getMixApkDownloadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setMixApkDownloadExecutor(Ljava/util/concurrent/ExecutorService;)V

    .line 245
    :cond_d
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDBThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    if-eqz v0, :cond_e

    .line 246
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDBThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setDBThreadExecutor(Ljava/util/concurrent/ExecutorService;)V

    .line 247
    :cond_e
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getChunkThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    if-eqz v0, :cond_f

    .line 248
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getChunkThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setChunkDownloadExecutor(Ljava/util/concurrent/ExecutorService;)V

    .line 249
    :cond_f
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getOkHttpDispatcherExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    if-eqz v0, :cond_10

    .line 250
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getOkHttpDispatcherExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setOkHttpDispatcherExecutor(Ljava/util/concurrent/ExecutorService;)V

    .line 252
    :cond_10
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadCompleteHandlers()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_11

    .line 253
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadCompleteHandlers()Ljava/util/List;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setDownloadCompleteHandlers(Ljava/util/List;)V

    .line 254
    :cond_11
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getMonitorConfig()Lcom/ss/android/socialbase/downloader/downloader/IMonitorConfig;

    move-result-object v0

    if-eqz v0, :cond_12

    .line 255
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getMonitorConfig()Lcom/ss/android/socialbase/downloader/downloader/IMonitorConfig;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->monitorConfig:Lcom/ss/android/socialbase/downloader/downloader/IMonitorConfig;

    .line 256
    :cond_12
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getWriteBufferSize()I

    move-result v0

    const/16 v1, 0x400

    if-le v0, v1, :cond_13

    .line 257
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getWriteBufferSize()I

    move-result v0

    sput v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->writeBufferSize:I

    .line 258
    :cond_13
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getChunkAdjustCalculator()Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    move-result-object v0

    if-eqz v0, :cond_14

    .line 259
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getChunkAdjustCalculator()Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setChunkAdjustCalculator(Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;)V

    .line 260
    :cond_14
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->isDownloadInMultiProcess()Z

    move-result v0

    if-eqz v0, :cond_15

    const/4 v0, 0x1

    .line 261
    sput-boolean v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadInMultiProcess:Z

    .line 263
    :cond_15
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadExpSwitch()I

    move-result v0

    if-eqz v0, :cond_16

    .line 264
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadExpSwitch()I

    move-result v0

    sput v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadExpSwitchCode:I

    .line 265
    :cond_16
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadSetting()Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;

    move-result-object v0

    if-eqz v0, :cond_17

    .line 266
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadSetting()Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setDownloadSetting(Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;)V

    .line 267
    :cond_17
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadDns()Lcom/ss/android/socialbase/downloader/network/IDownloadDns;

    move-result-object v0

    if-eqz v0, :cond_18

    .line 268
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadDns()Lcom/ss/android/socialbase/downloader/network/IDownloadDns;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadDns:Lcom/ss/android/socialbase/downloader/network/IDownloadDns;

    .line 269
    :cond_18
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getTTNetHandler()Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;

    move-result-object v0

    if-eqz v0, :cond_1a

    .line 270
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getTTNetHandler()Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->iTTNetHandler:Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;

    .line 271
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->iTTNetHandler:Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;->isTTNetEnable()Z

    move-result v0

    if-eqz v0, :cond_19

    .line 272
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->iTTNetHandler:Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;->getTTNetDownloadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setHttpService(Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;)V

    .line 273
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->iTTNetHandler:Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;->getTTNetDownloadHeadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setHeadHttpService(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;)V

    goto :goto_0

    .line 275
    :cond_19
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDefaultHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setHttpService(Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;)V

    .line 276
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDefaultHeadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setHeadHttpService(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;)V

    .line 279
    :cond_1a
    :goto_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->needAutoRefreshUnSuccessTask()Z

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->needAutoRefreshUnSuccessTask(Z)V

    .line 280
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadMonitorListener()Lcom/ss/android/socialbase/downloader/monitor/IDownloadMonitorListener;

    move-result-object v0

    if-eqz v0, :cond_1b

    .line 281
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getDownloadMonitorListener()Lcom/ss/android/socialbase/downloader/monitor/IDownloadMonitorListener;

    move-result-object p0

    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setDownloadMonitorListener(Lcom/ss/android/socialbase/downloader/monitor/IDownloadMonitorListener;)V

    :cond_1b
    return-void
.end method

.method private static setDownloadCache(Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 945
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    :cond_0
    return-void
.end method

.method private static setDownloadCompleteHandlers(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;",
            ">;)V"
        }
    .end annotation

    .line 696
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCompleteHandlers:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 697
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCompleteHandlers:Ljava/util/List;

    monitor-enter v0

    .line 698
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCompleteHandlers:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 699
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_0
    :goto_0
    return-void
.end method

.method public static setDownloadEventListener(Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;)V
    .locals 0

    .line 1178
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadEventListener:Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;

    return-void
.end method

.method public static declared-synchronized setDownloadInMultiProcess()V
    .locals 5

    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 316
    :try_start_0
    sget-boolean v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadInMultiProcess:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v1, :cond_0

    .line 317
    monitor-exit v0

    return-void

    :cond_0
    const/4 v1, 0x1

    .line 318
    :try_start_1
    sput-boolean v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadInMultiProcess:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 321
    :try_start_2
    new-instance v2, Landroid/content/Intent;

    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v3

    const-class v4, Lcom/ss/android/socialbase/downloader/impls/DownloadHandleService;

    invoke-direct {v2, v3, v4}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v3, "com.ss.android.downloader.action.MULTI_PROCESS_NOTIFY"

    .line 322
    invoke-virtual {v2, v3}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 323
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3, v2}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    .line 325
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isDownloaderProcess()Z

    move-result v2

    if-nez v2, :cond_1

    .line 326
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v1

    invoke-interface {v1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->startService()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    const/4 v2, 0x0

    .line 330
    :try_start_3
    sput-boolean v2, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadInMultiProcess:Z

    .line 331
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .line 335
    :cond_1
    :goto_0
    monitor-exit v0

    return-void

    :catchall_1
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static declared-synchronized setDownloadLaunchHandler(Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;)V
    .locals 1

    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    if-eqz p0, :cond_0

    .line 645
    :try_start_0
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadLaunchHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;

    .line 646
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    instance-of p0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;

    if-eqz p0, :cond_0

    .line 647
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCache:Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    check-cast p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;

    .line 648
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->resumeUnCompleteTaskMayDelayed()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 651
    :cond_0
    :goto_0
    monitor-exit v0

    return-void
.end method

.method private static setDownloadMonitorListener(Lcom/ss/android/socialbase/downloader/monitor/IDownloadMonitorListener;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 1013
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadMonitorListener:Lcom/ss/android/socialbase/downloader/monitor/IDownloadMonitorListener;

    :cond_0
    return-void
.end method

.method public static setDownloadSetting(Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;)V
    .locals 0

    .line 1041
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadSettings:Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;

    .line 1043
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->init()V

    return-void
.end method

.method public static setHeadHttpService(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 929
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->headHttpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;

    :cond_0
    return-void
.end method

.method public static setHttpService(Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 923
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->httpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    .line 924
    :cond_0
    sget-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->httpService:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    if-eqz p0, :cond_1

    const/4 p0, 0x1

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    :goto_0
    sput-boolean p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->httpServiceInit:Z

    return-void
.end method

.method private static setIOThreadExecutor(Ljava/util/concurrent/ExecutorService;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 660
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->ioThreadExecutor:Ljava/util/concurrent/ExecutorService;

    :cond_0
    return-void
.end method

.method private static setIdGenerator(Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 997
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->idGenerator:Lcom/ss/android/socialbase/downloader/downloader/IDownloadIdGenerator;

    :cond_0
    return-void
.end method

.method public static setIndependentServiceCreator(Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;)V
    .locals 2

    .line 1202
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setIndependentServiceCreator::creator="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "wjd"

    invoke-static {v1, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1203
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentHolderCreator:Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;

    return-void
.end method

.method private static setMaxDownloadPoolSize(I)V
    .locals 0

    if-lez p0, :cond_0

    .line 1008
    sput p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->maxDownloadPoolSize:I

    :cond_0
    return-void
.end method

.method private static setMixApkDownloadExecutor(Ljava/util/concurrent/ExecutorService;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 675
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->mixApkDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    :cond_0
    return-void
.end method

.method private static setMixDefaultDownloadExecutor(Ljava/util/concurrent/ExecutorService;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 665
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->mixDefaultDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    :cond_0
    return-void
.end method

.method private static setMixFrequentDownloadExecutor(Ljava/util/concurrent/ExecutorService;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 670
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->mixFrequentDownloadExecutor:Ljava/util/concurrent/ExecutorService;

    :cond_0
    return-void
.end method

.method public static setNotAutoRebootService(Z)V
    .locals 0

    .line 704
    sput-boolean p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->notAutoRebootService:Z

    return-void
.end method

.method public static setNotificationClickCallback(Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 1083
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    :cond_0
    return-void
.end method

.method public static setOkHttpDispatcherExecutor(Ljava/util/concurrent/ExecutorService;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 691
    sput-object p0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->okHttpDispatcherExecutor:Ljava/util/concurrent/ExecutorService;

    :cond_0
    return-void
.end method

.method public static setReserveWifiStatusListener(Lcom/ss/android/socialbase/downloader/downloader/IReserveWifiStatusListener;)V
    .locals 0

    return-void
.end method

.method public static submitCPUTask(Ljava/lang/Runnable;)V
    .locals 1

    const/4 v0, 0x0

    .line 718
    invoke-static {p0, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->submitCPUTask(Ljava/lang/Runnable;Z)V

    return-void
.end method

.method public static submitCPUTask(Ljava/lang/Runnable;Z)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    .line 732
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isMainThread()Z

    move-result p1

    if-nez p1, :cond_1

    .line 733
    invoke-interface {p0}, Ljava/lang/Runnable;->run()V

    goto :goto_0

    .line 735
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    invoke-interface {p1, p0}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    :goto_0
    return-void
.end method

.method public static submitDBTask(Ljava/lang/Runnable;)V
    .locals 1

    if-nez p0, :cond_0

    return-void

    .line 757
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isMainThread()Z

    move-result v0

    if-nez v0, :cond_1

    .line 758
    invoke-interface {p0}, Ljava/lang/Runnable;->run()V

    goto :goto_0

    .line 760
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDBThreadExecutorService()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    invoke-interface {v0, p0}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    :goto_0
    return-void
.end method

.method public static submitIOTask(Ljava/lang/Runnable;)V
    .locals 1

    const/4 v0, 0x0

    .line 722
    invoke-static {p0, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->submitIOTask(Ljava/lang/Runnable;Z)V

    return-void
.end method

.method public static submitIOTask(Ljava/lang/Runnable;Z)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    .line 746
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isMainThread()Z

    move-result p1

    if-nez p1, :cond_1

    .line 747
    invoke-interface {p0}, Ljava/lang/Runnable;->run()V

    goto :goto_0

    .line 749
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getIOThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    invoke-interface {p1, p0}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    :goto_0
    return-void
.end method

.method public static supportMultiProc()Z
    .locals 4

    .line 1210
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "supportMultiProc::="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentHolderCreator:Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz v1, :cond_0

    move v1, v2

    goto :goto_0

    :cond_0
    move v1, v3

    :goto_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "wjd"

    invoke-static {v1, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1211
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->independentHolderCreator:Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;

    if-eqz v0, :cond_1

    goto :goto_1

    :cond_1
    move v2, v3

    :goto_1
    return v2
.end method

.method public static unRegisterDownloadCacheSyncListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadCacheSyncStatusListener;)V
    .locals 2

    .line 384
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCacheSyncStatusListeners:Ljava/util/List;

    monitor-enter v0

    if-eqz p0, :cond_1

    .line 385
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCacheSyncStatusListeners:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 387
    :cond_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadCacheSyncStatusListeners:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 388
    monitor-exit v0

    return-void

    .line 386
    :cond_1
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    .line 388
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method static declared-synchronized unRegisterDownloadReceiver()V
    .locals 3

    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;

    monitor-enter v0

    .line 306
    :try_start_0
    sget-boolean v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->isReceiverRegistered:Z

    if-eqz v1, :cond_0

    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadReceiver:Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;

    if-eqz v1, :cond_0

    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->appContext:Landroid/content/Context;

    if-eqz v1, :cond_0

    .line 307
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->appContext:Landroid/content/Context;

    sget-object v2, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadReceiver:Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;

    invoke-virtual {v1, v2}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    const/4 v1, 0x0

    .line 308
    sput-boolean v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->isReceiverRegistered:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    goto :goto_1

    :catch_0
    move-exception v1

    .line 311
    :try_start_1
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 313
    :cond_0
    :goto_0
    monitor-exit v0

    return-void

    :goto_1
    monitor-exit v0

    throw v1
.end method

.method public static unRegisterDownloadTaskExecuteListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadTaskExecuteListener;)V
    .locals 2

    .line 400
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadTaskExecuteListeners:Ljava/util/List;

    monitor-enter v0

    if-eqz p0, :cond_1

    .line 401
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadTaskExecuteListeners:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 403
    :cond_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->downloadTaskExecuteListeners:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 404
    monitor-exit v0

    return-void

    .line 402
    :cond_1
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    .line 404
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method
