.class public interface abstract Lcom/bykv/vk/openvk/TTNtExpressObject;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTClientBidding;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressVideoListener;,
        Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;,
        Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;
    }
.end annotation


# virtual methods
.method public abstract destroy()V
.end method

.method public abstract getDislikeDialog(Landroid/app/Activity;)Lcom/bykv/vk/openvk/TTVfDislike;
.end method

.method public abstract getDislikeInfo()Lcom/bykv/vk/openvk/DislikeInfo;
.end method

.method public abstract getExpressNtView()Landroid/view/View;
.end method

.method public abstract getImageMode()I
.end method

.method public abstract getInteractionType()I
.end method

.method public abstract getMediaExtraInfo()Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end method

.method public abstract render()V
.end method

.method public abstract setCanInterruptVideoPlay(Z)V
.end method

.method public abstract setDislikeCallback(Landroid/app/Activity;Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;)V
.end method

.method public abstract setDislikeDialog(Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;)V
.end method

.method public abstract setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V
.end method

.method public abstract setExpressInteractionListener(Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;)V
.end method

.method public abstract setExpressInteractionListener(Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;)V
.end method

.method public abstract setSlideIntervalTime(I)V
.end method

.method public abstract setVideoListener(Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressVideoListener;)V
.end method

.method public abstract showInteractionExpressAd(Landroid/app/Activity;)V
.end method
