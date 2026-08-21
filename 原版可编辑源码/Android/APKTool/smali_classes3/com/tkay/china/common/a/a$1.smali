.class final Lcom/tkay/china/common/a/a$1;
.super Lcom/tkay/core/common/l/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/common/a/a;->g()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/common/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/china/common/a/a;)V
    .locals 0

    .line 106
    iput-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-direct {p0}, Lcom/tkay/core/common/l/b/b;-><init>()V

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 11

    const-string v0, "Http connect error!"

    const-string v1, "10000"

    .line 140
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iput-wide v3, v2, Lcom/tkay/china/common/a/a;->o:J

    .line 141
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    iput-wide v3, v2, Lcom/tkay/china/common/a/a;->p:J

    const/4 v2, 0x0

    .line 145
    :try_start_0
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    .line 147
    new-instance v3, Ljava/net/URL;

    invoke-direct {v3, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 149
    invoke-virtual {v3}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v3

    check-cast v3, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/net/SocketTimeoutException; {:try_start_0 .. :try_end_0} :catch_b
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_0 .. :try_end_0} :catch_a
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_9
    .catch Ljava/lang/StackOverflowError; {:try_start_0 .. :try_end_0} :catch_8
    .catch Ljava/lang/Error; {:try_start_0 .. :try_end_0} :catch_7
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_6
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v2, 0x0

    .line 151
    :try_start_1
    invoke-virtual {v3, v2}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    .line 153
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v2

    iget-boolean v2, v2, Lcom/tkay/china/common/a/e;->o:Z

    if-eqz v2, :cond_0

    .line 154
    invoke-static {}, Lcom/tkay/core/common/l/d;->i()Ljava/lang/String;

    move-result-object v2

    .line 155
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    const-string v4, "User-Agent"

    .line 156
    invoke-virtual {v3, v4, v2}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 161
    :cond_0
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v4, v2, Lcom/tkay/china/common/a/a;->n:J

    const-wide/16 v6, 0x0

    cmp-long v2, v4, v6

    if-lez v2, :cond_1

    .line 162
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v4, "Range: startPos -> "

    invoke-direct {v2, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v4, v4, Lcom/tkay/china/common/a/a;->n:J

    invoke-virtual {v2, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v4, "  ,  endPos -> "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v4, v4, Lcom/tkay/china/common/a/a;->s:J

    invoke-virtual {v2, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, "Range"

    .line 163
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "bytes="

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v5, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v8, v5, Lcom/tkay/china/common/a/a;->n:J

    invoke-virtual {v4, v8, v9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v5, "-"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v2, v4}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 165
    :cond_1
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getContentLength()I

    move-result v4

    int-to-long v4, v4

    iput-wide v4, v2, Lcom/tkay/china/common/a/a;->s:J

    .line 169
    :goto_0
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v4, v2, Lcom/tkay/china/common/a/a;->s:J

    cmp-long v2, v4, v6

    if-gtz v2, :cond_3

    .line 170
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    .line 171
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    const-string v2, "downloadSize <= 0"

    invoke-static {v1, v2}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V
    :try_end_1
    .catch Ljava/net/SocketTimeoutException; {:try_start_1 .. :try_end_1} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_1 .. :try_end_1} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_1 .. :try_end_1} :catch_2
    .catch Ljava/lang/Error; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v3, :cond_2

    .line 288
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_2
    return-void

    .line 175
    :cond_3
    :try_start_2
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-boolean v2, v2, Lcom/tkay/china/common/a/a;->c:Z

    const/4 v4, 0x3

    if-eqz v2, :cond_6

    .line 176
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {p1}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 177
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {p1}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->j()V

    .line 179
    :cond_4
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iput v4, p1, Lcom/tkay/china/common/a/a;->m:I

    .line 180
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-virtual {p1}, Lcom/tkay/china/common/a/a;->d()V
    :try_end_2
    .catch Ljava/net/SocketTimeoutException; {:try_start_2 .. :try_end_2} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_2 .. :try_end_2} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_2 .. :try_end_2} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_2 .. :try_end_2} :catch_2
    .catch Ljava/lang/Error; {:try_start_2 .. :try_end_2} :catch_1
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v3, :cond_5

    .line 288
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_5
    return-void

    :cond_6
    const v2, 0xea60

    .line 184
    :try_start_3
    invoke-virtual {v3, v2}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 185
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->connect()V

    .line 187
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v2

    const/16 v5, 0xc8

    if-eq v2, v5, :cond_8

    const/16 v5, 0xce

    if-eq v2, v5, :cond_8

    .line 190
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "http respond status code is "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " ! url="

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 191
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    const-string v2, "10001"

    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getResponseMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V
    :try_end_3
    .catch Ljava/net/SocketTimeoutException; {:try_start_3 .. :try_end_3} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_3 .. :try_end_3} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_3 .. :try_end_3} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_3 .. :try_end_3} :catch_2
    .catch Ljava/lang/Error; {:try_start_3 .. :try_end_3} :catch_1
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v3, :cond_7

    .line 288
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_7
    return-void

    .line 195
    :cond_8
    :try_start_4
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-boolean p1, p1, Lcom/tkay/china/common/a/a;->c:Z

    if-eqz p1, :cond_b

    .line 196
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {p1}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object p1

    if-eqz p1, :cond_9

    .line 197
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {p1}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->j()V

    .line 199
    :cond_9
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iput v4, p1, Lcom/tkay/china/common/a/a;->m:I

    .line 200
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-virtual {p1}, Lcom/tkay/china/common/a/a;->d()V
    :try_end_4
    .catch Ljava/net/SocketTimeoutException; {:try_start_4 .. :try_end_4} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_4 .. :try_end_4} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_4 .. :try_end_4} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_4 .. :try_end_4} :catch_2
    .catch Ljava/lang/Error; {:try_start_4 .. :try_end_4} :catch_1
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    if-eqz v3, :cond_a

    .line 288
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_a
    return-void

    .line 204
    :cond_b
    :try_start_5
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object p1

    .line 206
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v2

    if-eqz v2, :cond_c

    .line 207
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/china/common/a/e;->i()V

    .line 209
    :cond_c
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v2

    iget-object v5, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v5, v5, Lcom/tkay/china/common/a/a;->s:J

    iput-wide v5, v2, Lcom/tkay/china/common/a/e;->h:J

    .line 211
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->c(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/a$a;

    move-result-object v2

    if-eqz v2, :cond_d

    .line 212
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->c(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/a$a;

    move-result-object v5

    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v6

    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v7, v2, Lcom/tkay/china/common/a/a;->n:J

    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v9, v2, Lcom/tkay/china/common/a/a;->s:J

    invoke-interface/range {v5 .. v10}, Lcom/tkay/china/common/a/a$a;->a(Lcom/tkay/china/common/a/e;JJ)V

    .line 215
    :cond_d
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-object v5, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-object v5, v5, Lcom/tkay/china/common/a/a;->b:Ljava/lang/String;

    invoke-static {v2, v5, p1}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/a;Ljava/lang/String;Ljava/io/InputStream;)I

    move-result v2

    .line 216
    iget-object v5, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iput v2, v5, Lcom/tkay/china/common/a/a;->m:I

    if-eqz p1, :cond_e

    .line 219
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V

    .line 222
    :cond_e
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    iput-wide v5, p1, Lcom/tkay/china/common/a/a;->q:J

    .line 223
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    iput-wide v5, p1, Lcom/tkay/china/common/a/a;->r:J

    .line 224
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {p1}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object p1

    iget-object v5, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v5, v5, Lcom/tkay/china/common/a/a;->r:J

    iget-object v7, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v7, v7, Lcom/tkay/china/common/a/a;->p:J

    sub-long/2addr v5, v7

    iput-wide v5, p1, Lcom/tkay/china/common/a/e;->i:J

    const/4 p1, 0x1

    if-eq v2, p1, :cond_10

    const/4 p1, 0x2

    if-eq v2, p1, :cond_f

    if-eq v2, v4, :cond_f

    .line 237
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v2, "download fail --> "

    invoke-direct {p1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-object v2, v2, Lcom/tkay/china/common/a/a;->a:Ljava/lang/String;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 238
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v4, "Save fail!("

    invoke-direct {v2, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v4}, Lcom/tkay/china/common/a/a;->d(Lcom/tkay/china/common/a/a;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ")"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/b;)V

    goto :goto_1

    .line 233
    :cond_f
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-virtual {p1}, Lcom/tkay/china/common/a/a;->d()V

    goto :goto_1

    .line 228
    :cond_10
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v2, "download success --> "

    invoke-direct {p1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-object v2, v2, Lcom/tkay/china/common/a/a;->a:Ljava/lang/String;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 229
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-virtual {p1}, Lcom/tkay/china/common/a/a;->e()V
    :try_end_5
    .catch Ljava/net/SocketTimeoutException; {:try_start_5 .. :try_end_5} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_5 .. :try_end_5} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_5 .. :try_end_5} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_5 .. :try_end_5} :catch_2
    .catch Ljava/lang/Error; {:try_start_5 .. :try_end_5} :catch_1
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    :goto_1
    if-eqz v3, :cond_15

    .line 288
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catchall_0
    move-exception p1

    move-object v2, v3

    goto/16 :goto_8

    :catch_0
    move-exception p1

    move-object v2, v3

    goto :goto_2

    :catch_1
    move-exception p1

    move-object v2, v3

    goto :goto_3

    :catch_2
    move-exception p1

    move-object v2, v3

    goto :goto_4

    :catch_3
    move-exception p1

    move-object v2, v3

    goto/16 :goto_5

    :catch_4
    move-exception p1

    move-object v2, v3

    goto/16 :goto_6

    :catch_5
    move-exception p1

    move-object v2, v3

    goto/16 :goto_7

    :catchall_1
    move-exception p1

    goto/16 :goto_8

    :catch_6
    move-exception p1

    .line 274
    :goto_2
    :try_start_6
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 277
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_11

    .line 278
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    .line 284
    :cond_11
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v1, v0}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    if-eqz v2, :cond_15

    .line 288
    invoke-virtual {v2}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_7
    move-exception p1

    .line 265
    :goto_3
    :try_start_7
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 266
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Error;->getMessage()Ljava/lang/String;

    .line 269
    invoke-virtual {p1}, Ljava/lang/Error;->getMessage()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_12

    .line 270
    invoke-virtual {p1}, Ljava/lang/Error;->getMessage()Ljava/lang/String;

    move-result-object v0

    .line 272
    :cond_12
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v1, v0}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    if-eqz v2, :cond_15

    .line 288
    invoke-virtual {v2}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_8
    move-exception p1

    .line 256
    :goto_4
    :try_start_8
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 257
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/StackOverflowError;->getMessage()Ljava/lang/String;

    .line 260
    invoke-virtual {p1}, Ljava/lang/StackOverflowError;->getMessage()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_13

    .line 261
    invoke-virtual {p1}, Ljava/lang/StackOverflowError;->getMessage()Ljava/lang/String;

    move-result-object v0

    .line 263
    :cond_13
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v1, v0}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_1

    if-eqz v2, :cond_15

    .line 288
    invoke-virtual {v2}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_9
    move-exception p1

    .line 247
    :goto_5
    :try_start_9
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 248
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/OutOfMemoryError;->getMessage()Ljava/lang/String;

    .line 251
    invoke-virtual {p1}, Ljava/lang/OutOfMemoryError;->getMessage()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_14

    .line 252
    invoke-virtual {p1}, Ljava/lang/OutOfMemoryError;->getMessage()Ljava/lang/String;

    move-result-object v0

    .line 254
    :cond_14
    iget-object p1, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v1, v0}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_1

    if-eqz v2, :cond_15

    .line 288
    invoke-virtual {v2}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_a
    move-exception p1

    .line 245
    :goto_6
    :try_start_a
    iget-object v0, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-virtual {v0, p1}, Lcom/tkay/china/common/a/a;->a(Lorg/apache/http/conn/ConnectTimeoutException;)V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_1

    if-eqz v2, :cond_15

    .line 288
    invoke-virtual {v2}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void

    :catch_b
    move-exception p1

    .line 242
    :goto_7
    :try_start_b
    iget-object v0, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    const-string v1, "20001"

    invoke-virtual {p1}, Ljava/net/SocketTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V

    .line 243
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_1

    if-eqz v2, :cond_15

    .line 288
    invoke-virtual {v2}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_15
    return-void

    :goto_8
    if-eqz v2, :cond_16

    invoke-virtual {v2}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 290
    :cond_16
    throw p1
