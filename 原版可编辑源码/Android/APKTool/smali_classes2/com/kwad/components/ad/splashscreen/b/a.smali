.class public final Lcom/kwad/components/ad/splashscreen/b/a;
.super Ljava/lang/Object;


# static fields
.field public static Cv:Lcom/kwad/sdk/core/config/item/k;

.field public static Cw:Lcom/kwad/sdk/core/config/item/p;

.field public static Cx:Lcom/kwad/sdk/core/config/item/p;

.field public static Cy:Lcom/kwad/sdk/core/config/item/d;

.field public static Cz:Lcom/kwad/sdk/core/config/item/d;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const/16 v1, 0x1388

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "splashTimeOutMilliSecond"

    invoke-direct {v0, v2, v1}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/splashscreen/b/a;->Cv:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/p;

    const-string v1, "splashTimerTips"

    const-string v2, ""

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/config/item/p;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/components/ad/splashscreen/b/a;->Cw:Lcom/kwad/sdk/core/config/item/p;

    new-instance v0, Lcom/kwad/sdk/core/config/item/p;

    const-string v1, "splashBtnText"

    const-string v2, "\u70b9\u51fb\u8df3\u8f6c\u8be6\u60c5\u9875\u6216\u7b2c\u4e09\u65b9\u5e94\u7528"

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/config/item/p;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/components/ad/splashscreen/b/a;->Cx:Lcom/kwad/sdk/core/config/item/p;

    new-instance v0, Lcom/kwad/sdk/core/config/item/d;

    const-string v1, "splashCropNewSwitch"

    const/4 v2, 0x1

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/config/item/d;-><init>(Ljava/lang/String;Z)V

    sput-object v0, Lcom/kwad/components/ad/splashscreen/b/a;->Cy:Lcom/kwad/sdk/core/config/item/d;

    new-instance v0, Lcom/kwad/sdk/core/config/item/d;

    const-string v1, "splashWebViewInitIfNeed"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/config/item/d;-><init>(Ljava/lang/String;Z)V

    sput-object v0, Lcom/kwad/components/ad/splashscreen/b/a;->Cz:Lcom/kwad/sdk/core/config/item/d;

    return-void
.end method

.method public static init()V
    .locals 0

    return-void
.end method
