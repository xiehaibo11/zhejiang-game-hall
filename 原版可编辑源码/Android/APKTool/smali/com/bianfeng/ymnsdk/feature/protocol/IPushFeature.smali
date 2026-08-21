.class public interface abstract Lcom/bianfeng/ymnsdk/feature/protocol/IPushFeature;
.super Ljava/lang/Object;
.source "IPushFeature.java"


# virtual methods
.method public abstract closePush()V
.end method

.method public abstract delAlias(Ljava/lang/String;)V
.end method

.method public abstract delTags(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract setAlias(Ljava/lang/String;)V
.end method

.method public abstract setTags(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract startPush()V
.end method
