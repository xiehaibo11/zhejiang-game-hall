.class public interface abstract Lcom/bykv/vk/openvk/TTVfObject$VideoVfListener;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/TTVfObject;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "VideoVfListener"
.end annotation


# virtual methods
.method public abstract onProgressUpdate(JJ)V
.end method

.method public abstract onVideoComplete(Lcom/bykv/vk/openvk/TTVfObject;)V
.end method

.method public abstract onVideoContinuePlay(Lcom/bykv/vk/openvk/TTVfObject;)V
.end method

.method public abstract onVideoError(II)V
.end method

.method public abstract onVideoLoad(Lcom/bykv/vk/openvk/TTVfObject;)V
.end method

.method public abstract onVideoPaused(Lcom/bykv/vk/openvk/TTVfObject;)V
.end method

.method public abstract onVideoStartPlay(Lcom/bykv/vk/openvk/TTVfObject;)V
.end method
