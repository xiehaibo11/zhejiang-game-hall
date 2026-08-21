.class public abstract Lcom/ss/android/socialbase/downloader/depend/AbsDownloadExtListener;
.super Lcom/ss/android/socialbase/downloader/depend/AbsDownloadListener;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadExtListener;


# static fields
.field private static final TAG:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 12
    const-class v0, Lcom/ss/android/socialbase/downloader/depend/AbsDownloadExtListener;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/depend/AbsDownloadExtListener;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/AbsDownloadListener;-><init>()V

    return-void
.end method


# virtual methods
.method public onWaitingDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 3

    .line 16
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result v0

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 17
    sget-object v0, Lcom/ss/android/socialbase/downloader/depend/AbsDownloadExtListener;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, " onWaitingDownloadCompleteHandler -- "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
