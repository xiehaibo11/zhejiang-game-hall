.class public final Lcom/kwad/components/ad/interstitial/a/a;
.super Ljava/lang/Object;


# static fields
.field public static iL:Lcom/kwad/sdk/core/config/item/k;

.field public static iM:Lcom/kwad/sdk/core/config/item/k;

.field public static iN:Lcom/kwad/sdk/core/config/item/k;

.field public static iO:Lcom/kwad/sdk/core/config/item/k;

.field public static iP:Lcom/kwad/sdk/core/config/item/k;

.field public static iQ:Lcom/kwad/sdk/core/config/item/k;

.field public static iR:Lcom/kwad/sdk/core/config/item/d;

.field public static iS:Lcom/kwad/sdk/core/config/item/k;

.field public static iT:Lcom/kwad/sdk/core/config/item/k;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "interstitialAdSkipCloseType"

    invoke-direct {v0, v3, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iL:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const-string v3, "interstitialAdSkipCloseArea"

    invoke-direct {v0, v3, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iM:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const/4 v3, 0x1

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const-string v4, "interstitialAdFullClick"

    invoke-direct {v0, v4, v3}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iN:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const-string v3, "interstitialAdBackPressSwitch"

    invoke-direct {v0, v3, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iO:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const/16 v3, 0x3e7

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const-string v4, "interstitialPlayableTime"

    invoke-direct {v0, v4, v3}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iP:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const-string v3, "interstitialAdClickShutDown"

    invoke-direct {v0, v3, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iQ:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/d;

    const-string v3, "interstitialAutoStartSwitch"

    invoke-direct {v0, v3, v1}, Lcom/kwad/sdk/core/config/item/d;-><init>(Ljava/lang/String;Z)V

    sput-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iR:Lcom/kwad/sdk/core/config/item/d;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const-string v1, "ecInterstitialAdOrderSwitch"

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iS:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const/4 v1, 0x3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "interstitialCycleAggregateMaxCount"

    invoke-direct {v0, v2, v1}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iT:Lcom/kwad/sdk/core/config/item/k;

    return-void
.end method

.method public static init()V
    .locals 0

    return-void
.end method
