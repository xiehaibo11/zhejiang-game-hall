.class public interface abstract Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;
.super Ljava/lang/Object;
.source "DBByteDataCallback.java"


# virtual methods
.method public abstract onDelSuccess(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract onDeltFail(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract onFinish()V
.end method

.method public abstract onInsertFail()V
.end method

.method public abstract onInsertSuccess()V
.end method

.method public abstract onSelectNoData()V
.end method

.method public abstract onSelectSuccess(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method
