.class public Lcom/cmic/gen/sdk/c/a/a;
.super Ljava/lang/Object;
.source "ConnectionInterceptor.java"

# interfaces
.implements Lcom/cmic/gen/sdk/c/a/b;


# static fields
.field private static a:Lcom/cmic/gen/sdk/c/c;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a()Ljava/lang/String;
    .locals 4

    .line 202
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 203
    sget-object v1, Lcom/cmic/gen/sdk/b;->a:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/cmic/gen/sdk/b;->a:[Ljava/lang/String;

    const/4 v3, 0x2

    aget-object v2, v2, v3

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 204
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/cmic/gen/sdk/b;->a:[Ljava/lang/String;

    const/4 v3, 0x4

    aget-object v2, v2, v3

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/cmic/gen/sdk/b;->a:[Ljava/lang/String;

    const/4 v2, 0x6

    aget-object v1, v1, v2

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private a(Ljava/io/Closeable;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 194
    :try_start_0
    invoke-interface {p1}, Ljava/io/Closeable;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 196
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public declared-synchronized a(Lcom/cmic/gen/sdk/c/b/g;Lcom/cmic/gen/sdk/a;)Ljavax/net/ssl/SSLSocketFactory;
    .locals 1

    monitor-enter p0

    .line 218
    :try_start_0
    instance-of p1, p1, Lcom/cmic/gen/sdk/c/b/e;

    if-eqz p1, :cond_1

    .line 219
    new-instance p1, Lcom/cmic/gen/sdk/c/c;

    invoke-static {}, Ljavax/net/ssl/HttpsURLConnection;->getDefaultSSLSocketFactory()Ljavax/net/ssl/SSLSocketFactory;

    move-result-object v0

    invoke-direct {p1, v0, p2}, Lcom/cmic/gen/sdk/c/c;-><init>(Ljavax/net/ssl/SSLSocketFactory;Lcom/cmic/gen/sdk/a;)V

    .line 220
    sget-object p2, Lcom/cmic/gen/sdk/c/a/a;->a:Lcom/cmic/gen/sdk/c/c;

    if-nez p2, :cond_0

    .line 221
    sput-object p1, Lcom/cmic/gen/sdk/c/a/a;->a:Lcom/cmic/gen/sdk/c/c;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 223
    :cond_0
    monitor-exit p0

    return-object p1

    .line 225
    :cond_1
    :try_start_1
    sget-object p1, Lcom/cmic/gen/sdk/c/a/a;->a:Lcom/cmic/gen/sdk/c/c;

    if-nez p1, :cond_2

    .line 226
    new-instance p1, Lcom/cmic/gen/sdk/c/c;

    invoke-static {}, Ljavax/net/ssl/HttpsURLConnection;->getDefaultSSLSocketFactory()Ljavax/net/ssl/SSLSocketFactory;

    move-result-object v0

    invoke-direct {p1, v0, p2}, Lcom/cmic/gen/sdk/c/c;-><init>(Ljavax/net/ssl/SSLSocketFactory;Lcom/cmic/gen/sdk/a;)V

    sput-object p1, Lcom/cmic/gen/sdk/c/a/a;->a:Lcom/cmic/gen/sdk/c/c;

    .line 228
    :cond_2
    sget-object p1, Lcom/cmic/gen/sdk/c/a/a;->a:Lcom/cmic/gen/sdk/c/c;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public a(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/a;)V
    .locals 20

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v4, p3

    const-string v5, "remote_ip"

    const-string v6, ""

    const-string v7, "responseResult: "

    const-string v8, "responseCode: "

    .line 53
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "\u8bf7\u6c42\u5730\u5740: "

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/c/c/c;->a()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v9, "ConnectionInterceptor"

    invoke-static {v9, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 57
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    .line 61
    :try_start_0
    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/c/c/c;->a()Ljava/lang/String;

    move-result-object v0

    .line 62
    new-instance v15, Ljava/net/URL;

    invoke-direct {v15, v0}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 63
    invoke-virtual {v15}, Ljava/net/URL;->getHost()Ljava/lang/String;

    move-result-object v14

    .line 65
    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/c/c/c;->k()Lcom/cmic/gen/sdk/c/b/g;

    move-result-object v11

    .line 66
    instance-of v12, v11, Lcom/cmic/gen/sdk/c/b/h;

    if-nez v12, :cond_0

    instance-of v12, v11, Lcom/cmic/gen/sdk/c/b/e;

    if-eqz v12, :cond_1

    .line 67
    :cond_0
    invoke-virtual {v4, v5}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    .line 68
    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_1

    .line 70
    new-instance v15, Ljava/net/URL;

    invoke-virtual {v0, v14, v12}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v15, v0}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    .line 74
    :goto_0
    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/c/c/c;->h()Landroid/net/Network;

    move-result-object v12

    if-eqz v12, :cond_2

    .line 75
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "\u5f00\u59cbwifi\u4e0b\u53d6\u53f7"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v9, v12}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 76
    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/c/c/c;->h()Landroid/net/Network;

    move-result-object v12

    invoke-virtual {v12, v15}, Landroid/net/Network;->openConnection(Ljava/net/URL;)Ljava/net/URLConnection;

    move-result-object v12

    check-cast v12, Ljava/net/HttpURLConnection;

    goto :goto_1

    .line 78
    :cond_2
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "\u4f7f\u7528\u5f53\u524d\u7f51\u7edc\u73af\u5883\u53d1\u9001\u8bf7\u6c42"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v9, v12}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 79
    invoke-virtual {v15}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v12

    check-cast v12, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_5
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    .line 83
    :goto_1
    :try_start_1
    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/c/c/c;->c()Ljava/util/Map;

    move-result-object v13

    if-eqz v13, :cond_3

    .line 88
    invoke-interface {v13}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v15

    .line 89
    invoke-interface {v15}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v15

    :goto_2
    invoke-interface {v15}, Ljava/util/Iterator;->hasNext()Z

    move-result v17

    if-eqz v17, :cond_3

    invoke-interface {v15}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v17
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_4
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    move-object/from16 v18, v6

    :try_start_2
    move-object/from16 v6, v17

    check-cast v6, Ljava/lang/String;

    .line 90
    invoke-interface {v13, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v17

    move-object/from16 v19, v13

    move-object/from16 v13, v17

    check-cast v13, Ljava/lang/String;

    .line 91
    invoke-virtual {v12, v6, v13}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    move-object/from16 v6, v18

    move-object/from16 v13, v19

    goto :goto_2

    :cond_3
    move-object/from16 v18, v6

    .line 94
    instance-of v6, v12, Ljavax/net/ssl/HttpsURLConnection;

    if-eqz v6, :cond_6

    .line 96
    instance-of v6, v11, Lcom/cmic/gen/sdk/c/b/h;

    if-nez v6, :cond_4

    instance-of v6, v11, Lcom/cmic/gen/sdk/c/b/e;

    if-eqz v6, :cond_6

    :cond_4
    if-eqz v0, :cond_5

    .line 99
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "host = "

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v9, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "Host"

    .line 100
    invoke-virtual {v12, v0, v14}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "need sni handle"

    .line 101
    invoke-static {v9, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 103
    move-object v0, v12

    check-cast v0, Ljavax/net/ssl/HttpsURLConnection;

    new-instance v6, Lcom/cmic/gen/sdk/c/d;

    move-object v11, v12

    check-cast v11, Ljavax/net/ssl/HttpsURLConnection;

    .line 104
    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/c/c/c;->h()Landroid/net/Network;

    move-result-object v13

    invoke-direct {v6, v11, v13, v4}, Lcom/cmic/gen/sdk/c/d;-><init>(Ljavax/net/ssl/HttpsURLConnection;Landroid/net/Network;Lcom/cmic/gen/sdk/a;)V

    .line 103
    invoke-virtual {v0, v6}, Ljavax/net/ssl/HttpsURLConnection;->setSSLSocketFactory(Ljavax/net/ssl/SSLSocketFactory;)V

    .line 105
    move-object v0, v12

    check-cast v0, Ljavax/net/ssl/HttpsURLConnection;

    new-instance v6, Lcom/cmic/gen/sdk/c/a/a$1;

    invoke-direct {v6, v1, v14}, Lcom/cmic/gen/sdk/c/a/a$1;-><init>(Lcom/cmic/gen/sdk/c/a/a;Ljava/lang/String;)V

    invoke-virtual {v0, v6}, Ljavax/net/ssl/HttpsURLConnection;->setHostnameVerifier(Ljavax/net/ssl/HostnameVerifier;)V

    goto :goto_3

    .line 111
    :cond_5
    move-object v0, v12

    check-cast v0, Ljavax/net/ssl/HttpsURLConnection;

    invoke-virtual {v1, v11, v4}, Lcom/cmic/gen/sdk/c/a/a;->a(Lcom/cmic/gen/sdk/c/b/g;Lcom/cmic/gen/sdk/a;)Ljavax/net/ssl/SSLSocketFactory;

    move-result-object v6

    invoke-virtual {v0, v6}, Ljavax/net/ssl/HttpsURLConnection;->setSSLSocketFactory(Ljavax/net/ssl/SSLSocketFactory;)V

    :cond_6
    :goto_3
    const/4 v0, 0x1

    .line 115
    invoke-virtual {v12, v0}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    const/4 v0, 0x0

    .line 116
    invoke-virtual {v12, v0}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    const/16 v6, 0x1388

    .line 117
    invoke-virtual {v12, v6}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 118
    invoke-virtual {v12, v6}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    .line 119
    invoke-virtual {v12, v0}, Ljava/net/HttpURLConnection;->setDefaultUseCaches(Z)V

    .line 120
    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/c/c/c;->e()Ljava/lang/String;

    move-result-object v0

    .line 121
    invoke-virtual {v12, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    const/4 v6, 0x1

    .line 122
    invoke-virtual {v12, v6}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 125
    instance-of v6, v2, Lcom/cmic/gen/sdk/c/c/b;

    if-eqz v6, :cond_7

    .line 126
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->connect()V

    .line 127
    move-object v6, v2

    check-cast v6, Lcom/cmic/gen/sdk/c/c/b;

    .line 128
    invoke-virtual {v6, v4}, Lcom/cmic/gen/sdk/c/c/b;->a(Lcom/cmic/gen/sdk/a;)V

    :cond_7
    const-string v6, "POST"

    .line 135
    invoke-virtual {v0, v6}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    const-string v6, "utf-8"

    if-eqz v0, :cond_8

    .line 136
    :try_start_3
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v11
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 137
    :try_start_4
    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/c/c/c;->d()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v6}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0

    invoke-virtual {v11, v0}, Ljava/io/OutputStream;->write([B)V

    .line 138
    invoke-virtual {v11}, Ljava/io/OutputStream;->flush()V

    goto :goto_4

    :cond_8
    const/4 v11, 0x0

    .line 141
    :goto_4
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v15
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 142
    :try_start_5
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v13
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    const/16 v0, 0x800

    :try_start_6
    new-array v0, v0, [B

    .line 145
    :goto_5
    invoke-virtual {v13, v0}, Ljava/io/InputStream;->read([B)I

    move-result v14

    if-lez v14, :cond_9

    .line 146
    new-instance v2, Ljava/lang/String;

    const/4 v4, 0x0

    invoke-direct {v2, v0, v4, v14, v6}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v2, p1

    move-object/from16 v4, p3

    goto :goto_5

    .line 148
    :cond_9
    new-instance v0, Lcom/cmic/gen/sdk/c/d/b;

    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    move-result-object v2

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v15, v2, v4}, Lcom/cmic/gen/sdk/c/d/b;-><init>(ILjava/util/Map;Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_0
    .catchall {:try_start_6 .. :try_end_6} :catchall_5

    .line 172
    invoke-direct {v1, v11}, Lcom/cmic/gen/sdk/c/a/a;->a(Ljava/io/Closeable;)V

    .line 173
    invoke-direct {v1, v13}, Lcom/cmic/gen/sdk/c/a/a;->a(Ljava/io/Closeable;)V

    if-eqz v12, :cond_a

    .line 175
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 177
    :cond_a
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v9, v2}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_b

    move-object/from16 v6, v18

    goto :goto_6

    :cond_b
    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    :goto_6
    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v9, v2}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v2, 0xc8

    if-eq v15, v2, :cond_c

    const/16 v2, 0x12d

    if-eq v15, v2, :cond_c

    const/16 v2, 0x12e

    if-eq v15, v2, :cond_c

    goto/16 :goto_e

    .line 183
    :cond_c
    invoke-interface {v3, v0}, Lcom/cmic/gen/sdk/c/d/c;->a(Lcom/cmic/gen/sdk/c/d/b;)V

    goto/16 :goto_f

    :catch_0
    move-exception v0

    goto :goto_b

    :catchall_0
    move-exception v0

    const/4 v13, 0x0

    goto/16 :goto_10

    :catch_1
    move-exception v0

    const/4 v13, 0x0

    goto :goto_b

    :catchall_1
    move-exception v0

    goto :goto_9

    :catch_2
    move-exception v0

    goto :goto_a

    :catchall_2
    move-exception v0

    goto :goto_7

    :catch_3
    move-exception v0

    goto :goto_8

    :catchall_3
    move-exception v0

    move-object/from16 v18, v6

    :goto_7
    const/4 v11, 0x0

    goto :goto_9

    :catch_4
    move-exception v0

    move-object/from16 v18, v6

    :goto_8
    const/4 v11, 0x0

    goto :goto_a

    :catchall_4
    move-exception v0

    move-object/from16 v18, v6

    const/4 v11, 0x0

    const/4 v12, 0x0

    :goto_9
    const/4 v13, 0x0

    const/4 v15, -0x1

    goto/16 :goto_10

    :catch_5
    move-exception v0

    move-object/from16 v18, v6

    const/4 v11, 0x0

    const/4 v12, 0x0

    :goto_a
    const/4 v13, 0x0

    const/4 v15, -0x1

    .line 152
    :goto_b
    :try_start_7
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 153
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u8bf7\u6c42\u5931\u8d25: "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/c/c/c;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v9, v2}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 154
    invoke-virtual/range {p3 .. p3}, Lcom/cmic/gen/sdk/a;->a()Lcom/cmic/gen/sdk/d/b;

    move-result-object v2

    iget-object v2, v2, Lcom/cmic/gen/sdk/d/b;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v2, v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    .line 155
    instance-of v2, v0, Ljava/io/EOFException;

    if-eqz v2, :cond_d

    const v2, 0x30d72

    const v15, 0x30d72

    goto :goto_c

    :cond_d
    const v2, 0x18ed6

    const v15, 0x18ed6

    .line 162
    :goto_c
    instance-of v0, v0, Ljava/net/UnknownHostException;

    if-eqz v0, :cond_f

    .line 164
    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/c/c/c;->k()Lcom/cmic/gen/sdk/c/b/g;

    move-result-object v0

    instance-of v0, v0, Lcom/cmic/gen/sdk/c/b/h;

    if-nez v0, :cond_e

    .line 165
    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/c/c/c;->k()Lcom/cmic/gen/sdk/c/b/g;

    move-result-object v0

    instance-of v0, v0, Lcom/cmic/gen/sdk/c/b/e;

    if-eqz v0, :cond_f

    .line 166
    :cond_e
    invoke-direct/range {p0 .. p0}, Lcom/cmic/gen/sdk/c/a/a;->a()Ljava/lang/String;

    move-result-object v0

    move-object/from16 v2, p3

    .line 167
    invoke-virtual {v2, v5, v0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_5

    .line 172
    :cond_f
    invoke-direct {v1, v11}, Lcom/cmic/gen/sdk/c/a/a;->a(Ljava/io/Closeable;)V

    .line 173
    invoke-direct {v1, v13}, Lcom/cmic/gen/sdk/c/a/a;->a(Ljava/io/Closeable;)V

    if-eqz v12, :cond_10

    .line 175
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 177
    :cond_10
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v9, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_11

    move-object/from16 v6, v18

    goto :goto_d

    :cond_11
    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    :goto_d
    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v9, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v2, 0xc8

    if-eq v15, v2, :cond_12

    const/16 v2, 0x12d

    if-eq v15, v2, :cond_12

    const/16 v2, 0x12e

    if-eq v15, v2, :cond_12

    .line 186
    :goto_e
    invoke-static {v15}, Lcom/cmic/gen/sdk/c/d/a;->a(I)Lcom/cmic/gen/sdk/c/d/a;

    move-result-object v0

    invoke-interface {v3, v0}, Lcom/cmic/gen/sdk/c/d/c;->a(Lcom/cmic/gen/sdk/c/d/a;)V

    goto :goto_f

    :cond_12
    const/4 v2, 0x0

    .line 183
    invoke-interface {v3, v2}, Lcom/cmic/gen/sdk/c/d/c;->a(Lcom/cmic/gen/sdk/c/d/b;)V

    :goto_f
    return-void

    :catchall_5
    move-exception v0

    .line 172
    :goto_10
    invoke-direct {v1, v11}, Lcom/cmic/gen/sdk/c/a/a;->a(Ljava/io/Closeable;)V

    .line 173
    invoke-direct {v1, v13}, Lcom/cmic/gen/sdk/c/a/a;->a(Ljava/io/Closeable;)V

    if-eqz v12, :cond_13

    .line 175
    invoke-virtual {v12}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 177
    :cond_13
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v9, v2}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_14

    move-object/from16 v6, v18

    goto :goto_11

    :cond_14
    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    :goto_11
    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v9, v2}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v2, 0xc8

    if-eq v15, v2, :cond_15

    const/16 v2, 0x12d

    if-eq v15, v2, :cond_15

    const/16 v2, 0x12e

    if-eq v15, v2, :cond_15

    .line 186
    invoke-static {v15}, Lcom/cmic/gen/sdk/c/d/a;->a(I)Lcom/cmic/gen/sdk/c/d/a;

    move-result-object v2

    invoke-interface {v3, v2}, Lcom/cmic/gen/sdk/c/d/c;->a(Lcom/cmic/gen/sdk/c/d/a;)V

    goto :goto_12

    :cond_15
    const/4 v2, 0x0

    .line 183
    invoke-interface {v3, v2}, Lcom/cmic/gen/sdk/c/d/c;->a(Lcom/cmic/gen/sdk/c/d/b;)V

    .line 188
    :goto_12
    goto :goto_14

    :goto_13
    throw v0

    :goto_14
    goto :goto_13
.end method
