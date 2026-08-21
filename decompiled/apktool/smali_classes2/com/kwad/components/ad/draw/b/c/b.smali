.class public final Lcom/kwad/components/ad/draw/b/c/b;
.super Lcom/kwad/components/ad/draw/a/a;


# instance fields
.field private bY:Lcom/kwad/components/ad/k/b;

.field private cH:Lcom/kwad/sdk/core/webview/d/a/a;

.field private cQ:Landroid/widget/FrameLayout;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/a/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/draw/b/c/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b/c/b$1;-><init>(Lcom/kwad/components/ad/draw/b/c/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c/b;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/b/c/b;)Lcom/kwad/components/ad/draw/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/c/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/draw/b/c/b;)Lcom/kwad/components/ad/draw/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/c/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 5

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bY:Lcom/kwad/components/ad/k/b;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c/b;->bY:Lcom/kwad/components/ad/k/b;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c/b;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/k/b;->a(Lcom/kwad/sdk/core/webview/d/a/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/b;->bY:Lcom/kwad/components/ad/k/b;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c/b;->cQ:Landroid/widget/FrameLayout;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/b/c/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v2, v2, Lcom/kwad/components/ad/draw/a/b;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v3, p0, Lcom/kwad/components/ad/draw/b/c/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v3, v3, Lcom/kwad/components/ad/draw/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v4, p0, Lcom/kwad/components/ad/draw/b/c/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v4, v4, Lcom/kwad/components/ad/draw/a/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/kwad/components/ad/k/b;->a(Landroid/widget/FrameLayout;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/b;->bY:Lcom/kwad/components/ad/k/b;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/k/b;->a(Lcom/kwad/components/ad/k/b$b;)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_end_web_card_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/c/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c/b;->cQ:Landroid/widget/FrameLayout;

    return-void
.end method

.method public final onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/b;->bY:Lcom/kwad/components/ad/k/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/k/b;->lI()V

    :cond_0
    return-void
.end method
