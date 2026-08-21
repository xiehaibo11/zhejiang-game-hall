.class public interface abstract Lcom/bykv/vk/openvk/TTBnObject;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/TTBnObject$AdInteractionListener;
    }
.end annotation


# virtual methods
.method public abstract getBannerView()Landroid/view/View;
.end method

.method public abstract getDislikeDialog(Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;)Lcom/bykv/vk/openvk/TTVfDislike;
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

.method public abstract setBannerInteractionListener(Lcom/bykv/vk/openvk/TTBnObject$AdInteractionListener;)V
.end method

.method public abstract setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V
.end method

.method public abstract setShowDislikeIcon(Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;)V
.end method

.method public abstract setSlideIntervalTime(I)V
.end method
