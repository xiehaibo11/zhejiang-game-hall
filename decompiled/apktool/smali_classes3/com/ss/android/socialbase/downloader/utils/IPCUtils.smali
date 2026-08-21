.class public Lcom/ss/android/socialbase/downloader/utils/IPCUtils;
.super Ljava/lang/Object;


# static fields
.field private static mMainThreadHandler:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 61
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->mMainThreadHandler:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 59
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Landroid/os/Handler;
    .locals 1

    .line 59
    sget-object v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->mMainThreadHandler:Landroid/os/Handler;

    return-object v0
.end method

.method public static convertCntCalculatorFromAidl(Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;)Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 714
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$19;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$19;-><init>(Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;)V

    return-object v0
.end method

.method public static convertCntCalculatorToAidl(Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;)Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 506
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$13;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$13;-><init>(Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;)V

    return-object v0
.end method

.method public static convertDependToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 464
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$11;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$11;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;)V

    return-object v0
.end method

.method public static convertDiskSpaceCallbackFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 449
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$10;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$10;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback;)V

    return-object v0
.end method

.method public static convertDiskSpaceCallbackToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 862
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$27;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$27;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;)V

    return-object v0
.end method

.method public static convertDiskSpaceHandlerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 845
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$26;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$26;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;)V

    return-object v0
.end method

.method public static convertDiskSpaceHandlerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 437
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$9;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$9;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;)V

    return-object v0
.end method

.method public static convertDownloadCompleteHandlerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 631
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$16;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$16;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;)V

    return-object v0
.end method

.method public static convertDownloadCompleteHandlerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 657
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$17;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$17;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)V

    return-object v0
.end method

.method public static convertDownloadDependFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 730
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$20;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$20;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;)V

    return-object v0
.end method

.method public static convertDownloadMonitorDependFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;)Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 747
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$21;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$21;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;)V

    return-object v0
.end method

.method public static convertDownloadNotificationEventListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 593
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$15;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$15;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;)V

    return-object v0
.end method

.method public static convertDownloadNotificationEventListenerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 336
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$3;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$3;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V

    return-object v0
.end method

