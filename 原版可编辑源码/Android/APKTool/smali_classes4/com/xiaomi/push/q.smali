.class public final enum Lcom/xiaomi/push/q;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/xiaomi/push/q;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/xiaomi/push/q;

.field private static final synthetic a:[Lcom/xiaomi/push/q;

.field public static final enum b:Lcom/xiaomi/push/q;

.field public static final enum c:Lcom/xiaomi/push/q;

.field public static final enum d:Lcom/xiaomi/push/q;

.field public static final enum e:Lcom/xiaomi/push/q;


# direct methods
.method static constructor <clinit>()V
    .locals 8

    new-instance v0, Lcom/xiaomi/push/q;

    const/4 v1, 0x0

    const-string v2, "China"

    invoke-direct {v0, v2, v1}, Lcom/xiaomi/push/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/xiaomi/push/q;->a:Lcom/xiaomi/push/q;

    new-instance v0, Lcom/xiaomi/push/q;

    const/4 v2, 0x1

    const-string v3, "Global"

    invoke-direct {v0, v3, v2}, Lcom/xiaomi/push/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/xiaomi/push/q;->b:Lcom/xiaomi/push/q;

    new-instance v0, Lcom/xiaomi/push/q;

    const/4 v3, 0x2

    const-string v4, "Europe"

    invoke-direct {v0, v4, v3}, Lcom/xiaomi/push/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/xiaomi/push/q;->c:Lcom/xiaomi/push/q;

    new-instance v0, Lcom/xiaomi/push/q;

    const/4 v4, 0x3

    const-string v5, "Russia"

    invoke-direct {v0, v5, v4}, Lcom/xiaomi/push/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/xiaomi/push/q;->d:Lcom/xiaomi/push/q;

    new-instance v0, Lcom/xiaomi/push/q;

    const/4 v5, 0x4

    const-string v6, "India"

    invoke-direct {v0, v6, v5}, Lcom/xiaomi/push/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/xiaomi/push/q;->e:Lcom/xiaomi/push/q;

    const/4 v6, 0x5

    new-array v6, v6, [Lcom/xiaomi/push/q;

    sget-object v7, Lcom/xiaomi/push/q;->a:Lcom/xiaomi/push/q;

    aput-object v7, v6, v1

    sget-object v1, Lcom/xiaomi/push/q;->b:Lcom/xiaomi/push/q;

    aput-object v1, v6, v2

    sget-object v1, Lcom/xiaomi/push/q;->c:Lcom/xiaomi/push/q;

    aput-object v1, v6, v3

    sget-object v1, Lcom/xiaomi/push/q;->d:Lcom/xiaomi/push/q;

    aput-object v1, v6, v4

    aput-object v0, v6, v5

    sput-object v6, Lcom/xiaomi/push/q;->a:[Lcom/xiaomi/push/q;

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

.method public static valueOf(Ljava/lang/String;)Lcom/xiaomi/push/q;
    .locals 1

    const-class v0, Lcom/xiaomi/push/q;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/xiaomi/push/q;

    return-object p0
.end method

.method public static values()[Lcom/xiaomi/push/q;
    .locals 1

    sget-object v0, Lcom/xiaomi/push/q;->a:[Lcom/xiaomi/push/q;

    invoke-virtual {v0}, [Lcom/xiaomi/push/q;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/xiaomi/push/q;

    return-object v0
.end method
