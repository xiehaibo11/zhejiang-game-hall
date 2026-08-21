.class public final enum Lcom/kwad/components/ad/reward/page/BackPressHandleResult;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kwad/components/ad/reward/page/BackPressHandleResult;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

.field public static final enum HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

.field public static final enum HANDLED_CLOSE:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

.field public static final enum NOT_HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;


# instance fields
.field private value:I


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    const/4 v1, 0x0

    const/4 v2, 0x1

    const-string v3, "NOT_HANDLED"

    invoke-direct {v0, v3, v1, v2}, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->NOT_HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    new-instance v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    const/4 v3, 0x2

    const-string v4, "HANDLED"

    invoke-direct {v0, v4, v2, v3}, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    new-instance v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    const/4 v4, 0x3

    const-string v5, "HANDLED_CLOSE"

    invoke-direct {v0, v5, v3, v4}, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->HANDLED_CLOSE:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    new-array v4, v4, [Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    sget-object v5, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->NOT_HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    aput-object v5, v4, v1

    sget-object v1, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->$VALUES:[Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

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

    iput p3, p0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->value:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/kwad/components/ad/reward/page/BackPressHandleResult;
    .locals 1

    const-class v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    return-object p0
.end method

.method public static values()[Lcom/kwad/components/ad/reward/page/BackPressHandleResult;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->$VALUES:[Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    invoke-virtual {v0}, [Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    return-object v0
.end method
