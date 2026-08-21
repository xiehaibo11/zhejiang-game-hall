.class final Lcom/kwad/components/ad/f/d$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/f/b$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/d;->j(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic mF:Lcom/kwad/components/ad/f/d;

.field final synthetic mM:Landroid/view/View;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/d;Landroid/view/View;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/d$7;->mF:Lcom/kwad/components/ad/f/d;

    iput-object p2, p0, Lcom/kwad/components/ad/f/d$7;->mM:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final f(D)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$7;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->g(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$7;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->g(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/d$7;->mM:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/e/d/a$a;

    invoke-static {v0}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v0

    invoke-direct {v1, v0}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$7;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->b(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/d$7;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v1}, Lcom/kwad/components/ad/f/d;->j(Lcom/kwad/components/ad/f/d;)Lcom/kwad/components/core/e/d/c;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->at(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/f/d$7$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/kwad/components/ad/f/d$7$1;-><init>(Lcom/kwad/components/ad/f/d$7;D)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    iget-object p1, p0, Lcom/kwad/components/ad/f/d$7;->mM:Landroid/view/View;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/f/d$7;->mF:Lcom/kwad/components/ad/f/d;

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$7;->mM:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {p2, v0}, Lcom/kwad/components/ad/f/d;->a(Lcom/kwad/components/ad/f/d;Landroid/content/Context;)Landroid/os/Vibrator;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/kwad/sdk/utils/bj;->a(Landroid/content/Context;Landroid/os/Vibrator;)V

    :cond_1
    :goto_0
    return-void
.end method
