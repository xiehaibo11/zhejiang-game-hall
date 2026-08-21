.class public Lcom/ss/android/downloadlib/addownload/df;
.super Ljava/lang/Object;


# static fields
.field private static volatile rg:Lcom/ss/android/downloadlib/addownload/df;


# instance fields
.field private df:Landroid/os/Handler;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 23
    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/df;->df:Landroid/os/Handler;

    return-void
.end method

.method public static rg()Lcom/ss/android/downloadlib/addownload/df;
    .locals 2

    .line 26
    sget-object v0, Lcom/ss/android/downloadlib/addownload/df;->rg:Lcom/ss/android/downloadlib/addownload/df;

    if-nez v0, :cond_1

    .line 27
    const-class v0, Lcom/ss/android/downloadlib/addownload/df;

    monitor-enter v0

    .line 28
    :try_start_0
    sget-object v1, Lcom/ss/android/downloadlib/addownload/df;->rg:Lcom/ss/android/downloadlib/addownload/df;

    if-nez v1, :cond_0

    .line 29
    new-instance v1, Lcom/ss/android/downloadlib/addownload/df;

    invoke-direct {v1}, Lcom/ss/android/downloadlib/addownload/df;-><init>()V

    sput-object v1, Lcom/ss/android/downloadlib/addownload/df;->rg:Lcom/ss/android/downloadlib/addownload/df;

    .line 31
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 33
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/df;->rg:Lcom/ss/android/downloadlib/addownload/df;

    return-object v0
.end method


# virtual methods
.method public df()Z
    .locals 3

    .line 80
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "forbid_invalidte_download_file_install"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    return v2

    :cond_0
    return v1
.end method

.method public rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 3

    .line 42
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/df;->df()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p2, :cond_1

    return-void

    .line 49
    :cond_1
    :try_start_0
    new-instance v0, Ljava/io/File;

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 50
    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 51
    invoke-virtual {v0}, Ljava/io/File;->delete()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 54
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 56
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/df;->df:Landroid/os/Handler;

    if-nez v0, :cond_3

    .line 57
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/df;->df:Landroid/os/Handler;

    .line 59
    :cond_3
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v0

    .line 60
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->clearDownloadData(I)V

    .line 61
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/df;->df:Landroid/os/Handler;

    new-instance p2, Lcom/ss/android/downloadlib/addownload/df$1;

    invoke-direct {p2, p0, v0}, Lcom/ss/android/downloadlib/addownload/df$1;-><init>(Lcom/ss/android/downloadlib/addownload/df;Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
