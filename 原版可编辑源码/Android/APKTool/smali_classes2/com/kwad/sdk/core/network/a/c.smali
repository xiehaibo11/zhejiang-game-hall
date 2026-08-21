.class public final Lcom/kwad/sdk/core/network/a/c;
.super Ljava/lang/Object;


# static fields
.field private static final apN:Ljava/util/regex/Pattern;

.field public static apO:Ljava/lang/String;

.field private static apP:Lokhttp3/OkHttpClient;

.field public static apQ:Lokhttp3/OkHttpClient;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    const-string v0, "Unexpected response code for CONNECT: ([0-9]+)"

    const/4 v1, 0x2

    invoke-static {v0, v1}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;I)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/network/a/c;->apN:Ljava/util/regex/Pattern;

    const-string v0, "UTF-8"

    sput-object v0, Lcom/kwad/sdk/core/network/a/c;->apO:Ljava/lang/String;

    const/4 v0, 0x0

    sput-object v0, Lcom/kwad/sdk/core/network/a/c;->apP:Lokhttp3/OkHttpClient;

    invoke-static {}, Lcom/kwad/sdk/core/network/a/c;->Bn()Lokhttp3/OkHttpClient;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/network/a/c;->apQ:Lokhttp3/OkHttpClient;

    return-void
.end method

.method public static Bm()Lokhttp3/OkHttpClient;
    .locals 1

    sget-object v0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_1

    sget-object v0, Lcom/kwad/sdk/core/network/a/c;->apP:Lokhttp3/OkHttpClient;

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/sdk/core/network/a/c;->apQ:Lokhttp3/OkHttpClient;

    invoke-virtual {v0}, Lokhttp3/OkHttpClient;->newBuilder()Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    invoke-virtual {v0}, Lokhttp3/OkHttpClient$Builder;->build()Lokhttp3/OkHttpClient;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/network/a/c;->apP:Lokhttp3/OkHttpClient;

    :cond_0
    sget-object v0, Lcom/kwad/sdk/core/network/a/c;->apP:Lokhttp3/OkHttpClient;

    return-object v0

    :cond_1
    sget-object v0, Lcom/kwad/sdk/core/network/a/c;->apQ:Lokhttp3/OkHttpClient;

    return-object v0
.end method

