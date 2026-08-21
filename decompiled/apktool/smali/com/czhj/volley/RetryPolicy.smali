.class public interface abstract Lcom/czhj/volley/RetryPolicy;
.super Ljava/lang/Object;


# virtual methods
.method public abstract getCurrentConnectTimeoutMs()I
.end method

.method public abstract getCurrentRetryCount()I
.end method

.method public abstract getCurrentTimeout()I
.end method

.method public abstract retry(Lcom/czhj/volley/VolleyError;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/volley/VolleyError;
        }
    .end annotation
.end method
