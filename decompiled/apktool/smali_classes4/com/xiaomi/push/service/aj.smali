.class final Lcom/xiaomi/push/service/aj;
.super Lcom/xiaomi/push/service/bx$a;


# instance fields
.field final synthetic a:Lcom/xiaomi/push/service/XMPushService;

.field final synthetic a:Lcom/xiaomi/push/service/t;


# direct methods
.method constructor <init>(Ljava/lang/String;JLcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/service/t;)V
    .locals 0

    iput-object p4, p0, Lcom/xiaomi/push/service/aj;->a:Lcom/xiaomi/push/service/XMPushService;

    iput-object p5, p0, Lcom/xiaomi/push/service/aj;->a:Lcom/xiaomi/push/service/t;

    invoke-direct {p0, p1, p2, p3}, Lcom/xiaomi/push/service/bx$a;-><init>(Ljava/lang/String;J)V

    return-void
.end method


# virtual methods
.method a(Lcom/xiaomi/push/service/bx;)V
    .locals 6

    iget-object v0, p0, Lcom/xiaomi/push/service/aj;->a:Lcom/xiaomi/push/service/XMPushService;

    invoke-static {v0}, Lcom/xiaomi/push/ba;->a(Landroid/content/Context;)Lcom/xiaomi/push/ba;

    move-result-object v0

    const-string v1, "msaid"

    const-string v2, "MSAID"

    invoke-virtual {p1, v2, v1}, Lcom/xiaomi/push/service/bx;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/xiaomi/push/ba;->b()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/xiaomi/push/ba;->a()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/xiaomi/push/ba;->c()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/xiaomi/push/ba;->d()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_0

    invoke-static {v3, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    invoke-virtual {p1, v2, v1, v4}, Lcom/xiaomi/push/service/bx;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    new-instance p1, Lcom/xiaomi/push/ii;

    invoke-direct {p1}, Lcom/xiaomi/push/ii;-><init>()V

    iget-object v1, p0, Lcom/xiaomi/push/service/aj;->a:Lcom/xiaomi/push/service/t;

    iget-object v1, v1, Lcom/xiaomi/push/service/t;->d:Ljava/lang/String;

    invoke-virtual {p1, v1}, Lcom/xiaomi/push/ii;->b(Ljava/lang/String;)Lcom/xiaomi/push/ii;

    sget-object v1, Lcom/xiaomi/push/ht;->g:Lcom/xiaomi/push/ht;

    iget-object v1, v1, Lcom/xiaomi/push/ht;->a:Ljava/lang/String;

    invoke-virtual {p1, v1}, Lcom/xiaomi/push/ii;->c(Ljava/lang/String;)Lcom/xiaomi/push/ii;

    invoke-static {}, Lcom/xiaomi/push/service/bd;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/xiaomi/push/ii;->a(Ljava/lang/String;)Lcom/xiaomi/push/ii;

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {p1, v1}, Lcom/xiaomi/push/ii;->a(Ljava/util/Map;)Lcom/xiaomi/push/ii;

    invoke-virtual {p1}, Lcom/xiaomi/push/ii;->a()Ljava/util/Map;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/ba;->a(Ljava/util/Map;)V

    iget-object v0, p0, Lcom/xiaomi/push/service/aj;->a:Lcom/xiaomi/push/service/XMPushService;

    invoke-virtual {v0}, Lcom/xiaomi/push/service/XMPushService;->getPackageName()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/xiaomi/push/service/aj;->a:Lcom/xiaomi/push/service/t;

    iget-object v1, v1, Lcom/xiaomi/push/service/t;->d:Ljava/lang/String;

    sget-object v2, Lcom/xiaomi/push/hj;->i:Lcom/xiaomi/push/hj;

    invoke-static {v0, v1, p1, v2}, Lcom/xiaomi/push/service/ah;->a(Ljava/lang/String;Ljava/lang/String;Lcom/xiaomi/push/iu;Lcom/xiaomi/push/hj;)Lcom/xiaomi/push/if;

    move-result-object p1

    invoke-static {p1}, Lcom/xiaomi/push/it;->a(Lcom/xiaomi/push/iu;)[B

    move-result-object p1

    iget-object v0, p0, Lcom/xiaomi/push/service/aj;->a:Lcom/xiaomi/push/service/XMPushService;

    invoke-virtual {v0}, Lcom/xiaomi/push/service/XMPushService;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v0, v1, p1, v2}, Lcom/xiaomi/push/service/XMPushService;->a(Ljava/lang/String;[BZ)V

    :cond_0
    return-void
.end method