.method private static Bn()Lokhttp3/OkHttpClient;
    .locals 4

    sget-object v0, Lcom/kwad/sdk/core/network/a/c;->apQ:Lokhttp3/OkHttpClient;

    if-nez v0, :cond_0

    new-instance v0, Lokhttp3/OkHttpClient$Builder;

    invoke-direct {v0}, Lokhttp3/OkHttpClient$Builder;-><init>()V

    const-wide/16 v1, 0xbb8

    sget-object v3, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {v0, v1, v2, v3}, Lokhttp3/OkHttpClient$Builder;->connectTimeout(JLjava/util/concurrent/TimeUnit;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    const-wide/16 v1, 0x1770

    sget-object v3, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {v0, v1, v2, v3}, Lokhttp3/OkHttpClient$Builder;->readTimeout(JLjava/util/concurrent/TimeUnit;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    const/4 v1, 0x3

    new-array v1, v1, [Lokhttp3/ConnectionSpec;

    const/4 v2, 0x0

    sget-object v3, Lokhttp3/ConnectionSpec;->MODERN_TLS:Lokhttp3/ConnectionSpec;

    aput-object v3, v1, v2

    const/4 v2, 0x1

    sget-object v3, Lokhttp3/ConnectionSpec;->COMPATIBLE_TLS:Lokhttp3/ConnectionSpec;

    aput-object v3, v1, v2

    const/4 v2, 0x2

    sget-object v3, Lokhttp3/ConnectionSpec;->CLEARTEXT:Lokhttp3/ConnectionSpec;

    aput-object v3, v1, v2

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-virtual {v0, v1}, Lokhttp3/OkHttpClient$Builder;->connectionSpecs(Ljava/util/List;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    :try_start_0
    new-instance v1, Lcom/kwad/sdk/core/network/a/d;

    invoke-direct {v1}, Lcom/kwad/sdk/core/network/a/d;-><init>()V

    invoke-virtual {v0, v1}, Lokhttp3/OkHttpClient$Builder;->dns(Lokhttp3/Dns;)Lokhttp3/OkHttpClient$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    invoke-virtual {v0}, Lokhttp3/OkHttpClient$Builder;->build()Lokhttp3/OkHttpClient;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/network/a/c;->apQ:Lokhttp3/OkHttpClient;

    :cond_0
    sget-object v0, Lcom/kwad/sdk/core/network/a/c;->apQ:Lokhttp3/OkHttpClient;

    return-object v0
.end method

.method public static a(Ljava/lang/String;Ljava/util/Map;Z)Lcom/kwad/sdk/core/network/c;
    .locals 2
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

    :try_start_0
    new-instance v1, Lokhttp3/Request$Builder;

    invoke-direct {v1}, Lokhttp3/Request$Builder;-><init>()V

    invoke-virtual {v1, p0}, Lokhttp3/Request$Builder;->url(Ljava/lang/String;)Lokhttp3/Request$Builder;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Request$Builder;)V

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Request$Builder;Ljava/util/Map;)V

    invoke-virtual {p0}, Lokhttp3/Request$Builder;->build()Lokhttp3/Request;

    move-result-object p0

    invoke-static {}, Lcom/kwad/sdk/core/network/a/c;->Bm()Lokhttp3/OkHttpClient;

    move-result-object p1

    invoke-virtual {p1, p0}, Lokhttp3/OkHttpClient;->newCall(Lokhttp3/Request;)Lokhttp3/Call;

    move-result-object p0

    invoke-interface {p0}, Lokhttp3/Call;->execute()Lokhttp3/Response;

    move-result-object p0

    invoke-virtual {p0}, Lokhttp3/Response;->code()I

    move-result p1

    iput p1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iget p1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iput p1, v0, Lcom/kwad/sdk/core/network/c;->aoK:I

    if-eqz p2, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Response;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_0
    const-string p0, ""

    :goto_0
    iput-object p0, v0, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/network/a/c;->a(Lcom/kwad/sdk/core/network/c;Ljava/lang/Exception;)V

    :goto_1
    return-object v0
.end method

.method private static a(Lokhttp3/Response;)Ljava/lang/String;
    .locals 6

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v1, 0x0

    :try_start_0
    invoke-virtual {p0}, Lokhttp3/Response;->body()Lokhttp3/ResponseBody;

    move-result-object v2

    invoke-virtual {v2}, Lokhttp3/ResponseBody;->byteStream()Ljava/io/InputStream;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    :try_start_1
    const-string v3, "Content-Encoding"

    invoke-virtual {p0, v3}, Lokhttp3/Response;->headers(Ljava/lang/String;)Ljava/util/List;

    move-result-object p0

    const/4 v3, 0x0

    if-eqz p0, :cond_1

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    const-string v5, "gzip"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 v3, 0x1

    :cond_1
    if-eqz v3, :cond_2

    new-instance p0, Ljava/util/zip/GZIPInputStream;

    invoke-direct {p0, v2}, Ljava/util/zip/GZIPInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    move-object v3, p0

    goto :goto_0

    :cond_2
    move-object v3, v1

    move-object p0, v2

    :goto_0
    :try_start_2
    new-instance v4, Ljava/io/InputStreamReader;

    sget-object v5, Lcom/kwad/sdk/core/network/a/c;->apO:Ljava/lang/String;

    invoke-direct {v4, p0, v5}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :try_start_3
    new-instance p0, Ljava/io/BufferedReader;

    const/16 v5, 0x8

    invoke-direct {p0, v4, v5}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;I)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :goto_1
    :try_start_4
    invoke-virtual {p0}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_3

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_1

    :cond_3
    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v3}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :catchall_0
    move-exception v0

    move-object v1, p0

    move-object p0, v0

    goto :goto_3

    :catchall_1
    move-exception p0

    goto :goto_3

    :catchall_2
    move-exception p0

    move-object v4, v1

    goto :goto_3

    :catchall_3
    move-exception p0

    move-object v3, v1

    goto :goto_2

    :catchall_4
    move-exception p0

    move-object v2, v1

    move-object v3, v2

    :goto_2
    move-object v4, v3

    :goto_3
    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v3}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p0
