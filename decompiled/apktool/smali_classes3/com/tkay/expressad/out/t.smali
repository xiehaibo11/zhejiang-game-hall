.class public final enum Lcom/tkay/expressad/out/t;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/tkay/expressad/out/t;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/tkay/expressad/out/t;

.field public static final enum b:Lcom/tkay/expressad/out/t;

.field public static final enum c:Lcom/tkay/expressad/out/t;

.field public static final enum d:Lcom/tkay/expressad/out/t;

.field private static final synthetic f:[Lcom/tkay/expressad/out/t;


# instance fields
.field private e:I


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 5
    new-instance v0, Lcom/tkay/expressad/out/t;

    const/4 v1, 0x0

    const/4 v2, 0x1

    const-string v3, "FloatBall"

    invoke-direct {v0, v3, v1, v2}, Lcom/tkay/expressad/out/t;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/tkay/expressad/out/t;->a:Lcom/tkay/expressad/out/t;

    .line 6
    new-instance v0, Lcom/tkay/expressad/out/t;

    const/4 v3, 0x4

    const-string v4, "BigView"

    invoke-direct {v0, v4, v2, v3}, Lcom/tkay/expressad/out/t;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/tkay/expressad/out/t;->b:Lcom/tkay/expressad/out/t;

    .line 7
    new-instance v0, Lcom/tkay/expressad/out/t;

    const/4 v4, 0x3

    const/4 v5, 0x2

    const-string v6, "MediumView"

    invoke-direct {v0, v6, v5, v4}, Lcom/tkay/expressad/out/t;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/tkay/expressad/out/t;->c:Lcom/tkay/expressad/out/t;

    .line 8
    new-instance v0, Lcom/tkay/expressad/out/t;

    const-string v6, "SmallView"

    invoke-direct {v0, v6, v4, v5}, Lcom/tkay/expressad/out/t;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/tkay/expressad/out/t;->d:Lcom/tkay/expressad/out/t;

    new-array v3, v3, [Lcom/tkay/expressad/out/t;

    .line 4
    sget-object v6, Lcom/tkay/expressad/out/t;->a:Lcom/tkay/expressad/out/t;

    aput-object v6, v3, v1

    sget-object v1, Lcom/tkay/expressad/out/t;->b:Lcom/tkay/expressad/out/t;

    aput-object v1, v3, v2

    sget-object v1, Lcom/tkay/expressad/out/t;->c:Lcom/tkay/expressad/out/t;

    aput-object v1, v3, v5

    aput-object v0, v3, v4

    sput-object v3, Lcom/tkay/expressad/out/t;->f:[Lcom/tkay/expressad/out/t;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)V"
        }
    .end annotation

    .line 10
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    .line 11
    iput p3, p0, Lcom/tkay/expressad/out/t;->e:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/tkay/expressad/out/t;
    .locals 1

    .line 4
    const-class v0, Lcom/tkay/expressad/out/t;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/tkay/expressad/out/t;

    return-object p0
.end method

.method public static values()[Lcom/tkay/expressad/out/t;
    .locals 1

    .line 4
    sget-object v0, Lcom/tkay/expressad/out/t;->f:[Lcom/tkay/expressad/out/t;

    invoke-virtual {v0}, [Lcom/tkay/expressad/out/t;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/tkay/expressad/out/t;

    return-object v0
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 14
    iget v0, p0, Lcom/tkay/expressad/out/t;->e:I

    return v0
.end method
