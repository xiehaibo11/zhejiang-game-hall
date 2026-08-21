.class public final Lcom/kwad/sdk/api/loader/i;
.super Ljava/lang/Object;


# direct methods
.method public static b(Ljava/lang/String;Ljava/io/File;)V
    .locals 6

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/h;->j(Ljava/io/File;)V

    :cond_0
    new-instance v1, Ljava/io/FileOutputStream;

    const/4 v2, 0x0

    invoke-direct {v1, p1, v2}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    :try_start_1
    invoke-static {p0}, Lcom/kwad/sdk/api/loader/i;->bW(Ljava/lang/String;)Ljava/net/HttpURLConnection;

    move-result-object p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :try_start_2
    new-instance p1, Ljava/io/BufferedInputStream;

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v3

    invoke-direct {p1, v3}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const/16 v0, 0x2800

    :try_start_3
    new-array v0, v0, [B

    :goto_0
    invoke-virtual {p1, v0}, Ljava/io/InputStream;->read([B)I

    move-result v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_1

    invoke-virtual {v1, v0, v2, v3}, Ljava/io/FileOutputStream;->write([BII)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_0

    :cond_1
    invoke-static {v1}, Lcom/kwad/sdk/api/loader/i;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/i;->closeQuietly(Ljava/io/Closeable;)V

    if-eqz p0, :cond_2

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_2
    return-void

    :catchall_0
    move-exception v0

    move-object v5, v1

    move-object v1, p0

    move-object p0, v0

    goto :goto_1

    :catchall_1
    move-exception p1

    move-object v5, v1

    move-object v1, p0

    move-object p0, p1

    move-object p1, v0

    :goto_1
    move-object v0, v5

    goto :goto_3

    :catchall_2
    move-exception p0

    move-object p1, v0

    move-object v0, v1

    goto :goto_2

    :catchall_3
    move-exception p0

    move-object p1, v0

    :goto_2
    move-object v1, p1

    :goto_3
    invoke-static {v0}, Lcom/kwad/sdk/api/loader/i;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/i;->closeQuietly(Ljava/io/Closeable;)V

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_3
    throw p0
.end method

.method private static bW(Ljava/lang/String;)Ljava/net/HttpURLConnection;
    .locals 2

    new-instance v0, Ljava/net/URL;

    invoke-direct {v0, p0}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;

    invoke-static {p0}, Lcom/kwad/sdk/api/core/TLSConnectionUtils;->wrapHttpURLConnection(Ljava/net/URLConnection;)V

    const-string v0, "Accept-Language"

    const-string v1, "zh-CN"

    invoke-virtual {p0, v0, v1}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v0, 0x2710

    invoke-virtual {p0, v0}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    const v0, 0x1d4c0

    invoke-virtual {p0, v0}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    const-string v0, "Connection"

    const-string v1, "keep-alive"

    invoke-virtual {p0, v0, v1}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "Charset"

    const-string v1, "UTF-8"

    invoke-virtual {p0, v0, v1}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    return-object p0
.end method

.method private static closeQuietly(Ljava/io/Closeable;)V
    .locals 0

    if-eqz p0, :cond_0

    :try_start_0
    invoke-interface {p0}, Ljava/io/Closeable;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    nop

    :catch_0
    :cond_0
    return-void
.end method
