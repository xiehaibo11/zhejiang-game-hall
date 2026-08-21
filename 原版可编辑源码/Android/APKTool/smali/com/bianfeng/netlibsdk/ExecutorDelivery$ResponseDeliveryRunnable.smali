.class Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;
.super Ljava/lang/Object;
.source "ExecutorDelivery.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/netlibsdk/ExecutorDelivery;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "ResponseDeliveryRunnable"
.end annotation


# instance fields
.field private final mRequest:Lcom/bianfeng/netlibsdk/Request;

.field private final mResponse:Lcom/bianfeng/netlibsdk/Response;

.field private final mRunnable:Ljava/lang/Runnable;


# direct methods
.method public constructor <init>(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/Response;Ljava/lang/Runnable;)V
    .locals 0

    .line 45
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 46
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mRequest:Lcom/bianfeng/netlibsdk/Request;

    .line 47
    iput-object p2, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mResponse:Lcom/bianfeng/netlibsdk/Response;

    .line 48
    iput-object p3, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mRunnable:Ljava/lang/Runnable;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 54
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mRequest:Lcom/bianfeng/netlibsdk/Request;

    invoke-virtual {v0}, Lcom/bianfeng/netlibsdk/Request;->isCanceled()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 55
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mRequest:Lcom/bianfeng/netlibsdk/Request;

    const-string v1, "canceled-at-delivery"

    invoke-virtual {v0, v1}, Lcom/bianfeng/netlibsdk/Request;->finish(Ljava/lang/String;)V

    return-void

    .line 58
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mResponse:Lcom/bianfeng/netlibsdk/Response;

    invoke-virtual {v0}, Lcom/bianfeng/netlibsdk/Response;->isSuccess()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 59
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mRequest:Lcom/bianfeng/netlibsdk/Request;

    iget-object v1, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mResponse:Lcom/bianfeng/netlibsdk/Response;

    iget-object v1, v1, Lcom/bianfeng/netlibsdk/Response;->result:Ljava/lang/Object;

    invoke-virtual {v0, v1}, Lcom/bianfeng/netlibsdk/Request;->deliverResponse(Ljava/lang/Object;)V

    goto :goto_0

    .line 61
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mRequest:Lcom/bianfeng/netlibsdk/Request;

    iget-object v1, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mResponse:Lcom/bianfeng/netlibsdk/Response;

    iget-object v1, v1, Lcom/bianfeng/netlibsdk/Response;->error:Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-virtual {v0, v1}, Lcom/bianfeng/netlibsdk/Request;->deliverError(Lcom/bianfeng/netlibsdk/utils/NetException;)V

    .line 64
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mResponse:Lcom/bianfeng/netlibsdk/Response;

    iget-boolean v0, v0, Lcom/bianfeng/netlibsdk/Response;->intermediate:Z

    if-eqz v0, :cond_2

    .line 65
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mRequest:Lcom/bianfeng/netlibsdk/Request;

    const-string v1, "intermediate-response"

    invoke-virtual {v0, v1}, Lcom/bianfeng/netlibsdk/Request;->addMarker(Ljava/lang/String;)V

    goto :goto_1

    .line 67
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mRequest:Lcom/bianfeng/netlibsdk/Request;

    const-string v1, "done"

    invoke-virtual {v0, v1}, Lcom/bianfeng/netlibsdk/Request;->finish(Ljava/lang/String;)V

    .line 70
    :goto_1
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ExecutorDelivery$ResponseDeliveryRunnable;->mRunnable:Ljava/lang/Runnable;

    if-eqz v0, :cond_3

    .line 71
    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    :cond_3
    return-void
.end method
