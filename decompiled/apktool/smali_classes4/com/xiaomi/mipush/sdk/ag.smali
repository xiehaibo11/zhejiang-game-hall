.class public final enum Lcom/xiaomi/mipush/sdk/ag;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/xiaomi/mipush/sdk/ag;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/xiaomi/mipush/sdk/ag;

.field private static final synthetic a:[Lcom/xiaomi/mipush/sdk/ag;

.field public static final enum b:Lcom/xiaomi/mipush/sdk/ag;

.field public static final enum c:Lcom/xiaomi/mipush/sdk/ag;

.field public static final enum d:Lcom/xiaomi/mipush/sdk/ag;

.field public static final enum e:Lcom/xiaomi/mipush/sdk/ag;

.field public static final enum f:Lcom/xiaomi/mipush/sdk/ag;


# direct methods
.method static constructor <clinit>()V
    .locals 9

    new-instance v0, Lcom/xiaomi/mipush/sdk/ag;

    const/4 v1, 0x0

    const-string v2, "HUAWEI"

    invoke-direct {v0, v2, v1}, Lcom/xiaomi/mipush/sdk/ag;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/xiaomi/mipush/sdk/ag;->a:Lcom/xiaomi/mipush/sdk/ag;

    new-instance v0, Lcom/xiaomi/mipush/sdk/ag;

    const/4 v2, 0x1

    const-string v3, "MEIZU"

    invoke-direct {v0, v3, v2}, Lcom/xiaomi/mipush/sdk/ag;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/xiaomi/mipush/sdk/ag;->b:Lcom/xiaomi/mipush/sdk/ag;

    new-instance v0, Lcom/xiaomi/mipush/sdk/ag;

    const/4 v3, 0x2

    const-string v4, "FCM"

    invoke-direct {v0, v4, v3}, Lcom/xiaomi/mipush/sdk/ag;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/xiaomi/mipush/sdk/ag;->c:Lcom/xiaomi/mipush/sdk/ag;

    new-instance v0, Lcom/xiaomi/mipush/sdk/ag;

    const/4 v4, 0x3

    const-string v5, "OPPO"

    invoke-direct {v0, v5, v4}, Lcom/xiaomi/mipush/sdk/ag;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/xiaomi/mipush/sdk/ag;->d:Lcom/xiaomi/mipush/sdk/ag;

    new-instance v0, Lcom/xiaomi/mipush/sdk/ag;

    const/4 v5, 0x4

    const-string v6, "VIVO"

    invoke-direct {v0, v6, v5}, Lcom/xiaomi/mipush/sdk/ag;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/xiaomi/mipush/sdk/ag;->e:Lcom/xiaomi/mipush/sdk/ag;

    new-instance v0, Lcom/xiaomi/mipush/sdk/ag;

    const/4 v6, 0x5

    const-string v7, "OTHER"

    invoke-direct {v0, v7, v6}, Lcom/xiaomi/mipush/sdk/ag;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/xiaomi/mipush/sdk/ag;->f:Lcom/xiaomi/mipush/sdk/ag;

    const/4 v7, 0x6

    new-array v7, v7, [Lcom/xiaomi/mipush/sdk/ag;

    sget-object v8, Lcom/xiaomi/mipush/sdk/ag;->a:Lcom/xiaomi/mipush/sdk/ag;

    aput-object v8, v7, v1

    sget-object v1, Lcom/xiaomi/mipush/sdk/ag;->b:Lcom/xiaomi/mipush/sdk/ag;

    aput-object v1, v7, v2

    sget-object v1, Lcom/xiaomi/mipush/sdk/ag;->c:Lcom/xiaomi/mipush/sdk/ag;

    aput-object v1, v7, v3

    sget-object v1, Lcom/xiaomi/mipush/sdk/ag;->d:Lcom/xiaomi/mipush/sdk/ag;

    aput-object v1, v7, v4

    sget-object v1, Lcom/xiaomi/mipush/sdk/ag;->e:Lcom/xiaomi/mipush/sdk/ag;

    aput-object v1, v7, v5

    aput-object v0, v7, v6

    sput-object v7, Lcom/xiaomi/mipush/sdk/ag;->a:[Lcom/xiaomi/mipush/sdk/ag;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/xiaomi/mipush/sdk/ag;
    .locals 1

    const-class v0, Lcom/xiaomi/mipush/sdk/ag;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/xiaomi/mipush/sdk/ag;

    return-object p0
.end method

.method public static values()[Lcom/xiaomi/mipush/sdk/ag;
    .locals 1

    sget-object v0, Lcom/xiaomi/mipush/sdk/ag;->a:[Lcom/xiaomi/mipush/sdk/ag;

    invoke-virtual {v0}, [Lcom/xiaomi/mipush/sdk/ag;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/xiaomi/mipush/sdk/ag;

    return-object v0
.end method
