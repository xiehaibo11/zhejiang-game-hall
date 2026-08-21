.class public Lcom/igexin/push/extension/distribution/basic/f/a;
.super Lcom/igexin/b/a/d/e;


# instance fields
.field public a:Lcom/igexin/push/extension/distribution/basic/f/d;

.field public b:Ljava/net/HttpURLConnection;

.field public c:Z

.field private d:Z


# direct methods
.method public constructor <init>(Lcom/igexin/push/extension/distribution/basic/f/d;)V
    .locals 3

    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/igexin/b/a/d/e;-><init>(I)V

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AsyncHttpTask|httpPlugin = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method

.method private a(Ljava/lang/String;)Lcom/igexin/push/extension/distribution/basic/f/b;
    .locals 2

    :try_start_0
    invoke-direct {p0, p1}, Lcom/igexin/push/extension/distribution/basic/f/a;->b(Ljava/lang/String;)Ljava/net/HttpURLConnection;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    invoke-direct {p0, p1}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/net/HttpURLConnection;)[B

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    invoke-direct {p0, v0, p1}, Lcom/igexin/push/extension/distribution/basic/f/a;->b(Ljava/net/HttpURLConnection;[B)Lcom/igexin/push/extension/distribution/basic/f/b;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/f/a;->i()V

    return-object p1

    :catchall_0
    move-exception p1

    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/f/a;->i()V

    throw p1

    :catch_0
    :cond_0
    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/f/a;->i()V

    new-instance p1, Lcom/igexin/push/extension/distribution/basic/f/b;

    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-direct {p1, p0, v0, v1}, Lcom/igexin/push/extension/distribution/basic/f/b;-><init>(Lcom/igexin/push/extension/distribution/basic/f/a;Z[B)V

    return-object p1
.end method

.method private a(Ljava/lang/String;[B)Lcom/igexin/push/extension/distribution/basic/f/b;
    .locals 4

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "AsyncHttpTask|call httpPost start ###"

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v1, 0x0

    :try_start_0
    invoke-direct {p0, p2}, Lcom/igexin/push/extension/distribution/basic/f/a;->b([B)Z

    move-result v2

    if-eqz v2, :cond_0

    new-instance p1, Lcom/igexin/push/extension/distribution/basic/f/b;

    invoke-direct {p1, p0, v0, v1}, Lcom/igexin/push/extension/distribution/basic/f/b;-><init>(Lcom/igexin/push/extension/distribution/basic/f/a;Z[B)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/f/a;->i()V

    return-object p1

    :cond_0
    :try_start_1
    invoke-direct {p0, p1, p2}, Lcom/igexin/push/extension/distribution/basic/f/a;->b(Ljava/lang/String;[B)Ljava/net/HttpURLConnection;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AsyncHttpTask|httpPost() src body len = "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v2, p2

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {p1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    invoke-direct {p0, p2, p1}, Lcom/igexin/push/extension/distribution/basic/f/a;->a([BLjava/net/HttpURLConnection;)[B

    move-result-object p1

    if-nez p1, :cond_1

    const-string p1, "AsyncHttpTask|httpPost() getEncHttpData body = null"

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance p1, Lcom/igexin/push/extension/distribution/basic/f/b;

    const/4 p2, 0x1

    invoke-direct {p1, p0, p2, v1}, Lcom/igexin/push/extension/distribution/basic/f/b;-><init>(Lcom/igexin/push/extension/distribution/basic/f/a;Z[B)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/f/a;->i()V

    return-object p1

    :cond_1
    :try_start_2
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AsyncHttpTask|httpPost() getEncHttpData len = "

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v2, p1

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {p2, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object p2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    invoke-virtual {p2}, Ljava/net/HttpURLConnection;->connect()V

    new-instance p2, Ljava/io/DataOutputStream;

    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    invoke-virtual {v2}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v2

    invoke-direct {p2, v2}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :try_start_3
    array-length v2, p1

    invoke-virtual {p2, p1, v0, v2}, Ljava/io/DataOutputStream;->write([BII)V

    invoke-virtual {p2}, Ljava/io/DataOutputStream;->flush()V

    const-string p1, "AsyncHttpTask|httpPost() write and flush"

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {p1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    invoke-direct {p0, p1}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/net/HttpURLConnection;)[B

    move-result-object p1

    if-eqz p1, :cond_2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AsyncHttpTask|httpPost() server resp len ="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v3, p1

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v0, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    invoke-direct {p0, v2, p1}, Lcom/igexin/push/extension/distribution/basic/f/a;->b(Ljava/net/HttpURLConnection;[B)Lcom/igexin/push/extension/distribution/basic/f/b;

    move-result-object p1
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :try_start_4
    invoke-virtual {p2}, Ljava/io/DataOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    :catch_0
    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/f/a;->i()V

    return-object p1

    :cond_2
    :try_start_5
    const-string p1, "AsyncHttpTask|httpPost() server resp is null"

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {p1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    goto :goto_1

    :catch_1
    move-exception p1

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_2

    :catch_2
    move-exception p1

    move-object p2, v1

    :goto_0
    :try_start_6
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AsyncHttpTask httpPost|error|"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {p1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    if-eqz p2, :cond_3

    :goto_1
    :try_start_7
    invoke-virtual {p2}, Ljava/io/DataOutputStream;->close()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_3

    :catch_3
    :cond_3
    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/f/a;->i()V

    new-instance p1, Lcom/igexin/push/extension/distribution/basic/f/b;

    invoke-direct {p1, p0, v0, v1}, Lcom/igexin/push/extension/distribution/basic/f/b;-><init>(Lcom/igexin/push/extension/distribution/basic/f/a;Z[B)V

    return-object p1

    :catchall_1
    move-exception p1

    move-object v1, p2

    :goto_2
    if-eqz v1, :cond_4

    :try_start_8
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_4

    :catch_4
    :cond_4
    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/f/a;->i()V

    throw p1
.end method

.method private varargs a(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/Class<",
            "*>;)",
            "Ljava/lang/reflect/Method;"
        }
    .end annotation

    :try_start_0
    const-string v0, "com.igexin.push.util.EncryptUtils"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->l:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "invokeMethod error"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x0

    new-array p2, p2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method private a(Ljava/net/HttpURLConnection;[B)V
    .locals 7

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    new-array v1, v0, [B

    if-eqz p2, :cond_1

    goto :goto_0

    :cond_1
    move-object p2, v1

    :goto_0
    const/4 v1, 0x1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "GT_C_T"

    invoke-virtual {p1, v3, v2}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v2, Ljava/lang/String;

    new-array v3, v0, [Ljava/lang/Class;

    const-string v4, "getRSAKeyId"

    invoke-direct {p0, v4, v3}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    new-array v4, v0, [Ljava/lang/Object;

    const/4 v5, 0x0

    invoke-virtual {v3, v5, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [B

    check-cast v3, [B

    invoke-direct {v2, v3}, Ljava/lang/String;-><init>([B)V

    const-string v3, "GT_C_K"

    invoke-virtual {p1, v3, v2}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    new-array v2, v0, [Ljava/lang/Class;

    const-string v3, "getHttpGTCV"

    invoke-direct {p0, v3, v2}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v3, v0, [Ljava/lang/Object;

    invoke-virtual {v2, v5, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const-string v3, "GT_C_V"

    invoke-virtual {p1, v3, v2}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    const-class v6, Ljava/lang/String;

    aput-object v6, v4, v0

    const-class v6, [B

    aput-object v6, v4, v1

    const-string v6, "getHttpSignature"

    invoke-direct {p0, v6, v4}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v4

    new-array v3, v3, [Ljava/lang/Object;

    aput-object v2, v3, v0

    aput-object p2, v3, v1

    invoke-virtual {v4, v5, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    const-string v0, "GT_T"

    invoke-virtual {p1, v0, v2}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "GT_C_S"

    invoke-virtual {p1, v0, p2}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a([B)V
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    invoke-virtual {v0, p1}, Lcom/igexin/push/extension/distribution/basic/f/d;->a([B)V

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

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
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_6
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    new-instance v2, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v2}, Ljava/io/ByteArrayOutputStream;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_5
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
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
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_4
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v1, :cond_1

    :try_start_3
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    :catch_0
    :cond_1
    :try_start_4
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    :catch_1
    return-object p1

    :cond_2
    if-eqz v1, :cond_3

    :try_start_5
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2

    :catch_2
    :cond_3
    :try_start_6
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3

    :catch_3
    return-object v0

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_4
    move-exception p1

    goto :goto_2

    :catchall_1
    move-exception p1

    move-object v2, v0

    :goto_1
    move-object v0, v1

    goto :goto_4

    :catch_5
    move-exception p1

    move-object v2, v0

    :goto_2
    move-object v0, v1

    goto :goto_3

    :catchall_2
    move-exception p1

    move-object v2, v0

    goto :goto_4

    :catch_6
    move-exception p1

    move-object v2, v0

    :goto_3
    :try_start_7
    throw p1
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    :catchall_3
    move-exception p1

    :goto_4
    if-eqz v0, :cond_4

    :try_start_8
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_7

    :catch_7
    :cond_4
    if-eqz v2, :cond_5

    :try_start_9
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_8

    :catch_8
    :cond_5
    throw p1
.end method

.method private a([BLjava/net/HttpURLConnection;)[B
    .locals 7

    const-class v0, [B

    const/4 v1, 0x0

    const/4 v2, 0x0

    :try_start_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "AsyncHttpTask|getEncHttpData|isUseAES = |"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v4, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->c:Z

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    new-array v4, v2, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-boolean v3, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->c:Z

    if-eqz v3, :cond_0

    const-string v3, "GT_C_S"

    invoke-virtual {p2, v3}, Ljava/net/HttpURLConnection;->getRequestProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_1

    const-string v3, "aesEncHttp"

    const/4 v4, 0x2

    new-array v5, v4, [Ljava/lang/Class;

    aput-object v0, v5, v2

    const/4 v6, 0x1

    aput-object v0, v5, v6

    invoke-direct {p0, v3, v5}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    new-array v4, v4, [Ljava/lang/Object;

    aput-object p1, v4, v2

    const-string p1, "md5"

    new-array v5, v6, [Ljava/lang/Class;

    aput-object v0, v5, v2

    invoke-direct {p0, p1, v5}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    new-array v0, v6, [Ljava/lang/Object;

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    aput-object p2, v0, v2

    invoke-virtual {p1, v1, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    aput-object p1, v4, v6

    invoke-virtual {v3, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [B

    check-cast p1, [B

    return-object p1

    :cond_0
    invoke-static {p1}, Lcom/igexin/push/extension/distribution/basic/g/h;->a([B)[B

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "AsyncHttpTask|getEncHttpData|error|"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    return-object v1
.end method

.method private b(Ljava/net/HttpURLConnection;[B)Lcom/igexin/push/extension/distribution/basic/f/b;
    .locals 10

    const-class v0, [B

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    const-string v3, "AsyncHttpTask|authAndDecResp start ~~~"

    invoke-static {v3, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v2, 0x0

    const/4 v3, 0x1

    :try_start_0
    iget-boolean v4, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->c:Z

    if-eqz v4, :cond_6

    const-string v4, "GT_ERR"

    invoke-virtual {p1, v4}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->l:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "|GT_ERR = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    new-array v6, v1, [Ljava/lang/Object;

    invoke-static {v5, v6}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz v4, :cond_5

    const-string v5, "0"

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_0

    goto/16 :goto_1

    :cond_0
    const-string v4, "GT_T"

    invoke-virtual {p1, v4}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    if-nez v4, :cond_1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->l:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "|GT_T = null"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v1, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance p1, Lcom/igexin/push/extension/distribution/basic/f/b;

    invoke-direct {p1, p0, v3, v2}, Lcom/igexin/push/extension/distribution/basic/f/b;-><init>(Lcom/igexin/push/extension/distribution/basic/f/a;Z[B)V

    return-object p1

    :cond_1
    const-string v5, "GT_C_S"

    invoke-virtual {p1, v5}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-nez p1, :cond_2

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->l:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "|GT_C_S = null"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v1, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance p1, Lcom/igexin/push/extension/distribution/basic/f/b;

    invoke-direct {p1, p0, v3, v2}, Lcom/igexin/push/extension/distribution/basic/f/b;-><init>(Lcom/igexin/push/extension/distribution/basic/f/a;Z[B)V

    return-object p1

    :cond_2
    const-string v5, "aesDecHttp"

    const/4 v6, 0x2

    new-array v7, v6, [Ljava/lang/Class;

    aput-object v0, v7, v1

    aput-object v0, v7, v3

    invoke-direct {p0, v5, v7}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v5

    new-array v7, v6, [Ljava/lang/Object;

    aput-object p2, v7, v1

    const-string p2, "md5"

    new-array v8, v3, [Ljava/lang/Class;

    aput-object v0, v8, v1

    invoke-direct {p0, p2, v8}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p2

    new-array v8, v3, [Ljava/lang/Object;

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v9

    aput-object v9, v8, v1

    invoke-virtual {p2, v2, v8}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    aput-object p2, v7, v3

    invoke-virtual {v5, v2, v7}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, [B

    check-cast p2, [B

    const-string v5, "getHttpSignature"

    new-array v7, v6, [Ljava/lang/Class;

    const-class v8, Ljava/lang/String;

    aput-object v8, v7, v1

    aput-object v0, v7, v3

    invoke-direct {p0, v5, v7}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v5, v6, [Ljava/lang/Object;

    aput-object v4, v5, v1

    aput-object p2, v5, v3

    invoke-virtual {v0, v2, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    if-eqz v0, :cond_4

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_0

    :cond_3
    new-instance p1, Lcom/igexin/push/extension/distribution/basic/f/b;

    invoke-direct {p1, p0, v1, p2}, Lcom/igexin/push/extension/distribution/basic/f/b;-><init>(Lcom/igexin/push/extension/distribution/basic/f/a;Z[B)V

    return-object p1

    :cond_4
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->l:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "|signature = null or error"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v1, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance p1, Lcom/igexin/push/extension/distribution/basic/f/b;

    invoke-direct {p1, p0, v3, v2}, Lcom/igexin/push/extension/distribution/basic/f/b;-><init>(Lcom/igexin/push/extension/distribution/basic/f/a;Z[B)V

    return-object p1

    :cond_5
    :goto_1
    new-instance p1, Lcom/igexin/push/extension/distribution/basic/f/b;

    invoke-direct {p1, p0, v3, v2}, Lcom/igexin/push/extension/distribution/basic/f/b;-><init>(Lcom/igexin/push/extension/distribution/basic/f/a;Z[B)V

    return-object p1

    :cond_6
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/f/d;->e()Z

    move-result p1

    if-eqz p1, :cond_7

    invoke-static {p2, v1}, Landroid/util/Base64;->decode([BI)[B

    move-result-object p2

    :cond_7
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/f/d;->d()Z

    move-result p1

    if-eqz p1, :cond_8

    invoke-static {p2}, Lcom/igexin/push/extension/distribution/basic/g/h;->b([B)[B

    move-result-object p2

    :cond_8
    new-instance p1, Lcom/igexin/push/extension/distribution/basic/f/b;

    invoke-direct {p1, p0, v1, p2}, Lcom/igexin/push/extension/distribution/basic/f/b;-><init>(Lcom/igexin/push/extension/distribution/basic/f/a;Z[B)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "AsyncHttpTask|authAndDecResp|error|"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v1, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance p1, Lcom/igexin/push/extension/distribution/basic/f/b;

    invoke-direct {p1, p0, v3, v2}, Lcom/igexin/push/extension/distribution/basic/f/b;-><init>(Lcom/igexin/push/extension/distribution/basic/f/a;Z[B)V

    return-object p1
.end method

.method private b(Ljava/lang/String;)Ljava/net/HttpURLConnection;
    .locals 1

    new-instance v0, Ljava/net/URL;

    invoke-direct {v0, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    const/16 v0, 0x4e20

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    const-string v0, "GET"

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    iget-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->c:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/net/HttpURLConnection;[B)V

    :cond_0
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    return-object p1
.end method

.method private b(Ljava/lang/String;[B)Ljava/net/HttpURLConnection;
    .locals 2

    new-instance v0, Ljava/net/URL;

    invoke-direct {v0, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    const-string v1, "POST"

    invoke-virtual {p1, v1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    const/4 v1, 0x0

    invoke-virtual {p1, v1}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    const-string v0, "Content-Type"

    const-string v1, "application/octet-stream"

    invoke-virtual {p1, v0, v1}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    const/16 v0, 0x4e20

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    iget-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->c:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    invoke-direct {p0, p1, p2}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/net/HttpURLConnection;[B)V

    :cond_0
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    return-object p1
.end method

.method private b([B)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    array-length p1, p1

    div-int/lit16 p1, p1, 0x400

    sget v1, Lcom/igexin/push/extension/distribution/basic/c/e;->j:I

    if-le p1, v1, :cond_1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->l:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|http body size exceed "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/igexin/push/extension/distribution/basic/c/e;->j:I

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 p1, 0x1

    return p1

    :cond_1
    return v0
.end method

.method private i()V
    .locals 2

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "AsyncHttpTask call closeHttpURLConnection"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;

    if-eqz v0, :cond_0

    :try_start_0
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->b:Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method private j()Z
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    iget-boolean v0, v0, Lcom/igexin/push/extension/distribution/basic/f/d;->e:Z

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/g/b;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method


# virtual methods
.method public final b()V
    .locals 5

    invoke-super {p0}, Lcom/igexin/b/a/d/e;->b()V

    const/4 v0, 0x0

    :try_start_0
    iget-boolean v1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->d:Z

    if-eqz v1, :cond_0

    invoke-virtual {p0}, Lcom/igexin/push/extension/distribution/basic/f/a;->p()V

    return-void

    :cond_0
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->d:Z

    const/16 v1, 0xa

    invoke-static {v1}, Landroid/os/Process;->setThreadPriority(I)V

    iget-object v1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    if-nez v1, :cond_1

    return-void

    :cond_1
    iget-object v1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    invoke-virtual {v1}, Lcom/igexin/push/extension/distribution/basic/f/d;->b()Ljava/lang/String;

    move-result-object v1

    if-nez v1, :cond_2

    return-void

    :cond_2
    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/f/a;->j()Z

    move-result v2

    iput-boolean v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->c:Z

    if-eqz v2, :cond_3

    const-string v2, "isLoadSuccess"

    new-array v3, v0, [Ljava/lang/Class;

    invoke-direct {p0, v2, v3}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    const/4 v3, 0x0

    new-array v4, v0, [Ljava/lang/Object;

    invoke-virtual {v2, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-nez v2, :cond_3

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->l:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|so load failed! AsyncHttpTask return!"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void

    :cond_3
    iget-boolean v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->c:Z

    if-eqz v2, :cond_4

    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    invoke-virtual {v2}, Lcom/igexin/push/extension/distribution/basic/f/d;->c()[B

    move-result-object v2

    if-eqz v2, :cond_4

    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    invoke-virtual {v2}, Lcom/igexin/push/extension/distribution/basic/f/d;->c()[B

    move-result-object v2

    array-length v2, v2

    if-lez v2, :cond_4

    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    iget-object v3, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    invoke-virtual {v3}, Lcom/igexin/push/extension/distribution/basic/f/d;->c()[B

    move-result-object v3

    invoke-static {v3}, Lcom/igexin/b/a/b/f;->a([B)[B

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/igexin/push/extension/distribution/basic/f/d;->b([B)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    :cond_4
    :try_start_1
    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    invoke-virtual {v2}, Lcom/igexin/push/extension/distribution/basic/f/d;->c()[B

    move-result-object v2

    if-nez v2, :cond_5

    invoke-direct {p0, v1}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/lang/String;)Lcom/igexin/push/extension/distribution/basic/f/b;

    move-result-object v1

    goto :goto_0

    :cond_5
    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    invoke-virtual {v2}, Lcom/igexin/push/extension/distribution/basic/f/d;->c()[B

    move-result-object v2

    invoke-direct {p0, v1, v2}, Lcom/igexin/push/extension/distribution/basic/f/a;->a(Ljava/lang/String;[B)Lcom/igexin/push/extension/distribution/basic/f/b;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :goto_0
    :try_start_2
    iget-boolean v2, v1, Lcom/igexin/push/extension/distribution/basic/f/b;->a:Z

    if-nez v2, :cond_7

    iget-object v2, v1, Lcom/igexin/push/extension/distribution/basic/f/b;->b:[B

    if-eqz v2, :cond_6

    iget-object v1, v1, Lcom/igexin/push/extension/distribution/basic/f/b;->b:[B

    invoke-direct {p0, v1}, Lcom/igexin/push/extension/distribution/basic/f/a;->a([B)V

    return-void

    :cond_6
    new-instance v1, Ljava/lang/Exception;

    const-string v2, "Http response exception"

    invoke-direct {v1, v2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    invoke-virtual {v2, v1}, Lcom/igexin/push/extension/distribution/basic/f/d;->a(Ljava/lang/Exception;)V

    throw v1

    :cond_7
    new-instance v1, Ljava/lang/Exception;

    const-string v2, "http server resp decode header error"

    invoke-direct {v1, v2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    invoke-virtual {v2, v1}, Lcom/igexin/push/extension/distribution/basic/f/d;->a(Ljava/lang/Exception;)V

    throw v1

    :catch_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AsyncHttpTask|run() post or get error = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v0, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->a:Lcom/igexin/push/extension/distribution/basic/f/d;

    invoke-virtual {v2, v1}, Lcom/igexin/push/extension/distribution/basic/f/d;->a(Ljava/lang/Exception;)V

    throw v1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :catch_1
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AsyncHttpTask|run() error = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v2, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    throw v1
.end method

.method public final b_()I
    .locals 1

    const v0, -0x7ffffff7

    return v0
.end method

.method public d()V
    .locals 2

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->n:Z

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "AsyncHttpTask initTask()|isBloker = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->n:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "|isCycle = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/igexin/push/extension/distribution/basic/f/a;->o:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method

.method protected e()V
    .locals 0

    return-void
.end method

.method public f()V
    .locals 2

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "AsyncHttpTask|dispose()|closeHttpURLConnection"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-super {p0}, Lcom/igexin/b/a/d/e;->f()V

    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/f/a;->i()V

    return-void
.end method
