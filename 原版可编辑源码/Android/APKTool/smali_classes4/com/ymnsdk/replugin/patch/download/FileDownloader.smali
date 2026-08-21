.class public Lcom/ymnsdk/replugin/patch/download/FileDownloader;
.super Ljava/lang/Object;
.source "FileDownloader.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ymnsdk/replugin/patch/download/FileDownloader$Factory;
    }
.end annotation


# static fields
.field private static mDownloadClient:Lokhttp3/OkHttpClient;


# instance fields
.field private mCallback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

.field private mCurrentCall:Lokhttp3/Call;

.field private volatile mCurrentTask:Ljava/lang/String;

.field private final mDownloadResume:Lokhttp3/Interceptor;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 41
    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    .line 42
    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentCall:Lokhttp3/Call;

    .line 44
    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCallback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    .line 95
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/-$$Lambda$FileDownloader$xbiRJJYc9H5SW7s69CK1t4yn2Gs;->INSTANCE:Lcom/ymnsdk/replugin/patch/download/-$$Lambda$FileDownloader$xbiRJJYc9H5SW7s69CK1t4yn2Gs;

    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mDownloadResume:Lokhttp3/Interceptor;

    .line 36
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->initDownloadClient()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/ymnsdk/replugin/patch/download/FileDownloader$1;)V
    .locals 0

    .line 26
    invoke-direct {p0}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;-><init>()V

    return-void
.end method

