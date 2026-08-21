.class final Lcom/tkay/core/common/h/a$1;
.super Lcom/tkay/core/common/l/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/h/a;->d(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/tkay/core/common/h/a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/h/a;I)V
    .locals 0

    .line 263
    iput-object p1, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iput p2, p0, Lcom/tkay/core/common/h/a$1;->a:I

    invoke-direct {p0}, Lcom/tkay/core/common/l/b/b;-><init>()V

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 11

    const-string v0, "9999"

    const/4 v1, 0x0

    .line 309
    :try_start_0
    iget-object v2, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iput-object p1, v2, Lcom/tkay/core/common/h/a;->o:Ljava/lang/String;

    .line 311
    new-instance v2, Ljava/net/URL;

    invoke-direct {v2, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 313
    invoke-virtual {v2}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/net/UnknownHostException; {:try_start_0 .. :try_end_0} :catch_31
    .catch Ljava/net/ConnectException; {:try_start_0 .. :try_end_0} :catch_30
    .catch Ljavax/net/ssl/SSLException; {:try_start_0 .. :try_end_0} :catch_2f
    .catch Ljava/net/SocketException; {:try_start_0 .. :try_end_0} :catch_2e
    .catch Ljava/net/SocketTimeoutException; {:try_start_0 .. :try_end_0} :catch_2d
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_0 .. :try_end_0} :catch_2c
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_2b
    .catch Ljava/lang/StackOverflowError; {:try_start_0 .. :try_end_0} :catch_2a
    .catch Ljava/lang/Error; {:try_start_0 .. :try_end_0} :catch_29
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_28
    .catchall {:try_start_0 .. :try_end_0} :catchall_6

    .line 316
    :try_start_1
    iget-object v2, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-virtual {v2}, Lcom/tkay/core/common/h/a;->a()I

    move-result v2

    const/4 v3, 0x2

    const/4 v4, 0x1

    if-eq v2, v4, :cond_0

    if-eq v2, v3, :cond_0

    move v2, v3

    :cond_0
    const/4 v5, 0x0

    if-ne v2, v4, :cond_1

    .line 323
    invoke-virtual {p1, v4}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 324
    invoke-virtual {p1, v4}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    const-string v6, "POST"

    .line 325
    invoke-virtual {p1, v6}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    .line 326
    invoke-virtual {p1, v5}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    :cond_1
    if-ne v2, v3, :cond_2

    .line 330
    invoke-virtual {p1, v5}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    .line 334
    :cond_2
    iget-object v3, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-virtual {v3}, Lcom/tkay/core/common/h/a;->c()Ljava/util/Map;

    move-result-object v3

    if-eqz v3, :cond_3

    .line 335
    invoke-interface {v3}, Ljava/util/Map;->size()I

    move-result v5

    if-lez v5, :cond_3

    .line 336
    invoke-interface {v3}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v5

    invoke-interface {v5}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v5

    :goto_0
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_3

    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    .line 337
    invoke-interface {v3, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-virtual {p1, v6, v7}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 341
    :cond_3
    iget-object v3, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget-boolean v3, v3, Lcom/tkay/core/common/h/a;->n:Z

    if-eqz v3, :cond_5

    .line 343
    iget-object v2, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v3, p0, Lcom/tkay/core/common/h/a$1;->a:I

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/h/a;->c(I)V
    :try_end_1
    .catch Ljava/net/UnknownHostException; {:try_start_1 .. :try_end_1} :catch_27
    .catch Ljava/net/ConnectException; {:try_start_1 .. :try_end_1} :catch_26
    .catch Ljavax/net/ssl/SSLException; {:try_start_1 .. :try_end_1} :catch_25
    .catch Ljava/net/SocketException; {:try_start_1 .. :try_end_1} :catch_24
    .catch Ljava/net/SocketTimeoutException; {:try_start_1 .. :try_end_1} :catch_23
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_1 .. :try_end_1} :catch_22
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_21
    .catch Ljava/lang/StackOverflowError; {:try_start_1 .. :try_end_1} :catch_20
    .catch Ljava/lang/Error; {:try_start_1 .. :try_end_1} :catch_1f
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1e
    .catchall {:try_start_1 .. :try_end_1} :catchall_5

    if-eqz p1, :cond_4

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_4
    return-void

    .line 347
    :cond_5
    :try_start_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    const-string v5, "ua"

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_6

    const-string v3, "User-Agent"

    .line 348
    invoke-static {}, Lcom/tkay/core/common/l/g;->a()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p1, v3, v5}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    const v3, 0xea60

    .line 351
    invoke-virtual {p1, v3}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 352
    invoke-virtual {p1, v3}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    .line 353
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->connect()V

    if-ne v2, v4, :cond_7

    .line 357
    iget-object v2, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-virtual {v2}, Lcom/tkay/core/common/h/a;->d()[B

    move-result-object v2

    if-eqz v2, :cond_7

    .line 359
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v3

    .line 360
    invoke-virtual {v3, v2}, Ljava/io/OutputStream;->write([B)V

    .line 361
    invoke-virtual {v3}, Ljava/io/OutputStream;->flush()V

    .line 362
    invoke-virtual {v3}, Ljava/io/OutputStream;->close()V

    .line 365
    :cond_7
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v2

    .line 366
    iget-object v3, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/h/a;->a(I)Z

    move-result v3

    if-nez v3, :cond_e

    const/16 v3, 0xc8

    if-eq v2, v3, :cond_e

    const/16 v3, 0x12e

    if-eq v2, v3, :cond_a

    const/16 v3, 0x12d

    if-eq v2, v3, :cond_a

    const/16 v3, 0x133

    if-ne v2, v3, :cond_8

    goto :goto_1

    .line 387
    :cond_8
    iget-object v3, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v4, p0, Lcom/tkay/core/common/h/a$1;->a:I

    const-string v5, "Http respond status code is "

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "9990"

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getResponseMessage()Ljava/lang/String;

    move-result-object v8

    invoke-static {v6, v7, v8}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v6

    invoke-virtual {v3, v4, v2, v5, v6}, Lcom/tkay/core/common/h/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    :try_end_2
    .catch Ljava/net/UnknownHostException; {:try_start_2 .. :try_end_2} :catch_27
    .catch Ljava/net/ConnectException; {:try_start_2 .. :try_end_2} :catch_26
    .catch Ljavax/net/ssl/SSLException; {:try_start_2 .. :try_end_2} :catch_25
    .catch Ljava/net/SocketException; {:try_start_2 .. :try_end_2} :catch_24
    .catch Ljava/net/SocketTimeoutException; {:try_start_2 .. :try_end_2} :catch_23
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_2 .. :try_end_2} :catch_22
    .catch Ljava/lang/OutOfMemoryError; {:try_start_2 .. :try_end_2} :catch_21
    .catch Ljava/lang/StackOverflowError; {:try_start_2 .. :try_end_2} :catch_20
    .catch Ljava/lang/Error; {:try_start_2 .. :try_end_2} :catch_1f
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1e
    .catchall {:try_start_2 .. :try_end_2} :catchall_5

    if-eqz p1, :cond_9

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_9
    return-void

    .line 373
    :cond_a
    :goto_1
    :try_start_3
    iget-object v2, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget-boolean v2, v2, Lcom/tkay/core/common/h/a;->n:Z

    if-nez v2, :cond_b

    const-string v2, "Location"

    .line 375
    invoke-virtual {p1, v2}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_c

    .line 377
    invoke-virtual {v2}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v3

    const-string v4, "http"

    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_c

    .line 378
    invoke-direct {p0, v2}, Lcom/tkay/core/common/h/a$1;->b(Ljava/lang/String;)V

    goto :goto_2

    .line 383
    :cond_b
    iget-object v2, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v3, p0, Lcom/tkay/core/common/h/a$1;->a:I

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/h/a;->c(I)V
    :try_end_3
    .catch Ljava/net/UnknownHostException; {:try_start_3 .. :try_end_3} :catch_27
    .catch Ljava/net/ConnectException; {:try_start_3 .. :try_end_3} :catch_26
    .catch Ljavax/net/ssl/SSLException; {:try_start_3 .. :try_end_3} :catch_25
    .catch Ljava/net/SocketException; {:try_start_3 .. :try_end_3} :catch_24
    .catch Ljava/net/SocketTimeoutException; {:try_start_3 .. :try_end_3} :catch_23
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_3 .. :try_end_3} :catch_22
    .catch Ljava/lang/OutOfMemoryError; {:try_start_3 .. :try_end_3} :catch_21
    .catch Ljava/lang/StackOverflowError; {:try_start_3 .. :try_end_3} :catch_20
    .catch Ljava/lang/Error; {:try_start_3 .. :try_end_3} :catch_1f
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1e
    .catchall {:try_start_3 .. :try_end_3} :catchall_5

    :cond_c
    :goto_2
    if-eqz p1, :cond_d

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_d
    return-void

    .line 394
    :cond_e
    :try_start_4
    iget-object v2, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget-boolean v2, v2, Lcom/tkay/core/common/h/a;->n:Z

    if-eqz v2, :cond_10

    .line 395
    iget-object v2, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v3, p0, Lcom/tkay/core/common/h/a$1;->a:I

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/h/a;->c(I)V
    :try_end_4
    .catch Ljava/net/UnknownHostException; {:try_start_4 .. :try_end_4} :catch_27
    .catch Ljava/net/ConnectException; {:try_start_4 .. :try_end_4} :catch_26
    .catch Ljavax/net/ssl/SSLException; {:try_start_4 .. :try_end_4} :catch_25
    .catch Ljava/net/SocketException; {:try_start_4 .. :try_end_4} :catch_24
    .catch Ljava/net/SocketTimeoutException; {:try_start_4 .. :try_end_4} :catch_23
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_4 .. :try_end_4} :catch_22
    .catch Ljava/lang/OutOfMemoryError; {:try_start_4 .. :try_end_4} :catch_21
    .catch Ljava/lang/StackOverflowError; {:try_start_4 .. :try_end_4} :catch_20
    .catch Ljava/lang/Error; {:try_start_4 .. :try_end_4} :catch_1f
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1e
    .catchall {:try_start_4 .. :try_end_4} :catchall_5

    if-eqz p1, :cond_f

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_f
    return-void

    .line 401
    :cond_10
    :try_start_5
    invoke-static {p1}, Lcom/tkay/core/common/h/a;->a(Ljava/net/HttpURLConnection;)Ljava/io/InputStream;

    move-result-object v2
    :try_end_5
    .catch Ljava/net/UnknownHostException; {:try_start_5 .. :try_end_5} :catch_27
    .catch Ljava/net/ConnectException; {:try_start_5 .. :try_end_5} :catch_26
    .catch Ljavax/net/ssl/SSLException; {:try_start_5 .. :try_end_5} :catch_25
    .catch Ljava/net/SocketException; {:try_start_5 .. :try_end_5} :catch_24
    .catch Ljava/net/SocketTimeoutException; {:try_start_5 .. :try_end_5} :catch_23
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_5 .. :try_end_5} :catch_22
    .catch Ljava/lang/OutOfMemoryError; {:try_start_5 .. :try_end_5} :catch_21
    .catch Ljava/lang/StackOverflowError; {:try_start_5 .. :try_end_5} :catch_20
    .catch Ljava/lang/Error; {:try_start_5 .. :try_end_5} :catch_1f
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1e
    .catchall {:try_start_5 .. :try_end_5} :catchall_5

    .line 402
    :try_start_6
    new-instance v3, Ljava/io/InputStreamReader;

    invoke-direct {v3, v2}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V
    :try_end_6
    .catch Ljava/net/UnknownHostException; {:try_start_6 .. :try_end_6} :catch_1d
    .catch Ljava/net/ConnectException; {:try_start_6 .. :try_end_6} :catch_1c
    .catch Ljavax/net/ssl/SSLException; {:try_start_6 .. :try_end_6} :catch_1b
    .catch Ljava/net/SocketException; {:try_start_6 .. :try_end_6} :catch_1a
    .catch Ljava/net/SocketTimeoutException; {:try_start_6 .. :try_end_6} :catch_19
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_6 .. :try_end_6} :catch_18
    .catch Ljava/lang/OutOfMemoryError; {:try_start_6 .. :try_end_6} :catch_17
    .catch Ljava/lang/StackOverflowError; {:try_start_6 .. :try_end_6} :catch_16
    .catch Ljava/lang/Error; {:try_start_6 .. :try_end_6} :catch_15
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_14
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    .line 403
    :try_start_7
    new-instance v4, Ljava/io/BufferedReader;

    invoke-direct {v4, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_7
    .catch Ljava/net/UnknownHostException; {:try_start_7 .. :try_end_7} :catch_13
    .catch Ljava/net/ConnectException; {:try_start_7 .. :try_end_7} :catch_12
    .catch Ljavax/net/ssl/SSLException; {:try_start_7 .. :try_end_7} :catch_11
    .catch Ljava/net/SocketException; {:try_start_7 .. :try_end_7} :catch_10
    .catch Ljava/net/SocketTimeoutException; {:try_start_7 .. :try_end_7} :catch_f
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_7 .. :try_end_7} :catch_e
    .catch Ljava/lang/OutOfMemoryError; {:try_start_7 .. :try_end_7} :catch_d
    .catch Ljava/lang/StackOverflowError; {:try_start_7 .. :try_end_7} :catch_c
    .catch Ljava/lang/Error; {:try_start_7 .. :try_end_7} :catch_b
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_a
    .catchall {:try_start_7 .. :try_end_7} :catchall_25

    .line 405
    :try_start_8
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 406
    :goto_3
    invoke-virtual {v4}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v5

    if-eqz v5, :cond_11

    .line 407
    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_3

    .line 412
    :cond_11
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-virtual {v5}, Lcom/tkay/core/common/h/a;->n()Z

    move-result v5

    if-eqz v5, :cond_14

    .line 413
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 416
    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    .line 418
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v6, "code"

    .line 419
    invoke-virtual {v5, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    if-nez v6, :cond_13

    .line 421
    sget-object v1, Lcom/tkay/core/common/b/f$c;->d:Ljava/lang/String;

    invoke-virtual {v5, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    if-nez v1, :cond_12

    .line 423
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 425
    :cond_12
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    .line 426
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    invoke-virtual {v5, v1}, Lcom/tkay/core/common/h/a;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    .line 427
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v6, p0, Lcom/tkay/core/common/h/a$1;->a:I

    invoke-virtual {v5, v6, v1}, Lcom/tkay/core/common/h/a;->a(ILjava/lang/Object;)V

    goto :goto_4

    .line 431
    :cond_13
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v7, p0, Lcom/tkay/core/common/h/a$1;->a:I

    const/16 v8, -0x2710

    const-string v9, "9991"

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-static {v9, v6, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v6

    invoke-virtual {v5, v7, v8, v1, v6}, Lcom/tkay/core/common/h/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    goto :goto_4

    .line 434
    :cond_14
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5, v1}, Lcom/tkay/core/common/h/a;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    .line 435
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v6, p0, Lcom/tkay/core/common/h/a$1;->a:I

    invoke-virtual {v5, v6, v1}, Lcom/tkay/core/common/h/a;->a(ILjava/lang/Object;)V
    :try_end_8
    .catch Ljava/net/UnknownHostException; {:try_start_8 .. :try_end_8} :catch_9
    .catch Ljava/net/ConnectException; {:try_start_8 .. :try_end_8} :catch_8
    .catch Ljavax/net/ssl/SSLException; {:try_start_8 .. :try_end_8} :catch_7
    .catch Ljava/net/SocketException; {:try_start_8 .. :try_end_8} :catch_6
    .catch Ljava/net/SocketTimeoutException; {:try_start_8 .. :try_end_8} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_8 .. :try_end_8} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_8 .. :try_end_8} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_8 .. :try_end_8} :catch_2
    .catch Ljava/lang/Error; {:try_start_8 .. :try_end_8} :catch_1
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_0
    .catchall {:try_start_8 .. :try_end_8} :catchall_3

    .line 500
    :goto_4
    :try_start_9
    invoke-virtual {v4}, Ljava/io/BufferedReader;->close()V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_0

    .line 507
    :catchall_0
    :try_start_a
    invoke-virtual {v3}, Ljava/io/InputStreamReader;->close()V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_1

    :catchall_1
    if-eqz v2, :cond_15

    .line 514
    :try_start_b
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_2

    :catchall_2
    :cond_15
    if-eqz p1, :cond_38

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catchall_3
    move-exception v0

    move-object v1, v4

    goto/16 :goto_1a

    :catch_0
    move-exception v1

    move-object v10, v4

    move-object v4, v1

    move-object v1, v10

    goto/16 :goto_7

    :catch_1
    move-exception v1

    move-object v10, v4

    move-object v4, v1

    move-object v1, v10

    goto/16 :goto_9

    :catch_2
    move-exception v1

    move-object v10, v4

    move-object v4, v1

    move-object v1, v10

    goto/16 :goto_b

    :catch_3
    move-exception v1

    move-object v10, v4

    move-object v4, v1

    move-object v1, v10

    goto/16 :goto_d

    :catch_4
    move-exception v0

    move-object v1, v4

    goto/16 :goto_f

    :catch_5
    move-exception v1

    move-object v10, v4

    move-object v4, v1

    move-object v1, v10

    goto/16 :goto_11

    :catch_6
    move-exception v1

    move-object v10, v4

    move-object v4, v1

    move-object v1, v10

    goto/16 :goto_13

    :catch_7
    move-exception v1

    move-object v10, v4

    move-object v4, v1

    move-object v1, v10

    goto/16 :goto_15

    :catch_8
    move-exception v1

    move-object v10, v4

    move-object v4, v1

    move-object v1, v10

    goto/16 :goto_17

    :catch_9
    move-exception v1

    move-object v10, v4

    move-object v4, v1

    move-object v1, v10

    goto/16 :goto_19

    :catch_a
    move-exception v4

    goto/16 :goto_7

    :catch_b
    move-exception v4

    goto/16 :goto_9

    :catch_c
    move-exception v4

    goto/16 :goto_b

    :catch_d
    move-exception v4

    goto/16 :goto_d

    :catch_e
    move-exception v0

    goto/16 :goto_f

    :catch_f
    move-exception v4

    goto/16 :goto_11

    :catch_10
    move-exception v4

    goto/16 :goto_13

    :catch_11
    move-exception v4

    goto/16 :goto_15

    :catch_12
    move-exception v4

    goto/16 :goto_17

    :catch_13
    move-exception v4

    goto/16 :goto_19

    :catchall_4
    move-exception v0

    move-object v3, v1

    goto/16 :goto_1a

    :catch_14
    move-exception v3

    move-object v4, v3

    move-object v3, v1

    goto/16 :goto_7

    :catch_15
    move-exception v3

    move-object v4, v3

    move-object v3, v1

    goto/16 :goto_9

    :catch_16
    move-exception v3

    move-object v4, v3

    move-object v3, v1

    goto/16 :goto_b

    :catch_17
    move-exception v3

    move-object v4, v3

    move-object v3, v1

    goto/16 :goto_d

    :catch_18
    move-exception v0

    move-object v3, v1

    goto/16 :goto_f

    :catch_19
    move-exception v3

    move-object v4, v3

    move-object v3, v1

    goto/16 :goto_11

    :catch_1a
    move-exception v3

    move-object v4, v3

    move-object v3, v1

    goto/16 :goto_13

    :catch_1b
    move-exception v3

    move-object v4, v3

    move-object v3, v1

    goto/16 :goto_15

    :catch_1c
    move-exception v3

    move-object v4, v3

    move-object v3, v1

    goto/16 :goto_17

    :catch_1d
    move-exception v3

    move-object v4, v3

    move-object v3, v1

    goto/16 :goto_19

    :catchall_5
    move-exception v0

    move-object v2, v1

    goto :goto_5

    :catch_1e
    move-exception v2

    move-object v3, v1

    goto :goto_6

    :catch_1f
    move-exception v2

    move-object v3, v1

    goto/16 :goto_8

    :catch_20
    move-exception v2

    move-object v3, v1

    goto/16 :goto_a

    :catch_21
    move-exception v2

    move-object v3, v1

    goto/16 :goto_c

    :catch_22
    move-exception v0

    move-object v2, v1

    goto/16 :goto_e

    :catch_23
    move-exception v2

    move-object v3, v1

    goto/16 :goto_10

    :catch_24
    move-exception v2

    move-object v3, v1

    goto/16 :goto_12

    :catch_25
    move-exception v2

    move-object v3, v1

    goto/16 :goto_14

    :catch_26
    move-exception v2

    move-object v3, v1

    goto/16 :goto_16

    :catch_27
    move-exception v2

    move-object v3, v1

    goto/16 :goto_18

    :catchall_6
    move-exception v0

    move-object p1, v1

    move-object v2, p1

    :goto_5
    move-object v3, v2

    goto/16 :goto_1a

    :catch_28
    move-exception v2

    move-object p1, v1

    move-object v3, p1

    :goto_6
    move-object v4, v2

    move-object v2, v3

    .line 484
    :goto_7
    :try_start_c
    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "Exception msg = "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 485
    invoke-virtual {v4}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v5

    .line 486
    invoke-virtual {v4}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_16

    .line 487
    invoke-virtual {v4}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v5

    .line 493
    :cond_16
    iget-object v6, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v7, p0, Lcom/tkay/core/common/h/a$1;->a:I

    const/16 v8, -0x270e

    invoke-virtual {v4}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v0, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-virtual {v6, v7, v8, v5, v0}, Lcom/tkay/core/common/h/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_25

    if-eqz v1, :cond_17

    .line 500
    :try_start_d
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_7

    :catchall_7
    :cond_17
    if-eqz v3, :cond_18

    .line 507
    :try_start_e
    invoke-virtual {v3}, Ljava/io/InputStreamReader;->close()V
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_8

    :catchall_8
    :cond_18
    if-eqz v2, :cond_19

    .line 514
    :try_start_f
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_f
    .catchall {:try_start_f .. :try_end_f} :catchall_9

    :catchall_9
    :cond_19
    if-eqz p1, :cond_38

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_29
    move-exception v2

    move-object p1, v1

    move-object v3, p1

    :goto_8
    move-object v4, v2

    move-object v2, v3

    .line 475
    :goto_9
    :try_start_10
    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "Error msg = "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4}, Ljava/lang/Error;->getMessage()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 476
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 478
    invoke-virtual {v4}, Ljava/lang/Error;->getMessage()Ljava/lang/String;

    move-result-object v5

    .line 479
    invoke-virtual {v4}, Ljava/lang/Error;->getMessage()Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_1a

    .line 480
    invoke-virtual {v4}, Ljava/lang/Error;->getMessage()Ljava/lang/String;

    move-result-object v5

    .line 482
    :cond_1a
    iget-object v6, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v7, p0, Lcom/tkay/core/common/h/a$1;->a:I

    const/16 v8, -0x270f

    invoke-virtual {v4}, Ljava/lang/Error;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v0, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-virtual {v6, v7, v8, v5, v0}, Lcom/tkay/core/common/h/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_25

    if-eqz v1, :cond_1b

    .line 500
    :try_start_11
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_11
    .catchall {:try_start_11 .. :try_end_11} :catchall_a

    :catchall_a
    :cond_1b
    if-eqz v3, :cond_1c

    .line 507
    :try_start_12
    invoke-virtual {v3}, Ljava/io/InputStreamReader;->close()V
    :try_end_12
    .catchall {:try_start_12 .. :try_end_12} :catchall_b

    :catchall_b
    :cond_1c
    if-eqz v2, :cond_1d

    .line 514
    :try_start_13
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_13
    .catchall {:try_start_13 .. :try_end_13} :catchall_c

    :catchall_c
    :cond_1d
    if-eqz p1, :cond_38

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_2a
    move-exception v2

    move-object p1, v1

    move-object v3, p1

    :goto_a
    move-object v4, v2

    move-object v2, v3

    .line 467
    :goto_b
    :try_start_14
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 469
    invoke-virtual {v4}, Ljava/lang/StackOverflowError;->getMessage()Ljava/lang/String;

    move-result-object v5

    .line 470
    invoke-virtual {v4}, Ljava/lang/StackOverflowError;->getMessage()Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_1e

    .line 471
    invoke-virtual {v4}, Ljava/lang/StackOverflowError;->getMessage()Ljava/lang/String;

    move-result-object v5

    .line 473
    :cond_1e
    iget-object v6, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v7, p0, Lcom/tkay/core/common/h/a$1;->a:I

    const/16 v8, -0x3ed

    invoke-virtual {v4}, Ljava/lang/StackOverflowError;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v0, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-virtual {v6, v7, v8, v5, v0}, Lcom/tkay/core/common/h/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_25

    if-eqz v1, :cond_1f

    .line 500
    :try_start_15
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_15
    .catchall {:try_start_15 .. :try_end_15} :catchall_d

    :catchall_d
    :cond_1f
    if-eqz v3, :cond_20

    .line 507
    :try_start_16
    invoke-virtual {v3}, Ljava/io/InputStreamReader;->close()V
    :try_end_16
    .catchall {:try_start_16 .. :try_end_16} :catchall_e

    :catchall_e
    :cond_20
    if-eqz v2, :cond_21

    .line 514
    :try_start_17
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_17
    .catchall {:try_start_17 .. :try_end_17} :catchall_f

    :catchall_f
    :cond_21
    if-eqz p1, :cond_38

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_2b
    move-exception v2

    move-object p1, v1

    move-object v3, p1

    :goto_c
    move-object v4, v2

    move-object v2, v3

    .line 460
    :goto_d
    :try_start_18
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 461
    invoke-virtual {v4}, Ljava/lang/OutOfMemoryError;->getMessage()Ljava/lang/String;

    move-result-object v5

    .line 462
    invoke-virtual {v4}, Ljava/lang/OutOfMemoryError;->getMessage()Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_22

    .line 463
    invoke-virtual {v4}, Ljava/lang/OutOfMemoryError;->getMessage()Ljava/lang/String;

    move-result-object v5

    .line 465
    :cond_22
    iget-object v6, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v7, p0, Lcom/tkay/core/common/h/a$1;->a:I

    const/16 v8, -0x3ec

    invoke-virtual {v4}, Ljava/lang/OutOfMemoryError;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v0, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-virtual {v6, v7, v8, v5, v0}, Lcom/tkay/core/common/h/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    :try_end_18
    .catchall {:try_start_18 .. :try_end_18} :catchall_25

    if-eqz v1, :cond_23

    .line 500
    :try_start_19
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_19
    .catchall {:try_start_19 .. :try_end_19} :catchall_10

    :catchall_10
    :cond_23
    if-eqz v3, :cond_24

    .line 507
    :try_start_1a
    invoke-virtual {v3}, Ljava/io/InputStreamReader;->close()V
    :try_end_1a
    .catchall {:try_start_1a .. :try_end_1a} :catchall_11

    :catchall_11
    :cond_24
    if-eqz v2, :cond_25

    .line 514
    :try_start_1b
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_1b
    .catchall {:try_start_1b .. :try_end_1b} :catchall_12

    :catchall_12
    :cond_25
    if-eqz p1, :cond_38

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_2c
    move-exception v0

    move-object p1, v1

    move-object v2, p1

    :goto_e
    move-object v3, v2

    .line 457
    :goto_f
    :try_start_1c
    iget-object v4, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v5, p0, Lcom/tkay/core/common/h/a$1;->a:I

    invoke-virtual {v4, v5, v0}, Lcom/tkay/core/common/h/a;->a(ILorg/apache/http/conn/ConnectTimeoutException;)V

    .line 458
    iget-object v0, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-static {v0}, Lcom/tkay/core/common/h/a;->a(Lcom/tkay/core/common/h/a;)V
    :try_end_1c
    .catchall {:try_start_1c .. :try_end_1c} :catchall_25

    if-eqz v1, :cond_26

    .line 500
    :try_start_1d
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_1d
    .catchall {:try_start_1d .. :try_end_1d} :catchall_13

    :catchall_13
    :cond_26
    if-eqz v3, :cond_27

    .line 507
    :try_start_1e
    invoke-virtual {v3}, Ljava/io/InputStreamReader;->close()V
    :try_end_1e
    .catchall {:try_start_1e .. :try_end_1e} :catchall_14

    :catchall_14
    :cond_27
    if-eqz v2, :cond_28

    .line 514
    :try_start_1f
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_1f
    .catchall {:try_start_1f .. :try_end_1f} :catchall_15

    :catchall_15
    :cond_28
    if-eqz p1, :cond_38

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_2d
    move-exception v2

    move-object p1, v1

    move-object v3, p1

    :goto_10
    move-object v4, v2

    move-object v2, v3

    .line 454
    :goto_11
    :try_start_20
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v6, p0, Lcom/tkay/core/common/h/a$1;->a:I

    const/16 v7, -0x3ea

    const-string v8, "Connect timeout."

    invoke-virtual {v4}, Ljava/net/SocketTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v0, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-virtual {v5, v6, v7, v8, v0}, Lcom/tkay/core/common/h/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    .line 455
    iget-object v0, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-static {v0}, Lcom/tkay/core/common/h/a;->a(Lcom/tkay/core/common/h/a;)V
    :try_end_20
    .catchall {:try_start_20 .. :try_end_20} :catchall_25

    if-eqz v1, :cond_29

    .line 500
    :try_start_21
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_21
    .catchall {:try_start_21 .. :try_end_21} :catchall_16

    :catchall_16
    :cond_29
    if-eqz v3, :cond_2a

    .line 507
    :try_start_22
    invoke-virtual {v3}, Ljava/io/InputStreamReader;->close()V
    :try_end_22
    .catchall {:try_start_22 .. :try_end_22} :catchall_17

    :catchall_17
    :cond_2a
    if-eqz v2, :cond_2b

    .line 514
    :try_start_23
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_23
    .catchall {:try_start_23 .. :try_end_23} :catchall_18

    :catchall_18
    :cond_2b
    if-eqz p1, :cond_38

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_2e
    move-exception v2

    move-object p1, v1

    move-object v3, p1

    :goto_12
    move-object v4, v2

    move-object v2, v3

    .line 451
    :goto_13
    :try_start_24
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v6, p0, Lcom/tkay/core/common/h/a$1;->a:I

    const/16 v7, -0x3ef

    const-string v8, "connect socket failed."

    invoke-virtual {v4}, Ljava/net/SocketException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v0, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-virtual {v5, v6, v7, v8, v0}, Lcom/tkay/core/common/h/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    .line 452
    iget-object v0, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-static {v0}, Lcom/tkay/core/common/h/a;->a(Lcom/tkay/core/common/h/a;)V
    :try_end_24
    .catchall {:try_start_24 .. :try_end_24} :catchall_25

    if-eqz v1, :cond_2c

    .line 500
    :try_start_25
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_25
    .catchall {:try_start_25 .. :try_end_25} :catchall_19

    :catchall_19
    :cond_2c
    if-eqz v3, :cond_2d

    .line 507
    :try_start_26
    invoke-virtual {v3}, Ljava/io/InputStreamReader;->close()V
    :try_end_26
    .catchall {:try_start_26 .. :try_end_26} :catchall_1a

    :catchall_1a
    :cond_2d
    if-eqz v2, :cond_2e

    .line 514
    :try_start_27
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_27
    .catchall {:try_start_27 .. :try_end_27} :catchall_1b

    :catchall_1b
    :cond_2e
    if-eqz p1, :cond_38

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_2f
    move-exception v2

    move-object p1, v1

    move-object v3, p1

    :goto_14
    move-object v4, v2

    move-object v2, v3

    .line 448
    :goto_15
    :try_start_28
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v6, p0, Lcom/tkay/core/common/h/a$1;->a:I

    const/16 v7, -0x3ee

    const-string v8, "connect ssl failed."

    invoke-virtual {v4}, Ljavax/net/ssl/SSLException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v0, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-virtual {v5, v6, v7, v8, v0}, Lcom/tkay/core/common/h/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    .line 449
    iget-object v0, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-static {v0}, Lcom/tkay/core/common/h/a;->a(Lcom/tkay/core/common/h/a;)V
    :try_end_28
    .catchall {:try_start_28 .. :try_end_28} :catchall_25

    if-eqz v1, :cond_2f

    .line 500
    :try_start_29
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_29
    .catchall {:try_start_29 .. :try_end_29} :catchall_1c

    :catchall_1c
    :cond_2f
    if-eqz v3, :cond_30

    .line 507
    :try_start_2a
    invoke-virtual {v3}, Ljava/io/InputStreamReader;->close()V
    :try_end_2a
    .catchall {:try_start_2a .. :try_end_2a} :catchall_1d

    :catchall_1d
    :cond_30
    if-eqz v2, :cond_31

    .line 514
    :try_start_2b
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_2b
    .catchall {:try_start_2b .. :try_end_2b} :catchall_1e

    :catchall_1e
    :cond_31
    if-eqz p1, :cond_38

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_30
    move-exception v2

    move-object p1, v1

    move-object v3, p1

    :goto_16
    move-object v4, v2

    move-object v2, v3

    .line 443
    :goto_17
    :try_start_2c
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-virtual {v4}, Ljava/net/ConnectException;->getMessage()Ljava/lang/String;

    move-result-object v6

    invoke-static {v0, v0, v6}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/tkay/core/common/h/a;->a(Lcom/tkay/core/api/AdError;)V

    .line 444
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v6, p0, Lcom/tkay/core/common/h/a$1;->a:I

    const/16 v7, -0x3e9

    const-string v8, "Connect error."

    invoke-virtual {v4}, Ljava/net/ConnectException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v0, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-virtual {v5, v6, v7, v8, v0}, Lcom/tkay/core/common/h/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    .line 446
    iget-object v0, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-static {v0}, Lcom/tkay/core/common/h/a;->a(Lcom/tkay/core/common/h/a;)V
    :try_end_2c
    .catchall {:try_start_2c .. :try_end_2c} :catchall_25

    if-eqz v1, :cond_32

    .line 500
    :try_start_2d
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_2d
    .catchall {:try_start_2d .. :try_end_2d} :catchall_1f

    :catchall_1f
    :cond_32
    if-eqz v3, :cond_33

    .line 507
    :try_start_2e
    invoke-virtual {v3}, Ljava/io/InputStreamReader;->close()V
    :try_end_2e
    .catchall {:try_start_2e .. :try_end_2e} :catchall_20

    :catchall_20
    :cond_33
    if-eqz v2, :cond_34

    .line 514
    :try_start_2f
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_2f
    .catchall {:try_start_2f .. :try_end_2f} :catchall_21

    :catchall_21
    :cond_34
    if-eqz p1, :cond_38

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_31
    move-exception v2

    move-object p1, v1

    move-object v3, p1

    :goto_18
    move-object v4, v2

    move-object v2, v3

    .line 439
    :goto_19
    :try_start_30
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-virtual {v4}, Ljava/net/UnknownHostException;->getMessage()Ljava/lang/String;

    move-result-object v6

    invoke-static {v0, v0, v6}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/tkay/core/common/h/a;->a(Lcom/tkay/core/api/AdError;)V

    .line 440
    iget-object v5, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget v6, p0, Lcom/tkay/core/common/h/a$1;->a:I

    const/16 v7, -0x3e8

    const-string v8, "UnknownHostException"

    invoke-virtual {v4}, Ljava/net/UnknownHostException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v0, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-virtual {v5, v6, v7, v8, v0}, Lcom/tkay/core/common/h/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    :try_end_30
    .catchall {:try_start_30 .. :try_end_30} :catchall_25

    if-eqz v1, :cond_35

    .line 500
    :try_start_31
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_31
    .catchall {:try_start_31 .. :try_end_31} :catchall_22

    :catchall_22
    :cond_35
    if-eqz v3, :cond_36

    .line 507
    :try_start_32
    invoke-virtual {v3}, Ljava/io/InputStreamReader;->close()V
    :try_end_32
    .catchall {:try_start_32 .. :try_end_32} :catchall_23

    :catchall_23
    :cond_36
    if-eqz v2, :cond_37

    .line 514
    :try_start_33
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_33
    .catchall {:try_start_33 .. :try_end_33} :catchall_24

    :catchall_24
    :cond_37
    if-eqz p1, :cond_38

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_38
    return-void

    :catchall_25
    move-exception v0

    :goto_1a
    if-eqz v1, :cond_39

    .line 500
    :try_start_34
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_34
    .catchall {:try_start_34 .. :try_end_34} :catchall_26

    :catchall_26
    :cond_39
    if-eqz v3, :cond_3a

    .line 507
    :try_start_35
    invoke-virtual {v3}, Ljava/io/InputStreamReader;->close()V
    :try_end_35
    .catchall {:try_start_35 .. :try_end_35} :catchall_27

    :catchall_27
    :cond_3a
    if-eqz v2, :cond_3b

    .line 514
    :try_start_36
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_36
    .catchall {:try_start_36 .. :try_end_36} :catchall_28

    :catchall_28
    :cond_3b
    if-eqz p1, :cond_3c

    .line 521
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 523
    :cond_3c
    throw v0
