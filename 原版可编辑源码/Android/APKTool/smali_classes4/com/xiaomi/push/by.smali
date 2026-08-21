.class Lcom/xiaomi/push/by;
.super Lcom/xiaomi/push/al$a;


# instance fields
.field final synthetic a:Lcom/xiaomi/push/bx;


# direct methods
.method constructor <init>(Lcom/xiaomi/push/bx;)V
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/by;->a:Lcom/xiaomi/push/bx;

    invoke-direct {p0}, Lcom/xiaomi/push/al$a;-><init>()V

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    const-string v0, "10052"

    return-object v0
.end method

.method public run()V
    .locals 2

    const-string v0, "exec== mUploadJob"

    invoke-static {v0}, Lcom/xiaomi/channel/commonutils/logger/b;->c(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/xiaomi/push/by;->a:Lcom/xiaomi/push/bx;

    invoke-static {v0}, Lcom/xiaomi/push/bx;->a(Lcom/xiaomi/push/bx;)Lcom/xiaomi/push/cn;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/xiaomi/push/by;->a:Lcom/xiaomi/push/bx;

    invoke-static {v0}, Lcom/xiaomi/push/bx;->a(Lcom/xiaomi/push/bx;)Lcom/xiaomi/push/cn;

    move-result-object v0

    iget-object v1, p0, Lcom/xiaomi/push/by;->a:Lcom/xiaomi/push/bx;

    invoke-static {v1}, Lcom/xiaomi/push/bx;->a(Lcom/xiaomi/push/bx;)Landroid/content/Context;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/xiaomi/push/cn;->a(Landroid/content/Context;)V

    iget-object v0, p0, Lcom/xiaomi/push/by;->a:Lcom/xiaomi/push/bx;

    const-string v1, "upload_time"

    invoke-static {v0, v1}, Lcom/xiaomi/push/bx;->a(Lcom/xiaomi/push/bx;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
