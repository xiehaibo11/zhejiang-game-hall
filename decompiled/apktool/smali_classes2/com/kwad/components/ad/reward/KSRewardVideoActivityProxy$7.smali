.class final Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$7;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->notifyRewardStep(II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

.field final synthetic oC:I

.field final synthetic oD:I


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;II)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$7;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    iput p2, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$7;->oC:I

    iput p3, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$7;->oD:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$7;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$700(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->A(Ljava/lang/String;)Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    move-result-object v0

    iget v1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$7;->oC:I

    iget v2, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$7;->oD:I

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onRewardStepVerify(II)V

    return-void
.end method
