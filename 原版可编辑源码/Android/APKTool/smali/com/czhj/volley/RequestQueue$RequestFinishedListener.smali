.class public interface abstract Lcom/czhj/volley/RequestQueue$RequestFinishedListener;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/volley/RequestQueue;
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
.method public abstract onRequestFinished(Lcom/czhj/volley/Request;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "TT;>;)V"
        }
    .end annotation
.end method
