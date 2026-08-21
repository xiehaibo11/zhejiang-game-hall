.class public interface abstract Lcom/bianfeng/netlibsdk/ResponseDelivery;
.super Ljava/lang/Object;
.source "ResponseDelivery.java"


# virtual methods
.method public abstract postError(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/utils/NetException;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;",
            "Lcom/bianfeng/netlibsdk/utils/NetException;",
            ")V"
        }
    .end annotation
.end method

.method public abstract postResponse(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/Response;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;",
            "Lcom/bianfeng/netlibsdk/Response<",
            "*>;)V"
        }
    .end annotation
.end method

.method public abstract postResponse(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/Response;Ljava/lang/Runnable;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;",
            "Lcom/bianfeng/netlibsdk/Response<",
            "*>;",
            "Ljava/lang/Runnable;",
            ")V"
        }
    .end annotation
.end method
