.class public interface abstract Lcom/bykv/vk/openvk/TTVfNative$NtVfListener;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/common/CommonListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/TTVfNative;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "NtVfListener"
.end annotation


# virtual methods
.method public abstract onDrawVfLoad(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/TTNtObject;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract onError(ILjava/lang/String;)V
.end method
