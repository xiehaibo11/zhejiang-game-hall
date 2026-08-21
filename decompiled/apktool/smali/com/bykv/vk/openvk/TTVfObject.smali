.class public interface abstract Lcom/bykv/vk/openvk/TTVfObject;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTNtObject;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/TTVfObject$VideoRewardListener;,
        Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;,
        Lcom/bykv/vk/openvk/TTVfObject$VideoVfListener;
    }
.end annotation


# virtual methods
.method public abstract getAdViewHeight()I
.end method

.method public abstract getAdViewWidth()I
.end method

.method public abstract getCustomVideo()Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;
.end method

.method public abstract getVideoDuration()D
.end method

.method public abstract setVideoListener(Lcom/bykv/vk/openvk/TTVfObject$VideoVfListener;)V
.end method

.method public abstract setVideoRewardListener(Lcom/bykv/vk/openvk/TTVfObject$VideoRewardListener;)V
.end method
