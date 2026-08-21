.class public Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;
.implements Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceConnectionListener;


# static fields
.field private static final TAG:Ljava/lang/String;


# instance fields
.field private volatile aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

.field private downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

.field private downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler<",
            "Lcom/ss/android/socialbase/downloader/downloader/IndependentProcessDownloadService;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 40
    const-class v0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 46
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 47
    new-instance v0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    .line 48
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getIndependentDownloadServiceHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    .line 49
    invoke-interface {v0, p0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;->setServiceConnectionListener(Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceConnectionListener;)V

    return-void
.end method


# virtual methods
.method public addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    .locals 1

    .line 579
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 580
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    goto :goto_0

    .line 583
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 585
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V
    .locals 7

    .line 343
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    return-void

    .line 347
    :cond_0
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    if-ne p4, v0, :cond_1

    const/4 v0, 0x0

    goto :goto_0

    :cond_1
    const/4 v0, 0x1

    :goto_0
    invoke-static {p3, v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;Z)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object v4

    invoke-virtual {p4}, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->ordinal()I

    move-result v5

    move v2, p1

    move v3, p2

    move v6, p5

    invoke-interface/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;IZ)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 349
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_1
    return-void
.end method

.method public addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;ZZ)V
    .locals 8

    .line 356
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    return-void

    .line 360
    :cond_0
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    if-ne p4, v0, :cond_1

    const/4 v0, 0x0

    goto :goto_0

    :cond_1
    const/4 v0, 0x1

    :goto_0
    invoke-static {p3, v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;Z)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object v4

    invoke-virtual {p4}, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->ordinal()I

    move-result v5

    move v2, p1

    move v3, p2

    move v6, p5

    move v7, p6

    invoke-interface/range {v1 .. v7}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->addDownloadListener1(IILcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;IZZ)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 362
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_1
    return-void
.end method

