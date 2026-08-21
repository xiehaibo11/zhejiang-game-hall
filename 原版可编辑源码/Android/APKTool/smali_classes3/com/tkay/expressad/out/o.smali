.class public final enum Lcom/tkay/expressad/out/o;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/tkay/expressad/out/o;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/tkay/expressad/out/o;

.field public static final enum b:Lcom/tkay/expressad/out/o;

.field public static final enum c:Lcom/tkay/expressad/out/o;

.field private static final synthetic d:[Lcom/tkay/expressad/out/o;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 4
    new-instance v0, Lcom/tkay/expressad/out/o;

    const/4 v1, 0x0

    const-string v2, "undefined"

    invoke-direct {v0, v2, v1}, Lcom/tkay/expressad/out/o;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/expressad/out/o;->a:Lcom/tkay/expressad/out/o;

    .line 5
    new-instance v0, Lcom/tkay/expressad/out/o;

    const/4 v2, 0x1

    const-string v3, "positive"

    invoke-direct {v0, v3, v2}, Lcom/tkay/expressad/out/o;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/expressad/out/o;->b:Lcom/tkay/expressad/out/o;

    .line 6
    new-instance v0, Lcom/tkay/expressad/out/o;

    const/4 v3, 0x2

    const-string v4, "negative"

    invoke-direct {v0, v4, v3}, Lcom/tkay/expressad/out/o;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/expressad/out/o;->c:Lcom/tkay/expressad/out/o;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/tkay/expressad/out/o;

    .line 3
    sget-object v5, Lcom/tkay/expressad/out/o;->a:Lcom/tkay/expressad/out/o;

    aput-object v5, v4, v1

    sget-object v1, Lcom/tkay/expressad/out/o;->b:Lcom/tkay/expressad/out/o;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/tkay/expressad/out/o;->d:[Lcom/tkay/expressad/out/o;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 3
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/tkay/expressad/out/o;
    .locals 1

    .line 3
    const-class v0, Lcom/tkay/expressad/out/o;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/tkay/expressad/out/o;

    return-object p0
.end method

.method public static values()[Lcom/tkay/expressad/out/o;
    .locals 1

    .line 3
    sget-object v0, Lcom/tkay/expressad/out/o;->d:[Lcom/tkay/expressad/out/o;

    invoke-virtual {v0}, [Lcom/tkay/expressad/out/o;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/tkay/expressad/out/o;

    return-object v0
.end method
