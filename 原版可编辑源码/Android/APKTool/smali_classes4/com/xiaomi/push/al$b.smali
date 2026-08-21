.class Lcom/xiaomi/push/al$b;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field a:Lcom/xiaomi/push/al$a;


# direct methods
.method public constructor <init>(Lcom/xiaomi/push/al$a;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/xiaomi/push/al$b;->a:Lcom/xiaomi/push/al$a;

    return-void
.end method


# virtual methods
.method a()V
    .locals 0

    return-void
.end method

.method b()V
    .locals 0

    return-void
.end method

.method public run()V
    .locals 1

    invoke-virtual {p0}, Lcom/xiaomi/push/al$b;->a()V

    iget-object v0, p0, Lcom/xiaomi/push/al$b;->a:Lcom/xiaomi/push/al$a;

    invoke-virtual {v0}, Lcom/xiaomi/push/al$a;->run()V

    invoke-virtual {p0}, Lcom/xiaomi/push/al$b;->b()V

    return-void
.end method
