.class Lcom/xiaomi/push/ds;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/xiaomi/push/dr;


# direct methods
.method constructor <init>(Lcom/xiaomi/push/dr;)V
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/ds;->a:Lcom/xiaomi/push/dr;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/ds;->a:Lcom/xiaomi/push/dr;

    invoke-static {v0}, Lcom/xiaomi/push/dr;->a(Lcom/xiaomi/push/dr;)V

    return-void
.end method
