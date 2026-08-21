.class public Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;
.super Ljava/lang/Object;


# static fields
.field private static volatile downloadIndependentProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

.field private static volatile downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;
    .locals 1

    .line 22
    const-class v0, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;

    if-eqz p0, :cond_2

    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->supportMultiProc()Z

    move-result p0

    if-eqz p0, :cond_2

    .line 24
    sget-object p0, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->downloadIndependentProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez p0, :cond_1

    .line 25
    monitor-enter v0

    .line 26
    :try_start_0
    sget-object p0, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->downloadIndependentProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez p0, :cond_0

    .line 27
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getIndependentHolderCreator()Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;

    move-result-object p0

    invoke-interface {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;->createProxy()Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object p0

    sput-object p0, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->downloadIndependentProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    .line 29
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 31
    :cond_1
    :goto_0
    sget-object p0, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->downloadIndependentProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    return-object p0

    .line 33
    :cond_2
    sget-object p0, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez p0, :cond_4

    .line 34
    monitor-enter v0

    .line 35
    :try_start_1
    sget-object p0, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    if-nez p0, :cond_3

    .line 36
    new-instance p0, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/impls/ProcessDownloadHandler;-><init>()V

    sput-object p0, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    .line 38
    :cond_3
    monitor-exit v0

    goto :goto_1

    :catchall_1
    move-exception p0

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw p0

    .line 40
    :cond_4
    :goto_1
    sget-object p0, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->downloadProxy:Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    return-object p0
.end method
