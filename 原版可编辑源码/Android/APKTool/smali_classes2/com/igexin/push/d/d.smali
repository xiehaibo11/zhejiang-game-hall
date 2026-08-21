.class final enum Lcom/igexin/push/d/d;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/igexin/push/d/d;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/igexin/push/d/d;

.field public static final enum b:Lcom/igexin/push/d/d;

.field private static final synthetic c:[Lcom/igexin/push/d/d;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    new-instance v0, Lcom/igexin/push/d/d;

    const/4 v1, 0x0

    const-string v2, "WIFI"

    invoke-direct {v0, v2, v1}, Lcom/igexin/push/d/d;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/d/d;->a:Lcom/igexin/push/d/d;

    new-instance v0, Lcom/igexin/push/d/d;

    const/4 v2, 0x1

    const-string v3, "MOBILE"

    invoke-direct {v0, v3, v2}, Lcom/igexin/push/d/d;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/d/d;->b:Lcom/igexin/push/d/d;

    const/4 v3, 0x2

    new-array v3, v3, [Lcom/igexin/push/d/d;

    sget-object v4, Lcom/igexin/push/d/d;->a:Lcom/igexin/push/d/d;

    aput-object v4, v3, v1

    aput-object v0, v3, v2

    sput-object v3, Lcom/igexin/push/d/d;->c:[Lcom/igexin/push/d/d;

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
