.class public interface abstract Lcom/bianfeng/netlibsdk/HttpStack;
.super Ljava/lang/Object;
.source "HttpStack.java"


# virtual methods
.method public abstract executeRequest(Lcom/bianfeng/netlibsdk/Request;)Lcom/bianfeng/netlibsdk/HttpResponse;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)",
            "Lcom/bianfeng/netlibsdk/HttpResponse;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method
