.class public final Lcom/tencent/bugly/proguard/ad;
.super Ljava/lang/Object;
.source "BUGLY"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)Landroid/util/Pair;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const-string v0, "UTF-8"

    const/4 v1, 0x0

    const/4 v2, -0x1

    .line 57
    :try_start_0
    new-instance v3, Ljava/net/URL;

    invoke-direct {v3, p0}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    :try_start_1
    const-string v3, "POST"

    .line 58
    invoke-virtual {p0, v3}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    const/4 v3, 0x1

    .line 59
    invoke-virtual {p0, v3}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 60
    invoke-virtual {p0, v3}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    const/4 v3, 0x0

    .line 61
    invoke-virtual {p0, v3}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const-string v3, "Content-Type"

    const-string v4, "application/x-www-form-urlencoded"

    .line 62
    invoke-virtual {p0, v3, v4}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 63
    invoke-static {p0, p2}, Lcom/tencent/bugly/proguard/ad;->a(Ljava/net/HttpURLConnection;Ljava/util/Map;)V

    const/16 p2, 0x1388

    .line 64
    invoke-virtual {p0, p2}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 65
    invoke-virtual {p0, p2}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    .line 66
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->connect()V

    .line 68
    invoke-virtual {p1, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p1

    .line 69
    new-instance p2, Ljava/io/DataOutputStream;

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v3

    invoke-direct {p2, v3}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 70
    :try_start_2
    invoke-virtual {p2, p1}, Ljava/io/DataOutputStream;->write([B)V

    .line 71
    invoke-virtual {p2}, Ljava/io/DataOutputStream;->flush()V

    .line 72
    invoke-virtual {p2}, Ljava/io/DataOutputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Throwable; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 75
    :try_start_3
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v2

    const/16 p1, 0x190

    if-lt v2, p1, :cond_0

    .line 77
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getErrorStream()Ljava/io/InputStream;

    move-result-object p1

    goto :goto_0

    .line 79
    :cond_0
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object p1
    :try_end_3
    .catch Ljava/lang/Throwable; {:try_start_3 .. :try_end_3} :catch_2
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 81
    :goto_0
    :try_start_4
    new-instance p2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/InputStreamReader;

    invoke-direct {v3, p1, v0}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;Ljava/lang/String;)V

    invoke-direct {p2, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 83
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 85
    :goto_1
    invoke-virtual {p2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 86
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\r\n"

    .line 87
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 89
    :cond_1
    invoke-virtual {p2}, Ljava/io/BufferedReader;->close()V

    .line 90
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2
    :try_end_4
    .catch Ljava/lang/Throwable; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 95
    invoke-static {v1}, Lcom/tencent/bugly/proguard/ad;->a(Ljava/io/Closeable;)V

    .line 96
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ad;->a(Ljava/io/Closeable;)V

    if-eqz p0, :cond_2

    .line 98
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_2
    move-object p1, p2

    goto :goto_3

    :catchall_0
    move-exception p2

    move-object v5, p2

    move-object p2, p0

    move-object p0, p1

    move-object p1, v5

    goto :goto_4

    :catch_0
    move-exception p2

    move-object v5, p2

    move-object p2, p0

    move-object p0, p1

    move-object p1, v5

    goto :goto_2

    :catchall_1
    move-exception p1

    move-object v5, p2

    move-object p2, p0

    move-object p0, v1

    move-object v1, v5

    goto :goto_4

    :catch_1
    move-exception p1

    move-object v5, p2

    move-object p2, p0

    move-object p0, v1

    move-object v1, v5

    goto :goto_2

    :catchall_2
    move-exception p1

    move-object p2, p0

    move-object p0, v1

    goto :goto_4

    :catch_2
    move-exception p1

    move-object p2, p0

    move-object p0, v1

    goto :goto_2

    :catchall_3
    move-exception p1

    move-object p0, v1

    move-object p2, p0

    goto :goto_4

    :catch_3
    move-exception p1

    move-object p0, v1

    move-object p2, p0

    .line 92
    :goto_2
    :try_start_5
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    .line 93
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    .line 95
    invoke-static {v1}, Lcom/tencent/bugly/proguard/ad;->a(Ljava/io/Closeable;)V

    .line 96
    invoke-static {p0}, Lcom/tencent/bugly/proguard/ad;->a(Ljava/io/Closeable;)V

    if-eqz p2, :cond_3

    .line 98
    invoke-virtual {p2}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 101
    :cond_3
    :goto_3
    new-instance p0, Landroid/util/Pair;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-direct {p0, p2, p1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p0

    :catchall_4
    move-exception p1

    .line 95
    :goto_4
    invoke-static {v1}, Lcom/tencent/bugly/proguard/ad;->a(Ljava/io/Closeable;)V

    .line 96
    invoke-static {p0}, Lcom/tencent/bugly/proguard/ad;->a(Ljava/io/Closeable;)V

    if-eqz p2, :cond_4

    .line 98
    invoke-virtual {p2}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 100
    :cond_4
    throw p1
.end method

.method public static a(Ljava/util/List;)Landroid/util/Pair;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 33
    :try_start_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Atta-Type"

    const-string v2, "batch-report"

    .line 34
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 35
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "attaid"

    const-string v3, "0d000062340"

    .line 36
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "token"

    const-string v4, "2273782735"

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "type"

    const-string v4, "batch"

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "version"

    const-string v4, "v1.0.0"

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 37
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    .line 38
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 39
    invoke-virtual {v2, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    :cond_0
    const-string p0, "datas"

    .line 41
    invoke-virtual {v1, p0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "https://h.trace.qq.com/kv"

    .line 42
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1, v0}, Lcom/tencent/bugly/proguard/ad;->a(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)Landroid/util/Pair;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 44
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    .line 45
    new-instance v0, Landroid/util/Pair;

    const/4 v1, -0x1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, v1, p0}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object v0
.end method

.method private static a(Ljava/io/Closeable;)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    .line 133
    :cond_0
    :try_start_0
    invoke-interface {p0}, Ljava/io/Closeable;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 135
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

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

    if-eqz p0, :cond_1

    if-eqz p1, :cond_1

    .line 105
    invoke-interface {p1}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 108
    :cond_0
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 109
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {p0, v1, v0}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    :goto_1
    return-void
.end method
