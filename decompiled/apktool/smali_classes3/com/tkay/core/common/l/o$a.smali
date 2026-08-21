.class public final enum Lcom/tkay/core/common/l/o$a;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/l/o;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/tkay/core/common/l/o$a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/tkay/core/common/l/o$a;

.field public static final enum b:Lcom/tkay/core/common/l/o$a;

.field public static final enum c:Lcom/tkay/core/common/l/o$a;

.field private static final synthetic d:[Lcom/tkay/core/common/l/o$a;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 113
    new-instance v0, Lcom/tkay/core/common/l/o$a;

    const/4 v1, 0x0

    const-string v2, "ENABLED"

    invoke-direct {v0, v2, v1}, Lcom/tkay/core/common/l/o$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/core/common/l/o$a;->a:Lcom/tkay/core/common/l/o$a;

    .line 114
    new-instance v0, Lcom/tkay/core/common/l/o$a;

    const/4 v2, 0x1

    const-string v3, "DISABLED"

    invoke-direct {v0, v3, v2}, Lcom/tkay/core/common/l/o$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/core/common/l/o$a;->b:Lcom/tkay/core/common/l/o$a;

    .line 115
    new-instance v0, Lcom/tkay/core/common/l/o$a;

    const/4 v3, 0x2

    const-string v4, "NOT_INSTALLED"

    invoke-direct {v0, v4, v3}, Lcom/tkay/core/common/l/o$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/core/common/l/o$a;->c:Lcom/tkay/core/common/l/o$a;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/tkay/core/common/l/o$a;

    .line 112
    sget-object v5, Lcom/tkay/core/common/l/o$a;->a:Lcom/tkay/core/common/l/o$a;

    aput-object v5, v4, v1

    sget-object v1, Lcom/tkay/core/common/l/o$a;->b:Lcom/tkay/core/common/l/o$a;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/tkay/core/common/l/o$a;->d:[Lcom/tkay/core/common/l/o$a;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 117
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/tkay/core/common/l/o$a;
    .locals 1

    .line 112
    const-class v0, Lcom/tkay/core/common/l/o$a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/common/l/o$a;

    return-object p0
.end method

.method public static values()[Lcom/tkay/core/common/l/o$a;
    .locals 1

    .line 112
    sget-object v0, Lcom/tkay/core/common/l/o$a;->d:[Lcom/tkay/core/common/l/o$a;

    invoke-virtual {v0}, [Lcom/tkay/core/common/l/o$a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/tkay/core/common/l/o$a;

    return-object v0
.end method
