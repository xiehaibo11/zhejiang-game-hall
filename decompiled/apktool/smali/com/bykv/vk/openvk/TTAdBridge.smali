.class public interface abstract Lcom/bykv/vk/openvk/TTAdBridge;
.super Ljava/lang/Object;


# virtual methods
.method public abstract call(ILandroid/os/Bundle;)Ljava/lang/String;
.end method

.method public abstract callMethod(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;I",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)TT;"
        }
    .end annotation
.end method

.method public abstract getObj(Ljava/lang/Class;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;)TT;"
        }
    .end annotation
.end method

.method public abstract getObj(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;I",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)TT;"
        }
    .end annotation
.end method

.method public abstract init(Landroid/os/Bundle;)V
.end method

.method public abstract removeObj(Ljava/lang/Object;)V
.end method

.method public abstract setObj(Ljava/lang/Object;)V
.end method

.method public abstract subscribe(Lcom/bykv/vk/openvk/TTAdEvent;)V
.end method

.method public abstract unsubscribe(Lcom/bykv/vk/openvk/TTAdEvent;)V
.end method
