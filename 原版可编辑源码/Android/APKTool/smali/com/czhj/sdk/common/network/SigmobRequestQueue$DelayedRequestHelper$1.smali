.class Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;-><init>(Lcom/czhj/sdk/common/network/SigmobRequestQueue;Lcom/czhj/volley/Request;ILandroid/os/Handler;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/sdk/common/network/SigmobRequestQueue;

.field final synthetic b:Lcom/czhj/volley/Request;

.field final synthetic c:Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;Lcom/czhj/sdk/common/network/SigmobRequestQueue;Lcom/czhj/volley/Request;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper$1;->c:Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;

    iput-object p2, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper$1;->a:Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    iput-object p3, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper$1;->b:Lcom/czhj/volley/Request;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper$1;->c:Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;

    iget-object v0, v0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->d:Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    invoke-static {v0}, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->a(Lcom/czhj/sdk/common/network/SigmobRequestQueue;)Ljava/util/Map;

    move-result-object v0

    iget-object v1, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper$1;->b:Lcom/czhj/volley/Request;

    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper$1;->c:Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;

    iget-object v0, v0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->d:Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    iget-object v1, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper$1;->b:Lcom/czhj/volley/Request;

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->add(Lcom/czhj/volley/Request;)Lcom/czhj/volley/Request;

    return-void
.end method
