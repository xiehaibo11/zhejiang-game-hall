.class Lcom/czhj/sdk/common/network/SigmobRequestQueue$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/RequestQueue$RequestFilter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/sdk/common/network/SigmobRequestQueue;->cancelAll()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/sdk/common/network/SigmobRequestQueue;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/network/SigmobRequestQueue;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/network/SigmobRequestQueue$1;->a:Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public apply(Lcom/czhj/volley/Request;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;)Z"
        }
    .end annotation

    const/4 p1, 0x1

    return p1
.end method