.method public addProcessCallback(Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;)V
    .locals 1

    .line 717
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-eqz v0, :cond_0

    .line 719
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertProcessCallbackToAidl(Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;)Lcom/ss/android/socialbase/downloader/depend/ProcessAidlCallback;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->addProcessCallback(Lcom/ss/android/socialbase/downloader/depend/ProcessAidlCallback;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 721
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public canResume(I)Z
    .locals 2

    .line 82
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 86
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->canResume(I)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 88
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    return v1
.end method

.method public cancel(IZ)V
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    return-void

    .line 72
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->cancel(IZ)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 74
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public clearData()V
    .locals 1

    .line 686
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 687
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->clearData()V

    goto :goto_0

    .line 690
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->clearData()V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 692
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public clearDownloadData(IZ)V
    .locals 1

    .line 303
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 304
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->clearDownloadData(IZ)V

    goto :goto_0

    .line 307
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->clearDownloadData(IZ)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 309
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public dispatchProcessCallback(II)V
    .locals 1

    .line 728
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-eqz v0, :cond_0

    .line 730
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->dispatchProcessCallback(II)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 732
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public forceDownloadIngoreRecommendSize(I)V
    .locals 1

    .line 329
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 330
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->forceDownloadIngoreRecommendSize(I)V

    goto :goto_0

    .line 333
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->forceDownloadIngoreRecommendSize(I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 335
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
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

    .line 263
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 264
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getAllDownloadInfo()Ljava/util/List;

    move-result-object v0

    return-object v0

    .line 267
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getAllDownloadInfo()Ljava/util/List;

    move-result-object v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 269
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 v0, 0x0

    return-object v0
.end method

.method public getCurBytes(I)J
    .locals 3

    .line 137
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    const-wide/16 v1, 0x0

    if-nez v0, :cond_0

    return-wide v1

    .line 141
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getCurBytes(I)J

    move-result-wide v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-wide v0

    :catch_0
    move-exception p1

    .line 143
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    return-wide v1
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

    .line 207
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 208
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadChunk(I)Ljava/util/List;

    move-result-object p1

    return-object p1

    .line 211
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadChunk(I)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 213
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method

.method public getDownloadFileUriProvider(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;
    .locals 1

    .line 774
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-eqz v0, :cond_0

    .line 776
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadFileUriProvider(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertFileProviderFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;)Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 778
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getDownloadId(Ljava/lang/String;Ljava/lang/String;)I
    .locals 0

    .line 221
    invoke-static {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadId(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 179
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 180
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    return-object p1

    .line 183
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 185
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method

.method public getDownloadInfo(Ljava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 0

    .line 226
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->getDownloadId(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    .line 227
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

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

    .line 193
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 194
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1

    .line 197
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 199
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method

.method public getDownloadNotificationEventListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;
    .locals 1

    .line 739
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-eqz v0, :cond_0

    .line 741
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadNotificationEventListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadNotificationEventListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 743
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getDownloadWithIndependentProcessStatus(I)I
    .locals 1

    .line 565
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 566
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getDownloadWithIndependentProcessStatusInner(I)I

    move-result p1

    return p1

    .line 569
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadWithIndependentProcessStatus(I)I

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 571
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, -0x1

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

    .line 462
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-eqz v0, :cond_0

    .line 464
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadingDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 466
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

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

    .line 232
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 233
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1

    .line 236
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 238
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method

.method public getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;
    .locals 1

    .line 751
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-eqz v0, :cond_0

    .line 753
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertNotificationClickCallbackFromAidl(Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 755
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getStatus(I)I
    .locals 2

    .line 151
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 155
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getStatus(I)I

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 157
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    return v1
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

    .line 247
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 248
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1

    .line 251
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 253
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

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

    .line 448
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 449
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1

    .line 452
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 454
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method

.method public isDownloadCacheSyncSuccess()Z
    .locals 1

    .line 520
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 521
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isDownloadCacheSyncSuccess()Z

    move-result v0

    return v0

    .line 524
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->isDownloadCacheSyncSuccess()Z

    move-result v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 526
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 v0, 0x0

    return v0
.end method

.method public isDownloadSuccessAndFileNotExist(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1

    .line 382
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 383
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->isDownloadSuccessAndFileNotExist(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    return p1

    .line 386
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->isDownloadSuccessAndFileNotExist(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 388
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method public isDownloading(I)Z
    .locals 2

    .line 165
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 169
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->isDownloading(I)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 171
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    return v1
.end method

.method public isHttpServiceInit()Z
    .locals 1

    .line 443
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->isHttpServiceInit()Z

    move-result v0

    return v0
.end method

.method public isServiceAlive()Z
    .locals 1

    .line 712
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isServiceForeground()Z
    .locals 3

    .line 426
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 428
    sget-object v0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->TAG:Ljava/lang/String;

    const-string v2, "isServiceForeground, aidlService is null"

    invoke-static {v0, v2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    .line 431
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->TAG:Ljava/lang/String;

    const-string v2, "aidlService.isServiceForeground"

    invoke-static {v0, v2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 433
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->isServiceForeground()Z

    move-result v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 435
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    return v1
.end method

.method public onServiceConnection(Landroid/os/IBinder;)V
    .locals 0

    .line 786
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    .line 787
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isMainProcess()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 788
    new-instance p1, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler$1;

    invoke-direct {p1, p0}, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler$1;-><init>(Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;)V

    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->addProcessCallback(Lcom/ss/android/socialbase/downloader/depend/ProcessCallback;)V

    :cond_0
    return-void
.end method

.method public onServiceDisConnection()V
    .locals 1

    const/4 v0, 0x0

    .line 809
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    return-void
.end method

.method public pause(I)V
    .locals 1

    .line 54
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    return-void

    .line 58
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->pause(I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 60
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public pauseAll()V
    .locals 1

    .line 123
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    return-void

    .line 127
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->pauseAll()V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 129
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public removeAllDownloadChunk(I)V
    .locals 1

    .line 620
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 621
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->removeAllDownloadChunk(I)V

    goto :goto_0

    .line 624
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->removeAllDownloadChunk(I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 626
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public removeDownloadInfo(I)Z
    .locals 1

    .line 606
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 607
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->removeDownloadInfo(I)Z

    move-result p1

    return p1

    .line 610
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->removeDownloadInfo(I)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 612
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method

.method public removeDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Lcom/ss/android/socialbase/downloader/constants/ListenerType;Z)V
    .locals 7

    .line 369
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    return-void

    .line 373
    :cond_0
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    if-ne p4, v0, :cond_1

    const/4 v0, 0x0

    goto :goto_0

    :cond_1
    const/4 v0, 0x1

    :goto_0
    invoke-static {p3, v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;Z)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object v4

    invoke-virtual {p4}, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->ordinal()I

    move-result v5

    move v2, p1

    move v3, p2

    move v6, p5

    invoke-interface/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->removeDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;IZ)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 375
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_1
    return-void
.end method

.method public removeDownloadTaskData(I)Z
    .locals 1

    .line 672
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 673
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->removeDownloadTaskData(I)Z

    move-result p1

    return p1

    .line 676
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->removeDownloadTaskData(I)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 678
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method

.method public resetDownloadData(IZ)V
    .locals 1

    .line 316
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 317
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->resetDownloadData(IZ)V

    goto :goto_0

    .line 320
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->resetDownloadData(IZ)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 322
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public restart(I)V
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    return-void

    .line 114
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->restart(I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 116
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
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

    .line 277
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 278
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->restartAllFailedDownloadTasks(Ljava/util/List;)V

    goto :goto_0

    .line 281
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->restartAllFailedDownloadTasks(Ljava/util/List;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 283
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
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

    .line 290
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 291
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->restartAllPauseReserveOnWifiDownloadTasks(Ljava/util/List;)V

    goto :goto_0

    .line 294
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->restartAllPauseReserveOnWifiDownloadTasks(Ljava/util/List;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 296
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public resume(I)V
    .locals 1

    .line 97
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    return-void

    .line 101
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->resume(I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 103
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public retryDelayStart(I)Z
    .locals 2

    .line 492
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 496
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->retryDelayStart(I)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 498
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    return v1
.end method

.method public setDownloadNotificationEventListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V
    .locals 1

    .line 763
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-eqz v0, :cond_0

    .line 765
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadNotificationEventListenerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->setDownloadNotificationEventListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 767
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public setDownloadWithIndependentProcessStatus(IZ)V
    .locals 1

    .line 552
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    return-void

    .line 556
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->setDownloadWithIndependentProcessStatus(IZ)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 558
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public setLogLevel(I)V
    .locals 1

    .line 506
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-eqz v0, :cond_0

    .line 507
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;->setLogLevel(I)V

    :cond_0
    return-void
.end method

.method public setThrottleNetSpeed(IJ)V
    .locals 1

    .line 815
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    return-void

    .line 820
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->setThrottleNetSpeed(IJ)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 822
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public startForeground(ILandroid/app/Notification;)V
    .locals 3

    .line 396
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 398
    sget-object p1, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->TAG:Ljava/lang/String;

    const-string p2, "startForeground, aidlService is null"

    invoke-static {p1, p2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 400
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "aidlService.startForeground, id = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 402
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->startForeground(ILandroid/app/Notification;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 404
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public startService()V
    .locals 1

    .line 513
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-eqz v0, :cond_0

    .line 514
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;->startService()V

    :cond_0
    return-void
.end method

.method public stopForeground(ZZ)V
    .locals 1

    .line 411
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez p1, :cond_0

    .line 413
    sget-object p1, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->TAG:Ljava/lang/String;

    const-string p2, "stopForeground, aidlService is null"

    invoke-static {p1, p2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 415
    :cond_0
    sget-object p1, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->TAG:Ljava/lang/String;

    const-string v0, "aidlService.stopForeground"

    invoke-static {p1, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 417
    :try_start_0
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->stopForeground(Z)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 419
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
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

    .line 539
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    return-void

    .line 543
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->syncDownloadChunks(ILjava/util/List;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 545
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public syncDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

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

    .line 699
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 700
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V

    goto :goto_0

    .line 703
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 705
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 476
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-eqz v0, :cond_1

    .line 477
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;->tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V

    :cond_1
    return-void
.end method

.method public tryDownloadWithEngine(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 485
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadServiceHandler:Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;

    if-eqz v0, :cond_1

    .line 486
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;->tryDownloadWithEngine(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V

    :cond_1
    return-void
.end method

.method public updateDownloadChunk(IIJ)V
    .locals 1

    .line 633
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 634
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateDownloadChunk(IIJ)V

    goto :goto_0

    .line 637
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->updateDownloadChunk(IIJ)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 639
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1

    .line 592
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 593
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    return p1

    .line 596
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 598
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method

.method public updateSubDownloadChunk(IIIJ)V
    .locals 8

    .line 646
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 647
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move v2, p1

    move v3, p2

    move v4, p3

    move-wide v5, p4

    invoke-interface/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateSubDownloadChunk(IIIJ)V

    goto :goto_0

    .line 650
    :cond_0
    :try_start_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move v3, p1

    move v4, p2

    move v5, p3

    move-wide v6, p4

    invoke-interface/range {v2 .. v7}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->updateSubDownloadChunk(IIIJ)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 652
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public updateSubDownloadChunkIndex(IIII)V
    .locals 1

    .line 659
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    if-nez v0, :cond_0

    .line 660
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;->updateSubDownloadChunkIndex(IIII)V

    goto :goto_0

    .line 663
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;->aidlService:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->updateSubDownloadChunkIndex(IIII)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 665
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method
