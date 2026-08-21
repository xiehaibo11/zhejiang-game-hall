.class Lcom/xiaomi/push/service/XMPushService$m;
.super Lcom/xiaomi/push/service/XMPushService$j;


# instance fields
.field private a:Lcom/xiaomi/push/gn;

.field final synthetic a:Lcom/xiaomi/push/service/XMPushService;


# direct methods
.method public constructor <init>(Lcom/xiaomi/push/service/XMPushService;Lcom/xiaomi/push/gn;)V
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/service/XMPushService$m;->a:Lcom/xiaomi/push/service/XMPushService;

    const/16 p1, 0x8

    invoke-direct {p0, p1}, Lcom/xiaomi/push/service/XMPushService$j;-><init>(I)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/xiaomi/push/service/XMPushService$m;->a:Lcom/xiaomi/push/gn;

    iput-object p2, p0, Lcom/xiaomi/push/service/XMPushService$m;->a:Lcom/xiaomi/push/gn;

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    const-string v0, "receive a message."

    return-object v0
.end method

.method public a()V
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/service/XMPushService$m;->a:Lcom/xiaomi/push/service/XMPushService;

    invoke-static {v0}, Lcom/xiaomi/push/service/XMPushService;->a(Lcom/xiaomi/push/service/XMPushService;)Lcom/xiaomi/push/service/be;

    move-result-object v0

    iget-object v1, p0, Lcom/xiaomi/push/service/XMPushService$m;->a:Lcom/xiaomi/push/gn;

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/service/be;->a(Lcom/xiaomi/push/gn;)V

    return-void
.end method
