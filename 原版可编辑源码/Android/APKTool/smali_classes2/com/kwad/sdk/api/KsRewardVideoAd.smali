.class public interface abstract Lcom/kwad/sdk/api/KsRewardVideoAd;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/BaseKSAd;


# annotations
.annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;
    }
.end annotation


# virtual methods
.method public abstract getECPM()I
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation
.end method

.method public abstract getInteractionType()I
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation
.end method

.method public abstract getMaterialType()I
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation
.end method

.method public abstract isAdEnable()Z
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation
.end method

.method public abstract reportAdExposureFailed(ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation
.end method

.method public abstract setBidEcpm(I)V
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end method

.method public abstract setBidEcpm(JJ)V
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation
.end method

.method public abstract setInnerAdInteractionListener(Lcom/kwad/sdk/api/KsInnerAd$KsInnerAdInteractionListener;)V
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation
.end method

.method public abstract setRewardAdInteractionListener(Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation
.end method

.method public abstract setRewardPlayAgainInteractionListener(Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end method

.method public abstract showRewardVideoAd(Landroid/app/Activity;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation
.end method
