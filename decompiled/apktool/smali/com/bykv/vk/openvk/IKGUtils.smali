.class public interface abstract Lcom/bykv/vk/openvk/IKGUtils;
.super Ljava/lang/Object;


# virtual methods
.method public abstract findRes(Ljava/lang/String;Ljava/lang/String;Lcom/bykv/vk/openvk/FindResProxy;)Landroid/webkit/WebResourceResponse;
.end method

.method public abstract getChannelVersion()Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end method

.method public abstract preload(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract releaseLoader()V
.end method
