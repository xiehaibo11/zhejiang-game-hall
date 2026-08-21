.class public Lcom/xiaomi/push/fw$a;
.super Ljava/lang/Object;


# instance fields
.field private a:Lcom/xiaomi/push/gb;

.field private a:Lcom/xiaomi/push/gj;


# direct methods
.method public constructor <init>(Lcom/xiaomi/push/gb;Lcom/xiaomi/push/gj;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/xiaomi/push/fw$a;->a:Lcom/xiaomi/push/gb;

    iput-object p2, p0, Lcom/xiaomi/push/fw$a;->a:Lcom/xiaomi/push/gj;

    return-void
.end method


# virtual methods
.method public a(Lcom/xiaomi/push/fl;)V
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/fw$a;->a:Lcom/xiaomi/push/gb;

    invoke-interface {v0, p1}, Lcom/xiaomi/push/gb;->a(Lcom/xiaomi/push/fl;)V

    return-void
.end method

.method public a(Lcom/xiaomi/push/gn;)V
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/fw$a;->a:Lcom/xiaomi/push/gj;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/xiaomi/push/gj;->a(Lcom/xiaomi/push/gn;)Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/xiaomi/push/fw$a;->a:Lcom/xiaomi/push/gb;

    invoke-interface {v0, p1}, Lcom/xiaomi/push/gb;->a(Lcom/xiaomi/push/gn;)V

    :cond_1
    return-void
.end method
