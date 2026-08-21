.class final Lcom/tramini/plugin/a/d/a$1;
.super Lcom/tramini/plugin/a/g/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tramini/plugin/a/d/a;->a(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/tramini/plugin/a/d/a;


# direct methods
.method constructor <init>(Lcom/tramini/plugin/a/d/a;I)V
    .locals 0

    .line 169
    iput-object p1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    iput p2, p0, Lcom/tramini/plugin/a/d/a$1;->a:I

    invoke-direct {p0}, Lcom/tramini/plugin/a/g/b/b;-><init>()V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 6

    const/4 v0, 0x0

    .line 204
    :try_start_0
    new-instance v1, Ljava/net/URL;

    invoke-direct {v1, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 206
    invoke-virtual {v1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/net/UnknownHostException; {:try_start_0 .. :try_end_0} :catch_f
    .catch Ljava/net/ConnectException; {:try_start_0 .. :try_end_0} :catch_e
    .catch Ljava/net/SocketTimeoutException; {:try_start_0 .. :try_end_0} :catch_d
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_0 .. :try_end_0} :catch_c
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_b
    .catch Ljava/lang/StackOverflowError; {:try_start_0 .. :try_end_0} :catch_a
    .catch Ljava/lang/Error; {:try_start_0 .. :try_end_0} :catch_9
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_8
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v0, 0x1

    .line 217
    :try_start_1
    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 218
    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    const-string v0, "POST"

    .line 219
    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    const/4 v0, 0x0

    .line 220
    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    .line 226
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->c()Ljava/util/Map;

    move-result-object v0

    .line 227
    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 228
    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 229
    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/16 v0, 0x4e20

    .line 235
    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    const v0, 0xea60

    .line 236
    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    .line 237
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->connect()V

    .line 241
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->d()[B

    move-result-object v0

    if-eqz v0, :cond_1

    .line 244
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v1

    .line 245
    invoke-virtual {v1, v0}, Ljava/io/OutputStream;->write([B)V

    .line 246
    invoke-virtual {v1}, Ljava/io/OutputStream;->flush()V

    .line 247
    invoke-virtual {v1}, Ljava/io/OutputStream;->close()V

    .line 250
    :cond_1
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v0

    const/16 v1, 0xc8

    if-eq v0, v1, :cond_3

    .line 253
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_1
    .catch Ljava/net/UnknownHostException; {:try_start_1 .. :try_end_1} :catch_7
    .catch Ljava/net/ConnectException; {:try_start_1 .. :try_end_1} :catch_6
    .catch Ljava/net/SocketTimeoutException; {:try_start_1 .. :try_end_1} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_1 .. :try_end_1} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_1 .. :try_end_1} :catch_2
    .catch Ljava/lang/Error; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_2

    .line 314
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_2
    return-void

    .line 258
    :cond_3
    :try_start_2
    invoke-static {p1}, Lcom/tramini/plugin/a/d/a;->a(Ljava/net/HttpURLConnection;)Ljava/io/InputStream;

    move-result-object v0

    .line 259
    new-instance v1, Ljava/io/InputStreamReader;

    invoke-direct {v1, v0}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    .line 260
    new-instance v2, Ljava/io/BufferedReader;

    invoke-direct {v2, v1}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 262
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    .line 263
    :goto_1
    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_4

    .line 264
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 268
    :cond_4
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V

    .line 271
    invoke-virtual {v1}, Ljava/io/InputStreamReader;->close()V

    if-eqz v0, :cond_5

    .line 274
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V

    .line 277
    :cond_5
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->g()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 278
    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 279
    iget-object v1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    invoke-virtual {v1, v0}, Lcom/tramini/plugin/a/d/a;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 280
    iget-object v1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v1, v0}, Lcom/tramini/plugin/a/d/a;->a(Ljava/lang/Object;)V

    goto :goto_2

    .line 283
    :cond_6
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    const-string v1, ""

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/a/d/a;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 284
    iget-object v1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v1, v0}, Lcom/tramini/plugin/a/d/a;->a(Ljava/lang/Object;)V
    :try_end_2
    .catch Ljava/net/UnknownHostException; {:try_start_2 .. :try_end_2} :catch_7
    .catch Ljava/net/ConnectException; {:try_start_2 .. :try_end_2} :catch_6
    .catch Ljava/net/SocketTimeoutException; {:try_start_2 .. :try_end_2} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_2 .. :try_end_2} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_2 .. :try_end_2} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_2 .. :try_end_2} :catch_2
    .catch Ljava/lang/Error; {:try_start_2 .. :try_end_2} :catch_1
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :goto_2
    if-eqz p1, :cond_7

    .line 314
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catchall_0
    move-exception v0

    goto/16 :goto_b

    :catch_0
    move-object v0, p1

    goto :goto_3

    :catch_1
    move-object v0, p1

    goto :goto_4

    :catch_2
    move-object v0, p1

    goto :goto_5

    :catch_3
    move-object v0, p1

    goto :goto_6

    :catch_4
    move-object v0, p1

    goto :goto_7

    :catch_5
    move-object v0, p1

    goto :goto_8

    :catch_6
    move-object v0, p1

    goto :goto_9

    :catch_7
    move-object v0, p1

    goto :goto_a

    :catchall_1
    move-exception p1

    move-object v5, v0

    move-object v0, p1

    move-object p1, v5

    goto :goto_b

    .line 310
    :catch_8
    :goto_3
    :try_start_3
    iget-object p1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {p1}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v0, :cond_7

    .line 314
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    .line 304
    :catch_9
    :goto_4
    :try_start_4
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 305
    iget-object p1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {p1}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v0, :cond_7

    .line 314
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    .line 301
    :catch_a
    :goto_5
    :try_start_5
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 302
    iget-object p1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {p1}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    if-eqz v0, :cond_7

    .line 314
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    .line 298
    :catch_b
    :goto_6
    :try_start_6
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 299
    iget-object p1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {p1}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    if-eqz v0, :cond_7

    .line 314
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    .line 296
    :catch_c
    :goto_7
    :try_start_7
    iget-object p1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {p1}, Lcom/tramini/plugin/a/d/a;->h()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    if-eqz v0, :cond_7

    .line 314
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    .line 293
    :catch_d
    :goto_8
    :try_start_8
    iget-object p1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {p1}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_1

    if-eqz v0, :cond_7

    .line 314
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    .line 291
    :catch_e
    :goto_9
    :try_start_9
    iget-object p1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {p1}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_1

    if-eqz v0, :cond_7

    .line 314
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    .line 289
    :catch_f
    :goto_a
    :try_start_a
    iget-object p1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {p1}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_1

    if-eqz v0, :cond_7

    .line 314
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_7
    return-void

    :goto_b
    if-eqz p1, :cond_8

    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 316
    :cond_8
    throw v0
