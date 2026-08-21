.class Lcom/czhj/sdk/common/network/SigmobRequestQueue$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/RequestQueue$RequestFilter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/sdk/common/network/SigmobRequestQueue;->b(Lcom/czhj/volley/Request;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/volley/Request;

.field final synthetic b:Lcom/czhj/sdk/common/network/SigmobRequestQueue;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/network/SigmobRequestQueue;Lcom/czhj/volley/Request;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$3;->b:Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    iput-object p2, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$3;->a:Lcom/czhj/volley/Request;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public apply(Lcom/czhj/volley/Request;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;)Z"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$3;->a:Lcom/czhj/volley/Request;

    if-ne v0, p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method