.end method

.method private static a(Lcom/kwad/sdk/core/network/c;Ljava/lang/Exception;)V
    .locals 2

    iput-object p1, p0, Lcom/kwad/sdk/core/network/c;->aoL:Ljava/lang/Exception;

    iget v0, p0, Lcom/kwad/sdk/core/network/c;->aoK:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    instance-of v0, p1, Ljava/io/IOException;

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    sget-object v1, Lcom/kwad/sdk/core/network/a/c;->apN:Ljava/util/regex/Pattern;

    invoke-virtual {v1, v0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/regex/Matcher;->find()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    :try_start_0
    invoke-virtual {v0, v1}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/network/c;->aoK:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    instance-of v0, p1, Ljava/net/SocketTimeoutException;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/kwad/sdk/core/network/f;->aoP:Lcom/kwad/sdk/core/network/f;

    iget v0, v0, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iput v0, p0, Lcom/kwad/sdk/core/network/c;->code:I

    sget-object v0, Lcom/kwad/sdk/core/network/f;->aoP:Lcom/kwad/sdk/core/network/f;

    iget-object v0, v0, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    goto :goto_0

    :cond_1
    sget-object v0, Lcom/kwad/sdk/core/network/f;->aoQ:Lcom/kwad/sdk/core/network/f;

    iget v0, v0, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iput v0, p0, Lcom/kwad/sdk/core/network/c;->code:I

    :try_start_1
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
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :goto_0
    sget-object p0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    if-eqz p0, :cond_2

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_2
    return-void
.end method

.method private static a(Lokhttp3/Request$Builder;)V
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/core/network/q;->getUserAgent()Ljava/lang/String;

    move-result-object v0

    const-string v1, "User-Agent"

    invoke-virtual {p0, v1, v0}, Lokhttp3/Request$Builder;->addHeader(Ljava/lang/String;Ljava/lang/String;)Lokhttp3/Request$Builder;

    invoke-static {}, Lcom/kwad/sdk/core/network/q;->Bj()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BrowserUa"

    invoke-virtual {p0, v1, v0}, Lokhttp3/Request$Builder;->addHeader(Ljava/lang/String;Ljava/lang/String;)Lokhttp3/Request$Builder;

    invoke-static {}, Lcom/kwad/sdk/core/network/q;->Bi()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SystemUa"

    invoke-virtual {p0, v1, v0}, Lokhttp3/Request$Builder;->addHeader(Ljava/lang/String;Ljava/lang/String;)Lokhttp3/Request$Builder;

    return-void
.end method

.method private static a(Lokhttp3/Request$Builder;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lokhttp3/Request$Builder;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    if-eqz p0, :cond_1

    if-eqz p1, :cond_1

    invoke-interface {p1}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :catch_0
    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    if-eqz v0, :cond_0

    :try_start_0
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {p0, v1}, Lokhttp3/Request$Builder;->removeHeader(Ljava/lang/String;)Lokhttp3/Request$Builder;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {p0, v1, v0}, Lokhttp3/Request$Builder;->addHeader(Ljava/lang/String;Ljava/lang/String;)Lokhttp3/Request$Builder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_1
    return-void
.end method

.method private static a(Lokhttp3/Request$Builder;Lorg/json/JSONObject;)V
    .locals 1

    const-string v0, "application/json; charset=utf-8"

    invoke-static {v0}, Lokhttp3/MediaType;->parse(Ljava/lang/String;)Lokhttp3/MediaType;

    move-result-object v0

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lokhttp3/RequestBody;->create(Lokhttp3/MediaType;Ljava/lang/String;)Lokhttp3/RequestBody;

    move-result-object p1

    invoke-virtual {p0, p1}, Lokhttp3/Request$Builder;->post(Lokhttp3/RequestBody;)Lokhttp3/Request$Builder;

    return-void
.end method

.method private static a(Lokhttp3/Response;Ljava/io/OutputStream;I)Z
    .locals 11

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0}, Lokhttp3/Response;->body()Lokhttp3/ResponseBody;

    move-result-object v1

    invoke-virtual {v1}, Lokhttp3/ResponseBody;->byteStream()Ljava/io/InputStream;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    :try_start_1
    const-string v2, "Content-Encoding"

    invoke-virtual {p0, v2}, Lokhttp3/Response;->headers(Ljava/lang/String;)Ljava/util/List;

    move-result-object p0

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p0, :cond_1

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    const-string v5, "gzip"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    move p0, v2

    goto :goto_0

    :cond_1
    move p0, v3

    :goto_0
    if-eqz p0, :cond_2

    new-instance p0, Ljava/util/zip/GZIPInputStream;

    invoke-direct {p0, v1}, Ljava/util/zip/GZIPInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    move-object v4, p0

    goto :goto_1

    :cond_2
    move-object v4, v0

    move-object p0, v1

    :goto_1
    :try_start_2
    new-instance v5, Ljava/io/BufferedInputStream;

    invoke-direct {v5, p0}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    const/16 p0, 0x400

    :try_start_3
    new-array p0, p0, [B

    const-wide/16 v6, 0x0

    const/4 v8, -0x1

    if-lez p2, :cond_4

    :cond_3
    invoke-virtual {v5, p0}, Ljava/io/BufferedInputStream;->read([B)I

    move-result p1

    if-eq p1, v8, :cond_6

    int-to-long v9, p1

    add-long/2addr v6, v9

    int-to-long v9, p2

    cmp-long p1, v6, v9

    if-lez p1, :cond_3

    goto :goto_3

    :cond_4
    if-gez p2, :cond_6

    new-instance p2, Ljava/io/BufferedOutputStream;

    invoke-direct {p2, p1}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :goto_2
    :try_start_4
    invoke-virtual {v5, p0}, Ljava/io/BufferedInputStream;->read([B)I

    move-result p1

    if-eq p1, v8, :cond_5

    invoke-virtual {p2, p0, v3, p1}, Ljava/io/BufferedOutputStream;->write([BII)V

    goto :goto_2

    :cond_5
    invoke-virtual {p2}, Ljava/io/BufferedOutputStream;->flush()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    move-object v0, p2

    goto :goto_3

    :catchall_0
    move-exception p0

    goto :goto_4

    :cond_6
    :goto_3
    invoke-static {v5}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return v2

    :catchall_1
    move-exception p0

    move-object p2, v0

    :goto_4
    move-object v0, v5

    goto :goto_5

    :catchall_2
    move-exception p0

    move-object p2, v0

    goto :goto_5

    :catchall_3
    move-exception p0

    move-object p2, v0

    move-object v4, p2

    goto :goto_5

    :catchall_4
    move-exception p0

    move-object p2, v0

    move-object v1, p2

    move-object v4, v1

    :goto_5
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p0
.end method

.method private static b(Lokhttp3/Request$Builder;Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lokhttp3/Request$Builder;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_2

    invoke-interface {p1}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    new-instance v0, Lokhttp3/FormBody$Builder;

    invoke-direct {v0}, Lokhttp3/FormBody$Builder;-><init>()V

    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :catch_0
    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    if-eqz v1, :cond_0

    :try_start_0
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Lcom/kwad/sdk/core/network/a/c;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lokhttp3/FormBody$Builder;->addEncoded(Ljava/lang/String;Ljava/lang/String;)Lokhttp3/FormBody$Builder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_1
    invoke-virtual {v0}, Lokhttp3/FormBody$Builder;->build()Lokhttp3/FormBody;

    move-result-object p1

    goto :goto_1

    :cond_2
    const/4 p1, 0x0

    :goto_1
    if-eqz p0, :cond_3

    if-eqz p1, :cond_3

    invoke-virtual {p0, p1}, Lokhttp3/Request$Builder;->post(Lokhttp3/RequestBody;)Lokhttp3/Request$Builder;

    :cond_3
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

    invoke-static {p0, p1, v0}, Lcom/kwad/sdk/core/network/a/c;->a(Ljava/lang/String;Ljava/util/Map;Z)Lcom/kwad/sdk/core/network/c;

    move-result-object p0

    return-object p0
.end method

.method public static doPost(Ljava/lang/String;Ljava/util/Map;Lcom/kwad/sdk/export/proxy/AdHttpBodyBuilder;)Lcom/kwad/sdk/core/network/c;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/kwad/sdk/export/proxy/AdHttpBodyBuilder;",
            ")",
            "Lcom/kwad/sdk/core/network/c;"
        }
    .end annotation

    new-instance v0, Lcom/kwad/sdk/core/network/c;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/c;-><init>()V

    :try_start_0
    new-instance v1, Lokhttp3/MultipartBody$Builder;

    invoke-direct {v1}, Lokhttp3/MultipartBody$Builder;-><init>()V

    sget-object v2, Lokhttp3/MultipartBody;->FORM:Lokhttp3/MediaType;

    invoke-virtual {v1, v2}, Lokhttp3/MultipartBody$Builder;->setType(Lokhttp3/MediaType;)Lokhttp3/MultipartBody$Builder;

    move-result-object v1

    if-eqz p2, :cond_0

    new-instance v2, Lcom/kwad/sdk/core/network/a/c$1;

    invoke-direct {v2, v1}, Lcom/kwad/sdk/core/network/a/c$1;-><init>(Lokhttp3/MultipartBody$Builder;)V

    invoke-interface {p2, v2}, Lcom/kwad/sdk/export/proxy/AdHttpBodyBuilder;->buildFormData(Lcom/kwad/sdk/export/proxy/AdHttpFormDataBuilder;)V

    :cond_0
    invoke-virtual {v1}, Lokhttp3/MultipartBody$Builder;->build()Lokhttp3/MultipartBody;

    move-result-object p2

    new-instance v1, Lokhttp3/Request$Builder;

    invoke-direct {v1}, Lokhttp3/Request$Builder;-><init>()V

    invoke-virtual {v1, p0}, Lokhttp3/Request$Builder;->url(Ljava/lang/String;)Lokhttp3/Request$Builder;

    move-result-object p0

    invoke-virtual {p0, p2}, Lokhttp3/Request$Builder;->post(Lokhttp3/RequestBody;)Lokhttp3/Request$Builder;

    move-result-object p0

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Request$Builder;Ljava/util/Map;)V

    invoke-virtual {p0}, Lokhttp3/Request$Builder;->build()Lokhttp3/Request;

    move-result-object p0

    invoke-static {}, Lcom/kwad/sdk/core/network/a/c;->Bm()Lokhttp3/OkHttpClient;

    move-result-object p1

    invoke-virtual {p1, p0}, Lokhttp3/OkHttpClient;->newCall(Lokhttp3/Request;)Lokhttp3/Call;

    move-result-object p0

    invoke-interface {p0}, Lokhttp3/Call;->execute()Lokhttp3/Response;

    move-result-object p0

    invoke-virtual {p0}, Lokhttp3/Response;->code()I

    move-result p1

    iput p1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iget p1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iput p1, v0, Lcom/kwad/sdk/core/network/c;->aoK:I

    invoke-static {p0}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Response;)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/network/a/c;->a(Lcom/kwad/sdk/core/network/c;Ljava/lang/Exception;)V

    :goto_0
    return-object v0
.end method

.method public static doPost(Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)Lcom/kwad/sdk/core/network/c;
    .locals 2
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

    new-instance v0, Lcom/kwad/sdk/core/network/c;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/c;-><init>()V

    :try_start_0
    new-instance v1, Lokhttp3/Request$Builder;

    invoke-direct {v1}, Lokhttp3/Request$Builder;-><init>()V

    invoke-virtual {v1, p0}, Lokhttp3/Request$Builder;->url(Ljava/lang/String;)Lokhttp3/Request$Builder;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Request$Builder;)V

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Request$Builder;Ljava/util/Map;)V

    invoke-static {p0, p2}, Lcom/kwad/sdk/core/network/a/c;->b(Lokhttp3/Request$Builder;Ljava/util/Map;)V

    invoke-virtual {p0}, Lokhttp3/Request$Builder;->build()Lokhttp3/Request;

    move-result-object p0

    invoke-static {}, Lcom/kwad/sdk/core/network/a/c;->Bm()Lokhttp3/OkHttpClient;

    move-result-object p1

    invoke-virtual {p1, p0}, Lokhttp3/OkHttpClient;->newCall(Lokhttp3/Request;)Lokhttp3/Call;

    move-result-object p0

    invoke-interface {p0}, Lokhttp3/Call;->execute()Lokhttp3/Response;

    move-result-object p0

    invoke-virtual {p0}, Lokhttp3/Response;->code()I

    move-result p1

    iput p1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iget p1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iput p1, v0, Lcom/kwad/sdk/core/network/c;->aoK:I

    invoke-static {p0}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Response;)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/network/a/c;->a(Lcom/kwad/sdk/core/network/c;Ljava/lang/Exception;)V

    :goto_0
    return-object v0
