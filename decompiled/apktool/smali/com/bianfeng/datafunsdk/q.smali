.class public final Lcom/bianfeng/datafunsdk/q;
.super Ljava/lang/Object;
.source "HttpPostRequest.java"


# instance fields
.field public a:Ljava/lang/String;

.field public b:[B

.field public c:Lcom/bianfeng/datafunsdk/net/RequestHeaders;

.field public d:Lcom/bianfeng/datafunsdk/p;

.field public e:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

.field public f:Lcom/bianfeng/datafunsdk/net/ResponseData;


# direct methods
.method public constructor <init>(Ljava/lang/String;[BLcom/bianfeng/datafunsdk/p;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/q;->a:Ljava/lang/String;

    .line 3
    iput-object p2, p0, Lcom/bianfeng/datafunsdk/q;->b:[B

    .line 4
    iput-object p3, p0, Lcom/bianfeng/datafunsdk/q;->d:Lcom/bianfeng/datafunsdk/p;

    return-void
.end method


# virtual methods
.method public a()I
    .locals 14

    const-string v0, "post\u4e2d\u7684\u5f02\u5e38\u6570\u636e\uff1a\u8fd9\u91cc\u90fd\u4e0d\u505a\u5904\u7406"

    const-string v1, "\u4e0a\u629b\u8def\u5f84\uff1a"

    .line 4
    const/4 v2, 0x4

    const/4 v3, 0x0

    :try_start_0
    new-instance v4, Ljava/net/URL;

    iget-object v5, p0, Lcom/bianfeng/datafunsdk/q;->a:Ljava/lang/String;

    invoke-direct {v4, v5}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 5
    invoke-virtual {v4}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v4

    check-cast v4, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_9
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 6
    const/16 v5, 0x3a98

    :try_start_1
    invoke-virtual {v4, v5}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 7
    invoke-virtual {v4, v5}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    const-string v5, "POST"

    .line 8
    invoke-virtual {v4, v5}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    .line 9
    const/4 v5, 0x0

    invoke-virtual {v4, v5}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const-string v6, "Content-Type"

    const-string v7, "application/json"

    .line 10
    invoke-virtual {v4, v6, v7}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 11
    iget-object v6, p0, Lcom/bianfeng/datafunsdk/q;->c:Lcom/bianfeng/datafunsdk/net/RequestHeaders;

    if-eqz v6, :cond_0

    .line 12
    iget-object v6, p0, Lcom/bianfeng/datafunsdk/q;->c:Lcom/bianfeng/datafunsdk/net/RequestHeaders;

    invoke-virtual {v6}, Lcom/bianfeng/datafunsdk/net/RequestHeaders;->getHeaderMap()Ljava/util/Map;

    move-result-object v6

    invoke-interface {v6}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v6

    invoke-interface {v6}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :goto_0
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_0

    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/Map$Entry;

    .line 13
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "\u8bf7\u6c42\u5934\u4e2d\u7684\u6570\u636e\uff1a"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v7}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "--->"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v7}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 14
    invoke-interface {v7}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    invoke-interface {v7}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-virtual {v4, v8, v7}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 17
    :cond_0
    iget-object v6, p0, Lcom/bianfeng/datafunsdk/q;->d:Lcom/bianfeng/datafunsdk/p;

    invoke-virtual {v6}, Lcom/bianfeng/datafunsdk/p;->a()Z

    move-result v6

    const/4 v7, 0x1

    if-eqz v6, :cond_1

    .line 18
    iget-object v6, p0, Lcom/bianfeng/datafunsdk/q;->b:[B

    if-eqz v6, :cond_1

    .line 19
    invoke-virtual {v4, v7}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 20
    invoke-virtual {v4, v7}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 21
    new-instance v6, Ljava/io/DataOutputStream;

    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v8

    invoke-direct {v6, v8}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_8
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 22
    :try_start_2
    iget-object v8, p0, Lcom/bianfeng/datafunsdk/q;->b:[B

    invoke-virtual {v6, v8}, Ljava/io/DataOutputStream;->write([B)V

    .line 23
    invoke-virtual {v6}, Ljava/io/DataOutputStream;->flush()V

    .line 24
    invoke-virtual {v6}, Ljava/io/DataOutputStream;->close()V

    goto :goto_1

    :cond_1
    move-object v6, v3

    .line 27
    :goto_1
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v8

    const/16 v9, 0xc8

    if-ne v8, v9, :cond_17

    .line 29
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v3

    const/16 v8, 0x400

    .line 31
    new-array v8, v8, [B

    .line 32
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    .line 33
    :goto_2
    invoke-virtual {v3, v8}, Ljava/io/InputStream;->read([B)I

    move-result v10

    const/4 v11, -0x1

    if-eq v10, v11, :cond_2

    .line 34
    new-instance v11, Ljava/lang/String;

    invoke-direct {v11, v8, v5, v10}, Ljava/lang/String;-><init>([BII)V

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 36
    :cond_2
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V

    .line 37
    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    .line 38
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "\u6d4b\u8bd5\u54cd\u5e94\u7684\u6570\u636e\uff1a"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 40
    iget-object v9, p0, Lcom/bianfeng/datafunsdk/q;->e:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    if-eqz v9, :cond_a

    .line 41
    iget-object v9, p0, Lcom/bianfeng/datafunsdk/q;->e:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    invoke-virtual {v9}, Lcom/bianfeng/datafunsdk/net/ResponseHeaders;->getCodekey()Ljava/lang/String;

    move-result-object v9

    .line 42
    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-nez v10, :cond_a

    .line 43
    invoke-virtual {v4, v9}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 44
    invoke-static {v8}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v8

    .line 46
    iget-object v9, p0, Lcom/bianfeng/datafunsdk/q;->e:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    invoke-virtual {v9}, Lcom/bianfeng/datafunsdk/net/ResponseHeaders;->getSuccessCode()I

    move-result v0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_7
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-ne v0, v8, :cond_6

    .line 88
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/q;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    if-eqz v6, :cond_3

    .line 91
    :try_start_3
    invoke-virtual {v6}, Ljava/io/DataOutputStream;->close()V

    goto :goto_3

    :catch_0
    move-exception v0

    goto :goto_4

    :cond_3
    :goto_3
    if-eqz v3, :cond_4

    .line 94
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V

    :cond_4
    if-eqz v4, :cond_5

    .line 97
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_5

    .line 100
    :goto_4
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_5
    :goto_5
    return v5

    :cond_6
    nop

    .line 101
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/q;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    if-eqz v6, :cond_7

    .line 104
    :try_start_4
    invoke-virtual {v6}, Ljava/io/DataOutputStream;->close()V

    goto :goto_6

    :catch_1
    move-exception v0

    goto :goto_7

    :cond_7
    :goto_6
    if-eqz v3, :cond_8

    .line 107
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V

    :cond_8
    if-eqz v4, :cond_9

    .line 110
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_8

    .line 113
    :goto_7
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_9
    :goto_8
    return v7

    .line 114
    :cond_a
    :try_start_5
    iget-object v9, p0, Lcom/bianfeng/datafunsdk/q;->f:Lcom/bianfeng/datafunsdk/net/ResponseData;

    if-eqz v9, :cond_13

    .line 115
    iget-object v9, p0, Lcom/bianfeng/datafunsdk/q;->f:Lcom/bianfeng/datafunsdk/net/ResponseData;

    invoke-virtual {v9}, Lcom/bianfeng/datafunsdk/net/ResponseData;->getCodeKey()Ljava/lang/String;

    move-result-object v9

    .line 116
    iget-object v10, p0, Lcom/bianfeng/datafunsdk/q;->f:Lcom/bianfeng/datafunsdk/net/ResponseData;

    invoke-virtual {v10}, Lcom/bianfeng/datafunsdk/net/ResponseData;->getMessagekey()Ljava/lang/String;

    move-result-object v10

    .line 117
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "responseData codekey="

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, " == megKey == "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v11}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 118
    invoke-static {v8}, Lcom/bianfeng/datafunsdk/w;->a(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v8

    .line 119
    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_b

    .line 120
    invoke-interface {v8, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    invoke-virtual {v10}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v10

    .line 121
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "responseData megKey="

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v10}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 123
    :cond_b
    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-nez v10, :cond_13

    .line 124
    iget-object v10, p0, Lcom/bianfeng/datafunsdk/q;->f:Lcom/bianfeng/datafunsdk/net/ResponseData;

    invoke-virtual {v10}, Lcom/bianfeng/datafunsdk/net/ResponseData;->getSuccessCode()I

    move-result v10

    .line 125
    invoke-interface {v8, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v8

    double-to-int v8, v8

    .line 126
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "successCode="

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v11, ",result="

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_7
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    if-ne v8, v10, :cond_f

    .line 148
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/q;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    if-eqz v6, :cond_c

    .line 151
    :try_start_6
    invoke-virtual {v6}, Ljava/io/DataOutputStream;->close()V

    goto :goto_9

    :catch_2
    move-exception v0

    goto :goto_a

    :cond_c
    :goto_9
    if-eqz v3, :cond_d

    .line 154
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V

    :cond_d
    if-eqz v4, :cond_e

    .line 157
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    goto :goto_b

    .line 160
    :goto_a
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_e
    :goto_b
    return v5

    :cond_f
    nop

    .line 161
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/q;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    if-eqz v6, :cond_10

    .line 164
    :try_start_7
    invoke-virtual {v6}, Ljava/io/DataOutputStream;->close()V

    goto :goto_c

    :catch_3
    move-exception v0

    goto :goto_d

    :cond_10
    :goto_c
    if-eqz v3, :cond_11

    .line 167
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V

    :cond_11
    if-eqz v4, :cond_12

    .line 170
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_3

    goto :goto_e

    .line 173
    :goto_d
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_12
    :goto_e
    return v7

    :cond_13
    :try_start_8
    const-string v5, "\u5728\u4f20\u9012\u53c2\u6570\u7684\u65f6\u5019\u6ca1\u6709\u4f20\u9012\u600e\u4e48\u5224\u65ad\u662f\u5426\u4e0a\u629b\u6570\u636e\u6210\u529f\u4e0e\u5426\u7684\u6807\u8bc6"

    .line 174
    invoke-static {v5}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_7
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    .line 188
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/q;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    if-eqz v6, :cond_14

    .line 191
    :try_start_9
    invoke-virtual {v6}, Ljava/io/DataOutputStream;->close()V

    goto :goto_f

    :catch_4
    move-exception v0

    goto :goto_10

    :cond_14
    :goto_f
    if-eqz v3, :cond_15

    .line 194
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V

    :cond_15
    if-eqz v4, :cond_16

    .line 197
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_4

    goto :goto_11

    .line 200
    :goto_10
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_16
    :goto_11
    return v7

    :cond_17
    const/16 v5, 0x1f4

    if-lt v8, v5, :cond_1a

    const/16 v5, 0x258

    if-ge v8, v5, :cond_1a

    .line 201
    :try_start_a
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_7
    .catchall {:try_start_a .. :try_end_a} :catchall_0

    .line 212
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/q;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    if-eqz v6, :cond_18

    .line 215
    :try_start_b
    invoke-virtual {v6}, Ljava/io/DataOutputStream;->close()V

    goto :goto_12

    :catch_5
    move-exception v0

    goto :goto_13

    :cond_18
    :goto_12
    if-eqz v4, :cond_19

    .line 221
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_5

    goto :goto_14

    .line 224
    :goto_13
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_19
    :goto_14
    return v2

    .line 225
    :cond_1a
    :try_start_c
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "\u54cd\u5e94\u7801\uff1a"

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V
    :try_end_c
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_7
    .catchall {:try_start_c .. :try_end_c} :catchall_0

    .line 233
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/q;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    if-eqz v6, :cond_1b

    .line 236
    :try_start_d
    invoke-virtual {v6}, Ljava/io/DataOutputStream;->close()V

    goto :goto_15

    :catch_6
    move-exception v0

    goto :goto_16

    :cond_1b
    :goto_15
    if-eqz v4, :cond_1c

    .line 242
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_6

    goto :goto_17

    .line 245
    :goto_16
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1c
    :goto_17
    return v7

    :catchall_0
    move-exception v0

    goto/16 :goto_1d

    :catch_7
    move-exception v5

    move-object v13, v4

    move-object v4, v3

    move-object v3, v6

    move-object v6, v13

    goto :goto_19

    :catchall_1
    move-exception v0

    move-object v6, v3

    goto :goto_1d

    :catch_8
    move-exception v5

    goto :goto_18

    :catchall_2
    move-exception v0

    move-object v4, v3

    move-object v6, v4

    goto :goto_1d

    :catch_9
    move-exception v5

    move-object v4, v3

    :goto_18
    move-object v6, v4

    move-object v4, v3

    .line 246
    :goto_19
    :try_start_e
    invoke-virtual {v5}, Ljava/lang/Exception;->printStackTrace()V

    .line 247
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_3

    .line 250
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/q;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    if-eqz v3, :cond_1d

    .line 253
    :try_start_f
    invoke-virtual {v3}, Ljava/io/DataOutputStream;->close()V

    goto :goto_1a

    :catch_a
    move-exception v0

    goto :goto_1b

    :cond_1d
    :goto_1a
    if-eqz v4, :cond_1e

    .line 256
    invoke-virtual {v4}, Ljava/io/InputStream;->close()V

    :cond_1e
    if-eqz v6, :cond_1f

    .line 259
    invoke-virtual {v6}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_f
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_a

    goto :goto_1c

    .line 262
    :goto_1b
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1f
    :goto_1c
    return v2

    .line 245
    :catchall_3
    move-exception v0

    move-object v13, v6

    move-object v6, v3

    move-object v3, v4

    move-object v4, v13

    .line 263
    :goto_1d
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/q;->a:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    if-eqz v6, :cond_20

    .line 266
    :try_start_10
    invoke-virtual {v6}, Ljava/io/DataOutputStream;->close()V

    goto :goto_1e

    :catch_b
    move-exception v1

    goto :goto_1f

    :cond_20
    :goto_1e
    if-eqz v3, :cond_21

    .line 269
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V

    :cond_21
    if-eqz v4, :cond_22

    .line 272
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_10
    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_10} :catch_b

    goto :goto_20

    .line 275
    :goto_1f
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 277
    :cond_22
    :goto_20
    throw v0
.end method

.method public a(Lcom/bianfeng/datafunsdk/net/RequestHeaders;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/q;->c:Lcom/bianfeng/datafunsdk/net/RequestHeaders;

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/net/ResponseData;)V
    .locals 0

    .line 2
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/q;->f:Lcom/bianfeng/datafunsdk/net/ResponseData;

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/net/ResponseHeaders;)V
    .locals 0

    .line 3
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/q;->e:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    return-void
.end method
