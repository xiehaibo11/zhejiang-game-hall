.class public Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;
.super Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;


# static fields
.field private static final TAG:Ljava/lang/String;


# instance fields
.field private final downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 30
    const-class v0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 35
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;-><init>()V

    .line 36
    new-instance v0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;-><init>(Z)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    return-void
.end method


# virtual methods
.method public addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 315
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 317
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    return-void
.end method

.method public addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;IZ)V
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 220
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 222
    :cond_0
    invoke-static {p3}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v3

    invoke-static {p4}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->convertListenerType(I)Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    move-result-object v4

    move v1, p1

    move v2, p2

    move v5, p5

    invoke-interface/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V

    return-void
.end method

.method public addDownloadListener1(IILcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;IZZ)V
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 227
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 229
    :cond_0
    invoke-static {p3}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v3

    invoke-static {p4}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->convertListenerType(I)Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    move-result-object v4

    move v1, p1

    move v2, p2

    move v5, p5

    move v6, p6

    invoke-interface/range {v0 .. v6}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;ZZ)V

    return-void
.end method

.method public addProcessCallback(Lcom/ss/android/socialbase/downloader/depend/ProcessAidlCallback;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 392
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 394
    :cond_0
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertProcessAidlCallbackFromAidl(Lcom/ss/android/socialbase/downloader/depend/ProcessAidlCallback;)Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->addProcessCallback(Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;)V

    return-void
.end method

.method public canResume(I)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 64
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 66
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->canResume(I)Z

    move-result p1

    return p1
.end method

.method public cancel(IZ)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 57
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 59
    :cond_0
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->cancel(IZ)V

    return-void
.end method

.method public clearData()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 371
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 373
    :cond_0
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->clearData()V

    return-void
.end method

.method public clearDownloadData(IZ)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 190
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 192
    :cond_0
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->clearDownloadData(IZ)V

    return-void
.end method

.method public dispatchProcessCallback(II)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 399
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 401
    :cond_0
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->dispatchProcessCallback(II)V

    return-void
.end method

.method public forceDownloadIngoreRecommendSize(I)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 204
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 206
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->forceDownloadIngoreRecommendSize(I)V

    return-void
.end method

.method public getAllDownloadInfo()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 169
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 171
    :cond_0
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getAllDownloadInfo()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public getCurBytes(I)J
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 92
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const-wide/16 v0, 0x0

    return-wide v0

    .line 94
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getCurBytes(I)J

    move-result-wide v0

    return-wide v0
.end method

.method public getDownloadChunk(I)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 127
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 129
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadChunk(I)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadFileUriProvider(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 427
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 429
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadFileUriProvider(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertFileProviderToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadId(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 134
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 136
    :cond_0
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadId(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 113
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 115
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadInfoByUrlAndPath(Ljava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 141
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 143
    :cond_0
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadInfo(Ljava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 120
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 122
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadNotificationEventListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 406
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 408
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadNotificationEventListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadNotificationEventListenerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadWithIndependentProcessStatus(I)I
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 310
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadWithIndependentProcessStatusInner(I)I

    move-result p1

    return p1
.end method

.method public getDownloadingDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 162
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 164
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadingDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 148
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 150
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 413
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 415
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertNotificationClickCallbackToAidl(Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;)Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    move-result-object p1

    return-object p1
.end method

.method public getStatus(I)I
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 99
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 101
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getStatus(I)I

    move-result p1

    return p1
.end method

.method public getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 155
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 157
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 277
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 279
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public isDownloadCacheSyncSuccess()Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 298
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 300
    :cond_0
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isDownloadCacheSyncSuccess()Z

    move-result v0

    return v0
.end method

.method public isDownloadSuccessAndFileNotExist(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 234
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 236
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isDownloadSuccessAndFileNotExist(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    return p1
.end method

.method public isDownloading(I)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 106
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 108
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isDownloading(I)Z

    move-result p1

    return p1
.end method

.method public isHttpServiceInit()Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 270
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 272
    :cond_0
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isHttpServiceInit()Z

    move-result v0

    return v0
.end method

.method public isServiceForeground()Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 255
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 257
    :cond_0
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isServiceForeground()Z

    move-result v0

    return v0
.end method

.method public pause(I)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 50
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 52
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->pause(I)V

    return-void
.end method

.method public pauseAll()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 85
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 87
    :cond_0
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->pauseAll()V

    return-void
.end method

.method public removeAllDownloadChunk(I)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 336
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 338
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->removeAllDownloadChunk(I)V

    return-void
.end method

.method public removeDownloadInfo(I)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 329
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 331
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->removeDownloadInfo(I)Z

    move-result p1

    return p1
.end method

.method public removeDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;IZ)V
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 211
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 213
    :cond_0
    invoke-static {p3}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v3

    invoke-static {p4}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->convertListenerType(I)Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    move-result-object v4

    move v1, p1

    move v2, p2

    move v5, p5

    invoke-interface/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->removeDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V

    return-void
.end method

.method public removeDownloadTaskData(I)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 364
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 366
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->removeDownloadTaskData(I)Z

    move-result p1

    return p1
.end method

.method public resetDownloadData(IZ)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 197
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 199
    :cond_0
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->clearDownloadData(IZ)V

    return-void
.end method

.method public restart(I)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 78
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 80
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->restart(I)V

    return-void
.end method

.method public restartAllFailedDownloadTasks(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 176
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 178
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->restartAllFailedDownloadTasks(Ljava/util/List;)V

    return-void
.end method

.method public restartAllPauseReserveOnWifiDownloadTasks(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 183
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-eqz v0, :cond_0

    .line 184
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->restartAllPauseReserveOnWifiDownloadTasks(Ljava/util/List;)V

    :cond_0
    return-void
.end method

.method public resume(I)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 71
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 73
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->resume(I)V

    return-void
.end method

.method public retryDelayStart(I)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 284
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 286
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->retryDelayStart(I)Z

    move-result p1

    return p1
.end method

.method public setDownloadNotificationEventListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 420
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 422
    :cond_0
    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadNotificationEventListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->setDownloadNotificationEventListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V

    return-void
.end method

.method public setDownloadWithIndependentProcessStatus(IZ)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 305
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->setDownloadIndependentProcessStatus(IZ)V

    return-void
.end method

.method public setLogLevel(I)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 291
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 293
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->setLogLevel(I)V

    return-void
.end method

.method public setThrottleNetSpeed(IJ)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 262
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 265
    :cond_0
    invoke-interface {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->setThrottleNetSpeed(IJ)V

    return-void
.end method

.method public startForeground(ILandroid/app/Notification;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 241
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 243
    :cond_0
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->startForeground(ILandroid/app/Notification;)V

    return-void
.end method

.method public stopForeground(Z)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 248
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x1

    .line 250
    invoke-interface {v0, v1, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->stopForeground(ZZ)V

    return-void
.end method

.method public syncDownloadChunks(ILjava/util/List;)V
    .locals 1
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
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 385
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 387
    :cond_0
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->syncDownloadChunks(ILjava/util/List;)V

    return-void
.end method

.method public syncDownloadInfoFromOtherCache(ILjava/util/List;)V
    .locals 1
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
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 378
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 380
    :cond_0
    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V

    return-void
.end method

.method public tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 42
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 44
    :cond_0
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadTaskFromAidl(Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->tryDownloadWithEngine(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V

    return-void
.end method

.method public updateDownloadChunk(IIJ)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 343
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 345
    :cond_0
    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateDownloadChunk(IIJ)V

    return-void
.end method

.method public updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 322
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 324
    :cond_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    return p1
.end method

.method public updateSubDownloadChunk(IIIJ)V
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 350
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    :cond_0
    move v1, p1

    move v2, p2

    move v3, p3

    move-wide v4, p4

    .line 352
    invoke-interface/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateSubDownloadChunk(IIIJ)V

    return-void
.end method

.method public updateSubDownloadChunkIndex(IIII)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 357
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadBinder;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez v0, :cond_0

    return-void

    .line 359
    :cond_0
    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateSubDownloadChunkIndex(IIII)V

    return-void
.end method
