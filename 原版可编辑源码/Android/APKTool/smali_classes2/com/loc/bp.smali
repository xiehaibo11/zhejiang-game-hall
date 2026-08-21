.class public abstract Lcom/loc/bp;
.super Lcom/loc/r;
.source "BinaryRequest.java"


# instance fields
.field protected a:Landroid/content/Context;

.field protected b:Lcom/loc/w;

.field protected c:[B


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/loc/w;)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/r;-><init>()V

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/loc/bp;->a:Landroid/content/Context;

    :cond_0
    iput-object p2, p0, Lcom/loc/bp;->b:Lcom/loc/w;

    invoke-virtual {p0}, Lcom/loc/bp;->r()V

    return-void
.end method

.method private static A()[B
    .locals 6

    const-string v0, "gbh"

    const-string v1, "bre"

    new-instance v2, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v2}, Ljava/io/ByteArrayOutputStream;-><init>()V

    :try_start_0
    const-string v3, "PANDORA$"

    invoke-static {v3}, Lcom/loc/x;->a(Ljava/lang/String;)[B

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/io/ByteArrayOutputStream;->write([B)V

    const/4 v3, 0x1

    new-array v4, v3, [B

    const/4 v5, 0x0

    aput-byte v3, v4, v5

    invoke-virtual {v2, v4}, Ljava/io/ByteArrayOutputStream;->write([B)V

    new-array v3, v3, [B

    aput-byte v5, v3, v5

    invoke-virtual {v2, v3}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-object v3

    :catchall_1
    move-exception v3

    :try_start_2
    invoke-static {v3, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    :try_start_3
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_1

    :catchall_2
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    const/4 v0, 0x0

    return-object v0

    :catchall_3
    move-exception v3

    :try_start_4
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    goto :goto_2

    :catchall_4
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    throw v3
.end method

.method private B()[B
    .locals 10

    const-string v0, "gred"

    const-string v1, "bre"

    new-instance v2, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v2}, Ljava/io/ByteArrayOutputStream;-><init>()V

    const/4 v3, 0x1

    const/4 v4, 0x0

    :try_start_0
    new-array v5, v3, [B

    const/4 v6, 0x3

    aput-byte v6, v5, v4

    invoke-virtual {v2, v5}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {p0}, Lcom/loc/bp;->i()Z

    move-result v5

    const/4 v6, 0x2

    if-eqz v5, :cond_1

    iget-object v5, p0, Lcom/loc/bp;->a:Landroid/content/Context;

    invoke-virtual {p0}, Lcom/loc/bp;->k()Z

    move-result v7

    iget-object v8, p0, Lcom/loc/bp;->b:Lcom/loc/w;

    if-eqz v8, :cond_0

    const-string v8, "navi"

    iget-object v9, p0, Lcom/loc/bp;->b:Lcom/loc/w;

    invoke-virtual {v9}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_0

    const/4 v8, 0x1

    goto :goto_0

    :cond_0
    const/4 v8, 0x0

    :goto_0
    invoke-static {v5, v7, v8}, Lcom/loc/n;->a(Landroid/content/Context;ZZ)[B

    move-result-object v5

    invoke-static {v5}, Lcom/loc/bp;->a([B)[B

    move-result-object v7

    invoke-virtual {v2, v7}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v2, v5}, Ljava/io/ByteArrayOutputStream;->write([B)V

    goto :goto_1

    :cond_1
    new-array v5, v6, [B

    aput-byte v4, v5, v4

    aput-byte v4, v5, v3

    invoke-virtual {v2, v5}, Ljava/io/ByteArrayOutputStream;->write([B)V

    :goto_1
    invoke-virtual {p0}, Lcom/loc/bp;->f()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/loc/x;->a(Ljava/lang/String;)[B

    move-result-object v5

    if-eqz v5, :cond_2

    array-length v7, v5

    if-lez v7, :cond_2

    invoke-static {v5}, Lcom/loc/bp;->a([B)[B

    move-result-object v7

    invoke-virtual {v2, v7}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v2, v5}, Ljava/io/ByteArrayOutputStream;->write([B)V

    goto :goto_2

    :cond_2
    new-array v5, v6, [B

    aput-byte v4, v5, v4

    aput-byte v4, v5, v3

    invoke-virtual {v2, v5}, Ljava/io/ByteArrayOutputStream;->write([B)V

    :goto_2
    invoke-virtual {p0}, Lcom/loc/bp;->j()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/loc/x;->a(Ljava/lang/String;)[B

    move-result-object v5

    if-eqz v5, :cond_3

    array-length v7, v5

    if-lez v7, :cond_3

    invoke-static {v5}, Lcom/loc/bp;->a([B)[B

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v2, v5}, Ljava/io/ByteArrayOutputStream;->write([B)V

    goto :goto_3

    :cond_3
    new-array v5, v6, [B

    aput-byte v4, v5, v4

    aput-byte v4, v5, v3

    invoke-virtual {v2, v5}, Ljava/io/ByteArrayOutputStream;->write([B)V

    :goto_3
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_4

    :catchall_0
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_4
    return-object v3

    :catchall_1
    move-exception v5

    :try_start_2
    const-string v6, "gpd"

    invoke-static {v5, v1, v6}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    :try_start_3
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_5

    :catchall_2
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_5
    new-array v0, v3, [B

    aput-byte v4, v0, v4

    return-object v0

    :catchall_3
    move-exception v3

    :try_start_4
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    goto :goto_6

    :catchall_4
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_6
    throw v3
.end method

.method private C()[B
    .locals 7

    const-string v0, "grrd"

    const-string v1, "bre"

    new-instance v2, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v2}, Ljava/io/ByteArrayOutputStream;-><init>()V

    const/4 v3, 0x1

    const/4 v4, 0x0

    :try_start_0
    invoke-virtual {p0}, Lcom/loc/bp;->a_()[B

    move-result-object v5

    if-eqz v5, :cond_1

    array-length v6, v5

    if-nez v6, :cond_0

    goto :goto_1

    :cond_0
    new-array v6, v3, [B

    aput-byte v3, v6, v4

    invoke-virtual {v2, v6}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-static {v5}, Lcom/loc/bp;->a([B)[B

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v2, v5}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-object v3

    :cond_1
    :goto_1
    :try_start_2
    new-array v5, v3, [B

    aput-byte v4, v5, v4

    invoke-virtual {v2, v5}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :try_start_3
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-object v3

    :catchall_2
    move-exception v5

    :try_start_4
    invoke-static {v5, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    :try_start_5
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    goto :goto_3

    :catchall_3
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_3
    new-array v0, v3, [B

    aput-byte v4, v0, v4

    return-object v0

    :catchall_4
    move-exception v3

    :try_start_6
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_5

    goto :goto_4

    :catchall_5
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_4
    throw v3
.end method

.method private D()[B
    .locals 7

    const-string v0, "gred"

    const-string v1, "bre"

    new-instance v2, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v2}, Ljava/io/ByteArrayOutputStream;-><init>()V

    const/4 v3, 0x1

    const/4 v4, 0x0

    :try_start_0
    invoke-virtual {p0}, Lcom/loc/bp;->b_()[B

    move-result-object v5

    if-eqz v5, :cond_1

    array-length v6, v5

    if-nez v6, :cond_0

    goto :goto_1

    :cond_0
    new-array v6, v3, [B

    aput-byte v3, v6, v4

    invoke-virtual {v2, v6}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-static {v5}, Lcom/loc/n;->a([B)[B

    move-result-object v5

    invoke-static {v5}, Lcom/loc/bp;->a([B)[B

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v2, v5}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-object v3

    :cond_1
    :goto_1
    :try_start_2
    new-array v5, v3, [B

    aput-byte v4, v5, v4

    invoke-virtual {v2, v5}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :try_start_3
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-object v3

    :catchall_2
    move-exception v5

    :try_start_4
    invoke-static {v5, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    :try_start_5
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    goto :goto_3

    :catchall_3
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_3
    new-array v0, v3, [B

    aput-byte v4, v0, v4

    return-object v0

    :catchall_4
    move-exception v3

    :try_start_6
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_5

    goto :goto_4

    :catchall_5
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_4
    throw v3
.end method

.method protected static a([B)[B
    .locals 0

    array-length p0, p0

    invoke-static {p0}, Lcom/loc/x;->a(I)[B

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public abstract a_()[B
.end method

.method public abstract b_()[B
.end method

.method public final d()[B
    .locals 4

    const-string v0, "geb"

    const-string v1, "bre"

    iget-object v2, p0, Lcom/loc/bp;->c:[B

    if-eqz v2, :cond_0

    return-object v2

    :cond_0
    new-instance v2, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v2}, Ljava/io/ByteArrayOutputStream;-><init>()V

    :try_start_0
    invoke-static {}, Lcom/loc/bp;->A()[B

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-direct {p0}, Lcom/loc/bp;->B()[B

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-direct {p0}, Lcom/loc/bp;->C()[B

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-direct {p0}, Lcom/loc/bp;->D()[B

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v3

    iput-object v3, p0, Lcom/loc/bp;->c:[B
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-object v3

    :catchall_1
    move-exception v3

    :try_start_2
    invoke-static {v3, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    :try_start_3
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_1

    :catchall_2
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    const/4 v0, 0x0

    return-object v0

    :catchall_3
    move-exception v3

    :try_start_4
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    goto :goto_2

    :catchall_4
    move-exception v2

    invoke-static {v2, v1, v0}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    throw v3
.end method

.method public e()Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/loc/bp;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/l;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/loc/n;->a()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/loc/bp;->a:Landroid/content/Context;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "key="

    invoke-virtual {v4, v3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v1, v3}, Lcom/loc/n;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/util/HashMap;

    invoke-direct {v3}, Ljava/util/HashMap;-><init>()V

    const-string v4, "ts"

    invoke-interface {v3, v4, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "key"

    invoke-interface {v3, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "scode"

    invoke-interface {v3, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v3
.end method

.method protected f()Ljava/lang/String;
    .locals 1

    const-string v0, "2.1"

    return-object v0
.end method

.method public i()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public j()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    iget-object v1, p0, Lcom/loc/bp;->b:Lcom/loc/w;

    invoke-virtual {v1}, Lcom/loc/w;->c()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/loc/bp;->b:Lcom/loc/w;

    invoke-virtual {v1}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, v0, v2

    const-string v1, "platform=Android&sdkversion=%s&product=%s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected k()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
