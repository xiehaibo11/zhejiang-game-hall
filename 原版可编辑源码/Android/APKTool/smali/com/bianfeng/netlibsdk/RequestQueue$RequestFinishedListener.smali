.class public interface abstract Lcom/bianfeng/netlibsdk/RequestQueue$RequestFinishedListener;
.super Ljava/lang/Object;
.source "RequestQueue.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/netlibsdk/RequestQueue;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "RequestFinishedListener"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# virtual methods
.method public abstract onRequestFinished(Lcom/bianfeng/netlibsdk/Request;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "TT;>;)V"
        }
    .end annotation
.end method