.method public static convertDownloadTaskFromAidl(Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;
    .locals 4

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 533
    :cond_0
    :try_start_0
    new-instance v1, Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 535
    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getChunkStrategy()Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertCntCalculatorFromAidl(Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;)Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->chunkStategy(Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v2

    .line 536
    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDownloadNotificationEventListener()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadNotificationEventListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationEventListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v2

    .line 537
    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getInterceptor()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertInterceptorFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;)Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->interceptor(Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v2

    .line 538
    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadDependFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->depend(Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v2

    .line 539
    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadMonitorDependFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;)Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->monitorDepend(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v2

    .line 540
    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getForbiddenHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertForbiddenHandlerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->forbiddenHandler(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v2

    .line 541
    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDiskSpaceHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDiskSpaceHandlerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->diskSpaceHandler(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v2

    .line 542
    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getFileProvider()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertFileProviderFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;)Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->fileUriProvider(Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v2

    .line 543
    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertNotificationClickCallbackFromAidl(Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationClickCallback(Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v2

    .line 544
    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getRetryDelayTimeCalculator()Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertRetryDelayTimeCalculatorFromAidl(Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;)Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->retryDelayTimeCalculator(Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    .line 546
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->MAIN:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->ordinal()I

    move-result v2

    invoke-interface {p0, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getSingleDownloadListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 548
    invoke-virtual {v2}, Ljava/lang/Object;->hashCode()I

    move-result v3

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v2

    invoke-virtual {v1, v3, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListenerWithHashCode(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    .line 551
    :cond_1
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->ordinal()I

    move-result v2

    invoke-interface {p0, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getSingleDownloadListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 553
    invoke-virtual {v2}, Ljava/lang/Object;->hashCode()I

    move-result v3

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v2

    invoke-virtual {v1, v3, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListenerWithHashCode(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    .line 556
    :cond_2
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->NOTIFICATION:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->ordinal()I

    move-result v2

    invoke-interface {p0, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getSingleDownloadListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object v2

    if-eqz v2, :cond_3

    .line 558
    invoke-virtual {v2}, Ljava/lang/Object;->hashCode()I

    move-result v3

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v2

    invoke-virtual {v1, v3, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListenerWithHashCode(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    .line 561
    :cond_3
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->MAIN:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-static {v1, p0, v2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->setDownloadListeners(Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;Lcom/ss/android/socialbase/downloader/constants/ListenerType;)V

    .line 562
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-static {v1, p0, v2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->setDownloadListeners(Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;Lcom/ss/android/socialbase/downloader/constants/ListenerType;)V

    .line 563
    sget-object v2, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->NOTIFICATION:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-static {v1, p0, v2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->setDownloadListeners(Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;Lcom/ss/android/socialbase/downloader/constants/ListenerType;)V

    .line 564
    invoke-static {v1, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->setCompletedHandlers(Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception p0

    .line 567
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    return-object v0
.end method

.method public static convertDownloadTaskToAidl(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 67
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V

    return-object v0
.end method

.method public static convertFileProviderFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;)Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 906
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$30;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$30;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;)V

    return-object v0
.end method

.method public static convertFileProviderToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 401
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$7;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$7;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;)V

    return-object v0
.end method

.method public static convertForbiddenCallbackFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlCallback;)Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 412
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$8;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$8;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlCallback;)V

    return-object v0
.end method

.method public static convertForbiddenCallbackToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;)Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlCallback;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 800
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$23;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$23;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;)V

    return-object v0
.end method

.method public static convertForbiddenHandlerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 784
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$22;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$22;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;)V

    return-object v0
.end method

.method public static convertForbiddenHandlerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 390
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$6;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$6;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;)V

    return-object v0
.end method

.method public static convertInterceptorFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;)Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 890
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$29;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$29;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;)V

    return-object v0
.end method

.method public static convertInterceptorToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 517
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$14;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$14;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;)V

    return-object v0
.end method

.method public static convertListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 922
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;)V

    return-object v0
.end method

.method public static convertListenerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;Z)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 153
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;

    invoke-direct {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;Z)V

    return-object v0
.end method

.method public static convertMonitorDependToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 475
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$12;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$12;-><init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;)V

    return-object v0
.end method

.method public static convertNotificationClickCallbackFromAidl(Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 677
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$18;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$18;-><init>(Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;)V

    return-object v0
.end method

.method public static convertNotificationClickCallbackToAidl(Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;)Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 358
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$4;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$4;-><init>(Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;)V

    return-object v0
.end method

.method public static convertProcessAidlCallbackFromAidl(Lcom/ss/android/socialbase/downloader/depend/ProcessAidlCallback;)Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 830
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$25;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$25;-><init>(Lcom/ss/android/socialbase/downloader/depend/ProcessAidlCallback;)V

    return-object v0
.end method

.method public static convertProcessCallbackToAidl(Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;)Lcom/ss/android/socialbase/downloader/depend/ProcessAidlCallback;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 817
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$24;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$24;-><init>(Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;)V

    return-object v0
.end method

.method public static convertRetryDelayTimeCalculatorFromAidl(Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;)Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 873
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$28;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$28;-><init>(Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;)V

    return-object v0
.end method

.method public static convertRetryDelayTimeCalculatorToAidl(Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;)Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 379
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$5;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$5;-><init>(Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;)V

    return-object v0
.end method

.method private static setCompletedHandlers(Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 583
    :goto_0
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDownloadCompleteHandlerSize()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 584
    invoke-interface {p1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDownloadCompleteAidlHandlerByIndex(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 586
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadCompleteHandlerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->addDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private static setDownloadListeners(Lcom/ss/android/socialbase/downloader/model/DownloadTask;Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;Lcom/ss/android/socialbase/downloader/constants/ListenerType;)V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 573
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    const/4 v1, 0x0

    .line 574
    :goto_0
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->ordinal()I

    move-result v2

    invoke-interface {p1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDownloadListenerSize(I)I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 575
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->ordinal()I

    move-result v2

    invoke-interface {p1, v2, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDownloadListenerByIndex(II)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 577
    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->getOriginHashCode()I

    move-result v3

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v2

    invoke-virtual {v0, v3, v2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 579
    :cond_1
    invoke-virtual {p0, v0, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->setDownloadListeners(Landroid/util/SparseArray;Lcom/ss/android/socialbase/downloader/constants/ListenerType;)V

    return-void
.end method
