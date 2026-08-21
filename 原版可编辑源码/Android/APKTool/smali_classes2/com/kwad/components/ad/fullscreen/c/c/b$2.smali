.class final Lcom/kwad/components/ad/fullscreen/c/c/b$2;
.super Lcom/kwad/components/ad/reward/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/fullscreen/c/c/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic hn:Lcom/kwad/components/ad/fullscreen/c/c/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/fullscreen/c/c/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$2;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/e/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final bD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$2;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->b(Lcom/kwad/components/ad/fullscreen/c/c/b;)Lcom/kwad/sdk/core/g/d;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$2;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->b(Lcom/kwad/components/ad/fullscreen/c/c/b;)Lcom/kwad/sdk/core/g/d;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$2;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {v1}, Lcom/kwad/components/ad/fullscreen/c/c/b;->c(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bh(Landroid/content/Context;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$2;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->d(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/widget/ImageView;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$2;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->d(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/widget/ImageView;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$2;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->e(Lcom/kwad/components/ad/fullscreen/c/c/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->am(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$2;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->a(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/widget/FrameLayout;

    move-result-object v0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_2
    return-void
.end method
