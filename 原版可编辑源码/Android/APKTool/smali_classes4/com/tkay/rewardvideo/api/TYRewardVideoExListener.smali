.class public interface abstract Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/rewardvideo/api/TYRewardVideoListener;


# virtual methods
.method public abstract onAgainReward(Lcom/tkay/core/api/TYAdInfo;)V
.end method

.method public abstract onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
.end method

.method public abstract onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
.end method

.method public abstract onRewardedVideoAdAgainPlayClicked(Lcom/tkay/core/api/TYAdInfo;)V
.end method

.method public abstract onRewardedVideoAdAgainPlayEnd(Lcom/tkay/core/api/TYAdInfo;)V
.end method

.method public abstract onRewardedVideoAdAgainPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V
.end method

.method public abstract onRewardedVideoAdAgainPlayStart(Lcom/tkay/core/api/TYAdInfo;)V
.end method
