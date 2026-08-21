.class public interface abstract Lcom/bykv/vk/openvk/CSJSplashAd;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTClientBidding;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/CSJSplashAd$SplashCardListener;,
        Lcom/bykv/vk/openvk/CSJSplashAd$SplashClickEyeListener;,
        Lcom/bykv/vk/openvk/CSJSplashAd$SplashAdListener;
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

.method public abstract getSplashCardView()Landroid/view/View;
.end method

.method public abstract getSplashClickEyeSizeToDp()[I
.end method

.method public abstract getSplashClickEyeView()Landroid/view/View;
.end method

.method public abstract getSplashView()Landroid/view/View;
.end method

.method public abstract hideSkipButton()V
.end method

.method public abstract setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V
.end method

.method public abstract setSplashAdListener(Lcom/bykv/vk/openvk/CSJSplashAd$SplashAdListener;)V
.end method

.method public abstract setSplashCardListener(Lcom/bykv/vk/openvk/CSJSplashAd$SplashCardListener;)V
.end method

.method public abstract setSplashClickEyeListener(Lcom/bykv/vk/openvk/CSJSplashAd$SplashClickEyeListener;)V
.end method

.method public abstract showSplashCardView(Landroid/view/ViewGroup;Landroid/app/Activity;)V
.end method

.method public abstract showSplashClickEyeView(Landroid/view/ViewGroup;)V
.end method

.method public abstract showSplashView(Landroid/view/ViewGroup;)V
.end method

.method public abstract startClickEye()V
.end method
