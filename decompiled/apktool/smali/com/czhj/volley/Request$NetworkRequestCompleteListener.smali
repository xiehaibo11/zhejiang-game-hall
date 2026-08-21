.class interface abstract Lcom/czhj/volley/Request$NetworkRequestCompleteListener;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/volley/Request;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x608
    name = "NetworkRequestCompleteListener"
.end annotation


# virtual methods
.method public abstract onNoUsableResponseReceived(Lcom/czhj/volley/Request;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;)V"
        }
    .end annotation
.end method

.method public abstract onResponseReceived(Lcom/czhj/volley/Request;Lcom/czhj/volley/Response;)V
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
