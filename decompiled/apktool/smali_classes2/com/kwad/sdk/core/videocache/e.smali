.class final Lcom/kwad/sdk/core/videocache/e;
.super Lcom/kwad/sdk/core/videocache/j;


# instance fields
.field private final awq:Lcom/kwad/sdk/core/videocache/h;

.field private final awr:Lcom/kwad/sdk/core/videocache/a/b;

.field private aws:Lcom/kwad/sdk/core/videocache/b;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/videocache/h;Lcom/kwad/sdk/core/videocache/a/b;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/videocache/j;-><init>(Lcom/kwad/sdk/core/videocache/l;Lcom/kwad/sdk/core/videocache/a;)V

    iput-object p2, p0, Lcom/kwad/sdk/core/videocache/e;->awr:Lcom/kwad/sdk/core/videocache/a/b;

    iput-object p1, p0, Lcom/kwad/sdk/core/videocache/e;->awq:Lcom/kwad/sdk/core/videocache/h;

    return-void
.end method

.method private a(Ljava/io/OutputStream;J)V
    .locals 4

    const/16 v0, 0x2000

    new-array v1, v0, [B

    :goto_0
    invoke-virtual {p0, v1, p2, p3, v0}, Lcom/kwad/sdk/core/videocache/e;->a([BJI)I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_0

    const/4 v3, 0x0

    invoke-virtual {p1, v1, v3, v2}, Ljava/io/OutputStream;->write([BII)V

    int-to-long v2, v2

    add-long/2addr p2, v2

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Ljava/io/OutputStream;->flush()V

    return-void
.end method

.method private a(Lcom/kwad/sdk/core/videocache/d;)Z
    .locals 9

    iget-object v0, p0, Lcom/kwad/sdk/core/videocache/e;->awq:Lcom/kwad/sdk/core/videocache/h;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/videocache/h;->length()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-lez v2, :cond_0

    move v2, v3

    goto :goto_0

    :cond_0
    move v2, v4

    :goto_0
    iget-object v5, p0, Lcom/kwad/sdk/core/videocache/e;->awr:Lcom/kwad/sdk/core/videocache/a/b;

    invoke-virtual {v5}, Lcom/kwad/sdk/core/videocache/a/b;->DB()J

    move-result-wide v5

    if-eqz v2, :cond_2

    iget-boolean v2, p1, Lcom/kwad/sdk/core/videocache/d;->awp:Z

    if-eqz v2, :cond_2

    iget-wide v7, p1, Lcom/kwad/sdk/core/videocache/d;->awo:J

    long-to-float p1, v7

    long-to-float v2, v5

    long-to-float v0, v0

    const v1, 0x3e4ccccd    # 0.2f

    mul-float/2addr v0, v1

    add-float/2addr v2, v0

    cmpg-float p1, p1, v2

    if-gtz p1, :cond_1

    goto :goto_1

    :cond_1
    return v4

    :cond_2
    :goto_1
    return v3
.end method

.method private b(Lcom/kwad/sdk/core/videocache/d;)Ljava/lang/String;
    .locals 12

    iget-object v0, p0, Lcom/kwad/sdk/core/videocache/e;->awq:Lcom/kwad/sdk/core/videocache/h;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/videocache/h;->DK()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x1

    xor-int/2addr v1, v2

    iget-object v3, p0, Lcom/kwad/sdk/core/videocache/e;->awr:Lcom/kwad/sdk/core/videocache/a/b;

    invoke-virtual {v3}, Lcom/kwad/sdk/core/videocache/a/b;->isCompleted()Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/kwad/sdk/core/videocache/e;->awr:Lcom/kwad/sdk/core/videocache/a/b;

    invoke-virtual {v3}, Lcom/kwad/sdk/core/videocache/a/b;->DB()J

    move-result-wide v3

    goto :goto_0

    :cond_0
    iget-object v3, p0, Lcom/kwad/sdk/core/videocache/e;->awq:Lcom/kwad/sdk/core/videocache/h;

    invoke-virtual {v3}, Lcom/kwad/sdk/core/videocache/h;->length()J

    move-result-wide v3

    :goto_0
    const-wide/16 v5, 0x0

    cmp-long v5, v3, v5

    const/4 v6, 0x0

    if-ltz v5, :cond_1

    move v5, v2

    goto :goto_1

    :cond_1
    move v5, v6

    :goto_1
    iget-boolean v7, p1, Lcom/kwad/sdk/core/videocache/d;->awp:Z

    if-eqz v7, :cond_2

    iget-wide v7, p1, Lcom/kwad/sdk/core/videocache/d;->awo:J

    sub-long v7, v3, v7

    goto :goto_2

    :cond_2
    move-wide v7, v3

    :goto_2
    if-eqz v5, :cond_3

    iget-boolean v9, p1, Lcom/kwad/sdk/core/videocache/d;->awp:Z

    if-eqz v9, :cond_3

    move v9, v2

    goto :goto_3

    :cond_3
    move v9, v6

    :goto_3
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    iget-boolean v11, p1, Lcom/kwad/sdk/core/videocache/d;->awp:Z

    if-eqz v11, :cond_4

    const-string v11, "HTTP/1.1 206 PARTIAL CONTENT\n"

    goto :goto_4

    :cond_4
    const-string v11, "HTTP/1.1 200 OK\n"

    :goto_4
    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "Accept-Ranges: bytes\n"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, ""

    if-eqz v5, :cond_5

    new-array v5, v2, [Ljava/lang/Object;

    invoke-static {v7, v8}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v7

    aput-object v7, v5, v6

    const-string v7, "Content-Length: %d\n"

    invoke-static {v7, v5}, Lcom/kwad/sdk/core/videocache/e;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    goto :goto_5

    :cond_5
    move-object v5, v11

    :goto_5
    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v9, :cond_6

    const/4 v5, 0x3

    new-array v5, v5, [Ljava/lang/Object;

    iget-wide v7, p1, Lcom/kwad/sdk/core/videocache/d;->awo:J

    invoke-static {v7, v8}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    aput-object p1, v5, v6

    const-wide/16 v7, 0x1

    sub-long v7, v3, v7

    invoke-static {v7, v8}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    aput-object p1, v5, v2

    const/4 p1, 0x2

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    aput-object v3, v5, p1

    const-string p1, "Content-Range: bytes %d-%d/%d\n"

    invoke-static {p1, v5}, Lcom/kwad/sdk/core/videocache/e;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    goto :goto_6

    :cond_6
    move-object p1, v11

    :goto_6
    invoke-virtual {v10, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v1, :cond_7

    new-array p1, v2, [Ljava/lang/Object;

    aput-object v0, p1, v6

    const-string v0, "Content-Type: %s\n"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/videocache/e;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v11

    :cond_7
    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\n"

    invoke-virtual {v10, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private b(Ljava/io/OutputStream;J)V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/videocache/h;

    iget-object v1, p0, Lcom/kwad/sdk/core/videocache/e;->awq:Lcom/kwad/sdk/core/videocache/h;

    invoke-direct {v0, v1}, Lcom/kwad/sdk/core/videocache/h;-><init>(Lcom/kwad/sdk/core/videocache/h;)V

    long-to-int p2, p2

    int-to-long p2, p2

    :try_start_0
    invoke-virtual {v0, p2, p3}, Lcom/kwad/sdk/core/videocache/h;->ai(J)V

    const/16 p2, 0x2000

    new-array p2, p2, [B

    :goto_0
    invoke-virtual {v0, p2}, Lcom/kwad/sdk/core/videocache/h;->read([B)I

    move-result p3

    const/4 v1, -0x1

    if-eq p3, v1, :cond_0

    const/4 v1, 0x0

    invoke-virtual {p1, p2, v1, p3}, Ljava/io/OutputStream;->write([BII)V

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Ljava/io/OutputStream;->flush()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/videocache/h;->close()V

    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {v0}, Lcom/kwad/sdk/core/videocache/h;->close()V

    throw p1
.end method

.method private static varargs format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
    .locals 1

    sget-object v0, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-static {v0, p0, p1}, Ljava/lang/String;->format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/videocache/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/videocache/e;->aws:Lcom/kwad/sdk/core/videocache/b;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/videocache/d;Ljava/net/Socket;)V
    .locals 3

    new-instance v0, Ljava/io/BufferedOutputStream;

    invoke-virtual {p2}, Ljava/net/Socket;->getOutputStream()Ljava/io/OutputStream;

    move-result-object p2

    invoke-direct {v0, p2}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/videocache/e;->b(Lcom/kwad/sdk/core/videocache/d;)Ljava/lang/String;

    move-result-object p2

    const-string v1, "UTF-8"

    invoke-virtual {p2, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/io/OutputStream;->write([B)V

    iget-wide v1, p1, Lcom/kwad/sdk/core/videocache/d;->awo:J

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/videocache/e;->a(Lcom/kwad/sdk/core/videocache/d;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-direct {p0, v0, v1, v2}, Lcom/kwad/sdk/core/videocache/e;->a(Ljava/io/OutputStream;J)V

    return-void

    :cond_0
    invoke-direct {p0, v0, v1, v2}, Lcom/kwad/sdk/core/videocache/e;->b(Ljava/io/OutputStream;J)V

    return-void
.end method

.method protected final cz(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/videocache/e;->aws:Lcom/kwad/sdk/core/videocache/b;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/core/videocache/e;->awr:Lcom/kwad/sdk/core/videocache/a/b;

    iget-object v1, v1, Lcom/kwad/sdk/core/videocache/a/b;->file:Ljava/io/File;

    invoke-interface {v0, v1, p1}, Lcom/kwad/sdk/core/videocache/b;->a(Ljava/io/File;I)V

    :cond_0
    return-void
.end method
