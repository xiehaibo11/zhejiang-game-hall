.class final Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$8;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->handleNotifyVerify(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

.field final synthetic oE:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$8;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$8;->oE:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$8;->oE:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onRewardVerify()V

    return-void
.end method
