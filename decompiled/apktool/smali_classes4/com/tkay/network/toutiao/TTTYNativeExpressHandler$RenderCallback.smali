.class public interface abstract Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "RenderCallback"
.end annotation


# virtual methods
.method public abstract onRenderFail(Ljava/lang/String;I)V
.end method

.method public abstract onRenderSuccess(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/TTNtExpressObject;",
            ">;)V"
        }
    .end annotation
.end method
