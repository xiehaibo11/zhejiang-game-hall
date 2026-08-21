.class Lcom/xiaomi/push/service/bt;
.super Lcom/xiaomi/push/service/XMPushService$j;


# instance fields
.field private a:Lcom/xiaomi/push/fl;

.field private a:Lcom/xiaomi/push/service/XMPushService;


# direct methods
.method public constructor <init>(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/fl;)V
    .locals 1

    const/4 v0, 0x4

    invoke-direct {p0, v0}, Lcom/xiaomi/push/service/XMPushService$j;-><init>(I)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/xiaomi/push/service/bt;->a:Lcom/xiaomi/push/service/XMPushService;

    iput-object p1, p0, Lcom/xiaomi/push/service/bt;->a:Lcom/xiaomi/push/service/XMPushService;

    iput-object p2, p0, Lcom/xiaomi/push/service/bt;->a:Lcom/xiaomi/push/fl;

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    const-string v0, "send a message."

    return-object v0
.end method

.method public a()V
    .locals 4

    :try_start_0
    iget-object v0, p0, Lcom/xiaomi/push/service/bt;->a:Lcom/xiaomi/push/fl;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/xiaomi/push/service/bt;->a:Lcom/xiaomi/push/service/XMPushService;

    iget-object v1, p0, Lcom/xiaomi/push/service/bt;->a:Lcom/xiaomi/push/fl;

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/service/XMPushService;->a(Lcom/xiaomi/push/fl;)V

    iget-object v0, p0, Lcom/xiaomi/push/service/bt;->a:Lcom/xiaomi/push/fl;

    iget-object v0, v0, Lcom/xiaomi/push/fl;->a:Lcom/xiaomi/push/service/ao;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/xiaomi/push/service/bt;->a:Lcom/xiaomi/push/service/XMPushService;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/xiaomi/push/hi;->a(Landroid/content/Context;I)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/xiaomi/push/service/bt;->a:Lcom/xiaomi/push/fl;

    iget-object v0, v0, Lcom/xiaomi/push/fl;->a:Lcom/xiaomi/push/service/ao;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/xiaomi/push/service/ao;->d:J

    const-string v0, "category_coord_up"

    const-string v1, "coord_up"

    const-string v2, "com.xiaomi.xmsf"

    iget-object v3, p0, Lcom/xiaomi/push/service/bt;->a:Lcom/xiaomi/push/fl;

    iget-object v3, v3, Lcom/xiaomi/push/fl;->a:Lcom/xiaomi/push/service/ao;

    invoke-static {v0, v1, v2, v3}, Lcom/xiaomi/push/service/bz;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/xiaomi/push/service/ao;)V
    :try_end_0
    .catch Lcom/xiaomi/push/gh; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/Throwable;)V

    iget-object v1, p0, Lcom/xiaomi/push/service/bt;->a:Lcom/xiaomi/push/service/XMPushService;

    const/16 v2, 0xa

    invoke-virtual {v1, v2, v0}, Lcom/xiaomi/push/service/XMPushService;->a(ILjava/lang/Exception;)V

    :cond_0
    :goto_0
    return-void
.end method