.end method


# virtual methods
.method public final a()V
    .locals 5

    const-string v0, "9999"

    .line 269
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget-object v1, v1, Lcom/tkay/core/common/h/a;->m:Lcom/tkay/core/common/h/k;

    if-eqz v1, :cond_0

    .line 270
    iget-object v1, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget-object v1, v1, Lcom/tkay/core/common/h/a;->m:Lcom/tkay/core/common/h/k;

    iget v2, p0, Lcom/tkay/core/common/h/a$1;->a:I

    invoke-interface {v1, v2}, Lcom/tkay/core/common/h/k;->onLoadStart(I)V

    .line 273
    :cond_0
    iget-object v1, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    invoke-virtual {v1}, Lcom/tkay/core/common/h/a;->b()Ljava/lang/String;

    move-result-object v1

    .line 274
    invoke-direct {p0, v1}, Lcom/tkay/core/common/h/a$1;->b(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/StackOverflowError; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v1

    .line 286
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    .line 287
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 288
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    .line 290
    :cond_1
    iget-object v3, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget-object v3, v3, Lcom/tkay/core/common/h/a;->m:Lcom/tkay/core/common/h/k;

    if-eqz v3, :cond_2

    .line 291
    iget-object v3, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget-object v3, v3, Lcom/tkay/core/common/h/a;->m:Lcom/tkay/core/common/h/k;

    iget v4, p0, Lcom/tkay/core/common/h/a$1;->a:I

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v0, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-interface {v3, v4, v2, v0}, Lcom/tkay/core/common/h/k;->onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    :cond_2
    return-void

    :catch_1
    move-exception v1

    goto :goto_0

    :catch_2
    move-exception v1

    .line 277
    :goto_0
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 278
    invoke-virtual {v1}, Ljava/lang/VirtualMachineError;->getMessage()Ljava/lang/String;

    move-result-object v2

    .line 279
    invoke-virtual {v1}, Ljava/lang/VirtualMachineError;->getMessage()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_3

    .line 280
    invoke-virtual {v1}, Ljava/lang/VirtualMachineError;->getMessage()Ljava/lang/String;

    move-result-object v2

    .line 282
    :cond_3
    iget-object v3, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget-object v3, v3, Lcom/tkay/core/common/h/a;->m:Lcom/tkay/core/common/h/k;

    if-eqz v3, :cond_4

    .line 283
    iget-object v3, p0, Lcom/tkay/core/common/h/a$1;->b:Lcom/tkay/core/common/h/a;

    iget-object v3, v3, Lcom/tkay/core/common/h/a;->m:Lcom/tkay/core/common/h/k;

    iget v4, p0, Lcom/tkay/core/common/h/a$1;->a:I

    invoke-virtual {v1}, Ljava/lang/VirtualMachineError;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v0, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-interface {v3, v4, v2, v0}, Lcom/tkay/core/common/h/k;->onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    :cond_4
    return-void
.end method