.end method


# virtual methods
.method public final a()V
    .locals 7

    .line 174
    :try_start_0
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    iget-object v0, v0, Lcom/tramini/plugin/a/d/a;->n:Lcom/tramini/plugin/a/d/b;

    if-eqz v0, :cond_0

    .line 175
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    iget-object v0, v0, Lcom/tramini/plugin/a/d/a;->n:Lcom/tramini/plugin/a/d/b;

    invoke-interface {v0}, Lcom/tramini/plugin/a/d/b;->a()V

    .line 178
    :cond_0
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->b()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_11
    .catch Ljava/lang/StackOverflowError; {:try_start_0 .. :try_end_0} :catch_11
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_10

    const/4 v1, 0x0

    .line 1204
    :try_start_1
    new-instance v2, Ljava/net/URL;

    invoke-direct {v2, v0}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 1206
    invoke-virtual {v2}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v0

    check-cast v0, Ljava/net/HttpURLConnection;
    :try_end_1
    .catch Ljava/net/UnknownHostException; {:try_start_1 .. :try_end_1} :catch_f
    .catch Ljava/net/ConnectException; {:try_start_1 .. :try_end_1} :catch_e
    .catch Ljava/net/SocketTimeoutException; {:try_start_1 .. :try_end_1} :catch_d
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_1 .. :try_end_1} :catch_c
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_b
    .catch Ljava/lang/StackOverflowError; {:try_start_1 .. :try_end_1} :catch_a
    .catch Ljava/lang/Error; {:try_start_1 .. :try_end_1} :catch_9
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_8
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    const/4 v1, 0x1

    .line 1217
    :try_start_2
    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 1218
    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    const-string v1, "POST"

    .line 1219
    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    const/4 v1, 0x0

    .line 1220
    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    .line 1226
    iget-object v1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v1}, Lcom/tramini/plugin/a/d/a;->c()Ljava/util/Map;

    move-result-object v1

    .line 1227
    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v2

    if-lez v2, :cond_1

    .line 1228
    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 1229
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v0, v3, v4}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const/16 v1, 0x4e20

    .line 1235
    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    const v1, 0xea60

    .line 1236
    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    .line 1237
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->connect()V

    .line 1241
    iget-object v1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v1}, Lcom/tramini/plugin/a/d/a;->d()[B

    move-result-object v1

    if-eqz v1, :cond_2

    .line 1244
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v2

    .line 1245
    invoke-virtual {v2, v1}, Ljava/io/OutputStream;->write([B)V

    .line 1246
    invoke-virtual {v2}, Ljava/io/OutputStream;->flush()V

    .line 1247
    invoke-virtual {v2}, Ljava/io/OutputStream;->close()V

    .line 1250
    :cond_2
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v1

    const/16 v2, 0xc8

    if-eq v1, v2, :cond_4

    .line 1253
    iget-object v1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v1}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_2
    .catch Ljava/net/UnknownHostException; {:try_start_2 .. :try_end_2} :catch_7
    .catch Ljava/net/ConnectException; {:try_start_2 .. :try_end_2} :catch_6
    .catch Ljava/net/SocketTimeoutException; {:try_start_2 .. :try_end_2} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_2 .. :try_end_2} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_2 .. :try_end_2} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_2 .. :try_end_2} :catch_2
    .catch Ljava/lang/Error; {:try_start_2 .. :try_end_2} :catch_1
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v0, :cond_3

    .line 1314
    :try_start_3
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_3 .. :try_end_3} :catch_11
    .catch Ljava/lang/StackOverflowError; {:try_start_3 .. :try_end_3} :catch_11
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_10

    :cond_3
    return-void

    .line 1258
    :cond_4
    :try_start_4
    invoke-static {v0}, Lcom/tramini/plugin/a/d/a;->a(Ljava/net/HttpURLConnection;)Ljava/io/InputStream;

    move-result-object v1

    .line 1259
    new-instance v2, Ljava/io/InputStreamReader;

    invoke-direct {v2, v1}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    .line 1260
    new-instance v3, Ljava/io/BufferedReader;

    invoke-direct {v3, v2}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 1262
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    .line 1263
    :goto_1
    invoke-virtual {v3}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v5

    if-eqz v5, :cond_5

    .line 1264
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 1268
    :cond_5
    invoke-virtual {v3}, Ljava/io/BufferedReader;->close()V

    .line 1271
    invoke-virtual {v2}, Ljava/io/InputStreamReader;->close()V

    if-eqz v1, :cond_6

    .line 1274
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V

    .line 1277
    :cond_6
    iget-object v1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v1}, Lcom/tramini/plugin/a/d/a;->g()Z

    move-result v1

    if-eqz v1, :cond_7

    .line 1278
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1279
    iget-object v2, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    invoke-virtual {v2, v1}, Lcom/tramini/plugin/a/d/a;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    .line 1280
    iget-object v2, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v2, v1}, Lcom/tramini/plugin/a/d/a;->a(Ljava/lang/Object;)V

    goto :goto_2

    .line 1283
    :cond_7
    iget-object v1, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    const-string v2, ""

    invoke-virtual {v1, v2}, Lcom/tramini/plugin/a/d/a;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    .line 1284
    iget-object v2, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v2, v1}, Lcom/tramini/plugin/a/d/a;->a(Ljava/lang/Object;)V
    :try_end_4
    .catch Ljava/net/UnknownHostException; {:try_start_4 .. :try_end_4} :catch_7
    .catch Ljava/net/ConnectException; {:try_start_4 .. :try_end_4} :catch_6
    .catch Ljava/net/SocketTimeoutException; {:try_start_4 .. :try_end_4} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_4 .. :try_end_4} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_4 .. :try_end_4} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_4 .. :try_end_4} :catch_2
    .catch Ljava/lang/Error; {:try_start_4 .. :try_end_4} :catch_1
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    :goto_2
    if-eqz v0, :cond_8

    .line 1314
    :try_start_5
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_5
    .catch Ljava/lang/OutOfMemoryError; {:try_start_5 .. :try_end_5} :catch_11
    .catch Ljava/lang/StackOverflowError; {:try_start_5 .. :try_end_5} :catch_11
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_10

    return-void

    :catchall_0
    move-exception v1

    goto/16 :goto_b

    :catch_0
    move-object v1, v0

    goto :goto_3

    :catch_1
    move-object v1, v0

    goto :goto_4

    :catch_2
    move-object v1, v0

    goto :goto_5

    :catch_3
    move-object v1, v0

    goto :goto_6

    :catch_4
    move-object v1, v0

    goto :goto_7

    :catch_5
    move-object v1, v0

    goto :goto_8

    :catch_6
    move-object v1, v0

    goto :goto_9

    :catch_7
    move-object v1, v0

    goto :goto_a

    :catchall_1
    move-exception v0

    move-object v6, v1

    move-object v1, v0

    move-object v0, v6

    goto :goto_b

    .line 1310
    :catch_8
    :goto_3
    :try_start_6
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    if-eqz v1, :cond_8

    .line 1314
    :try_start_7
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_7
    .catch Ljava/lang/OutOfMemoryError; {:try_start_7 .. :try_end_7} :catch_11
    .catch Ljava/lang/StackOverflowError; {:try_start_7 .. :try_end_7} :catch_11
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_10

    return-void

    .line 1304
    :catch_9
    :goto_4
    :try_start_8
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 1305
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_1

    if-eqz v1, :cond_8

    .line 1314
    :try_start_9
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_9
    .catch Ljava/lang/OutOfMemoryError; {:try_start_9 .. :try_end_9} :catch_11
    .catch Ljava/lang/StackOverflowError; {:try_start_9 .. :try_end_9} :catch_11
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_10

    return-void

    .line 1301
    :catch_a
    :goto_5
    :try_start_a
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 1302
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_1

    if-eqz v1, :cond_8

    .line 1314
    :try_start_b
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_b
    .catch Ljava/lang/OutOfMemoryError; {:try_start_b .. :try_end_b} :catch_11
    .catch Ljava/lang/StackOverflowError; {:try_start_b .. :try_end_b} :catch_11
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_10

    return-void

    .line 1298
    :catch_b
    :goto_6
    :try_start_c
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 1299
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_1

    if-eqz v1, :cond_8

    .line 1314
    :try_start_d
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_d
    .catch Ljava/lang/OutOfMemoryError; {:try_start_d .. :try_end_d} :catch_11
    .catch Ljava/lang/StackOverflowError; {:try_start_d .. :try_end_d} :catch_11
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_10

    return-void

    .line 1296
    :catch_c
    :goto_7
    :try_start_e
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->h()V
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_1

    if-eqz v1, :cond_8

    .line 1314
    :try_start_f
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_f
    .catch Ljava/lang/OutOfMemoryError; {:try_start_f .. :try_end_f} :catch_11
    .catch Ljava/lang/StackOverflowError; {:try_start_f .. :try_end_f} :catch_11
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_10

    return-void

    .line 1293
    :catch_d
    :goto_8
    :try_start_10
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_1

    if-eqz v1, :cond_8

    .line 1314
    :try_start_11
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_11
    .catch Ljava/lang/OutOfMemoryError; {:try_start_11 .. :try_end_11} :catch_11
    .catch Ljava/lang/StackOverflowError; {:try_start_11 .. :try_end_11} :catch_11
    .catch Ljava/lang/Exception; {:try_start_11 .. :try_end_11} :catch_10

    return-void

    .line 1291
    :catch_e
    :goto_9
    :try_start_12
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_12
    .catchall {:try_start_12 .. :try_end_12} :catchall_1

    if-eqz v1, :cond_8

    .line 1314
    :try_start_13
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_13
    .catch Ljava/lang/OutOfMemoryError; {:try_start_13 .. :try_end_13} :catch_11
    .catch Ljava/lang/StackOverflowError; {:try_start_13 .. :try_end_13} :catch_11
    .catch Ljava/lang/Exception; {:try_start_13 .. :try_end_13} :catch_10

    return-void

    .line 1289
    :catch_f
    :goto_a
    :try_start_14
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/d/a;->i()V
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_1

    if-eqz v1, :cond_8

    .line 1314
    :try_start_15
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_8
    return-void

    :goto_b
    if-eqz v0, :cond_9

    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 1316
    :cond_9
    throw v1
    :try_end_15
    .catch Ljava/lang/OutOfMemoryError; {:try_start_15 .. :try_end_15} :catch_11
    .catch Ljava/lang/StackOverflowError; {:try_start_15 .. :try_end_15} :catch_11
    .catch Ljava/lang/Exception; {:try_start_15 .. :try_end_15} :catch_10

    .line 187
    :catch_10
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    iget-object v0, v0, Lcom/tramini/plugin/a/d/a;->n:Lcom/tramini/plugin/a/d/b;

    if-eqz v0, :cond_a

    .line 188
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    iget-object v0, v0, Lcom/tramini/plugin/a/d/a;->n:Lcom/tramini/plugin/a/d/b;

    invoke-interface {v0}, Lcom/tramini/plugin/a/d/b;->b()V

    :cond_a
    return-void

    .line 182
    :catch_11
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 183
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    iget-object v0, v0, Lcom/tramini/plugin/a/d/a;->n:Lcom/tramini/plugin/a/d/b;

    if-eqz v0, :cond_b

    .line 184
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a$1;->b:Lcom/tramini/plugin/a/d/a;

    iget-object v0, v0, Lcom/tramini/plugin/a/d/a;->n:Lcom/tramini/plugin/a/d/b;

    invoke-interface {v0}, Lcom/tramini/plugin/a/d/b;->b()V

    :cond_b
    return-void
.end method
