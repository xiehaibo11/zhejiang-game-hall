.class public interface abstract Lcom/bykv/vk/openvk/TTInteractionVi;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTClientBidding;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/TTInteractionVi$AdInteractionListener;
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

.method public abstract setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V
.end method

.method public abstract setShowDislikeIcon(Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;)V
.end method

.method public abstract setViInteractionListener(Lcom/bykv/vk/openvk/TTInteractionVi$AdInteractionListener;)V
.end method

.method public abstract showInteractionVi(Landroid/app/Activity;)V
.end method
