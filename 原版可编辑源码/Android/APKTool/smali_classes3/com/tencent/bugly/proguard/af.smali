.class public final Lcom/tencent/bugly/proguard/af;
.super Ljava/lang/Object;
.source "BUGLY"


# static fields
.field static a:Lcom/tencent/bugly/proguard/af;


# instance fields
.field protected b:Landroid/content/Context;

.field public c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 58
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 56
    iput-object v0, p0, Lcom/tencent/bugly/proguard/af;->c:Ljava/util/Map;

    .line 59
    iput-object p1, p0, Lcom/tencent/bugly/proguard/af;->b:Landroid/content/Context;

    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;
    .locals 2

    .line 297
    :try_start_0
    new-instance v0, Ljava/net/URL;

    invoke-direct {v0, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 2052
    sget-object p1, Lcom/tencent/bugly/proguard/an;->a:Ljava/net/Proxy;

    if-eqz p1, :cond_0

    .line 3052
    sget-object p0, Lcom/tencent/bugly/proguard/an;->a:Ljava/net/Proxy;

    .line 301
    invoke-virtual {v0, p0}, Ljava/net/URL;->openConnection(Ljava/net/Proxy;)Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;

    goto :goto_0

    :cond_0
    if-eqz p0, :cond_1

    .line 302
    sget-object p1, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {p0, p1}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object p0

    const-string p1, "wap"

    invoke-virtual {p0, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_1

    const-string p0, "http.proxyHost"

    .line 303
    invoke-static {p0}, Ljava/lang/System;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string p1, "http.proxyPort"

    .line 304
    invoke-static {p1}, Ljava/lang/System;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 305
    new-instance v1, Ljava/net/InetSocketAddress;

    .line 306
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    invoke-direct {v1, p0, p1}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    .line 307
    new-instance p0, Ljava/net/Proxy;

    sget-object p1, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    invoke-direct {p0, p1, v1}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 308
    invoke-virtual {v0, p0}, Ljava/net/URL;->openConnection(Ljava/net/Proxy;)Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;

    goto :goto_0

    .line 310
    :cond_1
    invoke-virtual {v0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;

    :goto_0
    const/16 p1, 0x7530

    .line 312
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    const/16 p1, 0x2710

    .line 313
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    const/4 p1, 0x1

    .line 314
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 315
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    const-string p1, "POST"

    .line 316
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    const/4 p1, 0x0

    .line 317
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    .line 319
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 323
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 324
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method

.method private static a(Ljava/lang/String;[BLjava/lang/String;Ljava/util/Map;)Ljava/net/HttpURLConnection;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "[B",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/net/HttpURLConnection;"
        }
    .end annotation

    const/4 v0, 0x0

    const/4 v1, 0x0

    if-nez p0, :cond_0

    .line 246
    new-array p0, v1, [Ljava/lang/Object;

    const-string p1, "destUrl is null."

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v0

    .line 249
    :cond_0
    invoke-static {p2, p0}, Lcom/tencent/bugly/proguard/af;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;

    move-result-object p0

    if-nez p0, :cond_1

    .line 251
    new-array p0, v1, [Ljava/lang/Object;

    const-string p1, "Failed to get HttpURLConnection object."

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v0

    :cond_1
    :try_start_0
    const-string v2, "wup_version"

    const-string v3, "3.0"

    .line 257
    invoke-virtual {p0, v2, v3}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "utf-8"

    if-eqz p3, :cond_2

    .line 258
    :try_start_1
    invoke-interface {p3}, Ljava/util/Map;->size()I

    move-result v3

    if-lez v3, :cond_2

    .line 259
    invoke-interface {p3}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p3

    invoke-interface {p3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p3

    :goto_0
    invoke-interface {p3}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {p3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 261
    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 262
    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-static {v3, v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 261
    invoke-virtual {p0, v4, v3}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    const-string p3, "A37"

    .line 266
    invoke-static {p2, v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 265
    invoke-virtual {p0, p3, v3}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string p3, "A38"

    .line 268
    invoke-static {p2, v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 267
    invoke-virtual {p0, p3, p2}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 272
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object p2

    if-nez p1, :cond_3

    .line 274
    invoke-virtual {p2, v1}, Ljava/io/OutputStream;->write(I)V

    goto :goto_1

    .line 276
    :cond_3
    invoke-virtual {p2, p1}, Ljava/io/OutputStream;->write([B)V
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_0

    :goto_1
    return-object p0

    :catch_0
    move-exception p0

    .line 280
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result p1

    if-nez p1, :cond_4

    .line 281
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 283
    :cond_4
    new-array p0, v1, [Ljava/lang/Object;

    const-string p1, "Failed to upload, please check your network."

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v0
.end method

.method private static a(Ljava/net/HttpURLConnection;)Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/net/HttpURLConnection;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 183
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 184
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 185
    invoke-interface {p0}, Ljava/util/Map;->size()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_1

    .line 188
    :cond_0
    invoke-interface {p0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_1
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 190
    invoke-interface {p0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/List;

    .line 191
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v4

    if-lez v4, :cond_1

    const/4 v4, 0x0

    .line 193
    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_2
    return-object v0

    :cond_3
    :goto_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private static b(Ljava/net/HttpURLConnection;)[B
    .locals 5

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 211
    :cond_0
    :try_start_0
    new-instance v1, Ljava/io/BufferedInputStream;

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object p0

    invoke-direct {v1, p0}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 212
    :try_start_1
    new-instance p0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {p0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    const/16 v2, 0x400

    .line 213
    new-array v2, v2, [B

    .line 215
    :goto_0
    invoke-virtual {v1, v2}, Ljava/io/BufferedInputStream;->read([B)I

    move-result v3

    if-lez v3, :cond_1

    const/4 v4, 0x0

    .line 216
    invoke-virtual {p0, v2, v4, v3}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_0

    .line 218
    :cond_1
    invoke-virtual {p0}, Ljava/io/ByteArrayOutputStream;->flush()V

    .line 219
    invoke-virtual {p0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 227
    :try_start_2
    invoke-virtual {v1}, Ljava/io/BufferedInputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Throwable; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 230
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    return-object p0

    :catch_1
    move-exception p0

    goto :goto_2

    :catchall_0
    move-exception p0

    move-object v1, v0

    goto :goto_4

    :catch_2
    move-exception p0

    move-object v1, v0

    .line 221
    :goto_2
    :try_start_3
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 222
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :cond_2
    if-eqz v1, :cond_3

    .line 227
    :try_start_4
    invoke-virtual {v1}, Ljava/io/BufferedInputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Throwable; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_3

    :catch_3
    move-exception p0

    .line 230
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    :goto_3
    return-object v0

    :catchall_1
    move-exception p0

    :goto_4
    if-eqz v1, :cond_4

    .line 227
    :try_start_5
    invoke-virtual {v1}, Ljava/io/BufferedInputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Throwable; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_5

    :catch_4
    move-exception v0

    .line 230
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 232
    :cond_4
    :goto_5
    throw p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;[BLcom/tencent/bugly/proguard/aj;Ljava/util/Map;)[B
    .locals 20
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "[B",
            "Lcom/tencent/bugly/proguard/aj;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)[B"
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    const/4 v4, 0x0

    const/4 v5, 0x0

    if-nez p1, :cond_0

    .line 86
    new-array v0, v5, [Ljava/lang/Object;

    const-string v2, "Failed for no URL."

    invoke-static {v2, v0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v4

    :cond_0
    if-nez v2, :cond_1

    const-wide/16 v8, 0x0

    goto :goto_0

    .line 91
    :cond_1
    array-length v0, v2

    int-to-long v8, v0

    :goto_0
    const/4 v0, 0x4

    .line 93
    new-array v0, v0, [Ljava/lang/Object;

    aput-object p1, v0, v5

    invoke-static {v8, v9}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v10

    const/4 v11, 0x1

    aput-object v10, v0, v11

    .line 94
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v10

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    const/4 v12, 0x2

    aput-object v10, v0, v12

    const/4 v10, 0x3

    invoke-static {}, Landroid/os/Process;->myTid()I

    move-result v13

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v0, v10

    const-string v10, "request: %s, send: %d (pid=%d | tid=%d)"

    .line 93
    invoke-static {v10, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    move-object/from16 v14, p1

    const/4 v0, 0x0

    const/4 v10, 0x0

    const/4 v13, 0x0

    :goto_1
    if-gtz v0, :cond_12

    if-gtz v10, :cond_12

    if-eqz v13, :cond_2

    move v6, v0

    const/4 v13, 0x0

    goto :goto_2

    :cond_2
    add-int/lit8 v0, v0, 0x1

    if-le v0, v11, :cond_3

    .line 105
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v15

    const-string v6, "try time: "

    invoke-virtual {v6, v15}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    new-array v7, v5, [Ljava/lang/Object;

    invoke-static {v6, v7}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 107
    new-instance v6, Ljava/util/Random;

    .line 108
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v11

    invoke-direct {v6, v11, v12}, Ljava/util/Random;-><init>(J)V

    const/16 v11, 0x2710

    invoke-virtual {v6, v11}, Ljava/util/Random;->nextInt(I)I

    move-result v6

    int-to-long v11, v6

    const-wide/16 v18, 0x2710

    add-long v11, v11, v18

    .line 110
    invoke-static {v11, v12}, Landroid/os/SystemClock;->sleep(J)V

    :cond_3
    move v6, v0

    .line 114
    :goto_2
    iget-object v0, v1, Lcom/tencent/bugly/proguard/af;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/ab;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_4

    .line 116
    new-array v0, v5, [Ljava/lang/Object;

    const-string v11, "Failed to request for network not avail"

    invoke-static {v11, v0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    move-object/from16 v11, p4

    const-wide/16 v4, 0x0

    const/4 v7, 0x2

    const/16 v18, 0x1

    goto/16 :goto_12

    .line 120
    :cond_4
    invoke-virtual {v3, v8, v9}, Lcom/tencent/bugly/proguard/aj;->a(J)V

    move-object/from16 v11, p4

    .line 122
    invoke-static {v14, v2, v0, v11}, Lcom/tencent/bugly/proguard/af;->a(Ljava/lang/String;[BLjava/lang/String;Ljava/util/Map;)Ljava/net/HttpURLConnection;

    move-result-object v12

    if-eqz v12, :cond_10

    .line 126
    :try_start_0
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v0

    const-string v7, "response code "

    .line 127
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v7, v15}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    new-array v15, v5, [Ljava/lang/Object;

    invoke-static {v7, v15}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const/16 v7, 0xc8

    if-ne v0, v7, :cond_7

    .line 130
    invoke-static {v12}, Lcom/tencent/bugly/proguard/af;->a(Ljava/net/HttpURLConnection;)Ljava/util/Map;

    move-result-object v0

    iput-object v0, v1, Lcom/tencent/bugly/proguard/af;->c:Ljava/util/Map;

    .line 132
    invoke-static {v12}, Lcom/tencent/bugly/proguard/af;->b(Ljava/net/HttpURLConnection;)[B

    move-result-object v7

    if-nez v7, :cond_5

    const-wide/16 v4, 0x0

    goto :goto_3

    .line 133
    :cond_5
    array-length v0, v7

    int-to-long v4, v0

    :goto_3
    invoke-virtual {v3, v4, v5}, Lcom/tencent/bugly/proguard/aj;->b(J)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_9
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 160
    :try_start_1
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_4

    :catch_0
    move-exception v0

    move-object v2, v0

    .line 162
    invoke-static {v2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 163
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_6
    :goto_4
    return-object v7

    :cond_7
    const/16 v4, 0x12d

    if-eq v0, v4, :cond_9

    const/16 v4, 0x12e

    if-eq v0, v4, :cond_9

    const/16 v4, 0x12f

    if-eq v0, v4, :cond_9

    const/16 v4, 0x133

    if-ne v0, v4, :cond_8

    goto :goto_5

    :cond_8
    const/4 v4, 0x0

    goto :goto_6

    :cond_9
    :goto_5
    const/4 v4, 0x1

    :goto_6
    if-eqz v4, :cond_c

    :try_start_2
    const-string v4, "Location"

    .line 137
    invoke-virtual {v12, v4}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_6
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-nez v4, :cond_b

    :try_start_3
    const-string v4, "Failed to redirect: %d"

    .line 140
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const/4 v4, 0x0

    new-array v5, v4, [Ljava/lang/Object;

    invoke-static {v0, v5}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 160
    :try_start_4
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_4
    .catch Ljava/lang/Throwable; {:try_start_4 .. :try_end_4} :catch_1

    :cond_a
    :goto_7
    const/4 v2, 0x0

    goto :goto_8

    :catch_1
    move-exception v0

    move-object v2, v0

    .line 162
    invoke-static {v2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v0

    if-nez v0, :cond_a

    .line 163
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_7

    :goto_8
    return-object v2

    :catch_2
    move-exception v0

    const/4 v7, 0x2

    const/4 v13, 0x1

    goto :goto_e

    :cond_b
    add-int/lit8 v10, v10, 0x1

    :try_start_5
    const-string v5, "redirect code: %d ,to:%s"
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    const/4 v7, 0x2

    .line 147
    :try_start_6
    new-array v6, v7, [Ljava/lang/Object;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const/4 v13, 0x0

    aput-object v0, v6, v13
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_4
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    const/16 v18, 0x1

    :try_start_7
    aput-object v4, v6, v18

    invoke-static {v5, v6}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_3
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    move-object v14, v4

    const/4 v6, 0x0

    const/4 v13, 0x1

    goto :goto_c

    :catch_3
    move-exception v0

    goto :goto_a

    :catch_4
    move-exception v0

    goto :goto_9

    :catch_5
    move-exception v0

    const/4 v7, 0x2

    :goto_9
    const/16 v18, 0x1

    :goto_a
    move-object v14, v4

    const/4 v6, 0x0

    goto :goto_b

    :catch_6
    move-exception v0

    const/4 v7, 0x2

    const/16 v18, 0x1

    :goto_b
    const/4 v13, 0x1

    goto :goto_f

    :cond_c
    const/4 v7, 0x2

    const/16 v18, 0x1

    .line 151
    :goto_c
    :try_start_8
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->getContentLength()I

    move-result v0

    int-to-long v4, v0

    const-wide/16 v16, 0x0

    cmp-long v0, v4, v16

    if-gez v0, :cond_d

    const-wide/16 v4, 0x0

    .line 153
    :cond_d
    invoke-virtual {v3, v4, v5}, Lcom/tencent/bugly/proguard/aj;->b(J)V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    .line 160
    :try_start_9
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_9
    .catch Ljava/lang/Throwable; {:try_start_9 .. :try_end_9} :catch_7

    goto :goto_12

    :catch_7
    move-exception v0

    move-object v4, v0

    .line 162
    invoke-static {v4}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v0

    if-nez v0, :cond_11

    .line 163
    :goto_d
    invoke-virtual {v4}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_12

    :catch_8
    move-exception v0

    goto :goto_f

    :catchall_0
    move-exception v0

    move-object v2, v0

    goto :goto_10

    :catch_9
    move-exception v0

    const/4 v7, 0x2

    :goto_e
    const/16 v18, 0x1

    .line 155
    :goto_f
    :try_start_a
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v4

    if-nez v4, :cond_e

    .line 156
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_0

    .line 160
    :cond_e
    :try_start_b
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_b
    .catch Ljava/lang/Throwable; {:try_start_b .. :try_end_b} :catch_a

    goto :goto_12

    :catch_a
    move-exception v0

    move-object v4, v0

    .line 162
    invoke-static {v4}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v0

    if-nez v0, :cond_11

    goto :goto_d

    .line 160
    :goto_10
    :try_start_c
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_c
    .catch Ljava/lang/Throwable; {:try_start_c .. :try_end_c} :catch_b

    goto :goto_11

    :catch_b
    move-exception v0

    move-object v3, v0

    .line 162
    invoke-static {v3}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v0

    if-nez v0, :cond_f

    .line 163
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    .line 166
    :cond_f
    :goto_11
    throw v2

    :cond_10
    const/4 v4, 0x0

    const/4 v7, 0x2

    const/16 v18, 0x1

    .line 168
    new-array v0, v4, [Ljava/lang/Object;

    const-string v5, "Failed to execute post."

    invoke-static {v5, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-wide/16 v4, 0x0

    .line 170
    invoke-virtual {v3, v4, v5}, Lcom/tencent/bugly/proguard/aj;->b(J)V

    :cond_11
    :goto_12
    move v0, v6

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v11, 0x1

    const/4 v12, 0x2

    goto/16 :goto_1

    :cond_12
    move-object v2, v4

    return-object v2
.end method
