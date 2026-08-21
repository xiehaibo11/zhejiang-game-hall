.class public final enum Lcom/sigmob/sdk/base/a;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/sigmob/sdk/base/a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/sigmob/sdk/base/a;

.field public static final enum b:Lcom/sigmob/sdk/base/a;

.field public static final enum c:Lcom/sigmob/sdk/base/a;

.field public static final enum d:Lcom/sigmob/sdk/base/a;

.field public static final enum e:Lcom/sigmob/sdk/base/a;

.field public static final enum f:Lcom/sigmob/sdk/base/a;

.field public static final enum g:Lcom/sigmob/sdk/base/a;

.field private static final synthetic h:[Lcom/sigmob/sdk/base/a;


# direct methods
.method static constructor <clinit>()V
    .locals 10

    new-instance v0, Lcom/sigmob/sdk/base/a;

    const/4 v1, 0x0

    const-string v2, "COMPANION"

    invoke-direct {v0, v2, v1}, Lcom/sigmob/sdk/base/a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/a;->a:Lcom/sigmob/sdk/base/a;

    new-instance v0, Lcom/sigmob/sdk/base/a;

    const/4 v2, 0x1

    const-string v3, "ENDCARD"

    invoke-direct {v0, v3, v2}, Lcom/sigmob/sdk/base/a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    new-instance v0, Lcom/sigmob/sdk/base/a;

    const/4 v3, 0x2

    const-string v4, "VIDEO_CLICK"

    invoke-direct {v0, v4, v3}, Lcom/sigmob/sdk/base/a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/a;->c:Lcom/sigmob/sdk/base/a;

    new-instance v0, Lcom/sigmob/sdk/base/a;

    const/4 v4, 0x3

    const-string v5, "TEMPLATE"

    invoke-direct {v0, v5, v4}, Lcom/sigmob/sdk/base/a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/a;->d:Lcom/sigmob/sdk/base/a;

    new-instance v0, Lcom/sigmob/sdk/base/a;

    const/4 v5, 0x4

    const-string v6, "PREVIEW"

    invoke-direct {v0, v6, v5}, Lcom/sigmob/sdk/base/a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/a;->e:Lcom/sigmob/sdk/base/a;

    new-instance v0, Lcom/sigmob/sdk/base/a;

    const/4 v6, 0x5

    const-string v7, "DRIFT"

    invoke-direct {v0, v7, v6}, Lcom/sigmob/sdk/base/a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/a;->f:Lcom/sigmob/sdk/base/a;

    new-instance v0, Lcom/sigmob/sdk/base/a;

    const/4 v7, 0x6

    const-string v8, "LAND_PAGE"

    invoke-direct {v0, v8, v7}, Lcom/sigmob/sdk/base/a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/sdk/base/a;->g:Lcom/sigmob/sdk/base/a;

    const/4 v8, 0x7

    new-array v8, v8, [Lcom/sigmob/sdk/base/a;

    sget-object v9, Lcom/sigmob/sdk/base/a;->a:Lcom/sigmob/sdk/base/a;

    aput-object v9, v8, v1

    sget-object v1, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    aput-object v1, v8, v2

    sget-object v1, Lcom/sigmob/sdk/base/a;->c:Lcom/sigmob/sdk/base/a;

    aput-object v1, v8, v3

    sget-object v1, Lcom/sigmob/sdk/base/a;->d:Lcom/sigmob/sdk/base/a;

    aput-object v1, v8, v4

    sget-object v1, Lcom/sigmob/sdk/base/a;->e:Lcom/sigmob/sdk/base/a;

    aput-object v1, v8, v5

    sget-object v1, Lcom/sigmob/sdk/base/a;->f:Lcom/sigmob/sdk/base/a;

    aput-object v1, v8, v6

    aput-object v0, v8, v7

    sput-object v8, Lcom/sigmob/sdk/base/a;->h:[Lcom/sigmob/sdk/base/a;

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

.method public static valueOf(Ljava/lang/String;)Lcom/sigmob/sdk/base/a;
    .locals 1

    const-class v0, Lcom/sigmob/sdk/base/a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/sigmob/sdk/base/a;

    return-object p0
.end method

.method public static values()[Lcom/sigmob/sdk/base/a;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/a;->h:[Lcom/sigmob/sdk/base/a;

    invoke-virtual {v0}, [Lcom/sigmob/sdk/base/a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/sigmob/sdk/base/a;

    return-object v0
.end method
