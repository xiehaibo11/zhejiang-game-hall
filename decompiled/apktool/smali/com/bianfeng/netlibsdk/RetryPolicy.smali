.class public interface abstract Lcom/bianfeng/netlibsdk/RetryPolicy;
.super Ljava/lang/Object;
.source "RetryPolicy.java"


# virtual methods
.method public abstract getCurrentRetryCount()I
.end method

.method public abstract getCurrentTimeout()I
.end method

.method public abstract retry(Lcom/bianfeng/netlibsdk/utils/NetException;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/netlibsdk/utils/NetException;
        }
    .end annotation
.end method