.end method

.method public static doPost(Ljava/lang/String;Ljava/util/Map;Lorg/json/JSONObject;)Lcom/kwad/sdk/core/network/c;
    .locals 2
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

    new-instance v0, Lcom/kwad/sdk/core/network/c;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/c;-><init>()V

    :try_start_0
    new-instance v1, Lokhttp3/Request$Builder;

    invoke-direct {v1}, Lokhttp3/Request$Builder;-><init>()V

    invoke-virtual {v1, p0}, Lokhttp3/Request$Builder;->url(Ljava/lang/String;)Lokhttp3/Request$Builder;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Request$Builder;)V

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Request$Builder;Ljava/util/Map;)V

    invoke-static {p0, p2}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Request$Builder;Lorg/json/JSONObject;)V

    invoke-virtual {p0}, Lokhttp3/Request$Builder;->build()Lokhttp3/Request;

    move-result-object p0

    invoke-static {}, Lcom/kwad/sdk/core/network/a/c;->Bm()Lokhttp3/OkHttpClient;

    move-result-object p1

    invoke-virtual {p1, p0}, Lokhttp3/OkHttpClient;->newCall(Lokhttp3/Request;)Lokhttp3/Call;

    move-result-object p0

    invoke-interface {p0}, Lokhttp3/Call;->execute()Lokhttp3/Response;

    move-result-object p0

    invoke-virtual {p0}, Lokhttp3/Response;->code()I

    move-result p1

    iput p1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iget p1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iput p1, v0, Lcom/kwad/sdk/core/network/c;->aoK:I

    invoke-static {p0}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Response;)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/network/a/c;->a(Lcom/kwad/sdk/core/network/c;Ljava/lang/Exception;)V

    :goto_0
    return-object v0
