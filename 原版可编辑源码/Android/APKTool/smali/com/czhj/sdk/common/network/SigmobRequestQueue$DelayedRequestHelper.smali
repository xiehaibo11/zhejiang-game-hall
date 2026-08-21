.class Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/network/SigmobRequestQueue;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "DelayedRequestHelper"
.end annotation


# instance fields
.field final a:I

.field final b:Landroid/os/Handler;

.field final c:Ljava/lang/Runnable;

.field final synthetic d:Lcom/czhj/sdk/common/network/SigmobRequestQueue;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/network/SigmobRequestQueue;Lcom/czhj/volley/Request;I)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;I)V"
        }
    .end annotation

    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    invoke-direct {p0, p1, p2, p3, v0}, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;-><init>(Lcom/czhj/sdk/common/network/SigmobRequestQueue;Lcom/czhj/volley/Request;ILandroid/os/Handler;)V

    return-void
.end method

.method constructor <init>(Lcom/czhj/sdk/common/network/SigmobRequestQueue;Lcom/czhj/volley/Request;ILandroid/os/Handler;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;I",
            "Landroid/os/Handler;",
            ")V"
        }
    .end annotation

    iput-object p1, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->d:Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput p3, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->a:I

    iput-object p4, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->b:Landroid/os/Handler;

    new-instance p3, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper$1;

    invoke-direct {p3, p0, p1, p2}, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper$1;-><init>(Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;Lcom/czhj/sdk/common/network/SigmobRequestQueue;Lcom/czhj/volley/Request;)V

    iput-object p3, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->c:Ljava/lang/Runnable;

    return-void
.end method


# virtual methods
.method a()V
    .locals 4

    iget-object v0, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->b:Landroid/os/Handler;

    iget-object v1, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->c:Ljava/lang/Runnable;

    iget v2, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->a:I

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method b()V
    .locals 2

    iget-object v0, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->b:Landroid/os/Handler;

    iget-object v1, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->c:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method
