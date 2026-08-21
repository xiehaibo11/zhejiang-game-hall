.class public Lcom/xiaomi/push/service/bm;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/xiaomi/push/eh;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;Ljava/util/HashMap;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    new-instance v0, Lcom/xiaomi/push/ii;

    invoke-direct {v0}, Lcom/xiaomi/push/ii;-><init>()V

    invoke-static {p1}, Lcom/xiaomi/push/ed;->a(Landroid/content/Context;)Lcom/xiaomi/push/ed;

    move-result-object v1

    invoke-virtual {v1}, Lcom/xiaomi/push/ed;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/ii;->b(Ljava/lang/String;)Lcom/xiaomi/push/ii;

    invoke-static {p1}, Lcom/xiaomi/push/ed;->a(Landroid/content/Context;)Lcom/xiaomi/push/ed;

    move-result-object v1

    invoke-virtual {v1}, Lcom/xiaomi/push/ed;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/ii;->d(Ljava/lang/String;)Lcom/xiaomi/push/ii;

    sget-object v1, Lcom/xiaomi/push/ht;->I:Lcom/xiaomi/push/ht;

    iget-object v1, v1, Lcom/xiaomi/push/ht;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/ii;->c(Ljava/lang/String;)Lcom/xiaomi/push/ii;

    invoke-static {}, Lcom/xiaomi/push/service/bd;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/ii;->a(Ljava/lang/String;)Lcom/xiaomi/push/ii;

    iput-object p2, v0, Lcom/xiaomi/push/ii;->a:Ljava/util/Map;

    invoke-virtual {v0}, Lcom/xiaomi/push/ii;->c()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0}, Lcom/xiaomi/push/ii;->b()Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/xiaomi/push/hj;->i:Lcom/xiaomi/push/hj;

    invoke-static {p2, v1, v0, v2}, Lcom/xiaomi/push/service/ah;->a(Ljava/lang/String;Ljava/lang/String;Lcom/xiaomi/push/iu;Lcom/xiaomi/push/hj;)Lcom/xiaomi/push/if;

    move-result-object p2

    invoke-static {p2}, Lcom/xiaomi/push/it;->a(Lcom/xiaomi/push/iu;)[B

    move-result-object p2

    instance-of v1, p1, Lcom/xiaomi/push/service/XMPushService;

    if-eqz v1, :cond_0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "MoleInfo : send data directly in pushLayer "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/xiaomi/push/ii;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    move-object v0, p1

    check-cast v0, Lcom/xiaomi/push/service/XMPushService;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    const/4 v1, 0x1

    invoke-virtual {v0, p1, p2, v1}, Lcom/xiaomi/push/service/XMPushService;->a(Ljava/lang/String;[BZ)V

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "MoleInfo : context is not correct in pushLayer "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/xiaomi/push/ii;->a()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public b(Landroid/content/Context;Ljava/util/HashMap;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    invoke-static {p1}, Lcom/xiaomi/push/hg;->a(Landroid/content/Context;)Lcom/xiaomi/push/hg;

    move-result-object v0

    if-eqz v0, :cond_0

    const-wide/16 v3, 0x1

    invoke-static {p2}, Lcom/xiaomi/push/dy;->a(Ljava/util/HashMap;)Ljava/lang/String;

    move-result-object v5

    const-string v1, "category_awake_app"

    const-string v2, "wake_up_app"

    invoke-virtual/range {v0 .. v5}, Lcom/xiaomi/push/hg;->a(Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;)Z

    :cond_0
    return-void
.end method

.method public c(Landroid/content/Context;Ljava/util/HashMap;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "MoleInfo\uff1a\u3000"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p2}, Lcom/xiaomi/push/dy;->b(Ljava/util/HashMap;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/xiaomi/channel/commonutils/logger/b;->a(Ljava/lang/String;)V

    return-void
.end method
