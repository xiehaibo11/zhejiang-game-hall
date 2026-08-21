.class Lcom/xiaomi/push/aq;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/xiaomi/push/ao$b;

.field final synthetic a:Lcom/xiaomi/push/ao;


# direct methods
.method constructor <init>(Lcom/xiaomi/push/ao;Lcom/xiaomi/push/ao$b;)V
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/aq;->a:Lcom/xiaomi/push/ao;

    iput-object p2, p0, Lcom/xiaomi/push/aq;->a:Lcom/xiaomi/push/ao$b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/aq;->a:Lcom/xiaomi/push/ao;

    iget-object v1, p0, Lcom/xiaomi/push/aq;->a:Lcom/xiaomi/push/ao$b;

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/ao;->a(Lcom/xiaomi/push/ao$b;)V

    return-void
.end method