.end method

.method public static downloadUrlToStream(Ljava/lang/String;Ljava/io/OutputStream;I)Z
    .locals 4

    new-instance v0, Lcom/kwad/sdk/core/network/c;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/c;-><init>()V

    new-instance v1, Lokhttp3/Request$Builder;

    invoke-direct {v1}, Lokhttp3/Request$Builder;-><init>()V

    invoke-virtual {v1, p0}, Lokhttp3/Request$Builder;->url(Ljava/lang/String;)Lokhttp3/Request$Builder;

    move-result-object p0

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const-string v2, "Accept-Language"

    const-string v3, "zh-CN"

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "Connection"

    const-string v3, "keep-alive"

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "Charset"

    const-string v3, "UTF-8"

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p0}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Request$Builder;)V

    invoke-static {p0, v1}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Request$Builder;Ljava/util/Map;)V

    invoke-virtual {p0}, Lokhttp3/Request$Builder;->build()Lokhttp3/Request;

    move-result-object p0

    invoke-static {}, Lcom/kwad/sdk/core/network/a/c;->Bm()Lokhttp3/OkHttpClient;

    move-result-object v1

    invoke-virtual {v1, p0}, Lokhttp3/OkHttpClient;->newCall(Lokhttp3/Request;)Lokhttp3/Call;

    move-result-object p0

    invoke-interface {p0}, Lokhttp3/Call;->execute()Lokhttp3/Response;

    move-result-object p0

    invoke-virtual {p0}, Lokhttp3/Response;->code()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iget v1, v0, Lcom/kwad/sdk/core/network/c;->code:I

    iput v1, v0, Lcom/kwad/sdk/core/network/c;->aoK:I

    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/core/network/a/c;->a(Lokhttp3/Response;Ljava/io/OutputStream;I)Z

    const/4 p0, 0x1

    return p0
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
