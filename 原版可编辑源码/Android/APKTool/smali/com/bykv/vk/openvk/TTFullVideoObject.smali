.class public interface abstract Lcom/bykv/vk/openvk/TTFullVideoObject;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTClientBidding;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/TTFullVideoObject$FullVideoVsInteractionListener;
    }
.end annotation


# virtual methods
.method public abstract getExpirationTimestamp()J
.end method

.method public abstract getFullVideoAdType()I
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

.method public abstract setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V
.end method

.method public abstract setFullScreenVideoAdInteractionListener(Lcom/bykv/vk/openvk/TTFullVideoObject$FullVideoVsInteractionListener;)V
.end method

.method public abstract setShowDownLoadBar(Z)V
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end method

.method public abstract showFullVideoVs(Landroid/app/Activity;)V
.end method

.method public abstract showFullVideoVs(Landroid/app/Activity;Lcom/bykv/vk/openvk/TTVfConstant$RitScenes;Ljava/lang/String;)V
.end method
