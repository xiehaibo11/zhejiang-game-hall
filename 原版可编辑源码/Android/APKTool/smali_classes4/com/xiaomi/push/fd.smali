.class Lcom/xiaomi/push/fd;
.super Lcom/xiaomi/push/service/XMPushService$j;


# instance fields
.field final synthetic a:Lcom/xiaomi/push/fc;


# direct methods
.method constructor <init>(Lcom/xiaomi/push/fc;I)V
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/fd;->a:Lcom/xiaomi/push/fc;

    invoke-direct {p0, p2}, Lcom/xiaomi/push/service/XMPushService$j;-><init>(I)V

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    const-string v0, "Handling bind stats"

    return-object v0
.end method

.method public a()V
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/fd;->a:Lcom/xiaomi/push/fc;

    invoke-static {v0}, Lcom/xiaomi/push/fc;->a(Lcom/xiaomi/push/fc;)V

    return-void
.end method
