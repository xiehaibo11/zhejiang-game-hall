.class public interface abstract Lcom/bianfeng/seppellita/SepperllitaCallback;
.super Ljava/lang/Object;
.source "SepperllitaCallback.java"


# virtual methods
.method public abstract callTime()V
.end method

.method public abstract onDel()V
.end method

.method public abstract onInitFail(Ljava/lang/String;)V
.end method

.method public abstract onInitSuc(Lcom/bianfeng/seppellita/bean/InitBean$DataBean;)V
.end method

.method public abstract onInsertSuccess()V
.end method

.method public abstract onPostFail(Ljava/lang/String;)V
.end method

.method public abstract onPostSuc(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract onSelectSuc(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method
