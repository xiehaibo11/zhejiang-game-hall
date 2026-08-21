.class Lcom/czhj/volley/RequestQueue$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/RequestQueue$RequestFilter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/volley/RequestQueue;->cancelAll(Ljava/lang/Object;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/Object;

.field final synthetic b:Lcom/czhj/volley/RequestQueue;


# direct methods
.method constructor <init>(Lcom/czhj/volley/RequestQueue;Ljava/lang/Object;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/volley/RequestQueue$1;->b:Lcom/czhj/volley/RequestQueue;

    iput-object p2, p0, Lcom/czhj/volley/RequestQueue$1;->a:Ljava/lang/Object;

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

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->getTag()Ljava/lang/Object;

    move-result-object p1

    iget-object v0, p0, Lcom/czhj/volley/RequestQueue$1;->a:Ljava/lang/Object;

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method
