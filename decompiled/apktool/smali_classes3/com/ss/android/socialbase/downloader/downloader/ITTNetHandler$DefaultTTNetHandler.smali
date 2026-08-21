.class public Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler$DefaultTTNetHandler;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "DefaultTTNetHandler"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getTTNetDownloadHeadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getTTNetDownloadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public isResponseCode304Error(Ljava/lang/Throwable;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public isTTNetEnable()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public translateTTNetException(Ljava/lang/Throwable;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/exception/DownloadTTNetException;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method
