.class public interface abstract Lcom/bykv/vk/openvk/TTSphObject;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTClientBidding;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/TTSphObject$VfInteractionListener;
    }
.end annotation


# virtual methods
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

.method public abstract getSplashClickEyeSizeToDp()[I
.end method

.method public abstract getSplashView()Landroid/view/View;
.end method

.method public abstract renderExpressAd(Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;)V
.end method

.method public abstract setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V
.end method

.method public abstract setNotAllowSdkCountdown()V
.end method

.method public abstract setSplashCardListener(Lcom/bykv/vk/openvk/ISplashCardListener;)V
.end method

.method public abstract setSplashClickEyeListener(Lcom/bykv/vk/openvk/ISplashClickEyeListener;)V
.end method

.method public abstract setSplashInteractionListener(Lcom/bykv/vk/openvk/TTSphObject$VfInteractionListener;)V
.end method

.method public abstract splashClickEyeAnimationFinish()V
.end method

.method public abstract startClickEye()V
.end method

.method public abstract startClickEye(Z)V
.end method
