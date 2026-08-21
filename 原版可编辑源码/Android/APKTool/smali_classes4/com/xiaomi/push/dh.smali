.class Lcom/xiaomi/push/dh;
.super Lcom/xiaomi/push/ao$b;


# instance fields
.field a:Lcom/xiaomi/push/ao$b;

.field final synthetic a:Lcom/xiaomi/push/df;


# direct methods
.method constructor <init>(Lcom/xiaomi/push/df;)V
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/dh;->a:Lcom/xiaomi/push/df;

    invoke-direct {p0}, Lcom/xiaomi/push/ao$b;-><init>()V

    return-void
.end method


# virtual methods
.method public b()V
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/dh;->a:Lcom/xiaomi/push/df;

    invoke-static {v0}, Lcom/xiaomi/push/df;->a(Lcom/xiaomi/push/df;)Ljava/util/concurrent/ConcurrentLinkedQueue;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentLinkedQueue;->peek()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/xiaomi/push/df$b;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/xiaomi/push/df$b;->a()Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/xiaomi/push/dh;->a:Lcom/xiaomi/push/df;

    invoke-static {v1}, Lcom/xiaomi/push/df;->a(Lcom/xiaomi/push/df;)Ljava/util/concurrent/ConcurrentLinkedQueue;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ConcurrentLinkedQueue;->remove(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    iput-object v0, p0, Lcom/xiaomi/push/dh;->a:Lcom/xiaomi/push/ao$b;

    :cond_0
    iget-object v0, p0, Lcom/xiaomi/push/dh;->a:Lcom/xiaomi/push/ao$b;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/xiaomi/push/ao$b;->b()V

    :cond_1
    return-void
.end method

.method public c()V
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/dh;->a:Lcom/xiaomi/push/ao$b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/xiaomi/push/ao$b;->c()V

    :cond_0
    return-void
.end method
