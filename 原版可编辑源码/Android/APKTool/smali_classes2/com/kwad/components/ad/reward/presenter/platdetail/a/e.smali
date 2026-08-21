.class public final Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/h;


# instance fields
.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

.field private vt:Landroid/view/View;

.field private vu:Landroid/view/View;

.field private vv:Landroid/widget/ImageView;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e$1;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->gt:Lcom/kwad/components/core/webview/b/e/e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e$2;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/d/a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/i;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/f/i;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private bQ()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vt:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vu:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->bQ()V

    return-void
.end method

.method private iw()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pl:Z

    const/16 v1, 0x8

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vu:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vt:Landroid/view/View;

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->getContext()Landroid/content/Context;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vv:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V
    .locals 0

    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vt:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vu:Landroid/view/View;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vt:Landroid/view/View;

    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method

.method public final bS()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->iw()V

    return-void
.end method

.method public final bT()V
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->ix()V

    return-void
.end method

.method public final ix()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pl:Z

    const/4 v1, 0x0

    const/16 v2, 0x8

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vt:Landroid/view/View;

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vt:Landroid/view/View;

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vu:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :goto_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->getContext()Landroid/content/Context;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vv:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_detail_top_toolbar:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vt:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_end_top_toolbar:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vu:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_blur_end_cover:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vv:Landroid/widget/ImageView;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->iw()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/ad/reward/e/h;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;->vu:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method
