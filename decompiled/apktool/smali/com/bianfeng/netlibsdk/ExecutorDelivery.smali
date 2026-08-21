.class public Lcom/bianfeng/netlibsdk/ExecutorDelivery;
.super Ljava/lang/Object;
.source "ExecutorDelivery.java"

# interfaces
.implements Lcom/bianfeng/netlibsdk/ResponseDelivery;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;
    }
.end annotation


# instance fields
.field private final mResponsePoster:Ljava/util/concurrent/Executor;


# direct methods
.method public constructor <init>(Landroid/os/Handler;)V
    .locals 1

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 13
    new-instance v0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$1;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/netlibsdk/ExecutorDelivery$1;-><init>(Lcom/bianfeng/netlibsdk/ExecutorDelivery;Landroid/os/Handler;)V

    iput-object v0, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery;->mResponsePoster:Ljava/util/concurrent/Executor;

    return-void
.end method


# virtual methods
.method public postError(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/utils/NetException;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;",
            "Lcom/bianfeng/netlibsdk/utils/NetException;",
            ")V"
        }
    .end annotation

    const-string v0, "post-error"

    .line 35
    invoke-virtual {p1, v0}, Lcom/bianfeng/netlibsdk/Request;->addMarker(Ljava/lang/String;)V

    .line 36
    invoke-static {p2}, Lcom/bianfeng/netlibsdk/Response;->error(Lcom/bianfeng/netlibsdk/utils/NetException;)Lcom/bianfeng/netlibsdk/Response;

    move-result-object p2

    .line 37
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery;->mResponsePoster:Ljava/util/concurrent/Executor;

    new-instance v1, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;

    const/4 v2, 0x0

    invoke-direct {v1, p1, p2, v2}, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;-><init>(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/Response;Ljava/lang/Runnable;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/Executor;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public postResponse(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/Response;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;",
            "Lcom/bianfeng/netlibsdk/Response<",
            "*>;)V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 23
    invoke-virtual {p0, p1, p2, v0}, Lcom/bianfeng/netlibsdk/ExecutorDelivery;->postResponse(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/Response;Ljava/lang/Runnable;)V

    return-void
.end method

.method public postResponse(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/Response;Ljava/lang/Runnable;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;",
            "Lcom/bianfeng/netlibsdk/Response<",
            "*>;",
            "Ljava/lang/Runnable;",
            ")V"
        }
    .end annotation

    .line 28
    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->markDelivered()V

    const-string v0, "post-response"

    .line 29
    invoke-virtual {p1, v0}, Lcom/bianfeng/netlibsdk/Request;->addMarker(Ljava/lang/String;)V

    .line 30
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery;->mResponsePoster:Ljava/util/concurrent/Executor;

    new-instance v1, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;

    invoke-direct {v1, p1, p2, p3}, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;-><init>(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/Response;Ljava/lang/Runnable;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/Executor;->execute(Ljava/lang/Runnable;)V

    return-void
.end method
