.class public interface abstract Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/common/CommonListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/TTVfNative;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "FullScreenVideoAdListener"
.end annotation


# virtual methods
.method public abstract onError(ILjava/lang/String;)V
.end method

.method public abstract onFullVideoCached()V
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end method

.method public abstract onFullVideoCached(Lcom/bykv/vk/openvk/TTFullVideoObject;)V
.end method

.method public abstract onFullVideoVsLoad(Lcom/bykv/vk/openvk/TTFullVideoObject;)V
.end method
