.class public Lcom/igexin/push/f/a/c;
.super Lcom/igexin/b/a/d/e;


# instance fields
.field public a:Lcom/igexin/push/f/a/b;

.field private b:Ljava/net/HttpURLConnection;


# direct methods
.method public constructor <init>(Lcom/igexin/push/f/a/b;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/igexin/b/a/d/e;-><init>(I)V

    iput-object p1, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    return-void
.end method

.method private a(Ljava/lang/String;)Lcom/igexin/push/f/a/d;
    .locals 2

    :try_start_0
    invoke-direct {p0, p1}, Lcom/igexin/push/f/a/c;->b(Ljava/lang/String;)Ljava/net/HttpURLConnection;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    invoke-direct {p0, p1}, Lcom/igexin/push/f/a/c;->a(Ljava/net/HttpURLConnection;)[B

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    invoke-direct {p0, v0, p1}, Lcom/igexin/push/f/a/c;->b(Ljava/net/HttpURLConnection;[B)Lcom/igexin/push/f/a/d;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-direct {p0}, Lcom/igexin/push/f/a/c;->i()V

    return-object p1

    :catchall_0
    :cond_0
    invoke-direct {p0}, Lcom/igexin/push/f/a/c;->i()V

    new-instance p1, Lcom/igexin/push/f/a/d;

    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-direct {p1, p0, v0, v1}, Lcom/igexin/push/f/a/d;-><init>(Lcom/igexin/push/f/a/c;Z[B)V

    return-object p1
.end method

.method private a(Ljava/lang/String;[B)Lcom/igexin/push/f/a/d;
    .locals 3

    const/4 v0, 0x0

    const/4 v1, 0x0

    :try_start_0
    invoke-direct {p0, p1, p2}, Lcom/igexin/push/f/a/c;->b(Ljava/lang/String;[B)Ljava/net/HttpURLConnection;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    invoke-direct {p0, p2, p1}, Lcom/igexin/push/f/a/c;->a([BLjava/net/HttpURLConnection;)[B

    move-result-object p1

    if-nez p1, :cond_0

    new-instance p1, Lcom/igexin/push/f/a/d;

    const/4 p2, 0x1

    invoke-direct {p1, p0, p2, v1}, Lcom/igexin/push/f/a/d;-><init>(Lcom/igexin/push/f/a/c;Z[B)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-direct {p0}, Lcom/igexin/push/f/a/c;->i()V

    return-object p1

    :cond_0
    :try_start_1
    iget-object p2, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    invoke-virtual {p2}, Ljava/net/HttpURLConnection;->connect()V

    new-instance p2, Ljava/io/DataOutputStream;

    iget-object v2, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    invoke-virtual {v2}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v2

    invoke-direct {p2, v2}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    array-length v2, p1

    invoke-virtual {p2, p1, v0, v2}, Ljava/io/DataOutputStream;->write([BII)V

    invoke-virtual {p2}, Ljava/io/DataOutputStream;->flush()V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    invoke-direct {p0, p1}, Lcom/igexin/push/f/a/c;->a(Ljava/net/HttpURLConnection;)[B

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object v2, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    invoke-direct {p0, v2, p1}, Lcom/igexin/push/f/a/c;->b(Ljava/net/HttpURLConnection;[B)Lcom/igexin/push/f/a/d;

    move-result-object p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :try_start_3
    invoke-virtual {p2}, Ljava/io/DataOutputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    :catch_0
    invoke-direct {p0}, Lcom/igexin/push/f/a/c;->i()V

    return-object p1

    :catchall_0
    move-object p2, v1

    :catchall_1
    if-eqz p2, :cond_2

    :cond_1
    :try_start_4
    invoke-virtual {p2}, Ljava/io/DataOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    :catch_1
    :cond_2
    invoke-direct {p0}, Lcom/igexin/push/f/a/c;->i()V

    new-instance p1, Lcom/igexin/push/f/a/d;

    invoke-direct {p1, p0, v0, v1}, Lcom/igexin/push/f/a/d;-><init>(Lcom/igexin/push/f/a/c;Z[B)V

    return-object p1
.end method

.method private a(Ljava/net/HttpURLConnection;[B)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    new-array v0, v0, [B

    if-eqz p2, :cond_1

    goto :goto_0

    :cond_1
    move-object p2, v0

    :goto_0
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "GT_C_T"

    invoke-virtual {p1, v1, v0}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Ljava/lang/String;

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getRSAKeyId()[B

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/String;-><init>([B)V

    const-string v1, "GT_C_K"

    invoke-virtual {p1, v1, v0}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getHttpGTCV()Ljava/lang/String;

    move-result-object v0

    const-string v1, "GT_C_V"

    invoke-virtual {p1, v1, v0}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p2}, Lcom/igexin/push/util/EncryptUtils;->getHttpSignature(Ljava/lang/String;[B)Ljava/lang/String;

    move-result-object p2

    const-string v1, "GT_T"

    invoke-virtual {p1, v1, v0}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "GT_C_S"

    invoke-virtual {p1, v0, p2}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a([B)V
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    invoke-virtual {v0, p1}, Lcom/igexin/push/f/a/b;->a([B)V

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    iget-object v0, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    invoke-virtual {p1, v0}, Lcom/igexin/b/a/b/c;->a(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/b/a/b/c;->c()V

    return-void
.end method

.method private a(Ljava/net/HttpURLConnection;)[B
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    new-instance v2, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v2}, Ljava/io/ByteArrayOutputStream;-><init>()V

    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result p1

    const/16 v3, 0xc8

    if-ne p1, v3, :cond_2

    const/16 p1, 0x400

    new-array p1, p1, [B

    :goto_0
    invoke-virtual {v1, p1}, Ljava/io/InputStream;->read([B)I

    move-result v0

    const/4 v3, -0x1

    if-eq v0, v3, :cond_0

    const/4 v3, 0x0

    invoke-virtual {v2, p1, v3, v0}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_0

    :cond_0
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v1, :cond_1

    :try_start_2
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    :cond_1
    return-object p1

    :cond_2
    if-eqz v1, :cond_3

    :try_start_3
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    :catch_1
    :cond_3
    return-object v0

    :catchall_0
    move-exception p1

    move-object v0, v1

    goto :goto_2

    :catch_2
    move-exception p1

    move-object v0, v1

    goto :goto_1

    :catchall_1
    move-exception p1

    goto :goto_2

    :catch_3
    move-exception p1

    :goto_1
    :try_start_4
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :goto_2
    if-eqz v0, :cond_4

    :try_start_5
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4

    :catch_4
    :cond_4
    throw p1
.end method

.method private a([BLjava/net/HttpURLConnection;)[B
    .locals 2

    const-string v0, "GT_C_S"

    :try_start_0
    invoke-virtual {p2}, Ljava/net/HttpURLConnection;->getRequestProperties()Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p2, v0}, Ljava/net/HttpURLConnection;->getRequestProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_0

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    invoke-static {p2}, Lcom/igexin/push/util/EncryptUtils;->md5([B)[B

    move-result-object p2

    invoke-static {p1, p2}, Lcom/igexin/push/util/EncryptUtils;->aesEncHttp([B[B)[B

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "_HttpTask|"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x0

    new-array p2, p2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private b(Ljava/net/HttpURLConnection;[B)Lcom/igexin/push/f/a/d;
    .locals 6

    const/4 v0, 0x0

    const/4 v1, 0x1

    const/4 v2, 0x0

    :try_start_0
    const-string v3, "GT_ERR"

    invoke-virtual {p1, v3}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "_HttpTask|GT_ERR = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    new-array v5, v2, [Ljava/lang/Object;

    invoke-static {v4, v5}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz v3, :cond_5

    const-string v4, "0"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_0

    goto :goto_1

    :cond_0
    const-string v3, "GT_T"

    invoke-virtual {p1, v3}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    if-nez v3, :cond_1

    const-string p1, "_HttpTask|GT_T = null"

    new-array p2, v2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance p1, Lcom/igexin/push/f/a/d;

    invoke-direct {p1, p0, v1, v0}, Lcom/igexin/push/f/a/d;-><init>(Lcom/igexin/push/f/a/c;Z[B)V

    return-object p1

    :cond_1
    const-string v4, "GT_C_S"

    invoke-virtual {p1, v4}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-nez p1, :cond_2

    const-string p1, "_HttpTask|GT_C_S = null"

    new-array p2, v2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance p1, Lcom/igexin/push/f/a/d;

    invoke-direct {p1, p0, v1, v0}, Lcom/igexin/push/f/a/d;-><init>(Lcom/igexin/push/f/a/c;Z[B)V

    return-object p1

    :cond_2
    invoke-virtual {v3}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-static {v4}, Lcom/igexin/push/util/EncryptUtils;->md5([B)[B

    move-result-object v4

    invoke-static {p2, v4}, Lcom/igexin/push/util/EncryptUtils;->aesDecHttp([B[B)[B

    move-result-object p2

    invoke-static {v3, p2}, Lcom/igexin/push/util/EncryptUtils;->getHttpSignature(Ljava/lang/String;[B)Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_4

    invoke-virtual {v3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_0

    :cond_3
    new-instance p1, Lcom/igexin/push/f/a/d;

    invoke-direct {p1, p0, v2, p2}, Lcom/igexin/push/f/a/d;-><init>(Lcom/igexin/push/f/a/c;Z[B)V

    return-object p1

    :cond_4
    :goto_0
    const-string p1, "_HttpTask|signature = null or error"

    new-array p2, v2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance p1, Lcom/igexin/push/f/a/d;

    invoke-direct {p1, p0, v1, v0}, Lcom/igexin/push/f/a/d;-><init>(Lcom/igexin/push/f/a/c;Z[B)V

    return-object p1

    :cond_5
    :goto_1
    new-instance p1, Lcom/igexin/push/f/a/d;

    invoke-direct {p1, p0, v1, v0}, Lcom/igexin/push/f/a/d;-><init>(Lcom/igexin/push/f/a/c;Z[B)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "_HttpTask|"

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance p1, Lcom/igexin/push/f/a/d;

    invoke-direct {p1, p0, v1, v0}, Lcom/igexin/push/f/a/d;-><init>(Lcom/igexin/push/f/a/c;Z[B)V

    return-object p1
.end method

.method private b(Ljava/lang/String;)Ljava/net/HttpURLConnection;
    .locals 1

    new-instance v0, Ljava/net/URL;

    invoke-direct {v0, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;

    iput-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    const/16 v0, 0x4e20

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    const-string v0, "GET"

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/igexin/push/f/a/c;->a(Ljava/net/HttpURLConnection;[B)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    return-object p1
.end method

.method private b(Ljava/lang/String;[B)Ljava/net/HttpURLConnection;
    .locals 2

    new-instance v0, Ljava/net/URL;

    invoke-direct {v0, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;

    iput-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    const-string v1, "POST"

    invoke-virtual {p1, v1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    const/4 v1, 0x0

    invoke-virtual {p1, v1}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    const-string v0, "Content-Type"

    const-string v1, "application/octet-stream"

    invoke-virtual {p1, v0, v1}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    const/16 v0, 0x4e20

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    invoke-direct {p0, p1, p2}, Lcom/igexin/push/f/a/c;->a(Ljava/net/HttpURLConnection;[B)V

    iget-object p1, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    return-object p1
.end method

.method private i()V
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;

    if-eqz v0, :cond_0

    :try_start_0
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/igexin/push/f/a/c;->b:Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method


# virtual methods
.method public final b()V
    .locals 4

    invoke-super {p0}, Lcom/igexin/b/a/d/e;->b()V

    const/16 v0, 0xa

    invoke-static {v0}, Landroid/os/Process;->setThreadPriority(I)V

    iget-object v0, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    const/4 v1, 0x0

    if-eqz v0, :cond_7

    iget-object v0, v0, Lcom/igexin/push/f/a/b;->b:Ljava/lang/String;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    iget-object v0, v0, Lcom/igexin/push/f/a/b;->c:[B

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    iget-object v0, v0, Lcom/igexin/push/f/a/b;->c:[B

    array-length v0, v0

    sget v2, Lcom/igexin/push/config/j;->o:I

    mul-int/lit16 v2, v2, 0x400

    if-le v0, v2, :cond_0

    goto/16 :goto_3

    :cond_0
    iget-object v0, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    iget-object v0, v0, Lcom/igexin/push/f/a/b;->c:[B

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    iget-object v0, v0, Lcom/igexin/push/f/a/b;->c:[B

    array-length v0, v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    iget-object v2, v0, Lcom/igexin/push/f/a/b;->c:[B

    invoke-static {v2}, Lcom/igexin/b/a/b/f;->c([B)[B

    move-result-object v2

    iput-object v2, v0, Lcom/igexin/push/f/a/b;->c:[B

    :cond_1
    :goto_0
    const/4 v0, 0x3

    if-ge v1, v0, :cond_6

    iget-object v0, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    iget-object v0, v0, Lcom/igexin/push/f/a/b;->c:[B

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    iget-object v0, v0, Lcom/igexin/push/f/a/b;->b:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/igexin/push/f/a/c;->a(Ljava/lang/String;)Lcom/igexin/push/f/a/d;

    move-result-object v0

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    iget-object v0, v0, Lcom/igexin/push/f/a/b;->b:Ljava/lang/String;

    iget-object v2, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    iget-object v2, v2, Lcom/igexin/push/f/a/b;->c:[B

    invoke-direct {p0, v0, v2}, Lcom/igexin/push/f/a/c;->a(Ljava/lang/String;[B)Lcom/igexin/push/f/a/d;

    move-result-object v0

    :goto_1
    iget-boolean v2, v0, Lcom/igexin/push/f/a/d;->a:Z

    if-nez v2, :cond_5

    iget-object v2, v0, Lcom/igexin/push/f/a/d;->b:[B

    if-eqz v2, :cond_3

    iget-object v0, v0, Lcom/igexin/push/f/a/d;->b:[B

    invoke-direct {p0, v0}, Lcom/igexin/push/f/a/c;->a([B)V

    goto :goto_2

    :cond_3
    const/4 v0, 0x2

    if-eq v1, v0, :cond_4

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_4
    iget-object v0, p0, Lcom/igexin/push/f/a/c;->a:Lcom/igexin/push/f/a/b;

    new-instance v2, Ljava/lang/Exception;

    const-string v3, "try up to limit"

    invoke-direct {v2, v3}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Lcom/igexin/push/f/a/b;->a(Ljava/lang/Exception;)V

    new-instance v0, Ljava/lang/Exception;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "http request exception, try times = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v1, v1, 0x1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_5
    new-instance v0, Ljava/lang/Exception;

    const-string v1, "http server resp decode header error"

    invoke-direct {v0, v1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_6
    :goto_2
    return-void

    :cond_7
    :goto_3
    invoke-virtual {p0}, Lcom/igexin/push/f/a/c;->p()V

    new-array v0, v1, [Ljava/lang/Object;

    const-string v1, "_HttpTask|run return ###"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method

.method public final b_()I
    .locals 1

    const v0, -0x7ffffff6

    return v0
.end method

.method public d()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/f/a/c;->n:Z

    return-void
.end method

.method protected e()V
    .locals 0

    return-void
.end method

.method public f()V
    .locals 0

    invoke-super {p0}, Lcom/igexin/b/a/d/e;->f()V

    invoke-direct {p0}, Lcom/igexin/push/f/a/c;->i()V

    return-void
.end method
