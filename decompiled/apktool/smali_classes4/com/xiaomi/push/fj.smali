.class public Lcom/xiaomi/push/fj;
.super Ljava/lang/Object;


# static fields
.field private static final a:I

.field private static a:J


# direct methods
.method static constructor <clinit>()V
    .locals 2

    sget-object v0, Lcom/xiaomi/push/ez;->c:Lcom/xiaomi/push/ez;

    invoke-virtual {v0}, Lcom/xiaomi/push/ez;->a()I

    move-result v0

    sput v0, Lcom/xiaomi/push/fj;->a:I

    const-wide/16 v0, 0x0

    sput-wide v0, Lcom/xiaomi/push/fj;->a:J

    return-void
.end method

.method public static a()V
    .locals 4

    sget-wide v0, Lcom/xiaomi/push/fj;->a:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    sget-wide v2, Lcom/xiaomi/push/fj;->a:J

    sub-long/2addr v0, v2

    const-wide/32 v2, 0x6ddd00

    cmp-long v0, v0, v2

    if-lez v0, :cond_1

    :cond_0
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    sput-wide v0, Lcom/xiaomi/push/fj;->a:J

    const/4 v0, 0x0

    sget v1, Lcom/xiaomi/push/fj;->a:I

    invoke-static {v0, v1}, Lcom/xiaomi/push/fj;->a(II)V

    :cond_1
    return-void
.end method

.method public static a(I)V
    .locals 2

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object v0

    invoke-virtual {v0}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fa;

    move-result-object v0

    sget-object v1, Lcom/xiaomi/push/ez;->k:Lcom/xiaomi/push/ez;

    invoke-virtual {v1}, Lcom/xiaomi/push/ez;->a()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/fa;->a(I)Lcom/xiaomi/push/fa;

    invoke-virtual {v0, p0}, Lcom/xiaomi/push/fa;->c(I)Lcom/xiaomi/push/fa;

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/fh;->a(Lcom/xiaomi/push/fa;)V

    return-void
.end method

.method public static declared-synchronized a(II)V
    .locals 3

    const-class v0, Lcom/xiaomi/push/fj;

    monitor-enter v0

    const v1, 0xffffff

    if-ge p1, v1, :cond_0

    shl-int/lit8 p0, p0, 0x18

    or-int/2addr p0, p1

    :try_start_0
    sget-object p1, Lcom/xiaomi/push/fj$a;->a:Ljava/util/Hashtable;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {p1, p0, v1}, Ljava/util/Hashtable;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    const-string p0, "stats key should less than 16777215"

    invoke-static {p0}, Lcom/xiaomi/channel/commonutils/logger/b;->d(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(IIILjava/lang/String;I)V
    .locals 1

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object v0

    invoke-virtual {v0}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fa;

    move-result-object v0

    int-to-byte p0, p0

    invoke-virtual {v0, p0}, Lcom/xiaomi/push/fa;->a(B)Lcom/xiaomi/push/fa;

    invoke-virtual {v0, p1}, Lcom/xiaomi/push/fa;->a(I)Lcom/xiaomi/push/fa;

    invoke-virtual {v0, p2}, Lcom/xiaomi/push/fa;->b(I)Lcom/xiaomi/push/fa;

    invoke-virtual {v0, p3}, Lcom/xiaomi/push/fa;->b(Ljava/lang/String;)Lcom/xiaomi/push/fa;

    invoke-virtual {v0, p4}, Lcom/xiaomi/push/fa;->c(I)Lcom/xiaomi/push/fa;

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/fh;->a(Lcom/xiaomi/push/fa;)V

    return-void
.end method

.method public static declared-synchronized a(IILjava/lang/String;I)V
    .locals 6

    const-class v0, Lcom/xiaomi/push/fj;

    monitor-enter v0

    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    shl-int/lit8 p0, p0, 0x18

    or-int/2addr p0, p1

    sget-object v3, Lcom/xiaomi/push/fj$a;->a:Ljava/util/Hashtable;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/Hashtable;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object v3

    invoke-virtual {v3}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fa;

    move-result-object v3

    invoke-virtual {v3, p1}, Lcom/xiaomi/push/fa;->a(I)Lcom/xiaomi/push/fa;

    sget-object v4, Lcom/xiaomi/push/fj$a;->a:Ljava/util/Hashtable;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v4, p0}, Ljava/util/Hashtable;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Long;

    invoke-virtual {p0}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    sub-long/2addr v1, v4

    long-to-int p0, v1

    invoke-virtual {v3, p0}, Lcom/xiaomi/push/fa;->b(I)Lcom/xiaomi/push/fa;

    invoke-virtual {v3, p2}, Lcom/xiaomi/push/fa;->b(Ljava/lang/String;)Lcom/xiaomi/push/fa;

    const/4 p0, -0x1

    if-le p3, p0, :cond_0

    invoke-virtual {v3, p3}, Lcom/xiaomi/push/fa;->c(I)Lcom/xiaomi/push/fa;

    :cond_0
    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object p0

    invoke-virtual {p0, v3}, Lcom/xiaomi/push/fh;->a(Lcom/xiaomi/push/fa;)V

    sget-object p0, Lcom/xiaomi/push/fj$a;->a:Ljava/util/Hashtable;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/util/Hashtable;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_1
    const-string p0, "stats key not found"

    invoke-static {p0}, Lcom/xiaomi/channel/commonutils/logger/b;->d(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/service/bg$b;)V
    .locals 1

    new-instance v0, Lcom/xiaomi/push/fc;

    invoke-direct {v0, p0, p1}, Lcom/xiaomi/push/fc;-><init>(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/service/bg$b;)V

    invoke-virtual {v0}, Lcom/xiaomi/push/fc;->a()V

    return-void
