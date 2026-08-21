.class public Lcom/xiaomi/mipush/sdk/ae;
.super Lcom/xiaomi/push/al$a;


# instance fields
.field private a:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Lcom/xiaomi/push/al$a;-><init>()V

    iput-object p1, p0, Lcom/xiaomi/mipush/sdk/ae;->a:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    const-string v0, "2"

    return-object v0
.end method

.method public run()V
    .locals 4

    iget-object v0, p0, Lcom/xiaomi/mipush/sdk/ae;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/xiaomi/push/service/ba;->a(Landroid/content/Context;)Lcom/xiaomi/push/service/ba;

    move-result-object v0

    new-instance v1, Lcom/xiaomi/push/ib;

    invoke-direct {v1}, Lcom/xiaomi/push/ib;-><init>()V

    sget-object v2, Lcom/xiaomi/push/hp;->a:Lcom/xiaomi/push/hp;

    invoke-static {v0, v2}, Lcom/xiaomi/push/service/bb;->a(Lcom/xiaomi/push/service/ba;Lcom/xiaomi/push/hp;)I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/xiaomi/push/ib;->a(I)Lcom/xiaomi/push/ib;

    sget-object v2, Lcom/xiaomi/push/hp;->b:Lcom/xiaomi/push/hp;

    invoke-static {v0, v2}, Lcom/xiaomi/push/service/bb;->a(Lcom/xiaomi/push/service/ba;Lcom/xiaomi/push/hp;)I

    move-result v0

    invoke-virtual {v1, v0}, Lcom/xiaomi/push/ib;->b(I)Lcom/xiaomi/push/ib;

    new-instance v0, Lcom/xiaomi/push/ii;

    const-string v2, "-1"

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/xiaomi/push/ii;-><init>(Ljava/lang/String;Z)V

    sget-object v2, Lcom/xiaomi/push/ht;->p:Lcom/xiaomi/push/ht;

    iget-object v2, v2, Lcom/xiaomi/push/ht;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/xiaomi/push/ii;->c(Ljava/lang/String;)Lcom/xiaomi/push/ii;

    invoke-static {v1}, Lcom/xiaomi/push/it;->a(Lcom/xiaomi/push/iu;)[B

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/ii;->a([B)Lcom/xiaomi/push/ii;

    iget-object v1, p0, Lcom/xiaomi/mipush/sdk/ae;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/xiaomi/mipush/sdk/ao;->a(Landroid/content/Context;)Lcom/xiaomi/mipush/sdk/ao;

    move-result-object v1

    sget-object v2, Lcom/xiaomi/push/hj;->i:Lcom/xiaomi/push/hj;

    const/4 v3, 0x0

    invoke-virtual {v1, v0, v2, v3}, Lcom/xiaomi/mipush/sdk/ao;->a(Lcom/xiaomi/push/iu;Lcom/xiaomi/push/hj;Lcom/xiaomi/push/hw;)V

    return-void
.end method
