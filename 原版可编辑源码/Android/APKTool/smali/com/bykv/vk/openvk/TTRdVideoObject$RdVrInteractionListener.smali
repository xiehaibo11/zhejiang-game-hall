.class public interface abstract Lcom/bykv/vk/openvk/TTRdVideoObject$RdVrInteractionListener;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/TTRdVideoObject;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "RdVrInteractionListener"
.end annotation


# virtual methods
.method public abstract onClose()V
.end method

.method public abstract onRdVerify(ZILjava/lang/String;ILjava/lang/String;)V
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end method

.method public abstract onRewardArrived(ZILandroid/os/Bundle;)V
.end method

.method public abstract onShow()V
.end method

.method public abstract onSkippedVideo()V
.end method

.method public abstract onVideoBarClick()V
.end method

.method public abstract onVideoComplete()V
.end method

.method public abstract onVideoError()V
.end method
