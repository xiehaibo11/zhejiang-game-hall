.class final Lcom/kwad/components/ad/feed/b/m$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/feed/d$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/m;->bs()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic fI:Lcom/kwad/components/ad/feed/b/m;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/m;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$5;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final b(D)Z
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zH()F

    move-result v0

    const/high16 v1, 0x42c80000    # 100.0f

    mul-float/2addr v0, v1

    float-to-int v0, v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/m$5;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/b/m;->u(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/widget/RatioFrameLayout;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/kwad/sdk/utils/bm;->o(Landroid/view/View;I)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/e/d/a$a;

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/m$5;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-virtual {v2}, Lcom/kwad/components/ad/feed/b/m;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/m$5;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v2}, Lcom/kwad/components/ad/feed/b/m;->R(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/m$5;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v2}, Lcom/kwad/components/ad/feed/b/m;->Q(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/e/d/c;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    const/4 v2, 0x2

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->ao(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    const/16 v1, 0x9d

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->an(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    const/4 v1, 0x5

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->am(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->aq(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    new-instance v2, Lcom/kwad/components/ad/feed/b/m$5$1;

    invoke-direct {v2, p0, p1, p2}, Lcom/kwad/components/ad/feed/b/m$5$1;-><init>(Lcom/kwad/components/ad/feed/b/m$5;D)V

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    :cond_0
    return v1
.end method
