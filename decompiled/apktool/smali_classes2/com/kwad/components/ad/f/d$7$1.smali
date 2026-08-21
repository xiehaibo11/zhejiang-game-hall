.class final Lcom/kwad/components/ad/f/d$7$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/d$7;->f(D)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic fK:D

.field final synthetic mN:Lcom/kwad/components/ad/f/d$7;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/d$7;D)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/d$7$1;->mN:Lcom/kwad/components/ad/f/d$7;

    iput-wide p2, p0, Lcom/kwad/components/ad/f/d$7$1;->fK:D

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v1, 0x9d

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-wide v1, p0, Lcom/kwad/components/ad/f/d$7$1;->fK:D

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/j;->i(D)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/d$7$1;->mN:Lcom/kwad/components/ad/f/d$7;

    iget-object v1, v1, Lcom/kwad/components/ad/f/d$7;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v1}, Lcom/kwad/components/ad/f/d;->b(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$7$1;->mN:Lcom/kwad/components/ad/f/d$7;

    iget-object v0, v0, Lcom/kwad/components/ad/f/d$7;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->a(Lcom/kwad/components/ad/f/d;)Lcom/kwad/components/ad/f/d$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/d$7$1;->mN:Lcom/kwad/components/ad/f/d$7;

    iget-object v1, v1, Lcom/kwad/components/ad/f/d$7;->mM:Landroid/view/View;

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/f/d$a;->l(Landroid/view/View;)V

    return-void
.end method
