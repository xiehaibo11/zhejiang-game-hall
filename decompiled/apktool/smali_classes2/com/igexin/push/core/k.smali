.class final enum Lcom/igexin/push/core/k;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/igexin/push/core/k;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/igexin/push/core/k;

.field public static final enum b:Lcom/igexin/push/core/k;

.field public static final enum c:Lcom/igexin/push/core/k;

.field private static final synthetic d:[Lcom/igexin/push/core/k;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/igexin/push/core/k;

    const/4 v1, 0x0

    const-string v2, "DETECT"

    invoke-direct {v0, v2, v1}, Lcom/igexin/push/core/k;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/core/k;->a:Lcom/igexin/push/core/k;

    new-instance v0, Lcom/igexin/push/core/k;

    const/4 v2, 0x1

    const-string v3, "STABLE"

    invoke-direct {v0, v3, v2}, Lcom/igexin/push/core/k;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/core/k;->b:Lcom/igexin/push/core/k;

    new-instance v0, Lcom/igexin/push/core/k;

    const/4 v3, 0x2

    const-string v4, "PENDING"

    invoke-direct {v0, v4, v3}, Lcom/igexin/push/core/k;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/core/k;->c:Lcom/igexin/push/core/k;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/igexin/push/core/k;

    sget-object v5, Lcom/igexin/push/core/k;->a:Lcom/igexin/push/core/k;

    aput-object v5, v4, v1

    sget-object v1, Lcom/igexin/push/core/k;->b:Lcom/igexin/push/core/k;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/igexin/push/core/k;->d:[Lcom/igexin/push/core/k;

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

.method public static a()[Lcom/igexin/push/core/k;
    .locals 1

    sget-object v0, Lcom/igexin/push/core/k;->d:[Lcom/igexin/push/core/k;

    invoke-virtual {v0}, [Lcom/igexin/push/core/k;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/igexin/push/core/k;

    return-object v0
.end method
