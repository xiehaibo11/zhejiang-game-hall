.class public final enum Lcom/igexin/push/core/a;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/igexin/push/core/a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/igexin/push/core/a;

.field public static final enum b:Lcom/igexin/push/core/a;

.field public static final enum c:Lcom/igexin/push/core/a;

.field private static final synthetic d:[Lcom/igexin/push/core/a;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/igexin/push/core/a;

    const/4 v1, 0x0

    const-string v2, "success"

    invoke-direct {v0, v2, v1}, Lcom/igexin/push/core/a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/core/a;->a:Lcom/igexin/push/core/a;

    new-instance v0, Lcom/igexin/push/core/a;

    const/4 v2, 0x1

    const-string v3, "wait"

    invoke-direct {v0, v3, v2}, Lcom/igexin/push/core/a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/core/a;->b:Lcom/igexin/push/core/a;

    new-instance v0, Lcom/igexin/push/core/a;

    const/4 v3, 0x2

    const-string v4, "stop"

    invoke-direct {v0, v4, v3}, Lcom/igexin/push/core/a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/core/a;->c:Lcom/igexin/push/core/a;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/igexin/push/core/a;

    sget-object v5, Lcom/igexin/push/core/a;->a:Lcom/igexin/push/core/a;

    aput-object v5, v4, v1

    sget-object v1, Lcom/igexin/push/core/a;->b:Lcom/igexin/push/core/a;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/igexin/push/core/a;->d:[Lcom/igexin/push/core/a;

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
