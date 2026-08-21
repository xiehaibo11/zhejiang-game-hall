.class public interface abstract Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/Database/DBOperator;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "DataSQLiteLisenter"
.end annotation


# virtual methods
.method public abstract onFailed(Ljava/lang/Error;)V
.end method

.method public abstract onSuccess(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/util/Map;",
            ">;)V"
        }
    .end annotation
.end method
