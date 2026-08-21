.class public interface abstract Lcom/bykv/vk/openvk/TTVfNative$RdVideoVfListener;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/common/CommonListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/TTVfNative;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "RdVideoVfListener"
.end annotation


# virtual methods
.method public abstract onError(ILjava/lang/String;)V
.end method

.method public abstract onRdVideoCached()V
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end method

.method public abstract onRdVideoCached(Lcom/bykv/vk/openvk/TTRdVideoObject;)V
.end method

.method public abstract onRdVideoVrLoad(Lcom/bykv/vk/openvk/TTRdVideoObject;)V
.end method
