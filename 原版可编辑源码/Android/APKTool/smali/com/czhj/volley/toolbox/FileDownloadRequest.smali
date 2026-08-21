.class public Lcom/czhj/volley/toolbox/FileDownloadRequest;
.super Lcom/czhj/volley/Request;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/volley/Request<",
        "Lcom/czhj/volley/toolbox/DownloadItem;",
        ">;"
    }
.end annotation


# instance fields
.field private a:Ljava/io/File;

.field private b:Ljava/io/File;

.field private c:Lcom/czhj/volley/toolbox/DownloadItem;

.field private d:J

.field private final e:Ljava/lang/Object;

.field private f:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;


# direct methods
.method public constructor <init>(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)V
    .locals 5

    iget-object v0, p1, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    const/4 v1, 0x0

    const/4 v2, 0x0

    invoke-direct {p0, v2, v0, v1}, Lcom/czhj/volley/Request;-><init>(ILjava/lang/String;Lcom/czhj/volley/Response$ErrorListener;)V

    const-wide/16 v3, 0x0

    iput-wide v3, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->d:J

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->e:Ljava/lang/Object;

    iput-object v1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->f:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    new-instance v0, Ljava/io/File;

    iget-object v1, p1, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    :cond_0
    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    :cond_1
    iput-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->c:Lcom/czhj/volley/toolbox/DownloadItem;

    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p1, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".tmp"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    iget-boolean v0, p1, Lcom/czhj/volley/toolbox/DownloadItem;->userRange:Z

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    :cond_2
    iput-object p2, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->f:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    new-instance p2, Lcom/czhj/volley/DefaultRetryPolicy;

    const/16 v0, 0x2710

    const/4 v1, 0x0

    const/4 v3, 0x2

    invoke-direct {p2, v0, v3, v1}, Lcom/czhj/volley/DefaultRetryPolicy;-><init>(IIF)V

    invoke-virtual {p0, p2}, Lcom/czhj/volley/toolbox/FileDownloadRequest;->setRetryPolicy(Lcom/czhj/volley/RetryPolicy;)Lcom/czhj/volley/Request;

    invoke-virtual {p0, v2}, Lcom/czhj/volley/toolbox/FileDownloadRequest;->setShouldCache(Z)Lcom/czhj/volley/Request;

    new-array p2, v3, [Ljava/lang/Object;

    iget-object v0, p1, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    aput-object v0, p2, v2

    const/4 v0, 0x1

    iget-object p1, p1, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    aput-object p1, p2, v0

    const-string p1, "FileDownloadRequest()  [ %s ], url = [%s]"

    invoke-static {p1, p2}, Lcom/czhj/volley/VolleyLog;->d(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public cancel()V
    .locals 2

    invoke-super {p0}, Lcom/czhj/volley/Request;->cancel()V

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->e:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, 0x0

    :try_start_0
    iput-object v1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->f:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public deliverError(Lcom/czhj/volley/VolleyError;)V
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->c:Lcom/czhj/volley/toolbox/DownloadItem;

    const/4 v1, 0x0

    iput v1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->status:I

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    :cond_0
    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    :cond_1
    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->c:Lcom/czhj/volley/toolbox/DownloadItem;

    iput-object p1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->error:Lcom/czhj/volley/VolleyError;

    iget-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->f:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->c:Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-interface {p1, v0}, Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;->onErrorResponse(Lcom/czhj/volley/toolbox/DownloadItem;)V

    return-void
.end method

.method protected deliverResponse(Lcom/czhj/volley/toolbox/DownloadItem;)V
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->c:Lcom/czhj/volley/toolbox/DownloadItem;

    const/4 v1, 0x1

    iput v1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->status:I

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->f:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    invoke-interface {v0, p1}, Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;->onSuccess(Lcom/czhj/volley/toolbox/DownloadItem;)V

    return-void
.end method

.method protected bridge synthetic deliverResponse(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-virtual {p0, p1}, Lcom/czhj/volley/toolbox/FileDownloadRequest;->deliverResponse(Lcom/czhj/volley/toolbox/DownloadItem;)V

    return-void
.end method

.method public getHeaders()Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iget-object v1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->d:J

    const-string v1, "Connection"

    const-string v2, "Keep-Alive"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Accept-Encoding"

    const-string v2, "gzip"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "bytes="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v2, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->d:J

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, "-"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "Range"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Range,bytes="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v3, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->d:J

    invoke-virtual {v1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/czhj/volley/toolbox/FileDownloadRequest;->addMarker(Ljava/lang/String;)V

    return-object v0
.end method

.method public getPriority()Lcom/czhj/volley/Request$Priority;
    .locals 1

    sget-object v0, Lcom/czhj/volley/Request$Priority;->LOW:Lcom/czhj/volley/Request$Priority;

    return-object v0
.end method

.method public handleRawResponse(Lcom/czhj/volley/toolbox/HttpResponse;)[B
    .locals 19
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    move-object/from16 v1, p0

    const-string v2, "Error occured when calling consumingContent"

    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/toolbox/HttpResponse;->getHeaders()Ljava/util/List;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/volley/toolbox/FileDownloadNetwork;->convertHeaders(Ljava/util/List;)Ljava/util/Map;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/volley/toolbox/HttpHeaderParser;->isSupportRange(Ljava/util/Map;)Z

    move-result v3

    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/toolbox/HttpResponse;->getContentLength()I

    move-result v4

    int-to-long v4, v4

    const-string v6, "Transfer-Encoding"

    invoke-interface {v0, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    const/4 v8, -0x1

    const-wide/16 v9, 0x0

    const/4 v11, 0x0

    if-eqz v7, :cond_0

    invoke-interface {v0, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    const-string v7, "chunked"

    invoke-virtual {v6, v7}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_0

    new-array v0, v11, [Ljava/lang/Object;

    const-string v6, "Response doesn\'t present Content-Length!"

    invoke-static {v6, v0}, Lcom/czhj/volley/VolleyLog;->d(Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_0

    :cond_0
    cmp-long v6, v4, v9

    if-ltz v6, :cond_4

    const-string v7, "Content-Length"

    invoke-interface {v0, v7}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_4

    if-nez v6, :cond_1

    iget-object v6, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-virtual {v6}, Ljava/io/File;->exists()Z

    move-result v6

    if-eqz v6, :cond_1

    iget-object v6, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-virtual {v6}, Ljava/io/File;->length()J

    move-result-wide v6

    cmp-long v6, v6, v4

    if-nez v6, :cond_1

    iget-object v0, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    iget-object v2, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v0, v2}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/InputStream;->close()V

    new-array v0, v11, [B

    return-object v0

    :cond_1
    if-eqz v3, :cond_3

    iget-object v6, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v6}, Ljava/io/File;->length()J

    move-result-wide v6

    add-long/2addr v4, v6

    const-string v12, "Content-Range"

    invoke-static {v0, v12}, Lcom/czhj/volley/toolbox/HttpHeaderParser;->getHeader(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const/4 v12, 0x1

    new-array v12, v12, [Ljava/lang/Object;

    aput-object v0, v12, v11

    const-string v13, "Content-Range %s"

    invoke-static {v13, v12}, Lcom/czhj/volley/VolleyLog;->d(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-nez v12, :cond_5

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "bytes "

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v13, "-"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-wide/16 v13, 0x1

    sub-long v13, v4, v13

    invoke-virtual {v12, v13, v14}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v0, v12}, Landroid/text/TextUtils;->indexOf(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I

    move-result v13

    if-eq v13, v8, :cond_2

    goto :goto_1

    :cond_2
    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v2

    invoke-virtual {v2}, Ljava/io/InputStream;->close()V

    iget-object v2, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    new-instance v2, Ljava/lang/IllegalStateException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "The Content-Range Header is invalid Assume["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "] vs Real["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "], has remove the temporary file ["

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, "]."

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v2

    :cond_3
    :goto_0
    move-wide v6, v9

    goto :goto_1

    :cond_4
    iget-object v0, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v6

    :cond_5
    :goto_1
    const/4 v12, 0x0

    :try_start_0
    new-instance v14, Ljava/io/RandomAccessFile;

    iget-object v0, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    const-string v13, "rw"

    invoke-direct {v14, v0, v13}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_7

    if-eqz v3, :cond_6

    :try_start_1
    invoke-virtual {v14, v6, v7}, Ljava/io/RandomAccessFile;->seek(J)V

    move-wide v9, v6

    goto :goto_2

    :cond_6
    invoke-virtual {v14, v9, v10}, Ljava/io/RandomAccessFile;->setLength(J)V

    :goto_2
    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_6

    const/16 v0, 0x2000

    :try_start_2
    new-array v6, v0, [B

    :goto_3
    invoke-virtual {v3, v6}, Ljava/io/InputStream;->read([B)I

    move-result v7
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_5

    const-string v15, " offset "

    const-string v13, " total: "

    const-string v12, "recv: "

    if-eq v7, v8, :cond_9

    :try_start_3
    invoke-virtual/range {p0 .. p0}, Lcom/czhj/volley/toolbox/FileDownloadRequest;->isCanceled()Z

    move-result v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_5

    if-eqz v0, :cond_7

    :try_start_4
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->c:Lcom/czhj/volley/toolbox/DownloadItem;

    iget-object v6, v6, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " download  is cancel"

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v6, v11, [Ljava/lang/Object;

    invoke-static {v0, v6}, Lcom/czhj/volley/VolleyLog;->v(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto/16 :goto_6

    :catchall_0
    move-exception v0

    move-object v12, v3

    goto/16 :goto_9

    :cond_7
    :try_start_5
    invoke-virtual {v14, v6, v11, v7}, Ljava/io/RandomAccessFile;->write([BII)V

    move-object/from16 p1, v12

    int-to-long v11, v7

    add-long/2addr v9, v11

    iget-object v0, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->f:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_5

    if-eqz v0, :cond_8

    :try_start_6
    iget-object v12, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->f:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    iget-object v0, v1, Lcom/czhj/volley/toolbox/FileDownloadRequest;->c:Lcom/czhj/volley/toolbox/DownloadItem;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    move-object/from16 v11, p1

    move-object v8, v13

    move-object v13, v0

    move-object/from16 v18, v14

    move-object v1, v15

    move-wide v14, v4

    move-wide/from16 v16, v9

    :try_start_7
    invoke-interface/range {v12 .. v17}, Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;->downloadProgress(Lcom/czhj/volley/toolbox/DownloadItem;JJ)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    goto :goto_5

    :catchall_1
    move-exception v0

    goto :goto_4

    :catchall_2
    move-exception v0

    move-object/from16 v11, p1

    move-object v8, v13

    move-object/from16 v18, v14

    move-object v1, v15

    :goto_4
    :try_start_8
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "callback downloadProgress  error "

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v12, 0x0

    new-array v13, v12, [Ljava/lang/Object;

    invoke-static {v0, v13}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_5

    :cond_8
    move-object/from16 v11, p1

    move-object v8, v13

    move-object/from16 v18, v14

    move-object v1, v15

    :goto_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v9, v10}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v7, v1, [Ljava/lang/Object;

    invoke-static {v0, v7}, Lcom/czhj/volley/VolleyLog;->d(Ljava/lang/String;[Ljava/lang/Object;)V

    move-object/from16 v14, v18

    const/4 v8, -0x1

    const/4 v11, 0x0

    move-object/from16 v1, p0

    goto/16 :goto_3

    :cond_9
    :goto_6
    move-object v11, v12

    move-object v8, v13

    move-object/from16 v18, v14

    move-object v1, v15

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v9, v10}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v4, v1, [Ljava/lang/Object;

    invoke-static {v0, v4}, Lcom/czhj/volley/VolleyLog;->d(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    if-eqz v3, :cond_a

    :try_start_9
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_3

    goto :goto_7

    :catchall_3
    new-array v0, v1, [Ljava/lang/Object;

    invoke-static {v2, v0}, Lcom/czhj/volley/VolleyLog;->v(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_a
    :goto_7
    invoke-virtual/range {v18 .. v18}, Ljava/io/RandomAccessFile;->close()V

    new-array v0, v1, [B

    return-object v0

    :catchall_4
    move-exception v0

    goto :goto_8

    :catchall_5
    move-exception v0

    move-object/from16 v18, v14

    :goto_8
    move-object v12, v3

    goto :goto_a

    :catchall_6
    move-exception v0

    :goto_9
    move-object/from16 v18, v14

    goto :goto_a

    :catchall_7
    move-exception v0

    move-object/from16 v18, v12

    :goto_a
    :try_start_a
    throw v0
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_8

    :catchall_8
    move-exception v0

    move-object v1, v0

    if-eqz v12, :cond_b

    :try_start_b
    invoke-virtual {v12}, Ljava/io/InputStream;->close()V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_9

    goto :goto_b

    :catchall_9
    const/4 v3, 0x0

    new-array v0, v3, [Ljava/lang/Object;

    invoke-static {v2, v0}, Lcom/czhj/volley/VolleyLog;->v(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_b
    :goto_b
    if-eqz v18, :cond_c

    invoke-virtual/range {v18 .. v18}, Ljava/io/RandomAccessFile;->close()V

    :cond_c
    throw v1
.end method

.method protected parseNetworkResponse(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Response;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/NetworkResponse;",
            ")",
            "Lcom/czhj/volley/Response<",
            "Lcom/czhj/volley/toolbox/DownloadItem;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->c:Lcom/czhj/volley/toolbox/DownloadItem;

    iget-wide v1, p1, Lcom/czhj/volley/NetworkResponse;->networkTimeMs:J

    iput-wide v1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->networkMs:J

    invoke-virtual {p0}, Lcom/czhj/volley/toolbox/FileDownloadRequest;->isCanceled()Z

    move-result v0

    if-nez v0, :cond_d

    iget-object p1, p1, Lcom/czhj/volley/NetworkResponse;->allHeaders:Ljava/util/List;

    invoke-static {p1}, Lcom/czhj/volley/toolbox/FileDownloadNetwork;->convertHeaders(Ljava/util/List;)Ljava/util/Map;

    move-result-object p1

    const-string v0, "Transfer-Encoding"

    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const-wide/16 v2, 0x0

    if-eqz v1, :cond_0

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "chunked"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v0

    goto :goto_0

    :cond_0
    const-string v0, "content-length"

    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0

    iget-wide v4, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->d:J

    add-long/2addr v0, v4

    goto :goto_0

    :cond_1
    move-wide v0, v2

    :goto_0
    iget-object v4, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->c:Lcom/czhj/volley/toolbox/DownloadItem;

    iput-wide v0, v4, Lcom/czhj/volley/toolbox/DownloadItem;->size:J

    iget-object v4, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v4}, Ljava/io/File;->canRead()Z

    move-result v4

    const/4 v5, 0x0

    if-eqz v4, :cond_b

    iget-object v4, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v4}, Ljava/io/File;->length()J

    move-result-wide v6

    cmp-long v4, v6, v2

    if-lez v4, :cond_b

    iget-object v4, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v4}, Ljava/io/File;->length()J

    move-result-wide v6

    cmp-long v4, v6, v0

    if-eqz v4, :cond_2

    cmp-long v2, v0, v2

    if-nez v2, :cond_b

    :cond_2
    invoke-static {p1}, Lcom/czhj/volley/toolbox/HttpHeaderParser;->isGzipContent(Ljava/util/Map;)Z

    move-result p1

    if-eqz p1, :cond_9

    const/4 p1, 0x0

    :try_start_0
    new-instance v0, Ljava/util/zip/GZIPInputStream;

    new-instance v1, Ljava/io/FileInputStream;

    iget-object v2, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-direct {v1, v2}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v0, v1}, Ljava/util/zip/GZIPInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    new-instance v1, Ljava/io/FileOutputStream;

    iget-object v2, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-direct {v1, v2}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/16 v2, 0x1000

    :try_start_2
    new-array v3, v2, [B

    :goto_1
    invoke-virtual {v0, v3, p1, v2}, Ljava/io/InputStream;->read([BII)I

    move-result v4

    const/4 v6, -0x1

    if-eq v4, v6, :cond_3

    invoke-virtual {v1, v3, p1, v4}, Ljava/io/FileOutputStream;->write([BII)V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_1

    :cond_3
    const/4 v2, 0x1

    :try_start_3
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-array v3, p1, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_2
    :try_start_4
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_3

    :catch_1
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-array p1, p1, [Ljava/lang/Object;

    invoke-static {v0, p1}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_3
    move p1, v2

    goto :goto_6

    :catch_2
    move-exception v2

    goto :goto_4

    :catchall_0
    move-exception v2

    move-object v1, v5

    goto :goto_7

    :catch_3
    move-exception v2

    move-object v1, v5

    goto :goto_4

    :catchall_1
    move-exception v2

    move-object v1, v5

    goto :goto_8

    :catch_4
    move-exception v2

    move-object v0, v5

    move-object v1, v0

    :goto_4
    :try_start_5
    invoke-virtual {v2}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v2

    new-array v3, p1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    if-eqz v0, :cond_4

    :try_start_6
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_5

    goto :goto_5

    :catch_5
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-array v2, p1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_4
    :goto_5
    if-eqz v1, :cond_5

    :try_start_7
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_6

    goto :goto_6

    :catch_6
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-array v1, p1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_5
    :goto_6
    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->c:Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-static {p1, v5}, Lcom/czhj/volley/Response;->success(Ljava/lang/Object;Lcom/czhj/volley/Cache$Entry;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1

    :cond_6
    new-instance p1, Lcom/czhj/volley/VolleyError;

    const-string v0, "error gzip unzip the download temporary file!"

    invoke-direct {p1, v0}, Lcom/czhj/volley/VolleyError;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/czhj/volley/Response;->error(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1

    :catchall_2
    move-exception v2

    :goto_7
    move-object v5, v0

    :goto_8
    if-eqz v5, :cond_7

    :try_start_8
    invoke-virtual {v5}, Ljava/io/InputStream;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_7

    goto :goto_9

    :catch_7
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-array v3, p1, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_7
    :goto_9
    if-eqz v1, :cond_8

    :try_start_9
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_8

    goto :goto_a

    :catch_8
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-array p1, p1, [Ljava/lang/Object;

    invoke-static {v0, p1}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_8
    :goto_a
    throw v2

    :cond_9
    iget-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-virtual {p1, v0}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    move-result p1

    if-eqz p1, :cond_a

    iget-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->c:Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-static {p1, v5}, Lcom/czhj/volley/Response;->success(Ljava/lang/Object;Lcom/czhj/volley/Cache$Entry;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1

    :cond_a
    new-instance p1, Lcom/czhj/volley/VolleyError;

    const-string v0, "Can\'t rename the download temporary file!"

    invoke-direct {p1, v0}, Lcom/czhj/volley/VolleyError;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/czhj/volley/Response;->error(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1

    :cond_b
    iget-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-virtual {p1}, Ljava/io/File;->canRead()Z

    move-result p1

    if-eqz p1, :cond_c

    iget-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->a:Ljava/io/File;

    invoke-virtual {p1}, Ljava/io/File;->length()J

    move-result-wide v2

    cmp-long p1, v2, v0

    if-nez p1, :cond_c

    iget-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->c:Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-static {p1, v5}, Lcom/czhj/volley/Response;->success(Ljava/lang/Object;Lcom/czhj/volley/Cache$Entry;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1

    :cond_c
    new-instance p1, Lcom/czhj/volley/VolleyError;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Download temporary file was invalid!"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->b:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/czhj/volley/VolleyError;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/czhj/volley/Response;->error(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1

    :cond_d
    new-instance p1, Lcom/czhj/volley/VolleyError;

    const-string v0, "Request was Canceled!"

    invoke-direct {p1, v0}, Lcom/czhj/volley/VolleyError;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/czhj/volley/Response;->error(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1
.end method

.method public setListener(Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloadRequest;->f:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    return-void
.end method
