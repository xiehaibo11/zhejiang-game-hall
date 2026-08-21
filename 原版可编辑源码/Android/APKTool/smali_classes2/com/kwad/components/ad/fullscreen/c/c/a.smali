.class public final Lcom/kwad/components/ad/fullscreen/c/c/a;
.super Lcom/kwad/components/ad/reward/presenter/f/d;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/h;


# instance fields
.field private hi:Landroid/widget/FrameLayout;

.field private final mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/c/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/c/a$1;-><init>(Lcom/kwad/components/ad/fullscreen/c/c/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/fullscreen/c/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/fullscreen/c/c/a;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->hi:Landroid/widget/FrameLayout;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V
    .locals 0

    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/c/a;->cd()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->hi:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/c/a;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->aH(Landroid/content/Context;)F

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/c/a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v0

    const/high16 v0, 0x3f000000    # 0.5f

    add-float/2addr v1, v0

    float-to-int v0, v1

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    const/16 v0, 0x2c

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    return-void
.end method

.method public final bS()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pl:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->hi:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public final bT()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v1, v1, Lcom/kwad/components/ad/reward/j;->pl:Z

    if-eqz v1, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->am(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->hi:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public final cc()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->cc()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pl:Z

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->hi:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final cd()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->hi:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-video-top-bar"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_top:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/c/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->hi:Landroid/widget/FrameLayout;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->onUnbind()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/c/a;->cd()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c/a;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method
