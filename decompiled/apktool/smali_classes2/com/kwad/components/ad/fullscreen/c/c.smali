.class public final Lcom/kwad/components/ad/fullscreen/c/c;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/h;


# instance fields
.field private gr:Landroid/view/View;

.field private gs:Landroid/view/View;

.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/c$1;-><init>(Lcom/kwad/components/ad/fullscreen/c/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/c$2;-><init>(Lcom/kwad/components/ad/fullscreen/c/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/a/e;

    invoke-direct {v0}, Lcom/kwad/components/ad/fullscreen/c/a/e;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/c;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/b/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/fullscreen/c/b/a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/c;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/c/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/fullscreen/c/c/a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/c;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/fullscreen/c/c;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/fullscreen/c/c;Z)V
    .locals 0

    const/4 p1, 0x0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/fullscreen/c/c;->i(Z)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/fullscreen/c/c;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private bQ()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gr:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gs:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method

.method private bR()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pl:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pk:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gr:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gs:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/fullscreen/c/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/c;->bQ()V

    return-void
.end method

.method private i(Z)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pl:Z

    const/16 v1, 0x8

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pk:Z

    if-eqz v0, :cond_1

    :cond_0
    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gr:Landroid/view/View;

    invoke-virtual {p1, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gs:Landroid/view/View;

    invoke-virtual {p1, v1}, Landroid/view/View;->setVisibility(I)V

    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gr:Landroid/view/View;

    invoke-virtual {p1, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gs:Landroid/view/View;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

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

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/ad/reward/e/h;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gr:Landroid/view/View;

    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    return-void

    :cond_1
    :goto_1
    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gr:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gs:Landroid/view/View;

    goto :goto_0
.end method

.method public final bS()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/c;->bR()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pk:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gs:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gs:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public final bT()V
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/c;->i(Z)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_detail_top_toolbar:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gr:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_end_top_toolbar:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gs:Landroid/view/View;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method
