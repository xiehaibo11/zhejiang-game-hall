.class public interface abstract Lcom/bianfeng/netlibsdk/Network;
.super Ljava/lang/Object;
.source "Network.java"


# virtual methods
.method public abstract performRequest(Lcom/bianfeng/netlibsdk/Request;)Lcom/bianfeng/netlibsdk/NetworkResponse;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)",
            "Lcom/bianfeng/netlibsdk/NetworkResponse;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/netlibsdk/utils/NetException;
        }
    .end annotation
.end method
