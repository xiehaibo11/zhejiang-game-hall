.class public final enum Lcom/sigmob/windad/WindAdBiddingLossReason;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/sigmob/windad/WindAdBiddingLossReason;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum LOSS_REASON_LOW_PRICE:Lcom/sigmob/windad/WindAdBiddingLossReason;

.field public static final enum LOSS_REASON_RETURN_ERROR:Lcom/sigmob/windad/WindAdBiddingLossReason;

.field public static final enum LOSS_REASON_RETURN_TIMEOUT:Lcom/sigmob/windad/WindAdBiddingLossReason;

.field private static final synthetic b:[Lcom/sigmob/windad/WindAdBiddingLossReason;


# instance fields
.field private a:I

.field private message:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    new-instance v0, Lcom/sigmob/windad/WindAdBiddingLossReason;

    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "LOSS_REASON_LOW_PRICE"

    const-string v4, "\u51fa\u4ef7\u8fc7\u4f4e"

    invoke-direct {v0, v3, v1, v2, v4}, Lcom/sigmob/windad/WindAdBiddingLossReason;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdBiddingLossReason;->LOSS_REASON_LOW_PRICE:Lcom/sigmob/windad/WindAdBiddingLossReason;

    new-instance v0, Lcom/sigmob/windad/WindAdBiddingLossReason;

    const/4 v3, 0x1

    const-string v4, "LOSS_REASON_RETURN_TIMEOUT"

    const/16 v5, 0x7d0

    const-string v6, "\u8fd4\u56de\u8d85\u65f6"

    invoke-direct {v0, v4, v3, v5, v6}, Lcom/sigmob/windad/WindAdBiddingLossReason;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdBiddingLossReason;->LOSS_REASON_RETURN_TIMEOUT:Lcom/sigmob/windad/WindAdBiddingLossReason;

    new-instance v0, Lcom/sigmob/windad/WindAdBiddingLossReason;

    const-string v4, "LOSS_REASON_RETURN_ERROR"

    const/16 v5, 0x7d1

    const-string v6, "\u5e7f\u544a\u7d20\u6750\u683c\u5f0f\u9519\u8bef"

    invoke-direct {v0, v4, v2, v5, v6}, Lcom/sigmob/windad/WindAdBiddingLossReason;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdBiddingLossReason;->LOSS_REASON_RETURN_ERROR:Lcom/sigmob/windad/WindAdBiddingLossReason;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/sigmob/windad/WindAdBiddingLossReason;

    sget-object v5, Lcom/sigmob/windad/WindAdBiddingLossReason;->LOSS_REASON_LOW_PRICE:Lcom/sigmob/windad/WindAdBiddingLossReason;

    aput-object v5, v4, v1

    sget-object v1, Lcom/sigmob/windad/WindAdBiddingLossReason;->LOSS_REASON_RETURN_TIMEOUT:Lcom/sigmob/windad/WindAdBiddingLossReason;

    aput-object v1, v4, v3

    aput-object v0, v4, v2

    sput-object v4, Lcom/sigmob/windad/WindAdBiddingLossReason;->b:[Lcom/sigmob/windad/WindAdBiddingLossReason;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;IILjava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput p3, p0, Lcom/sigmob/windad/WindAdBiddingLossReason;->a:I

    iput-object p4, p0, Lcom/sigmob/windad/WindAdBiddingLossReason;->message:Ljava/lang/String;

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/sigmob/windad/WindAdBiddingLossReason;
    .locals 1

    const-class v0, Lcom/sigmob/windad/WindAdBiddingLossReason;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/sigmob/windad/WindAdBiddingLossReason;

    return-object p0
.end method

.method public static values()[Lcom/sigmob/windad/WindAdBiddingLossReason;
    .locals 1

    sget-object v0, Lcom/sigmob/windad/WindAdBiddingLossReason;->b:[Lcom/sigmob/windad/WindAdBiddingLossReason;

    invoke-virtual {v0}, [Lcom/sigmob/windad/WindAdBiddingLossReason;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/sigmob/windad/WindAdBiddingLossReason;

    return-object v0
.end method


# virtual methods
.method public getCode()I
    .locals 1

    iget v0, p0, Lcom/sigmob/windad/WindAdBiddingLossReason;->a:I

    return v0
.end method

.method public getMessage()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/WindAdBiddingLossReason;->message:Ljava/lang/String;

    return-object v0
.end method
