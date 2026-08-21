.class public final Lcom/kwad/sdk/core/download/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/download/a$b;,
        Lcom/kwad/sdk/core/download/a$c;,
        Lcom/kwad/sdk/core/download/a$a;
    }
.end annotation


# static fields
.field private static mContext:Landroid/content/Context;

.field private static volatile mHasInit:Z


# direct methods
.method public static B(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/download/a;->mContext:Landroid/content/Context;

    if-nez v0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/download/DownloadParams;->transform(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/download/DownloadParams;

    move-result-object p0

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 p0, 0x0

    return-object p0

    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/kwad/sdk/core/download/a;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/utils/av;->cK(Landroid/content/Context;)Ljava/io/File;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileUrl:Ljava/lang/String;

    invoke-static {p0}, Lcom/kwad/sdk/core/download/a;->cG(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static C(Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/download/a;->a(Lcom/kwad/sdk/core/response/model/AdInfo;Z)V

    return-void
.end method

.method private static a(Ljava/util/Map;Ljava/io/InputStream;)Ljava/io/InputStream;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;",
            "Ljava/io/InputStream;",
            ")",
            "Ljava/io/InputStream;"
        }
    .end annotation

    invoke-interface {p0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :catch_0
    :cond_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "Content-Encoding"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    const/4 v1, 0x0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const-string v3, "gzip"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/4 v1, 0x1

    :cond_2
    if-eqz v1, :cond_0

    :try_start_0
    new-instance v0, Ljava/util/zip/GZIPInputStream;

    invoke-direct {v0, p1}, Ljava/util/zip/GZIPInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    move-object p1, v0

    :cond_3
    return-object p1
.end method

.method private static a(Ljava/lang/String;IIZ)Ljava/net/URLConnection;
    .locals 0

    :try_start_0
    new-instance p1, Ljava/net/URL;

    invoke-direct {p1, p0}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/network/s;->wrapHttpURLConnection(Ljava/net/URLConnection;)V

    const-string p1, "Accept-Language"

    const-string p3, "zh-CN"

    invoke-virtual {p0, p1, p3}, Ljava/net/URLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const/16 p1, 0x2710

    invoke-virtual {p0, p1}, Ljava/net/URLConnection;->setConnectTimeout(I)V

    if-lez p2, :cond_0

    invoke-virtual {p0, p2}, Ljava/net/URLConnection;->setReadTimeout(I)V

    :cond_0
    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Ljava/net/URLConnection;->setUseCaches(Z)V

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Ljava/net/URLConnection;->setDoInput(Z)V

    const-string p1, "Connection"

    const-string p2, "keep-alive"

    invoke-virtual {p0, p1, p2}, Ljava/net/URLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "Charset"

    const-string p2, "UTF-8"

    invoke-virtual {p0, p1, p2}, Ljava/net/URLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/net/MalformedURLException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    const/4 p0, 0x0

    return-object p0
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdInfo;Z)V
    .locals 3

    sget-object p1, Lcom/kwad/sdk/core/download/a;->mContext:Landroid/content/Context;

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {p1}, Lcom/kwad/sdk/utils/ag;->isNetworkConnected(Landroid/content/Context;)Z

    move-result p1

    if-nez p1, :cond_1

    sget-object p0, Lcom/kwad/sdk/core/download/a;->mContext:Landroid/content/Context;

    invoke-static {p0}, Lcom/kwad/sdk/utils/w;->bW(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/v;->L(Landroid/content/Context;Ljava/lang/String;)V

    return-void

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/core/download/DownloadParams;->transform(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/download/DownloadParams;

    move-result-object p0

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/sdk/core/download/DownloadParams;->requestInstallPermission:Z

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    invoke-static {v0}, Landroid/webkit/URLUtil;->isNetworkUrl(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    goto :goto_0

    :cond_2
    new-instance v1, Lcom/kwad/sdk/DownloadTask$DownloadRequest;

    iget-object v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileUrl:Ljava/lang/String;

    invoke-direct {v1, v2}, Lcom/kwad/sdk/DownloadTask$DownloadRequest;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/download/a;->cG(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->setDestinationFileName(Ljava/lang/String;)Lcom/kwad/sdk/DownloadTask$DownloadRequest;

    invoke-virtual {v1, p0}, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->setTag(Ljava/io/Serializable;)Lcom/kwad/sdk/DownloadTask$DownloadRequest;

    iget-boolean v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->downloadEnablePause:Z

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->setDownloadEnablePause(Z)V

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/sdk/api/SdkConfig;->showNotification:Z

    if-eqz v0, :cond_3

    sget-object v0, Lcom/kwad/sdk/core/download/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/core/download/a;->aU(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_3

    const/4 p1, 0x3

    :cond_3
    invoke-virtual {v1, p1}, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->setNotificationVisibility(I)Lcom/kwad/sdk/DownloadTask$DownloadRequest;

    sget-object p1, Lcom/kwad/sdk/core/download/a;->mContext:Landroid/content/Context;

    iget-object p0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mDownloadid:Ljava/lang/String;

    invoke-static {p1, p0, v1}, Lcom/kwad/sdk/e/a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/kwad/sdk/DownloadTask$DownloadRequest;)V

    :cond_4
    :goto_0
    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/io/File;Lcom/kwad/sdk/core/download/a$b;I)Z
    .locals 1

    const/4 p2, 0x0

    :try_start_0
    new-instance p3, Lcom/kwad/sdk/core/download/a$a;

    const/4 v0, 0x0

    invoke-direct {p3, p1, v0}, Lcom/kwad/sdk/core/download/a$a;-><init>(Ljava/io/File;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-static {p0, p2, p3, p2, v0}, Lcom/kwad/sdk/core/download/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/download/a$c;Lcom/kwad/sdk/core/download/a$b;I)Z

    move-result p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-static {p3}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return p0

    :catchall_0
    move-exception p0

    move-object p2, p3

    goto :goto_0

    :catchall_1
    move-exception p0

    :goto_0
    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p0
.end method

.method public static a(Ljava/lang/String;Ljava/io/File;Lcom/kwad/sdk/core/download/a$b;IZ)Z
    .locals 10

    const/4 p2, 0x0

    :try_start_0
    new-instance p3, Lcom/kwad/sdk/core/download/a$a;

    const/4 p4, 0x1

    invoke-direct {p3, p1, p4}, Lcom/kwad/sdk/core/download/a$a;-><init>(Ljava/io/File;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {p1}, Ljava/io/File;->length()J

    move-result-wide v5

    const/4 v1, 0x0

    const/4 v3, 0x0

    const/4 v4, -0x1

    const-wide/16 v7, -0x1

    const/4 v9, 0x1

    move-object v0, p0

    move-object v2, p3

    invoke-static/range {v0 .. v9}, Lcom/kwad/sdk/core/download/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/download/a$c;Lcom/kwad/sdk/core/download/a$b;IJJZ)Z

    move-result p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-static {p3}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return p0

    :catchall_0
    move-exception p0

    move-object p2, p3

    goto :goto_0

    :catchall_1
    move-exception p0

    :goto_0
    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p0
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/download/a$c;Lcom/kwad/sdk/core/download/a$b;I)Z
    .locals 10

    const/4 v1, 0x0

    const-wide/16 v5, -0x1

    const-wide/16 v7, -0x1

    const/4 v9, 0x0

    move-object v0, p0

    move-object v2, p2

    move-object v3, p3

    move v4, p4

    invoke-static/range {v0 .. v9}, Lcom/kwad/sdk/core/download/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/download/a$c;Lcom/kwad/sdk/core/download/a$b;IJJZ)Z

    move-result p0

    return p0
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/download/a$c;Lcom/kwad/sdk/core/download/a$b;IJJZ)Z
    .locals 12

    const/16 v0, 0x2710

    if-lez p4, :cond_0

    move/from16 v1, p4

    goto :goto_0

    :cond_0
    const v1, 0x1d4c0

    :goto_0
    const/4 v2, 0x0

    const/4 v3, 0x0

    move-object v4, p0

    :try_start_0
    invoke-static {p0, v0, v1, v2}, Lcom/kwad/sdk/core/download/a;->a(Ljava/lang/String;IIZ)Ljava/net/URLConnection;

    move-result-object v0

    move-object v11, v0

    check-cast v11, Ljava/net/HttpURLConnection;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v11, :cond_2

    const-wide/16 v8, -0x1

    move-object v1, v11

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move/from16 v5, p4

    move-wide/from16 v6, p5

    move/from16 v10, p9

    :try_start_1
    invoke-static/range {v1 .. v10}, Lcom/kwad/sdk/core/download/a;->a(Ljava/net/HttpURLConnection;Ljava/lang/String;Lcom/kwad/sdk/core/download/a$c;Lcom/kwad/sdk/core/download/a$b;IJJZ)Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    if-eqz v11, :cond_1

    invoke-virtual {v11}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_1
    return v0

    :catchall_0
    move-exception v0

    move-object v3, v11

    goto :goto_1

    :cond_2
    :try_start_2
    new-instance v0, Ljava/io/IOException;

    const-string v1, "Fail to createUrlConnection"

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_1
    move-exception v0

    :goto_1
    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    if-eqz v3, :cond_3

    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_3
    throw v0
.end method

.method private static a(Ljava/net/HttpURLConnection;Ljava/lang/String;Lcom/kwad/sdk/core/download/a$c;Lcom/kwad/sdk/core/download/a$b;IJJZ)Z
    .locals 14

    move-object v1, p0

    move-object/from16 v2, p2

    move-object/from16 v0, p3

    const-wide/16 v3, 0x0

    cmp-long v5, p5, v3

    const/4 v6, 0x1

    const/4 v7, 0x0

    const/4 v8, 0x0

    if-lez v5, :cond_1

    if-eqz p9, :cond_1

    :try_start_0
    const-string v5, "Range"

    const-string v9, "bytes=%s-%s"

    const/4 v10, 0x2

    new-array v10, v10, [Ljava/lang/Object;

    invoke-static/range {p5 .. p6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v11

    aput-object v11, v10, v7

    cmp-long v3, p7, v3

    if-lez v3, :cond_0

    invoke-static/range {p7 .. p8}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    goto :goto_0

    :cond_0
    const-string v3, ""

    :goto_0
    aput-object v3, v10, v6

    invoke-static {v9, v10}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v5, v3}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/core/network/q;->b(Ljava/net/HttpURLConnection;)V

    const-string v3, "Accept-Encoding"

    const-string v4, "gzip"

    invoke-virtual {p0, v3, v4}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    const-string v3, "Host"

    move-object v4, p1

    invoke-virtual {p0, v3, p1}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0, v7}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v3

    const/16 v4, 0x12e

    if-ne v3, v4, :cond_3

    const-string v3, "Location"

    invoke-virtual {p0, v3}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    move/from16 v4, p4

    invoke-static {v3, v8, v2, v0, v4}, Lcom/kwad/sdk/core/download/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/download/a$c;Lcom/kwad/sdk/core/download/a$b;I)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_5

    invoke-static/range {p2 .. p2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v8}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    if-eqz v1, :cond_2

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_2
    invoke-static {v8}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return v0

    :cond_3
    :try_start_1
    new-instance v3, Ljava/io/BufferedInputStream;

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_5

    :try_start_2
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getContentLength()I

    move-result v4

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    move-result-object v5

    if-nez v5, :cond_4

    new-instance v5, Ljava/util/HashMap;

    invoke-direct {v5}, Ljava/util/HashMap;-><init>()V

    goto :goto_1

    :cond_4
    new-instance v5, Ljava/util/HashMap;

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    move-result-object v9

    invoke-direct {v5, v9}, Ljava/util/HashMap;-><init>(Ljava/util/Map;)V

    :goto_1
    new-instance v9, Ljava/io/BufferedInputStream;

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v10

    invoke-direct {v9, v10}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_4

    :try_start_3
    invoke-static {v5, v9}, Lcom/kwad/sdk/core/download/a;->a(Ljava/util/Map;Ljava/io/InputStream;)Ljava/io/InputStream;

    move-result-object v3
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    const/4 v9, -0x1

    const/16 v10, 0x2000

    if-gtz v4, :cond_6

    :try_start_4
    new-instance v4, Ljava/util/Random;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v11

    invoke-direct {v4, v11, v12}, Ljava/util/Random;-><init>(J)V

    new-instance v11, Ljava/io/File;

    sget-object v12, Lcom/kwad/sdk/core/download/a;->mContext:Landroid/content/Context;

    invoke-static {v12}, Lcom/kwad/sdk/utils/av;->cL(Landroid/content/Context;)Ljava/io/File;

    move-result-object v12

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4}, Ljava/util/Random;->nextInt()I

    move-result v4

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ".tmp"

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v11, v12, v4}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    :try_start_5
    new-instance v4, Ljava/io/FileOutputStream;

    invoke-direct {v4, v11}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :try_start_6
    new-array v8, v10, [B

    move v12, v7

    :goto_2
    invoke-virtual {v3, v8}, Ljava/io/InputStream;->read([B)I

    move-result v13

    if-eq v13, v9, :cond_5

    add-int/2addr v12, v13

    invoke-virtual {v4, v8, v7, v13}, Ljava/io/OutputStream;->write([BII)V

    goto :goto_2

    :cond_5
    invoke-static {v3}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    new-instance v8, Ljava/io/BufferedInputStream;

    new-instance v13, Ljava/io/FileInputStream;

    invoke-direct {v13, v11}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v8, v13}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    :try_start_7
    const-string v3, "Content-Length"

    invoke-static {v12}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Ljava/util/Collections;->singletonList(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v12

    invoke-interface {v5, v3, v12}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_3

    :catchall_0
    move-exception v0

    goto :goto_5

    :catchall_1
    move-exception v0

    move-object v4, v8

    goto :goto_5

    :cond_6
    move-object v4, v8

    move-object v11, v4

    move-object v8, v3

    :goto_3
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getResponseCode()I

    new-array v3, v10, [B

    :goto_4
    invoke-virtual {v8, v3}, Ljava/io/InputStream;->read([B)I

    move-result v5

    if-eq v5, v9, :cond_7

    invoke-interface {v2, v3, v7, v5}, Lcom/kwad/sdk/core/download/a$c;->write([BII)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    goto :goto_4

    :cond_7
    invoke-static/range {p2 .. p2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v8}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    if-eqz v1, :cond_8

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_8
    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    if-eqz v11, :cond_9

    invoke-virtual {v11}, Ljava/io/File;->delete()Z

    :cond_9
    return v6

    :catchall_2
    move-exception v0

    goto :goto_6

    :catchall_3
    move-exception v0

    move-object v4, v8

    move-object v11, v4

    move-object v8, v9

    goto :goto_6

    :catchall_4
    move-exception v0

    move-object v4, v8

    move-object v11, v4

    :goto_5
    move-object v8, v3

    goto :goto_6

    :catchall_5
    move-exception v0

    move-object v4, v8

    move-object v11, v4

    :goto_6
    :try_start_8
    instance-of v3, v0, Ljava/io/IOException;

    if-eqz v3, :cond_a

    check-cast v0, Ljava/io/IOException;

    goto :goto_7

    :cond_a
    new-instance v3, Ljava/io/IOException;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ":"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v3, v5, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    move-object v0, v3

    :goto_7
    throw v0
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_6

    :catchall_6
    move-exception v0

    invoke-static/range {p2 .. p2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v8}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    if-eqz v1, :cond_b

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_b
    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    if-eqz v11, :cond_c

    invoke-virtual {v11}, Ljava/io/File;->delete()Z

    :cond_c
    throw v0
.end method

.method public static declared-synchronized aT(Landroid/content/Context;)V
    .locals 2

    const-class v0, Lcom/kwad/sdk/core/download/a;

    monitor-enter v0

    if-eqz p0, :cond_1

    :try_start_0
    sget-boolean v1, Lcom/kwad/sdk/core/download/a;->mHasInit:Z

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    sput-object p0, Lcom/kwad/sdk/core/download/a;->mContext:Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/c;->wP()Lcom/kwad/sdk/c;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/kwad/sdk/c;->init(Landroid/content/Context;)V

    invoke-static {}, Lcom/kwad/sdk/core/download/c;->Aw()Lcom/kwad/sdk/core/download/c;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/kwad/sdk/core/download/c;->init(Landroid/content/Context;)V

    const/4 p0, 0x1

    sput-boolean p0, Lcom/kwad/sdk/core/download/a;->mHasInit:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    :cond_1
    :goto_0
    monitor-exit v0

    return-void
.end method

.method private static aU(Landroid/content/Context;)Z
    .locals 2

    :try_start_0
    new-instance v0, Landroid/support/v4/app/NotificationCompat$Builder;

    const-string v1, ""

    invoke-direct {v0, p0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p0, 0x1

    return p0

    :catchall_0
    const/4 p0, 0x0

    return p0
.end method

.method public static c(ILcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    const-class p0, Lcom/kwad/sdk/core/download/b;

    invoke-static {p0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/core/download/b;

    if-eqz p0, :cond_0

    const/4 v0, 0x1

    invoke-interface {p0, v0, p1}, Lcom/kwad/sdk/core/download/b;->b(ILcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_0
    return-void
.end method

.method public static c(Ljava/lang/String;Ljava/io/File;)Z
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    :try_start_0
    invoke-static {p0, p1, v0, v1}, Lcom/kwad/sdk/core/download/a;->a(Ljava/lang/String;Ljava/io/File;Lcom/kwad/sdk/core/download/a$b;I)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return v1
.end method

.method private static cG(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {p0}, Lcom/kwad/sdk/utils/ad;->bp(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ".apk"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cH(Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/download/a;->mContext:Landroid/content/Context;

    if-eqz v0, :cond_1

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/kwad/sdk/core/download/a;->mContext:Landroid/content/Context;

    invoke-static {v0, p0}, Lcom/kwad/sdk/e/a;->z(Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
