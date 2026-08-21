.class Lcom/xiaomi/push/az;
.super Ljava/lang/Object;


# static fields
.field static a:I


# direct methods
.method public static a(Landroid/content/Context;)Lcom/xiaomi/push/au;
    .locals 1

    invoke-static {}, Lcom/xiaomi/push/m;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    sput v0, Lcom/xiaomi/push/az;->a:I

    new-instance v0, Lcom/xiaomi/push/ay;

    invoke-direct {v0, p0}, Lcom/xiaomi/push/ay;-><init>(Landroid/content/Context;)V

    return-object v0

    :cond_0
    invoke-static {p0}, Lcom/xiaomi/push/as;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x2

    sput v0, Lcom/xiaomi/push/az;->a:I

    new-instance v0, Lcom/xiaomi/push/as;

    invoke-direct {v0, p0}, Lcom/xiaomi/push/as;-><init>(Landroid/content/Context;)V

    return-object v0

    :cond_1
    invoke-static {p0}, Lcom/xiaomi/push/bb;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v0, 0x4

    sput v0, Lcom/xiaomi/push/az;->a:I

    new-instance v0, Lcom/xiaomi/push/bb;

    invoke-direct {v0, p0}, Lcom/xiaomi/push/bb;-><init>(Landroid/content/Context;)V

    return-object v0

    :cond_2
    invoke-static {p0}, Lcom/xiaomi/push/bf;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_3

    const/4 v0, 0x5

    sput v0, Lcom/xiaomi/push/az;->a:I

    new-instance v0, Lcom/xiaomi/push/bf;

    invoke-direct {v0, p0}, Lcom/xiaomi/push/bf;-><init>(Landroid/content/Context;)V

    return-object v0

    :cond_3
    invoke-static {p0}, Lcom/xiaomi/push/ax;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_4

    const/4 v0, 0x3

    sput v0, Lcom/xiaomi/push/az;->a:I

    new-instance v0, Lcom/xiaomi/push/av;

    invoke-direct {v0, p0}, Lcom/xiaomi/push/av;-><init>(Landroid/content/Context;)V

    return-object v0

    :cond_4
    const/4 p0, 0x0

    sput p0, Lcom/xiaomi/push/az;->a:I

    new-instance p0, Lcom/xiaomi/push/be;

    invoke-direct {p0}, Lcom/xiaomi/push/be;-><init>()V

    return-object p0
.end method
