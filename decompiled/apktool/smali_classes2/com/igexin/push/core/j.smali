.class public final enum Lcom/igexin/push/core/j;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/igexin/push/core/j;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/igexin/push/core/j;

.field public static final enum b:Lcom/igexin/push/core/j;

.field public static final enum c:Lcom/igexin/push/core/j;

.field public static final enum d:Lcom/igexin/push/core/j;

.field private static final synthetic e:[Lcom/igexin/push/core/j;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    new-instance v0, Lcom/igexin/push/core/j;

    const/4 v1, 0x0

    const-string v2, "HEARTBEAT_OK"

    invoke-direct {v0, v2, v1}, Lcom/igexin/push/core/j;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/core/j;->a:Lcom/igexin/push/core/j;

    new-instance v0, Lcom/igexin/push/core/j;

    const/4 v2, 0x1

    const-string v3, "HEARTBEAT_TIMEOUT"

    invoke-direct {v0, v3, v2}, Lcom/igexin/push/core/j;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/core/j;->b:Lcom/igexin/push/core/j;

    new-instance v0, Lcom/igexin/push/core/j;

    const/4 v3, 0x2

    const-string v4, "NETWORK_ERROR"

    invoke-direct {v0, v4, v3}, Lcom/igexin/push/core/j;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/core/j;->c:Lcom/igexin/push/core/j;

    new-instance v0, Lcom/igexin/push/core/j;

    const/4 v4, 0x3

    const-string v5, "NETWORK_SWITCH"

    invoke-direct {v0, v5, v4}, Lcom/igexin/push/core/j;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/core/j;->d:Lcom/igexin/push/core/j;

    const/4 v5, 0x4

    new-array v5, v5, [Lcom/igexin/push/core/j;

    sget-object v6, Lcom/igexin/push/core/j;->a:Lcom/igexin/push/core/j;

    aput-object v6, v5, v1

    sget-object v1, Lcom/igexin/push/core/j;->b:Lcom/igexin/push/core/j;

    aput-object v1, v5, v2

    sget-object v1, Lcom/igexin/push/core/j;->c:Lcom/igexin/push/core/j;

    aput-object v1, v5, v3

    aput-object v0, v5, v4

    sput-object v5, Lcom/igexin/push/core/j;->e:[Lcom/igexin/push/core/j;

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

.method public static a()[Lcom/igexin/push/core/j;
    .locals 1

    sget-object v0, Lcom/igexin/push/core/j;->e:[Lcom/igexin/push/core/j;

    invoke-virtual {v0}, [Lcom/igexin/push/core/j;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/igexin/push/core/j;

    return-object v0
.end method