.method private downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z
    .locals 9

    .line 319
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "downloadFailed: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 320
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "code is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymn"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 323
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->TaskIsDownloading:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/4 v1, 0x0

    if-ne p1, v0, :cond_0

    return v1

    .line 328
    :cond_0
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->closeCall()V

    .line 330
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCallback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    if-eqz v0, :cond_1

    .line 331
    invoke-interface {v0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCallback;->downloadFail(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V

    .line 335
    :cond_1
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    if-nez v0, :cond_2

    return v1

    .line 339
    :cond_2
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object v0

    .line 340
    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->addRoadMap(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V

    .line 341
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->updateTaskState(Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)Z

    .line 344
    sget-object v2, Lcom/ymnsdk/replugin/patch/download/FileDownloader$1;->$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code:[I

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->ordinal()I

    move-result v3

    aget v2, v2, v3

    packed-switch v2, :pswitch_data_0

    goto :goto_0

    .line 370
    :pswitch_0
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setLoadState(Ljava/lang/Boolean;)V

    goto :goto_0

    .line 364
    :pswitch_1
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object p1

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->resetStatus(Ljava/lang/String;)Z

    .line 365
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->resetTask()V

    .line 366
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getURL()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getHash()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavePath()Ljava/lang/String;

    move-result-object v6

    iget-object v7, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCallback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    move-object v3, p0

    move v8, p2

    invoke-virtual/range {v3 .. v8}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->download(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadCallback;I)Z

    goto :goto_0

    .line 352
    :pswitch_2
    sget-object v2, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileReadStreamException:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    if-eq p1, v2, :cond_3

    sget-object v2, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->RequestFail:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    if-ne p1, v2, :cond_4

    .line 353
    :cond_3
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->addNetworkRetryCount()V

    .line 354
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->updateTaskState(Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)Z

    .line 356
    :cond_4
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->resetTask()V

    .line 357
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getURL()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getHash()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavePath()Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCallback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    move-object v2, p0

    move v7, p2

    invoke-virtual/range {v2 .. v7}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->download(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadCallback;I)Z

    :goto_0
    return v1

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_2
        :pswitch_2
        :pswitch_2
        :pswitch_2
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method private downloadSuccess(I)Z
    .locals 4

    .line 276
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "downloadSuccess: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 278
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->closeCall()V

    .line 280
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object v0

    .line 281
    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->Success:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->addRoadMap(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V

    .line 282
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->updateTaskState(Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)Z

    if-nez v0, :cond_0

    .line 286
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileStatusSyncError:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-direct {p0, v0, p1}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z

    move-result p1

    return p1

    .line 290
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSaveCachePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getHash()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkMd5(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 291
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileVerifyHashFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-direct {p0, v0, p1}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z

    move-result p1

    return p1

    .line 295
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSaveCachePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/ymnsdk/replugin/util/DownloadUtils;->renameFile(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 296
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileRenameFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-direct {p0, v0, p1}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z

    move-result p1

    return p1

    .line 302
    :cond_2
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object p1

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    invoke-virtual {p1, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->removeTaskHistory(Ljava/lang/String;)Z

    .line 304
    iget-object p1, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCallback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    if-eqz p1, :cond_3

    .line 305
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavePath()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadCallback;->downloadSuccess(Ljava/lang/String;)V

    :cond_3
    const/4 p1, 0x1

    return p1
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/patch/download/FileDownloader;
    .locals 1

    .line 28
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/FileDownloader$Factory;->access$000()Lcom/ymnsdk/replugin/patch/download/FileDownloader;

    move-result-object v0

    return-object v0
.end method

.method static synthetic lambda$new$0(Lokhttp3/Interceptor$Chain;)Lokhttp3/Response;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 96
    invoke-interface {p0}, Lokhttp3/Interceptor$Chain;->request()Lokhttp3/Request;

    move-result-object v0

    .line 97
    invoke-virtual {v0}, Lokhttp3/Request;->tag()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    .line 99
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v3

    invoke-virtual {v3, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadSize(Ljava/lang/String;)J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const/4 v3, 0x0

    aput-object v1, v2, v3

    const-string v1, "bytes=%d-"

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    .line 101
    invoke-virtual {v0}, Lokhttp3/Request;->newBuilder()Lokhttp3/Request$Builder;

    move-result-object v0

    const-string v2, "range"

    .line 102
    invoke-virtual {v0, v2, v1}, Lokhttp3/Request$Builder;->header(Ljava/lang/String;Ljava/lang/String;)Lokhttp3/Request$Builder;

    move-result-object v0

    .line 103
    invoke-virtual {v0}, Lokhttp3/Request$Builder;->build()Lokhttp3/Request;

    move-result-object v0

    .line 105
    invoke-interface {p0, v0}, Lokhttp3/Interceptor$Chain;->proceed(Lokhttp3/Request;)Lokhttp3/Response;

    move-result-object p0

    return-object p0
.end method

.method private writeDownloadStream(Lokhttp3/ResponseBody;I)V
    .locals 11
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 110
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object v0

    if-nez v0, :cond_0

    .line 114
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileIsBroken:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-direct {p0, p1, p2}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z

    return-void

    :cond_0
    const/4 v1, 0x0

    .line 119
    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setNetworkRetryCount(I)V

    .line 120
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->updateTaskState(Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)Z

    .line 121
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSaveCachePath()Ljava/lang/String;

    move-result-object v2

    if-nez v2, :cond_1

    .line 123
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileStatusSyncError:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-direct {p0, p1, p2}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z

    return-void

    .line 126
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSaveCachePath()Ljava/lang/String;

    move-result-object v2

    .line 127
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "path is "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "ymn"

    invoke-static {v4, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 128
    :try_start_0
    new-instance v3, Ljava/io/RandomAccessFile;

    const-string v5, "rw"

    invoke-direct {v3, v2, v5}, Ljava/io/RandomAccessFile;-><init>(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 129
    :try_start_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavedSize()J

    move-result-wide v5

    invoke-virtual {v3, v5, v6}, Ljava/io/RandomAccessFile;->seek(J)V

    .line 132
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v2

    iget-object v5, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    invoke-virtual {p1}, Lokhttp3/ResponseBody;->contentLength()J

    move-result-wide v6

    invoke-virtual {v2, v5, v6, v7}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->verifySaveFileSize(Ljava/lang/String;J)Z

    move-result v2

    if-nez v2, :cond_2

    .line 134
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileVerifySizeFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-direct {p0, p1, p2}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 173
    :try_start_2
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    return-void

    :cond_2
    const/high16 v2, 0x20000

    :try_start_3
    new-array v2, v2, [B

    .line 141
    invoke-virtual {p1}, Lokhttp3/ResponseBody;->byteStream()Ljava/io/InputStream;

    move-result-object p1

    const-wide/16 v5, -0x1

    .line 143
    :cond_3
    :goto_0
    invoke-virtual {p1, v2}, Ljava/io/InputStream;->read([B)I

    move-result v7

    const/4 v8, -0x1

    if-eq v7, v8, :cond_7

    .line 144
    invoke-virtual {v3, v2, v1, v7}, Ljava/io/RandomAccessFile;->write([BII)V

    .line 146
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v8

    iget-object v9, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    invoke-virtual {v8, v9, v7}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncDownloadFileSize(Ljava/lang/String;I)Z

    move-result v7

    if-nez v7, :cond_4

    .line 148
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V

    .line 149
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileSyncReadStatusException:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-direct {p0, p1, p2}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 173
    :try_start_4
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    return-void

    :cond_4
    const/4 v7, 0x1

    if-ne p2, v7, :cond_5

    .line 152
    :try_start_5
    sget-boolean v7, Lcom/ymnsdk/replugin/util/DownloadUtils;->isUserDownload:Z

    if-eqz v7, :cond_5

    .line 154
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V

    .line 155
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->ManualStop:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-direct {p0, p1, p2}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    .line 173
    :try_start_6
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_0

    return-void

    .line 159
    :cond_5
    :try_start_7
    iget-object v7, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCallback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    if-eqz v7, :cond_3

    .line 161
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavedSize()J

    move-result-wide v7

    const-wide/16 v9, 0x64

    mul-long/2addr v7, v9

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getTotalSize()J

    move-result-wide v9

    div-long/2addr v7, v9

    cmp-long v9, v5, v7

    if-eqz v9, :cond_6

    .line 163
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "\u5f53\u524d\u7684\u8fdb\u5ea6\u662f:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v6, "hash\u503c\u662f:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getHash()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "\u4e0b\u8f7d\u7684\u5b58\u53d1\u7684\u5730\u5740\u662f:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavePath()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    move-wide v5, v7

    .line 166
    :cond_6
    iget-object v9, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCallback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    invoke-interface {v9, v7, v8}, Lcom/ymnsdk/replugin/patch/download/DownloadCallback;->downloading(J)V

    goto :goto_0

    .line 171
    :cond_7
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V

    .line 172
    invoke-direct {p0, p2}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadSuccess(I)Z
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    .line 173
    :try_start_8
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_0

    return-void

    :catchall_0
    move-exception p1

    .line 128
    :try_start_9
    throw p1
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_1

    :catchall_1
    move-exception p2

    .line 173
    :try_start_a
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_2

    goto :goto_1

    :catchall_2
    move-exception v0

    :try_start_b
    invoke-virtual {p1, v0}, Ljava/lang/Throwable;->addSuppressed(Ljava/lang/Throwable;)V

    :goto_1
    throw p2
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_0

    :catch_0
    move-exception p1

    .line 175
    throw p1
.end method


# virtual methods
.method public closeCall()V
    .locals 2

    .line 67
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentCall:Lokhttp3/Call;

    if-nez v0, :cond_0

    return-void

    .line 71
    :cond_0
    invoke-interface {v0}, Lokhttp3/Call;->cancel()V

    const/4 v0, 0x0

    .line 72
    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentCall:Lokhttp3/Call;

    const-wide/16 v0, 0x3e8

    .line 75
    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 77
    invoke-virtual {v0}, Ljava/lang/InterruptedException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public download(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadCallback;I)Z
    .locals 2

    .line 219
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "download: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymn"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 222
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 223
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->TaskIsDownloading:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-direct {p0, p1, p5}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z

    move-result p1

    return p1

    .line 226
    :cond_0
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->closeCall()V

    .line 227
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->resetTask()V

    .line 229
    iput-object p2, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    .line 230
    iput-object p4, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCallback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    .line 233
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object p4

    invoke-virtual {p4, p3}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkDirectories(Ljava/lang/String;)V

    .line 236
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object p4

    invoke-virtual {p4, p2, p1, p3}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncDownloadStatus(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 239
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object p3

    invoke-virtual {p3, p2}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object p3

    .line 240
    invoke-virtual {p3}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getValid()Z

    move-result p3

    if-nez p3, :cond_1

    .line 241
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->ManualStop:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-direct {p0, p1, p5}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z

    move-result p1

    return p1

    :cond_1
    const-string p3, "\u5230\u4e86execute"

    .line 249
    invoke-static {v1, p3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 250
    sget-object p3, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mDownloadClient:Lokhttp3/OkHttpClient;

    invoke-virtual {p0, p1, p2}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->newRequest(Ljava/lang/String;Ljava/lang/String;)Lokhttp3/Request;

    move-result-object p1

    invoke-virtual {p0, p3, p1}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->execute(Lokhttp3/OkHttpClient;Lokhttp3/Request;)Lokhttp3/Response;

    move-result-object p1

    const-string p2, "\u5230\u4e86execute,\u6709\u54cd\u5e94"

    .line 251
    invoke-static {v1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p1, :cond_2

    .line 254
    invoke-virtual {p1}, Lokhttp3/Response;->code()I

    move-result p2

    const/16 p3, 0x1a0

    if-ne p2, p3, :cond_2

    .line 255
    invoke-direct {p0, p5}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadSuccess(I)Z

    move-result p1

    return p1

    :cond_2
    if-eqz p1, :cond_6

    .line 258
    invoke-virtual {p1}, Lokhttp3/Response;->isSuccessful()Z

    move-result p2

    if-eqz p2, :cond_6

    invoke-virtual {p1}, Lokhttp3/Response;->body()Lokhttp3/ResponseBody;

    move-result-object p2

    if-nez p2, :cond_3

    goto :goto_1

    .line 262
    :cond_3
    :try_start_0
    invoke-virtual {p1}, Lokhttp3/Response;->body()Lokhttp3/ResponseBody;

    move-result-object p2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 263
    :try_start_1
    invoke-direct {p0, p2, p5}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->writeDownloadStream(Lokhttp3/ResponseBody;I)V

    .line 264
    invoke-virtual {p1}, Lokhttp3/Response;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p2, :cond_4

    .line 265
    :try_start_2
    invoke-virtual {p2}, Lokhttp3/ResponseBody;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :cond_4
    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p3

    .line 262
    :try_start_3
    throw p3
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :catchall_1
    move-exception p4

    if-eqz p2, :cond_5

    .line 265
    :try_start_4
    invoke-virtual {p2}, Lokhttp3/ResponseBody;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    goto :goto_0

    :catchall_2
    move-exception p2

    :try_start_5
    invoke-virtual {p3, p2}, Ljava/lang/Throwable;->addSuppressed(Ljava/lang/Throwable;)V

    :cond_5
    :goto_0
    throw p4
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0

    :catch_0
    move-exception p2

    .line 267
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V

    .line 268
    invoke-virtual {p1}, Lokhttp3/Response;->close()V

    .line 269
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileReadStreamException:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-direct {p0, p1, p5}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z

    move-result p1

    return p1

    .line 259
    :cond_6
    :goto_1
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->RequestFail:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-direct {p0, p1, p5}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->downloadFailed(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;I)Z

    move-result p1

    return p1
.end method

.method public execute(Lokhttp3/OkHttpClient;Lokhttp3/Request;)Lokhttp3/Response;
    .locals 0

    .line 86
    invoke-virtual {p1, p2}, Lokhttp3/OkHttpClient;->newCall(Lokhttp3/Request;)Lokhttp3/Call;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentCall:Lokhttp3/Call;

    .line 88
    :try_start_0
    invoke-interface {p1}, Lokhttp3/Call;->execute()Lokhttp3/Response;

    move-result-object p1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 90
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method

.method public initDownloadClient()V
    .locals 7

    .line 48
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mDownloadClient:Lokhttp3/OkHttpClient;

    if-nez v0, :cond_0

    .line 49
    new-instance v0, Lokhttp3/ConnectionPool;

    const/16 v1, 0x400

    sget-object v2, Ljava/util/concurrent/TimeUnit;->MINUTES:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v3, 0x1e

    invoke-direct {v0, v1, v3, v4, v2}, Lokhttp3/ConnectionPool;-><init>(IJLjava/util/concurrent/TimeUnit;)V

    .line 51
    new-instance v1, Lokhttp3/OkHttpClient;

    invoke-direct {v1}, Lokhttp3/OkHttpClient;-><init>()V

    sput-object v1, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mDownloadClient:Lokhttp3/OkHttpClient;

    .line 52
    invoke-virtual {v1}, Lokhttp3/OkHttpClient;->newBuilder()Lokhttp3/OkHttpClient$Builder;

    move-result-object v1

    const-wide/16 v5, 0x5

    sget-object v2, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    .line 53
    invoke-virtual {v1, v5, v6, v2}, Lokhttp3/OkHttpClient$Builder;->connectTimeout(JLjava/util/concurrent/TimeUnit;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v1

    sget-object v2, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    .line 54
    invoke-virtual {v1, v3, v4, v2}, Lokhttp3/OkHttpClient$Builder;->readTimeout(JLjava/util/concurrent/TimeUnit;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v1

    sget-object v2, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    .line 55
    invoke-virtual {v1, v3, v4, v2}, Lokhttp3/OkHttpClient$Builder;->writeTimeout(JLjava/util/concurrent/TimeUnit;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v1

    .line 57
    invoke-virtual {v1, v0}, Lokhttp3/OkHttpClient$Builder;->connectionPool(Lokhttp3/ConnectionPool;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    .line 59
    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mDownloadResume:Lokhttp3/Interceptor;

    invoke-virtual {v0, v1}, Lokhttp3/OkHttpClient$Builder;->addInterceptor(Lokhttp3/Interceptor;)Lokhttp3/OkHttpClient$Builder;

    .line 60
    invoke-virtual {v0}, Lokhttp3/OkHttpClient$Builder;->build()Lokhttp3/OkHttpClient;

    move-result-object v0

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mDownloadClient:Lokhttp3/OkHttpClient;

    :cond_0
    return-void
.end method

.method public newRequest(Ljava/lang/String;Ljava/lang/String;)Lokhttp3/Request;
    .locals 1

    .line 181
    new-instance v0, Lokhttp3/Request$Builder;

    invoke-direct {v0}, Lokhttp3/Request$Builder;-><init>()V

    invoke-virtual {v0, p1}, Lokhttp3/Request$Builder;->url(Ljava/lang/String;)Lokhttp3/Request$Builder;

    move-result-object p1

    invoke-virtual {p1, p2}, Lokhttp3/Request$Builder;->tag(Ljava/lang/Object;)Lokhttp3/Request$Builder;

    move-result-object p1

    invoke-virtual {p1}, Lokhttp3/Request$Builder;->build()Lokhttp3/Request;

    move-result-object p1

    return-object p1
.end method

.method public pause()V
    .locals 1

    .line 202
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->resetTask()V

    .line 203
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->pause()V

    .line 204
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->closeCall()V

    return-void
.end method

.method public pause(Ljava/lang/String;)Z
    .locals 1

    .line 185
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->pause(Ljava/lang/String;)V

    .line 187
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 188
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->closeCall()V

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public resetTask()V
    .locals 1

    const/4 v0, 0x0

    .line 82
    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->mCurrentTask:Ljava/lang/String;

    return-void
.end method

.method public resume()V
    .locals 1

    .line 209
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->resume()V

    return-void
.end method

.method public resume(Ljava/lang/String;)Z
    .locals 1

    .line 196
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->resume(Ljava/lang/String;)V

    const/4 p1, 0x1

    return p1
.end method
