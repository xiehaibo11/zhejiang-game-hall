.class public interface abstract Lcom/czhj/volley/ResponseDelivery;
.super Ljava/lang/Object;


# virtual methods
.method public abstract postError(Lcom/czhj/volley/Request;Lcom/czhj/volley/VolleyError;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Lcom/czhj/volley/VolleyError;",
            ")V"
        }
    .end annotation
.end method

.method public abstract postResponse(Lcom/czhj/volley/Request;Lcom/czhj/volley/Response;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Lcom/czhj/volley/Response<",
            "*>;)V"
        }
    .end annotation
.end method

.method public abstract postResponse(Lcom/czhj/volley/Request;Lcom/czhj/volley/Response;Ljava/lang/Runnable;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Lcom/czhj/volley/Response<",
            "*>;",
            "Ljava/lang/Runnable;",
            ")V"
        }
    .end annotation
.end method