.end method


# virtual methods
.method public final a()V
    .locals 12

    const-string v0, "Http connect error!"

    const-string v1, "10000"

    .line 110
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "start download url -> "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-object v3, v3, Lcom/tkay/china/common/a/a;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 114
    :try_start_0
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/a;)V

    .line 115
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-object v2, v2, Lcom/tkay/china/common/a/a;->a:Ljava/lang/String;

    .line 1140
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    iput-wide v4, v3, Lcom/tkay/china/common/a/a;->o:J

    .line 1141
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    iput-wide v4, v3, Lcom/tkay/china/common/a/a;->p:J
    :try_end_0
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_e
    .catch Ljava/lang/StackOverflowError; {:try_start_0 .. :try_end_0} :catch_d
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_c

    const/4 v3, 0x0

    .line 1145
    :try_start_1
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    .line 1147
    new-instance v4, Ljava/net/URL;

    invoke-direct {v4, v2}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 1149
    invoke-virtual {v4}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v4

    check-cast v4, Ljava/net/HttpURLConnection;
    :try_end_1
    .catch Ljava/net/SocketTimeoutException; {:try_start_1 .. :try_end_1} :catch_b
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_1 .. :try_end_1} :catch_a
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_9
    .catch Ljava/lang/StackOverflowError; {:try_start_1 .. :try_end_1} :catch_8
    .catch Ljava/lang/Error; {:try_start_1 .. :try_end_1} :catch_7
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_6
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    const/4 v3, 0x0

    .line 1151
    :try_start_2
    invoke-virtual {v4, v3}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    .line 1153
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v3}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v3

    iget-boolean v3, v3, Lcom/tkay/china/common/a/e;->o:Z

    if-eqz v3, :cond_0

    .line 1154
    invoke-static {}, Lcom/tkay/core/common/l/d;->i()Ljava/lang/String;

    move-result-object v3

    .line 1155
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_0

    const-string v5, "User-Agent"

    .line 1156
    invoke-virtual {v4, v5, v3}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 1161
    :cond_0
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v5, v3, Lcom/tkay/china/common/a/a;->n:J

    const-wide/16 v7, 0x0

    cmp-long v3, v5, v7

    if-lez v3, :cond_1

    .line 1162
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v5, "Range: startPos -> "

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v5, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v5, v5, Lcom/tkay/china/common/a/a;->n:J

    invoke-virtual {v3, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v5, "  ,  endPos -> "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v5, v5, Lcom/tkay/china/common/a/a;->s:J

    invoke-virtual {v3, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, "Range"

    .line 1163
    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "bytes="

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v6, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v9, v6, Lcom/tkay/china/common/a/a;->n:J

    invoke-virtual {v5, v9, v10}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v6, "-"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v3, v5}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1165
    :cond_1
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->getContentLength()I

    move-result v5

    int-to-long v5, v5

    iput-wide v5, v3, Lcom/tkay/china/common/a/a;->s:J

    .line 1169
    :goto_0
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v5, v3, Lcom/tkay/china/common/a/a;->s:J

    cmp-long v3, v5, v7

    if-gtz v3, :cond_3

    .line 1170
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    .line 1171
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    const-string v3, "downloadSize <= 0"

    invoke-static {v1, v3}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V
    :try_end_2
    .catch Ljava/net/SocketTimeoutException; {:try_start_2 .. :try_end_2} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_2 .. :try_end_2} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_2 .. :try_end_2} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_2 .. :try_end_2} :catch_2
    .catch Ljava/lang/Error; {:try_start_2 .. :try_end_2} :catch_1
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v4, :cond_2

    .line 1288
    :try_start_3
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_3 .. :try_end_3} :catch_e
    .catch Ljava/lang/StackOverflowError; {:try_start_3 .. :try_end_3} :catch_d
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_c

    :cond_2
    return-void

    .line 1175
    :cond_3
    :try_start_4
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-boolean v3, v3, Lcom/tkay/china/common/a/a;->c:Z

    const/4 v5, 0x3

    if-eqz v3, :cond_6

    .line 1176
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v2

    if-eqz v2, :cond_4

    .line 1177
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/china/common/a/e;->j()V

    .line 1179
    :cond_4
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iput v5, v2, Lcom/tkay/china/common/a/a;->m:I

    .line 1180
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-virtual {v2}, Lcom/tkay/china/common/a/a;->d()V
    :try_end_4
    .catch Ljava/net/SocketTimeoutException; {:try_start_4 .. :try_end_4} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_4 .. :try_end_4} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_4 .. :try_end_4} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_4 .. :try_end_4} :catch_2
    .catch Ljava/lang/Error; {:try_start_4 .. :try_end_4} :catch_1
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    if-eqz v4, :cond_5

    .line 1288
    :try_start_5
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_5
    .catch Ljava/lang/OutOfMemoryError; {:try_start_5 .. :try_end_5} :catch_e
    .catch Ljava/lang/StackOverflowError; {:try_start_5 .. :try_end_5} :catch_d
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_c

    :cond_5
    return-void

    :cond_6
    const v3, 0xea60

    .line 1184
    :try_start_6
    invoke-virtual {v4, v3}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 1185
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->connect()V

    .line 1187
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v3

    const/16 v6, 0xc8

    if-eq v3, v6, :cond_8

    const/16 v6, 0xce

    if-eq v3, v6, :cond_8

    .line 1190
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "http respond status code is "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " ! url="

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1191
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    const-string v3, "10001"

    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->getResponseMessage()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V
    :try_end_6
    .catch Ljava/net/SocketTimeoutException; {:try_start_6 .. :try_end_6} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_6 .. :try_end_6} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_6 .. :try_end_6} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_6 .. :try_end_6} :catch_2
    .catch Ljava/lang/Error; {:try_start_6 .. :try_end_6} :catch_1
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_0
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    if-eqz v4, :cond_7

    .line 1288
    :try_start_7
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_7
    .catch Ljava/lang/OutOfMemoryError; {:try_start_7 .. :try_end_7} :catch_e
    .catch Ljava/lang/StackOverflowError; {:try_start_7 .. :try_end_7} :catch_d
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_c

    :cond_7
    return-void

    .line 1195
    :cond_8
    :try_start_8
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-boolean v2, v2, Lcom/tkay/china/common/a/a;->c:Z

    if-eqz v2, :cond_b

    .line 1196
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v2

    if-eqz v2, :cond_9

    .line 1197
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/china/common/a/e;->j()V

    .line 1199
    :cond_9
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iput v5, v2, Lcom/tkay/china/common/a/a;->m:I

    .line 1200
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-virtual {v2}, Lcom/tkay/china/common/a/a;->d()V
    :try_end_8
    .catch Ljava/net/SocketTimeoutException; {:try_start_8 .. :try_end_8} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_8 .. :try_end_8} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_8 .. :try_end_8} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_8 .. :try_end_8} :catch_2
    .catch Ljava/lang/Error; {:try_start_8 .. :try_end_8} :catch_1
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_0
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    if-eqz v4, :cond_a

    .line 1288
    :try_start_9
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_9
    .catch Ljava/lang/OutOfMemoryError; {:try_start_9 .. :try_end_9} :catch_e
    .catch Ljava/lang/StackOverflowError; {:try_start_9 .. :try_end_9} :catch_d
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_c

    :cond_a
    return-void

    .line 1204
    :cond_b
    :try_start_a
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v2

    .line 1206
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v3}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v3

    if-eqz v3, :cond_c

    .line 1207
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v3}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/china/common/a/e;->i()V

    .line 1209
    :cond_c
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v3}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v3

    iget-object v6, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v6, v6, Lcom/tkay/china/common/a/a;->s:J

    iput-wide v6, v3, Lcom/tkay/china/common/a/e;->h:J

    .line 1211
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v3}, Lcom/tkay/china/common/a/a;->c(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/a$a;

    move-result-object v3

    if-eqz v3, :cond_d

    .line 1212
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v3}, Lcom/tkay/china/common/a/a;->c(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/a$a;

    move-result-object v6

    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v3}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v7

    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v8, v3, Lcom/tkay/china/common/a/a;->n:J

    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v10, v3, Lcom/tkay/china/common/a/a;->s:J

    invoke-interface/range {v6 .. v11}, Lcom/tkay/china/common/a/a$a;->a(Lcom/tkay/china/common/a/e;JJ)V

    .line 1215
    :cond_d
    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-object v6, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-object v6, v6, Lcom/tkay/china/common/a/a;->b:Ljava/lang/String;

    invoke-static {v3, v6, v2}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/a;Ljava/lang/String;Ljava/io/InputStream;)I

    move-result v3

    .line 1216
    iget-object v6, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iput v3, v6, Lcom/tkay/china/common/a/a;->m:I

    if-eqz v2, :cond_e

    .line 1219
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V

    .line 1222
    :cond_e
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    iput-wide v6, v2, Lcom/tkay/china/common/a/a;->q:J

    .line 1223
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v6

    iput-wide v6, v2, Lcom/tkay/china/common/a/a;->r:J

    .line 1224
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v2}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;

    move-result-object v2

    iget-object v6, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v6, v6, Lcom/tkay/china/common/a/a;->r:J

    iget-object v8, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-wide v8, v8, Lcom/tkay/china/common/a/a;->p:J

    sub-long/2addr v6, v8

    iput-wide v6, v2, Lcom/tkay/china/common/a/e;->i:J

    const/4 v2, 0x1

    if-eq v3, v2, :cond_10

    const/4 v2, 0x2

    if-eq v3, v2, :cond_f

    if-eq v3, v5, :cond_f

    .line 1237
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "download fail --> "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-object v3, v3, Lcom/tkay/china/common/a/a;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1238
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v5, "Save fail!("

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v5, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v5}, Lcom/tkay/china/common/a/a;->d(Lcom/tkay/china/common/a/a;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ")"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/b;)V

    goto :goto_1

    .line 1233
    :cond_f
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-virtual {v2}, Lcom/tkay/china/common/a/a;->d()V

    goto :goto_1

    .line 1228
    :cond_10
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "download success --> "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    iget-object v3, v3, Lcom/tkay/china/common/a/a;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1229
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-virtual {v2}, Lcom/tkay/china/common/a/a;->e()V
    :try_end_a
    .catch Ljava/net/SocketTimeoutException; {:try_start_a .. :try_end_a} :catch_5
    .catch Lorg/apache/http/conn/ConnectTimeoutException; {:try_start_a .. :try_end_a} :catch_4
    .catch Ljava/lang/OutOfMemoryError; {:try_start_a .. :try_end_a} :catch_3
    .catch Ljava/lang/StackOverflowError; {:try_start_a .. :try_end_a} :catch_2
    .catch Ljava/lang/Error; {:try_start_a .. :try_end_a} :catch_1
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_0
    .catchall {:try_start_a .. :try_end_a} :catchall_0

    :goto_1
    if-eqz v4, :cond_15

    .line 1288
    :try_start_b
    invoke-virtual {v4}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_b
    .catch Ljava/lang/OutOfMemoryError; {:try_start_b .. :try_end_b} :catch_e
    .catch Ljava/lang/StackOverflowError; {:try_start_b .. :try_end_b} :catch_d
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_c

    return-void

    :catchall_0
    move-exception v2

    move-object v3, v4

    goto/16 :goto_c

    :catch_0
    move-exception v2

    move-object v3, v4

    goto :goto_2

    :catch_1
    move-exception v2

    move-object v3, v4

    goto :goto_4

    :catch_2
    move-exception v2

    move-object v3, v4

    goto :goto_6

    :catch_3
    move-exception v2

    move-object v3, v4

    goto/16 :goto_8

    :catch_4
    move-exception v2

    move-object v3, v4

    goto/16 :goto_a

    :catch_5
    move-exception v2

    move-object v3, v4

    goto/16 :goto_b

    :catchall_1
    move-exception v2

    goto/16 :goto_c

    :catch_6
    move-exception v2

    .line 1274
    :goto_2
    :try_start_c
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 1277
    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_11

    .line 1278
    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    goto :goto_3

    :cond_11
    move-object v2, v0

    .line 1284
    :goto_3
    iget-object v4, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v1, v2}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v2

    invoke-virtual {v4, v2}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_1

    if-eqz v3, :cond_15

    .line 1288
    :try_start_d
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_d
    .catch Ljava/lang/OutOfMemoryError; {:try_start_d .. :try_end_d} :catch_e
    .catch Ljava/lang/StackOverflowError; {:try_start_d .. :try_end_d} :catch_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_c

    return-void

    :catch_7
    move-exception v2

    .line 1265
    :goto_4
    :try_start_e
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 1266
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/Error;->getMessage()Ljava/lang/String;

    .line 1269
    invoke-virtual {v2}, Ljava/lang/Error;->getMessage()Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_12

    .line 1270
    invoke-virtual {v2}, Ljava/lang/Error;->getMessage()Ljava/lang/String;

    move-result-object v2

    goto :goto_5

    :cond_12
    move-object v2, v0

    .line 1272
    :goto_5
    iget-object v4, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v1, v2}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v2

    invoke-virtual {v4, v2}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_1

    if-eqz v3, :cond_15

    .line 1288
    :try_start_f
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_f
    .catch Ljava/lang/OutOfMemoryError; {:try_start_f .. :try_end_f} :catch_e
    .catch Ljava/lang/StackOverflowError; {:try_start_f .. :try_end_f} :catch_d
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_c

    return-void

    :catch_8
    move-exception v2

    .line 1256
    :goto_6
    :try_start_10
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 1257
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/StackOverflowError;->getMessage()Ljava/lang/String;

    .line 1260
    invoke-virtual {v2}, Ljava/lang/StackOverflowError;->getMessage()Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_13

    .line 1261
    invoke-virtual {v2}, Ljava/lang/StackOverflowError;->getMessage()Ljava/lang/String;

    move-result-object v2

    goto :goto_7

    :cond_13
    move-object v2, v0

    .line 1263
    :goto_7
    iget-object v4, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v1, v2}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v2

    invoke-virtual {v4, v2}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_1

    if-eqz v3, :cond_15

    .line 1288
    :try_start_11
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_11
    .catch Ljava/lang/OutOfMemoryError; {:try_start_11 .. :try_end_11} :catch_e
    .catch Ljava/lang/StackOverflowError; {:try_start_11 .. :try_end_11} :catch_d
    .catch Ljava/lang/Exception; {:try_start_11 .. :try_end_11} :catch_c

    return-void

    :catch_9
    move-exception v2

    .line 1247
    :goto_8
    :try_start_12
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 1248
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/OutOfMemoryError;->getMessage()Ljava/lang/String;

    .line 1251
    invoke-virtual {v2}, Ljava/lang/OutOfMemoryError;->getMessage()Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_14

    .line 1252
    invoke-virtual {v2}, Ljava/lang/OutOfMemoryError;->getMessage()Ljava/lang/String;

    move-result-object v2

    goto :goto_9

    :cond_14
    move-object v2, v0

    .line 1254
    :goto_9
    iget-object v4, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v1, v2}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v2

    invoke-virtual {v4, v2}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V
    :try_end_12
    .catchall {:try_start_12 .. :try_end_12} :catchall_1

    if-eqz v3, :cond_15

    .line 1288
    :try_start_13
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_13
    .catch Ljava/lang/OutOfMemoryError; {:try_start_13 .. :try_end_13} :catch_e
    .catch Ljava/lang/StackOverflowError; {:try_start_13 .. :try_end_13} :catch_d
    .catch Ljava/lang/Exception; {:try_start_13 .. :try_end_13} :catch_c

    return-void

    :catch_a
    move-exception v2

    .line 1245
    :goto_a
    :try_start_14
    iget-object v4, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-virtual {v4, v2}, Lcom/tkay/china/common/a/a;->a(Lorg/apache/http/conn/ConnectTimeoutException;)V
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_1

    if-eqz v3, :cond_15

    .line 1288
    :try_start_15
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_15
    .catch Ljava/lang/OutOfMemoryError; {:try_start_15 .. :try_end_15} :catch_e
    .catch Ljava/lang/StackOverflowError; {:try_start_15 .. :try_end_15} :catch_d
    .catch Ljava/lang/Exception; {:try_start_15 .. :try_end_15} :catch_c

    return-void

    :catch_b
    move-exception v2

    .line 1242
    :goto_b
    :try_start_16
    iget-object v4, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    const-string v5, "20001"

    invoke-virtual {v2}, Ljava/net/SocketTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v2}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v2

    invoke-virtual {v4, v2}, Lcom/tkay/china/common/a/a;->a(Lcom/tkay/china/common/a/b;)V

    .line 1243
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;
    :try_end_16
    .catchall {:try_start_16 .. :try_end_16} :catchall_1

    if-eqz v3, :cond_15

    .line 1288
    :try_start_17
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_15
    return-void

    :goto_c
    if-eqz v3, :cond_16

    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 1290
    :cond_16
    throw v2
    :try_end_17
    .catch Ljava/lang/OutOfMemoryError; {:try_start_17 .. :try_end_17} :catch_e
    .catch Ljava/lang/StackOverflowError; {:try_start_17 .. :try_end_17} :catch_d
    .catch Ljava/lang/Exception; {:try_start_17 .. :try_end_17} :catch_c

    :catch_c
    move-exception v2

    .line 127
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 130
    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_17

    .line 131
    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    .line 133
    :cond_17
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v1, v0}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/b;)V

    return-void

    :catch_d
    move-exception v2

    goto :goto_d

    :catch_e
    move-exception v2

    .line 118
    :goto_d
    invoke-static {}, Ljava/lang/System;->gc()V

    .line 119
    invoke-static {}, Lcom/tkay/china/common/a/a;->f()Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/VirtualMachineError;->getMessage()Ljava/lang/String;

    .line 122
    invoke-virtual {v2}, Ljava/lang/VirtualMachineError;->getMessage()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_18

    .line 123
    invoke-virtual {v2}, Ljava/lang/VirtualMachineError;->getMessage()Ljava/lang/String;

    move-result-object v0

    .line 125
    :cond_18
    iget-object v2, p0, Lcom/tkay/china/common/a/a$1;->a:Lcom/tkay/china/common/a/a;

    invoke-static {v1, v0}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/b;)V

    return-void
.end method
