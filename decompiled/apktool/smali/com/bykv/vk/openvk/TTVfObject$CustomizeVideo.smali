.class public interface abstract Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/TTVfObject;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "CustomizeVideo"
.end annotation


# virtual methods
.method public abstract getVideoUrl()Ljava/lang/String;
.end method

.method public abstract reportVideoAutoStart()V
.end method

.method public abstract reportVideoBreak(J)V
.end method

.method public abstract reportVideoContinue(J)V
.end method

.method public abstract reportVideoError(JII)V
.end method

.method public abstract reportVideoFinish()V
.end method

.method public abstract reportVideoPause(J)V
.end method

.method public abstract reportVideoStart()V
.end method

.method public abstract reportVideoStartError(II)V
.end method