.end method

.method public static a(Ljava/lang/String;ILjava/lang/Exception;)V
    .locals 2

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object v0

    invoke-virtual {v0}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fa;

    move-result-object v0

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fg;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fg;

    move-result-object v1

    iget-object v1, v1, Lcom/xiaomi/push/fg;->a:Lcom/xiaomi/push/service/XMPushService;

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fg;

    move-result-object v1

    iget-object v1, v1, Lcom/xiaomi/push/fg;->a:Lcom/xiaomi/push/service/XMPushService;

    invoke-static {v1}, Lcom/xiaomi/push/bj;->c(Landroid/content/Context;)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/fa;->c(I)Lcom/xiaomi/push/fa;

    :cond_0
    if-lez p1, :cond_1

    sget-object p2, Lcom/xiaomi/push/ez;->l:Lcom/xiaomi/push/ez;

    invoke-virtual {p2}, Lcom/xiaomi/push/ez;->a()I

    move-result p2

    invoke-virtual {v0, p2}, Lcom/xiaomi/push/fa;->a(I)Lcom/xiaomi/push/fa;

    invoke-virtual {v0, p0}, Lcom/xiaomi/push/fa;->b(Ljava/lang/String;)Lcom/xiaomi/push/fa;

    invoke-virtual {v0, p1}, Lcom/xiaomi/push/fa;->b(I)Lcom/xiaomi/push/fa;

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/fh;->a(Lcom/xiaomi/push/fa;)V

    goto :goto_0

    :cond_1
    :try_start_0
    invoke-static {p2}, Lcom/xiaomi/push/ff;->a(Ljava/lang/Exception;)Lcom/xiaomi/push/ff$a;

    move-result-object p1

    iget-object p2, p1, Lcom/xiaomi/push/ff$a;->a:Lcom/xiaomi/push/ez;

    invoke-virtual {p2}, Lcom/xiaomi/push/ez;->a()I

    move-result p2

    invoke-virtual {v0, p2}, Lcom/xiaomi/push/fa;->a(I)Lcom/xiaomi/push/fa;

    iget-object p1, p1, Lcom/xiaomi/push/ff$a;->a:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/xiaomi/push/fa;->c(Ljava/lang/String;)Lcom/xiaomi/push/fa;

    invoke-virtual {v0, p0}, Lcom/xiaomi/push/fa;->b(Ljava/lang/String;)Lcom/xiaomi/push/fa;

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/fh;->a(Lcom/xiaomi/push/fa;)V
    :try_end_0
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :goto_0
    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/Exception;)V
    .locals 2

    :try_start_0
    invoke-static {p1}, Lcom/xiaomi/push/ff;->b(Ljava/lang/Exception;)Lcom/xiaomi/push/ff$a;

    move-result-object p1

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object v0

    invoke-virtual {v0}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fa;

    move-result-object v0

    iget-object v1, p1, Lcom/xiaomi/push/ff$a;->a:Lcom/xiaomi/push/ez;

    invoke-virtual {v1}, Lcom/xiaomi/push/ez;->a()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/fa;->a(I)Lcom/xiaomi/push/fa;

    iget-object p1, p1, Lcom/xiaomi/push/ff$a;->a:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/xiaomi/push/fa;->c(Ljava/lang/String;)Lcom/xiaomi/push/fa;

    invoke-virtual {v0, p0}, Lcom/xiaomi/push/fa;->b(Ljava/lang/String;)Lcom/xiaomi/push/fa;

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fg;

    move-result-object p0

    if-eqz p0, :cond_1

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fg;

    move-result-object p0

    iget-object p0, p0, Lcom/xiaomi/push/fg;->a:Lcom/xiaomi/push/service/XMPushService;

    if-eqz p0, :cond_1

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fg;

    move-result-object p0

    iget-object p0, p0, Lcom/xiaomi/push/fg;->a:Lcom/xiaomi/push/service/XMPushService;

    invoke-static {p0}, Lcom/xiaomi/push/bj;->c(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    invoke-virtual {v0, p0}, Lcom/xiaomi/push/fa;->c(I)Lcom/xiaomi/push/fa;

    :cond_1
    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/fh;->a(Lcom/xiaomi/push/fa;)V
    :try_end_0
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public static a()[B
    .locals 1

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object v0

    invoke-virtual {v0}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fb;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/xiaomi/push/it;->a(Lcom/xiaomi/push/iu;)[B

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method

.method public static b()V
    .locals 4

    sget v0, Lcom/xiaomi/push/fj;->a:I

    const/4 v1, 0x0

    const/4 v2, 0x0

    const/4 v3, -0x1

    invoke-static {v1, v0, v2, v3}, Lcom/xiaomi/push/fj;->a(IILjava/lang/String;I)V

    return-void
.end method

.method public static b(Ljava/lang/String;Ljava/lang/Exception;)V
    .locals 2

    :try_start_0
    invoke-static {p1}, Lcom/xiaomi/push/ff;->d(Ljava/lang/Exception;)Lcom/xiaomi/push/ff$a;

    move-result-object p1

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object v0

    invoke-virtual {v0}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fa;

    move-result-object v0

    iget-object v1, p1, Lcom/xiaomi/push/ff$a;->a:Lcom/xiaomi/push/ez;

    invoke-virtual {v1}, Lcom/xiaomi/push/ez;->a()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/fa;->a(I)Lcom/xiaomi/push/fa;

    iget-object p1, p1, Lcom/xiaomi/push/ff$a;->a:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/xiaomi/push/fa;->c(Ljava/lang/String;)Lcom/xiaomi/push/fa;

    invoke-virtual {v0, p0}, Lcom/xiaomi/push/fa;->b(Ljava/lang/String;)Lcom/xiaomi/push/fa;

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fg;

    move-result-object p0

    if-eqz p0, :cond_1

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fg;

    move-result-object p0

    iget-object p0, p0, Lcom/xiaomi/push/fg;->a:Lcom/xiaomi/push/service/XMPushService;

    if-eqz p0, :cond_1

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fg;

    move-result-object p0

    iget-object p0, p0, Lcom/xiaomi/push/fg;->a:Lcom/xiaomi/push/service/XMPushService;

    invoke-static {p0}, Lcom/xiaomi/push/bj;->c(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    invoke-virtual {v0, p0}, Lcom/xiaomi/push/fa;->c(I)Lcom/xiaomi/push/fa;

    :cond_1
    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/fh;->a(Lcom/xiaomi/push/fa;)V
    :try_end_0
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method
