.class public Lcom/czhj/volley/ExecutorDelivery;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/ResponseDelivery;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/volley/ExecutorDelivery$ResponseDeliveryRunnable;
    }
.end annotation


# instance fields
.field private final a:Ljava/util/concurrent/Executor;


# direct methods
.method public constructor <init>(Landroid/os/Handler;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/czhj/volley/ExecutorDelivery$1;

    invoke-direct {v0, p0, p1}, Lcom/czhj/volley/ExecutorDelivery$1;-><init>(Lcom/czhj/volley/ExecutorDelivery;Landroid/os/Handler;)V

    iput-object v0, p0, Lcom/czhj/volley/ExecutorDelivery;->a:Ljava/util/concurrent/Executor;

    return-void
.end method

.method public constructor <init>(Ljava/util/concurrent/Executor;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/czhj/volley/ExecutorDelivery;->a:Ljava/util/concurrent/Executor;

    return-void
.end method


# virtual methods
.method public postError(Lcom/czhj/volley/Request;Lcom/czhj/volley/VolleyError;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Lcom/czhj/volley/VolleyError;",
            ")V"
        }
    .end annotation

    const-string v0, "post-error"

    invoke-virtual {p1, v0}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    invoke-static {p2}, Lcom/czhj/volley/Response;->error(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/Response;

    move-result-object p2

    iget-object v0, p0, Lcom/czhj/volley/ExecutorDelivery;->a:Ljava/util/concurrent/Executor;

    new-instance v1, Lcom/czhj/volley/ExecutorDelivery$ResponseDeliveryRunnable;

    const/4 v2, 0x0

    invoke-direct {v1, p1, p2, v2}, Lcom/czhj/volley/ExecutorDelivery$ResponseDeliveryRunnable;-><init>(Lcom/czhj/volley/Request;Lcom/czhj/volley/Response;Ljava/lang/Runnable;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/Executor;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public postResponse(Lcom/czhj/volley/Request;Lcom/czhj/volley/Response;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Lcom/czhj/volley/Response<",
            "*>;)V"
        }
    .end annotation

    const/4 v0, 0x0

    invoke-virtual {p0, p1, p2, v0}, Lcom/czhj/volley/ExecutorDelivery;->postResponse(Lcom/czhj/volley/Request;Lcom/czhj/volley/Response;Ljava/lang/Runnable;)V

    return-void
.end method

.method public postResponse(Lcom/czhj/volley/Request;Lcom/czhj/volley/Response;Ljava/lang/Runnable;)V
    .locals 2
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

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->markDelivered()V

    const-string v0, "post-response"

    invoke-virtual {p1, v0}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/czhj/volley/ExecutorDelivery;->a:Ljava/util/concurrent/Executor;

    new-instance v1, Lcom/czhj/volley/ExecutorDelivery$ResponseDeliveryRunnable;

    invoke-direct {v1, p1, p2, p3}, Lcom/czhj/volley/ExecutorDelivery$ResponseDeliveryRunnable;-><init>(Lcom/czhj/volley/Request;Lcom/czhj/volley/Response;Ljava/lang/Runnable;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/Executor;->execute(Ljava/lang/Runnable;)V

    return-void
.end method
