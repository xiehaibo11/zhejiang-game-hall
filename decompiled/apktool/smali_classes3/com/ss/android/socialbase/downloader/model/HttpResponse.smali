.class public Lcom/ss/android/socialbase/downloader/model/HttpResponse;
.super Ljava/lang/Object;


# instance fields
.field public final connection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

.field private contentLength:J

.field public final responseCode:I

.field private totalLength:J

.field public final url:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 28
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->url:Ljava/lang/String;

    .line 29
    invoke-interface {p2}, Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;->getResponseCode()I

    move-result p1

    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->responseCode:I

    .line 30
    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->connection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    return-void
.end method


# virtual methods
.method public acceptPartial()Z
    .locals 3

    .line 38
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->responseCode:I

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->connection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    const-string v2, "Accept-Ranges"

    invoke-interface {v1, v2}, Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;->getResponseHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->canAcceptPartial(ILjava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public getCacheControl()Ljava/lang/String;
    .locals 2

    .line 62
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->connection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    const-string v1, "Cache-Control"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getRespHeadFieldIgnoreCase(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getContentLength()J
    .locals 4

    .line 66
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->contentLength:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_0

    .line 67
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->connection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getContentLength(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->contentLength:J

    .line 69
    :cond_0
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->contentLength:J

    return-wide v0
.end method

.method public getContentRange()Ljava/lang/String;
    .locals 2

    .line 50
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->connection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    const-string v1, "Content-Range"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getRespHeadFieldIgnoreCase(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getContentType()Ljava/lang/String;
    .locals 2

    .line 46
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->connection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    const-string v1, "Content-Type"

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;->getResponseHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getEtag()Ljava/lang/String;
    .locals 2

    .line 42
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->connection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    const-string v1, "Etag"

    invoke-interface {v0, v1}, Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;->getResponseHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getLastModified()Ljava/lang/String;
    .locals 2

    .line 54
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->connection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    const-string v1, "last-modified"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getRespHeadFieldIgnoreCase(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 55
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 56
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->connection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    const-string v1, "Last-Modified"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getRespHeadFieldIgnoreCase(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method public getMaxAge()J
    .locals 2

    .line 96
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getCacheControl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parserMaxAge(Ljava/lang/String;)J

    move-result-wide v0

    return-wide v0
.end method

.method public getTotalLength()J
    .locals 4

    .line 81
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->totalLength:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_1

    .line 82
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->isChunked()Z

    move-result v0

    if-nez v0, :cond_0

    .line 83
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getContentRange()Ljava/lang/String;

    move-result-object v0

    .line 84
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 86
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseContentRangeOfInstanceLength(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->totalLength:J

    goto :goto_0

    :cond_0
    const-wide/16 v0, -0x1

    .line 89
    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->totalLength:J

    .line 92
    :cond_1
    :goto_0
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->totalLength:J

    return-wide v0
.end method

.method public isChunked()Z
    .locals 2

    const/16 v0, 0x8

    .line 73
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadExpSwitchCode;->isSwitchEnable(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 74
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->connection:Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isChunkedTask(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)Z

    move-result v0

    return v0

    .line 76
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->getContentLength()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isChunkedTask(J)Z

    move-result v0

    return v0
.end method

.method public isResponseDataFromBegin()Z
    .locals 1

    .line 34
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/HttpResponse;->responseCode:I

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isResponseDataFromBegin(I)Z

    move-result v0

    return v0
.end method
