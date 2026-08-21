.class public Lcom/czhj/sdk/common/network/SigmobRequestQueue;
.super Lcom/czhj/volley/RequestQueue;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;
    }
.end annotation


# static fields
.field private static final a:I = 0xa


# instance fields
.field private final b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Lcom/czhj/volley/Network;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/czhj/volley/RequestQueue;-><init>(Lcom/czhj/volley/Network;)V

    new-instance p1, Ljava/util/HashMap;

    const/16 v0, 0xa

    invoke-direct {p1, v0}, Ljava/util/HashMap;-><init>(I)V

    iput-object p1, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->b:Ljava/util/Map;

    return-void
.end method

.method constructor <init>(Lcom/czhj/volley/Network;I)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/czhj/volley/RequestQueue;-><init>(Lcom/czhj/volley/Network;I)V

    new-instance p1, Ljava/util/HashMap;

    const/16 p2, 0xa

    invoke-direct {p1, p2}, Ljava/util/HashMap;-><init>(I)V

    iput-object p1, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->b:Ljava/util/Map;

    return-void
.end method

.method constructor <init>(Lcom/czhj/volley/Network;ILcom/czhj/volley/ResponseDelivery;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/czhj/volley/RequestQueue;-><init>(Lcom/czhj/volley/Network;ILcom/czhj/volley/ResponseDelivery;)V

    new-instance p1, Ljava/util/HashMap;

    const/16 p2, 0xa

    invoke-direct {p1, p2}, Ljava/util/HashMap;-><init>(I)V

    iput-object p1, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->b:Ljava/util/Map;

    return-void
.end method

.method static synthetic a(Lcom/czhj/sdk/common/network/SigmobRequestQueue;)Ljava/util/Map;
    .locals 0

    iget-object p0, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->b:Ljava/util/Map;

    return-object p0
.end method

.method private a(Lcom/czhj/volley/Request;Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;",
            ")V"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->b:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->b(Lcom/czhj/volley/Request;)V

    :cond_0
    invoke-virtual {p2}, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->a()V

    iget-object v0, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->b:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private b(Lcom/czhj/volley/Request;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;)V"
        }
    .end annotation

    new-instance v0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$3;

    invoke-direct {v0, p0, p1}, Lcom/czhj/sdk/common/network/SigmobRequestQueue$3;-><init>(Lcom/czhj/sdk/common/network/SigmobRequestQueue;Lcom/czhj/volley/Request;)V

    invoke-virtual {p0, v0}, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->cancelAll(Lcom/czhj/volley/RequestQueue$RequestFilter;)V

    return-void
.end method


# virtual methods
.method a()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;",
            ">;"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-object v0, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->b:Ljava/util/Map;

    return-object v0
.end method

.method public addDelayedRequest(Lcom/czhj/volley/Request;I)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;I)V"
        }
    .end annotation

    new-instance v0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;

    invoke-direct {v0, p0, p1, p2}, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;-><init>(Lcom/czhj/sdk/common/network/SigmobRequestQueue;Lcom/czhj/volley/Request;I)V

    invoke-direct {p0, p1, v0}, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->a(Lcom/czhj/volley/Request;Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;)V

    return-void
.end method

.method public cancelAll()V
    .locals 1

    new-instance v0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$1;

    invoke-direct {v0, p0}, Lcom/czhj/sdk/common/network/SigmobRequestQueue$1;-><init>(Lcom/czhj/sdk/common/network/SigmobRequestQueue;)V

    invoke-virtual {p0, v0}, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->cancelAll(Lcom/czhj/volley/RequestQueue$RequestFilter;)V

    return-void
.end method

.method public cancelAll(Lcom/czhj/volley/RequestQueue$RequestFilter;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/czhj/volley/RequestQueue;->cancelAll(Lcom/czhj/volley/RequestQueue$RequestFilter;)V

    iget-object v0, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->b:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/czhj/volley/Request;

    invoke-interface {p1, v2}, Lcom/czhj/volley/RequestQueue$RequestFilter;->apply(Lcom/czhj/volley/Request;)Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/czhj/volley/Request;

    invoke-virtual {v2}, Lcom/czhj/volley/Request;->cancel()V

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;

    invoke-virtual {v1}, Lcom/czhj/sdk/common/network/SigmobRequestQueue$DelayedRequestHelper;->b()V

    invoke-interface {v0}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public cancelAll(Ljava/lang/Object;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/czhj/volley/RequestQueue;->cancelAll(Ljava/lang/Object;)V

    new-instance v0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$2;

    invoke-direct {v0, p0, p1}, Lcom/czhj/sdk/common/network/SigmobRequestQueue$2;-><init>(Lcom/czhj/sdk/common/network/SigmobRequestQueue;Ljava/lang/Object;)V

    invoke-virtual {p0, v0}, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->cancelAll(Lcom/czhj/volley/RequestQueue$RequestFilter;)V

    return-void
.end method
