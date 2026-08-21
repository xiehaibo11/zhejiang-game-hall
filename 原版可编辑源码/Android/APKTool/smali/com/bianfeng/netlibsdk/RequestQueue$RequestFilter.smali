.class public interface abstract Lcom/bianfeng/netlibsdk/RequestQueue$RequestFilter;
.super Ljava/lang/Object;
.source "RequestQueue.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/netlibsdk/RequestQueue;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "RequestFilter"
.end annotation


# virtual methods
.method public abstract apply(Lcom/bianfeng/netlibsdk/Request;)Z
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)Z"
        }
    .end annotation
.end method
