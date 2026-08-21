.class public Lcom/xiaomi/push/it;
.super Ljava/lang/Object;


# direct methods
.method public static a(Landroid/content/Context;Lcom/xiaomi/push/if;)S
    .locals 0

    iget-object p1, p1, Lcom/xiaomi/push/if;->b:Ljava/lang/String;

    invoke-static {p0, p1}, Lcom/xiaomi/push/it;->a(Landroid/content/Context;Ljava/lang/String;)S

    move-result p0

    return p0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)S
    .locals 2

    const/4 v0, 0x0

    invoke-static {p0, p1, v0}, Lcom/xiaomi/push/h;->a(Landroid/content/Context;Ljava/lang/String;Z)Lcom/xiaomi/push/h$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/xiaomi/push/h$a;->a()I

    move-result p1

    add-int/2addr p1, v0

    invoke-static {p0}, Lcom/xiaomi/push/ak;->b(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x4

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    add-int/2addr p1, v1

    invoke-static {p0}, Lcom/xiaomi/push/ak;->a(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/16 v1, 0x8

    goto :goto_1

    :cond_1
    move v1, v0

    :goto_1
    add-int/2addr p1, v1

    invoke-static {p0}, Lcom/xiaomi/push/service/ax;->a(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_2

    const/16 v0, 0x10

    :cond_2
    add-int/2addr p1, v0

    int-to-short p0, p1

    return p0
.end method

.method public static a(Lcom/xiaomi/push/iu;[B)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T::",
            "Lcom/xiaomi/push/iu<",
            "TT;*>;>(TT;[B)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    new-instance v0, Lcom/xiaomi/push/iy;

    new-instance v1, Lcom/xiaomi/push/jl$a;

    array-length v2, p1

    const/4 v3, 0x1

    invoke-direct {v1, v3, v3, v2}, Lcom/xiaomi/push/jl$a;-><init>(ZZI)V

    invoke-direct {v0, v1}, Lcom/xiaomi/push/iy;-><init>(Lcom/xiaomi/push/jh;)V

    invoke-virtual {v0, p0, p1}, Lcom/xiaomi/push/iy;->a(Lcom/xiaomi/push/iu;[B)V

    return-void

    :cond_0
    new-instance p0, Lcom/xiaomi/push/iz;

    const-string p1, "the message byte is empty."

    invoke-direct {p0, p1}, Lcom/xiaomi/push/iz;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static a(Lcom/xiaomi/push/iu;)[B
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T::",
            "Lcom/xiaomi/push/iu<",
            "TT;*>;>(TT;)[B"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    new-instance v1, Lcom/xiaomi/push/ja;

    new-instance v2, Lcom/xiaomi/push/jb$a;

    invoke-direct {v2}, Lcom/xiaomi/push/jb$a;-><init>()V

    invoke-direct {v1, v2}, Lcom/xiaomi/push/ja;-><init>(Lcom/xiaomi/push/jh;)V

    invoke-virtual {v1, p0}, Lcom/xiaomi/push/ja;->a(Lcom/xiaomi/push/iu;)[B

    move-result-object p0
    :try_end_0
    .catch Lcom/xiaomi/push/iz; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    const-string v1, "convertThriftObjectToBytes catch TException."

    invoke-static {v1, p0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;Ljava/lang/Throwable;)V

    return-object v0
.end method
