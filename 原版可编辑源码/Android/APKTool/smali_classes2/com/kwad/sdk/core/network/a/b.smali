.class public final Lcom/kwad/sdk/core/network/a/b;
.super Ljava/lang/Object;


# direct methods
.method private static a(Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;Z)Lcom/kwad/sdk/core/network/c;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            "Z)",
            "Lcom/kwad/sdk/core/network/c;"
        }
    .end annotation

    new-instance v0, Lcom/kwad/sdk/core/network/c;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/c;-><init>()V

    const/4 v1, 0x0

    :try_start_0
    new-instance v2, Ljava/net/URL;

    invoke-direct {v2, p0}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-static {p0}, Lcom/kwad/sdk/core/network/s;->wrapHttpURLConnection(Ljava/net/URLConnection;)V

    const/4 v2, 0x1

    invoke-virtual {p0, v2}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    invoke-virtual {p0, v2}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    const-string v2, "POST"

    invoke-virtual {p0, v2}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const-string v2, "Content-Type"

    if-eqz p3, :cond_0

    :try_start_2
    const-string p3, "application/json"

    :goto_0
    invoke-virtual {p0, v2, p3}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_0
    const-string p3, "application/x-www-form-urlencoded"

    goto :goto_0

    :goto_1
    invoke-static {p0}, Lcom/kwad/sdk/core/network/q;->b(Ljava/net/HttpURLConnection;)V

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/network/a/b;->a(Ljava/net/HttpURLConnection;Ljava/util/Map;)V

    const/16 p1, 0x1388

    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->connect()V

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v1

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/io/OutputStream;->write([B)V

    invoke-virtual {v1}, Ljava/io/OutputStream;->flush()V

    :cond_1
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result p1

    iput p1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iget p2, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iput p2, v0, Lcom/kwad/sdk/core/network/c;->aoK:I

    const/16 p2, 0xc8

    if-ne p1, p2, :cond_2

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/network/a/b;->a(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_2
    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->a(Ljava/net/URLConnection;)V

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    goto :goto_3

    :catchall_0
    move-exception p1

    move-object v3, v1

    move-object v1, p0

    move-object p0, v3

    goto :goto_4

    :catch_0
    move-exception p1

    move-object v3, v1

    move-object v1, p0

    move-object p0, v3

    goto :goto_2

    :catchall_1
    move-exception p1

    move-object p0, v1

    goto :goto_4

    :catch_1
    move-exception p1

    move-object p0, v1

    :goto_2
    :try_start_3
    invoke-static {v0, p1}, Lcom/kwad/sdk/core/network/a/b;->a(Lcom/kwad/sdk/core/network/c;Ljava/lang/Exception;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->a(Ljava/net/URLConnection;)V

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    :goto_3
    return-object v0

    :catchall_2
    move-exception p1

    :goto_4
    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->a(Ljava/net/URLConnection;)V

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p1
.end method

.method public static a(Ljava/lang/String;Ljava/util/Map;Z)Lcom/kwad/sdk/core/network/c;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;Z)",
            "Lcom/kwad/sdk/core/network/c;"
        }
    .end annotation

    new-instance v0, Lcom/kwad/sdk/core/network/c;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/c;-><init>()V

    const/4 v1, 0x0

    :try_start_0
    new-instance v2, Ljava/net/URL;

    invoke-direct {v2, p0}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-static {p0}, Lcom/kwad/sdk/core/network/s;->wrapHttpURLConnection(Ljava/net/URLConnection;)V

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/network/a/b;->a(Ljava/net/HttpURLConnection;Ljava/util/Map;)V

    const-string p1, "GET"

    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    const-string p1, "Accept"

    const-string v2, "application/json"

    invoke-virtual {p0, p1, v2}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p0}, Lcom/kwad/sdk/core/network/q;->b(Ljava/net/HttpURLConnection;)V

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result p1

    iput p1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iget p1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iput p1, v0, Lcom/kwad/sdk/core/network/c;->aoK:I

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    if-eqz p2, :cond_0

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    const/16 p2, 0x400

    new-array p2, p2, [B

    :goto_0
    invoke-virtual {v1, p2}, Ljava/io/InputStream;->read([B)I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_0

    new-instance v3, Ljava/lang/String;

    const/4 v4, 0x0

    invoke-direct {v3, p2, v4, v2}, Ljava/lang/String;-><init>([BII)V

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->a(Ljava/net/URLConnection;)V

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    goto :goto_2

    :catchall_0
    move-exception p1

    move-object v5, v1

    move-object v1, p0

    move-object p0, v5

    goto :goto_3

    :catch_0
    move-exception p1

    move-object v5, v1

    move-object v1, p0

    move-object p0, v5

    goto :goto_1

    :catchall_1
    move-exception p1

    move-object p0, v1

    goto :goto_3

    :catch_1
    move-exception p1

    move-object p0, v1

    :goto_1
    :try_start_2
    invoke-static {v0, p1}, Lcom/kwad/sdk/core/network/a/b;->a(Lcom/kwad/sdk/core/network/c;Ljava/lang/Exception;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->a(Ljava/net/URLConnection;)V

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    :goto_2
    return-object v0

    :catchall_2
    move-exception p1

    :goto_3
    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->a(Ljava/net/URLConnection;)V

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p1
.end method

.method private static a(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 1

    :try_start_0
    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/h;->c(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return-object v0

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    :try_start_1
    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    const/4 p0, 0x0

    return-object p0

    :goto_0
    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw v0
.end method

.method private static a(Lcom/kwad/sdk/core/network/c;Ljava/lang/Exception;)V
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/network/c;->code:I

    if-nez v0, :cond_0

    const/4 v0, -0x1

    goto :goto_0

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/network/c;->code:I

    :goto_0
    iput v0, p0, Lcom/kwad/sdk/core/network/c;->aoK:I

    iput-object p1, p0, Lcom/kwad/sdk/core/network/c;->aoL:Ljava/lang/Exception;

    instance-of v0, p1, Ljava/net/SocketTimeoutException;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/kwad/sdk/core/network/f;->aoP:Lcom/kwad/sdk/core/network/f;

    iget v0, v0, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iput v0, p0, Lcom/kwad/sdk/core/network/c;->code:I

    sget-object v0, Lcom/kwad/sdk/core/network/f;->aoP:Lcom/kwad/sdk/core/network/f;

    iget-object v0, v0, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    goto :goto_1

    :cond_1
    sget-object v0, Lcom/kwad/sdk/core/network/f;->aoQ:Lcom/kwad/sdk/core/network/f;

    iget v0, v0, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iput v0, p0, Lcom/kwad/sdk/core/network/c;->code:I

    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/kwad/sdk/core/network/f;->aoQ:Lcom/kwad/sdk/core/network/f;

    iget-object v1, v1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :goto_1
    sget-object p0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    if-eqz p0, :cond_2

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_2
    return-void
.end method

.method private static a(Ljava/net/HttpURLConnection;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/net/HttpURLConnection;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    if-eqz p0, :cond_0

    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {p0, v1, v0}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public static doGet(Ljava/lang/String;Ljava/util/Map;)Lcom/kwad/sdk/core/network/c;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/kwad/sdk/core/network/c;"
        }
    .end annotation

    const/4 v0, 0x1

    invoke-static {p0, p1, v0}, Lcom/kwad/sdk/core/network/a/b;->a(Ljava/lang/String;Ljava/util/Map;Z)Lcom/kwad/sdk/core/network/c;

    move-result-object p0

    return-object p0
.end method

.method public static doPost(Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)Lcom/kwad/sdk/core/network/c;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/kwad/sdk/core/network/c;"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p2, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-static {v3}, Lcom/kwad/sdk/core/network/a/b;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->length()I

    move-result p2

    add-int/lit8 p2, p2, -0x1

    invoke-virtual {v1, v0, p2}, Ljava/lang/StringBuilder;->substring(II)Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    :cond_1
    const/4 p2, 0x0

    :goto_1
    invoke-static {p0, p1, p2, v0}, Lcom/kwad/sdk/core/network/a/b;->a(Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;Z)Lcom/kwad/sdk/core/network/c;

    move-result-object p0

    return-object p0
.end method

.method public static doPost(Ljava/lang/String;Ljava/util/Map;Lorg/json/JSONObject;)Lcom/kwad/sdk/core/network/c;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lorg/json/JSONObject;",
            ")",
            "Lcom/kwad/sdk/core/network/c;"
        }
    .end annotation

    if-eqz p2, :cond_0

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    :goto_0
    const/4 v0, 0x1

    invoke-static {p0, p1, p2, v0}, Lcom/kwad/sdk/core/network/a/b;->a(Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;Z)Lcom/kwad/sdk/core/network/c;

    move-result-object p0

    return-object p0
.end method

.method public static downloadUrlToStream(Ljava/lang/String;Ljava/io/OutputStream;I)Z
    .locals 10

    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Ljava/net/URL;

    invoke-direct {v1, p0}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    :try_start_1
    invoke-static {p0}, Lcom/kwad/sdk/core/network/s;->wrapHttpURLConnection(Ljava/net/URLConnection;)V

    const-string v1, "Accept-Language"

    const-string v2, "zh-CN"

    invoke-virtual {p0, v1, v2}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v1, 0x2710

    invoke-virtual {p0, v1}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    const v1, 0x1d4c0

    invoke-virtual {p0, v1}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    const/4 v1, 0x0

    invoke-virtual {p0, v1}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const/4 v2, 0x1

    invoke-virtual {p0, v2}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    const-string v3, "Connection"

    const-string v4, "keep-alive"

    invoke-virtual {p0, v3, v4}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "Charset"

    const-string v4, "UTF-8"

    invoke-virtual {p0, v3, v4}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p0}, Lcom/kwad/sdk/core/network/q;->b(Ljava/net/HttpURLConnection;)V

    new-instance v3, Ljava/io/BufferedInputStream;

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    const/16 v4, 0x400

    :try_start_2
    new-array v4, v4, [B

    const-wide/16 v5, 0x0

    const/4 v7, -0x1

    if-lez p2, :cond_1

    :cond_0
    invoke-virtual {v3, v4}, Ljava/io/BufferedInputStream;->read([B)I

    move-result p1

    if-eq p1, v7, :cond_3

    int-to-long v8, p1

    add-long/2addr v5, v8

    int-to-long v8, p2

    cmp-long p1, v5, v8

    if-lez p1, :cond_0

    goto :goto_1

    :cond_1
    if-gez p2, :cond_3

    new-instance p2, Ljava/io/BufferedOutputStream;

    invoke-direct {p2, p1}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :goto_0
    :try_start_3
    invoke-virtual {v3, v4}, Ljava/io/BufferedInputStream;->read([B)I

    move-result p1

    if-eq p1, v7, :cond_2

    invoke-virtual {p2, v4, v1, p1}, Ljava/io/BufferedOutputStream;->write([BII)V

    goto :goto_0

    :cond_2
    invoke-virtual {p2}, Ljava/io/BufferedOutputStream;->flush()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    move-object v0, p2

    goto :goto_1

    :catchall_0
    move-exception p1

    move-object v0, p2

    goto :goto_2

    :cond_3
    :goto_1
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v3}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    if-eqz p0, :cond_4

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_4
    return v2

    :catchall_1
    move-exception p1

    goto :goto_2

    :catchall_2
    move-exception p1

    move-object v3, v0

    goto :goto_2

    :catchall_3
    move-exception p1

    move-object p0, v0

    move-object v3, p0

    :goto_2
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v3}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    if-eqz p0, :cond_5

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_5
    throw p1
.end method

.method private static encode(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    const-string v0, "UTF-8"

    invoke-static {p0, v0}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-object v1
.end method
