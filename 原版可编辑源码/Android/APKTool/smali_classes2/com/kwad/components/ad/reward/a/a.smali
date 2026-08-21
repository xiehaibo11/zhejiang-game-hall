.class public final Lcom/kwad/components/ad/reward/a/a;
.super Ljava/lang/Object;


# static fields
.field public static qC:Lcom/kwad/sdk/core/config/item/k;

.field public static qD:Lcom/kwad/sdk/core/config/item/k;

.field public static qE:Lcom/kwad/sdk/core/config/item/k;

.field public static qF:Lcom/kwad/sdk/core/config/item/d;

.field public static qG:Lcom/kwad/sdk/core/config/item/p;

.field public static qH:Lcom/kwad/sdk/core/config/item/p;

.field public static qI:Lcom/kwad/sdk/core/config/item/k;

.field public static qJ:Lcom/kwad/sdk/core/config/item/k;

.field public static qK:Lcom/kwad/sdk/core/config/item/k;

.field public static qL:Lcom/kwad/sdk/core/config/item/k;

.field public static qM:Lcom/kwad/sdk/core/config/item/k;

.field public static qN:Lcom/kwad/sdk/core/config/item/g;

.field public static qO:Lcom/kwad/sdk/core/config/item/d;

.field public static qP:Lcom/kwad/sdk/core/config/item/k;

.field public static qQ:Lcom/kwad/sdk/core/config/item/d;

.field public static qR:Lcom/kwad/sdk/core/config/item/k;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "rewardSkipType"

    invoke-direct {v0, v3, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qC:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const/16 v3, 0xf

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const-string v4, "rewardActiveAppTaskMinSecond"

    invoke-direct {v0, v4, v3}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qD:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const-string v3, "rewardContentDetainType"

    invoke-direct {v0, v3, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qE:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/d;

    const-string v3, "forceGetAudioFocus"

    invoke-direct {v0, v3, v1}, Lcom/kwad/sdk/core/config/item/d;-><init>(Ljava/lang/String;Z)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qF:Lcom/kwad/sdk/core/config/item/d;

    new-instance v0, Lcom/kwad/sdk/core/config/item/p;

    const-string v3, ""

    const-string v4, "rewardSkipTips"

    invoke-direct {v0, v4, v3}, Lcom/kwad/sdk/core/config/item/p;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qG:Lcom/kwad/sdk/core/config/item/p;

    new-instance v0, Lcom/kwad/sdk/core/config/item/p;

    const-string v4, "fullscreenSkipTips"

    invoke-direct {v0, v4, v3}, Lcom/kwad/sdk/core/config/item/p;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qH:Lcom/kwad/sdk/core/config/item/p;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const-string v3, "ecRewardAdOrderSwitch"

    invoke-direct {v0, v3, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qI:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const-string v3, "ecRewardAdFanSwitch"

    invoke-direct {v0, v3, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qJ:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const-string v3, "ecRewardAdKwaishopStyle"

    invoke-direct {v0, v3, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qK:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const/16 v3, 0xbb8

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const-string v4, "xdtCouponShowDuration"

    invoke-direct {v0, v4, v3}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qL:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const/4 v3, 0x1

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const-string v4, "jinniuCloseDialogStyle"

    invoke-direct {v0, v4, v3}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qM:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/g;

    const-string v3, "interactionTimeInRewardedVideo"

    const/4 v4, 0x0

    invoke-direct {v0, v3, v4}, Lcom/kwad/sdk/core/config/item/g;-><init>(Ljava/lang/String;F)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qN:Lcom/kwad/sdk/core/config/item/g;

    new-instance v0, Lcom/kwad/sdk/core/config/item/d;

    const-string v3, "autoJumpInRewardedVideo"

    invoke-direct {v0, v3, v1}, Lcom/kwad/sdk/core/config/item/d;-><init>(Ljava/lang/String;Z)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qO:Lcom/kwad/sdk/core/config/item/d;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const-string v3, "advanceJumpDirectDeliveryMaxCount"

    invoke-direct {v0, v3, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qP:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/d;

    const-string v3, "advanceJumpDirectDeliverySwitch"

    invoke-direct {v0, v3, v1}, Lcom/kwad/sdk/core/config/item/d;-><init>(Ljava/lang/String;Z)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qQ:Lcom/kwad/sdk/core/config/item/d;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const-string v1, "shortVideoFollowRewardPlayStyle"

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/reward/a/a;->qR:Lcom/kwad/sdk/core/config/item/k;

    return-void
.end method

.method public static init()V
    .locals 0

    return-void
.end method
