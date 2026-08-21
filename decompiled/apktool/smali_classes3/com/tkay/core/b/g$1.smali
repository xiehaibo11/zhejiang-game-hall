.class final Lcom/tkay/core/b/g$1;
.super Lcom/tkay/core/b/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/g;->a(Lcom/tkay/core/b/b/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/aj;

.field final synthetic b:Lcom/tkay/core/b/g;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/g;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 82
    iput-object p1, p0, Lcom/tkay/core/b/g$1;->b:Lcom/tkay/core/b/g;

    iput-object p3, p0, Lcom/tkay/core/b/g$1;->a:Lcom/tkay/core/common/f/aj;

    invoke-direct {p0, p2}, Lcom/tkay/core/b/b/b;-><init>(Lcom/tkay/core/api/TYBaseAdAdapter;)V

    return-void
.end method

.method private a(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/b/c/a;)V
    .locals 2

    .line 103
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/b/g$1$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/core/b/g$1$1;-><init>(Lcom/tkay/core/b/g$1;Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/b/c/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method public final onC2SBidResult(Lcom/tkay/core/api/TYBiddingResult;)V
    .locals 1

    .line 86
    iget-object v0, p0, Lcom/tkay/core/b/g$1;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz v0, :cond_0

    .line 87
    iget-object v0, p0, Lcom/tkay/core/b/g$1;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->releaseLoadResource()V

    :cond_0
    const/4 v0, 0x0

    .line 89
    invoke-direct {p0, p1, v0}, Lcom/tkay/core/b/g$1;->a(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/b/c/a;)V

    return-void
.end method

.method public final onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V
    .locals 2

    .line 94
    iget-object v0, p0, Lcom/tkay/core/b/g$1;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz v0, :cond_0

    .line 95
    iget-object v0, p0, Lcom/tkay/core/b/g$1;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->releaseLoadResource()V

    .line 97
    :cond_0
    new-instance v0, Lcom/tkay/core/b/c/a;

    iget-object v1, p0, Lcom/tkay/core/b/g$1;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-direct {v0, v1, p2}, Lcom/tkay/core/b/c/a;-><init>(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/api/BaseAd;)V

    .line 98
    invoke-direct {p0, p1, v0}, Lcom/tkay/core/b/g$1;->a(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/b/c/a;)V

    return-void
.end method
