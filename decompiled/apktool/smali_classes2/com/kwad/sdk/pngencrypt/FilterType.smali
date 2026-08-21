.class public final enum Lcom/kwad/sdk/pngencrypt/FilterType;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kwad/sdk/pngencrypt/FilterType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_ADAPTIVE_FAST:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_ADAPTIVE_FULL:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_ADAPTIVE_MEDIUM:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_AGGRESSIVE:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_AVERAGE:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_CYCLIC:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_DEFAULT:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_NONE:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_PAETH:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_PRESERVE:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_SUB:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_SUPER_ADAPTIVE:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_UNKNOWN:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_UP:Lcom/kwad/sdk/pngencrypt/FilterType;

.field public static final enum FILTER_VERYAGGRESSIVE:Lcom/kwad/sdk/pngencrypt/FilterType;

.field private static byVal:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Lcom/kwad/sdk/pngencrypt/FilterType;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field public final val:I


# direct methods
.method static constructor <clinit>()V
    .locals 16

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v1, 0x0

    const-string v2, "FILTER_NONE"

    invoke-direct {v0, v2, v1, v1}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_NONE:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x1

    const-string v3, "FILTER_SUB"

    invoke-direct {v0, v3, v2, v2}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_SUB:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v3, 0x2

    const-string v4, "FILTER_UP"

    invoke-direct {v0, v4, v3, v3}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_UP:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v4, 0x3

    const-string v5, "FILTER_AVERAGE"

    invoke-direct {v0, v5, v4, v4}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_AVERAGE:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v5, 0x4

    const-string v6, "FILTER_PAETH"

    invoke-direct {v0, v6, v5, v5}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_PAETH:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v6, 0x5

    const-string v7, "FILTER_DEFAULT"

    const/4 v8, -0x1

    invoke-direct {v0, v7, v6, v8}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_DEFAULT:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v7, -0x2

    const/4 v8, 0x6

    const-string v9, "FILTER_AGGRESSIVE"

    invoke-direct {v0, v9, v8, v7}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_AGGRESSIVE:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v9, -0x4

    const/4 v10, 0x7

    const-string v11, "FILTER_VERYAGGRESSIVE"

    invoke-direct {v0, v11, v10, v9}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_VERYAGGRESSIVE:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/16 v11, 0x8

    const-string v12, "FILTER_ADAPTIVE_FULL"

    invoke-direct {v0, v12, v11, v9}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_ADAPTIVE_FULL:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/16 v9, 0x9

    const-string v12, "FILTER_ADAPTIVE_MEDIUM"

    const/4 v13, -0x3

    invoke-direct {v0, v12, v9, v13}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_ADAPTIVE_MEDIUM:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/16 v12, 0xa

    const-string v13, "FILTER_ADAPTIVE_FAST"

    invoke-direct {v0, v13, v12, v7}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_ADAPTIVE_FAST:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/16 v7, 0xb

    const-string v13, "FILTER_SUPER_ADAPTIVE"

    const/16 v14, -0xa

    invoke-direct {v0, v13, v7, v14}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_SUPER_ADAPTIVE:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/16 v13, 0xc

    const-string v14, "FILTER_PRESERVE"

    const/16 v15, -0x28

    invoke-direct {v0, v14, v13, v15}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_PRESERVE:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/16 v14, 0xd

    const-string v15, "FILTER_CYCLIC"

    const/16 v13, -0x32

    invoke-direct {v0, v15, v14, v13}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_CYCLIC:Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    const/16 v13, 0xe

    const-string v15, "FILTER_UNKNOWN"

    const/16 v14, -0x64

    invoke-direct {v0, v15, v13, v14}, Lcom/kwad/sdk/pngencrypt/FilterType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_UNKNOWN:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/16 v14, 0xf

    new-array v14, v14, [Lcom/kwad/sdk/pngencrypt/FilterType;

    sget-object v15, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_NONE:Lcom/kwad/sdk/pngencrypt/FilterType;

    aput-object v15, v14, v1

    sget-object v15, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_SUB:Lcom/kwad/sdk/pngencrypt/FilterType;

    aput-object v15, v14, v2

    sget-object v2, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_UP:Lcom/kwad/sdk/pngencrypt/FilterType;

    aput-object v2, v14, v3

    sget-object v2, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_AVERAGE:Lcom/kwad/sdk/pngencrypt/FilterType;

    aput-object v2, v14, v4

    sget-object v2, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_PAETH:Lcom/kwad/sdk/pngencrypt/FilterType;

    aput-object v2, v14, v5

    sget-object v2, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_DEFAULT:Lcom/kwad/sdk/pngencrypt/FilterType;

    aput-object v2, v14, v6

    sget-object v2, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_AGGRESSIVE:Lcom/kwad/sdk/pngencrypt/FilterType;

    aput-object v2, v14, v8

    sget-object v2, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_VERYAGGRESSIVE:Lcom/kwad/sdk/pngencrypt/FilterType;

    aput-object v2, v14, v10

    sget-object v2, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_ADAPTIVE_FULL:Lcom/kwad/sdk/pngencrypt/FilterType;

    aput-object v2, v14, v11

    sget-object v2, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_ADAPTIVE_MEDIUM:Lcom/kwad/sdk/pngencrypt/FilterType;

    aput-object v2, v14, v9

    sget-object v2, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_ADAPTIVE_FAST:Lcom/kwad/sdk/pngencrypt/FilterType;

    aput-object v2, v14, v12

    sget-object v2, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_SUPER_ADAPTIVE:Lcom/kwad/sdk/pngencrypt/FilterType;

    aput-object v2, v14, v7

    sget-object v2, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_PRESERVE:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/16 v3, 0xc

    aput-object v2, v14, v3

    sget-object v2, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_CYCLIC:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/16 v3, 0xd

    aput-object v2, v14, v3

    aput-object v0, v14, v13

    sput-object v14, Lcom/kwad/sdk/pngencrypt/FilterType;->$VALUES:[Lcom/kwad/sdk/pngencrypt/FilterType;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->byVal:Ljava/util/HashMap;

    invoke-static {}, Lcom/kwad/sdk/pngencrypt/FilterType;->values()[Lcom/kwad/sdk/pngencrypt/FilterType;

    move-result-object v0

    array-length v2, v0

    :goto_0
    if-ge v1, v2, :cond_0

    aget-object v3, v0, v1

    sget-object v4, Lcom/kwad/sdk/pngencrypt/FilterType;->byVal:Ljava/util/HashMap;

    iget v5, v3, Lcom/kwad/sdk/pngencrypt/FilterType;->val:I

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v4, v5, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private constructor <init>(Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput p3, p0, Lcom/kwad/sdk/pngencrypt/FilterType;->val:I

    return-void
.end method

.method public static getAllStandard()[Lcom/kwad/sdk/pngencrypt/FilterType;
    .locals 3

    const/4 v0, 0x5

    new-array v0, v0, [Lcom/kwad/sdk/pngencrypt/FilterType;

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_NONE:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_SUB:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x1

    aput-object v1, v0, v2

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_UP:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x2

    aput-object v1, v0, v2

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_AVERAGE:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x3

    aput-object v1, v0, v2

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_PAETH:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x4

    aput-object v1, v0, v2

    return-object v0
.end method

.method public static getAllStandardExceptNone()[Lcom/kwad/sdk/pngencrypt/FilterType;
    .locals 3

    const/4 v0, 0x4

    new-array v0, v0, [Lcom/kwad/sdk/pngencrypt/FilterType;

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_SUB:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_UP:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x1

    aput-object v1, v0, v2

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_AVERAGE:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x2

    aput-object v1, v0, v2

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_PAETH:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x3

    aput-object v1, v0, v2

    return-object v0
.end method

.method static getAllStandardForFirstRow()[Lcom/kwad/sdk/pngencrypt/FilterType;
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [Lcom/kwad/sdk/pngencrypt/FilterType;

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_SUB:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_NONE:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x1

    aput-object v1, v0, v2

    return-object v0
.end method

.method public static getAllStandardNoneLast()[Lcom/kwad/sdk/pngencrypt/FilterType;
    .locals 3

    const/4 v0, 0x5

    new-array v0, v0, [Lcom/kwad/sdk/pngencrypt/FilterType;

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_SUB:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_UP:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x1

    aput-object v1, v0, v2

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_AVERAGE:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x2

    aput-object v1, v0, v2

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_PAETH:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x3

    aput-object v1, v0, v2

    sget-object v1, Lcom/kwad/sdk/pngencrypt/FilterType;->FILTER_NONE:Lcom/kwad/sdk/pngencrypt/FilterType;

    const/4 v2, 0x4

    aput-object v1, v0, v2

    return-object v0
.end method

.method public static getByVal(I)Lcom/kwad/sdk/pngencrypt/FilterType;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->byVal:Ljava/util/HashMap;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/pngencrypt/FilterType;

    return-object p0
.end method

.method public static isAdaptive(Lcom/kwad/sdk/pngencrypt/FilterType;)Z
    .locals 1

    iget p0, p0, Lcom/kwad/sdk/pngencrypt/FilterType;->val:I

    const/4 v0, -0x2

    if-gt p0, v0, :cond_0

    const/4 v0, -0x4

    if-lt p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static isValidStandard(I)Z
    .locals 1

    if-ltz p0, :cond_0

    const/4 v0, 0x4

    if-gt p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static isValidStandard(Lcom/kwad/sdk/pngencrypt/FilterType;)Z
    .locals 0

    if-eqz p0, :cond_0

    iget p0, p0, Lcom/kwad/sdk/pngencrypt/FilterType;->val:I

    invoke-static {p0}, Lcom/kwad/sdk/pngencrypt/FilterType;->isValidStandard(I)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/kwad/sdk/pngencrypt/FilterType;
    .locals 1

    const-class v0, Lcom/kwad/sdk/pngencrypt/FilterType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/pngencrypt/FilterType;

    return-object p0
.end method

.method public static values()[Lcom/kwad/sdk/pngencrypt/FilterType;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/pngencrypt/FilterType;->$VALUES:[Lcom/kwad/sdk/pngencrypt/FilterType;

    invoke-virtual {v0}, [Lcom/kwad/sdk/pngencrypt/FilterType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kwad/sdk/pngencrypt/FilterType;

    return-object v0
.end method
