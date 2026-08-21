.class public Lcom/xiaomi/push/gz;
.super Ljava/lang/Object;


# static fields
.field private static a:Lcom/xiaomi/push/ao;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Lcom/xiaomi/push/ao;

    const/4 v1, 0x1

    const/16 v2, 0x14

    invoke-direct {v0, v1, v2}, Lcom/xiaomi/push/ao;-><init>(ZI)V

    sput-object v0, Lcom/xiaomi/push/gz;->a:Lcom/xiaomi/push/ao;

    return-void
.end method

.method public static a(Lcom/xiaomi/push/ao$b;)V
    .locals 1

    sget-object v0, Lcom/xiaomi/push/gz;->a:Lcom/xiaomi/push/ao;

    invoke-virtual {v0, p0}, Lcom/xiaomi/push/ao;->a(Lcom/xiaomi/push/ao$b;)V

    return-void
.end method

.method public static a(Lcom/xiaomi/push/ao$b;J)V
    .locals 1

    sget-object v0, Lcom/xiaomi/push/gz;->a:Lcom/xiaomi/push/ao;

    invoke-virtual {v0, p0, p1, p2}, Lcom/xiaomi/push/ao;->a(Lcom/xiaomi/push/ao$b;J)V

    return-void
.end method

.method public static a(Ljava/lang/Runnable;)V
    .locals 2

    sget-object v0, Lcom/xiaomi/push/gz;->a:Lcom/xiaomi/push/ao;

    new-instance v1, Lcom/xiaomi/push/ha;

    invoke-direct {v1, p0}, Lcom/xiaomi/push/ha;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v0, v1}, Lcom/xiaomi/push/ao;->a(Lcom/xiaomi/push/ao$b;)V

    return-void
.end method
