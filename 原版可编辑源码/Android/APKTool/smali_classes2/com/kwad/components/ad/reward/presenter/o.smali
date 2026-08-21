.class public final Lcom/kwad/components/ad/reward/presenter/o;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private oX:Lcom/kwad/components/core/playable/a;

.field private sF:Lcom/kwad/components/core/playable/PlayableSource;

.field private final sG:Lcom/kwad/components/ad/reward/e/h;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/o$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/o$1;-><init>(Lcom/kwad/components/ad/reward/presenter/o;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o;->sG:Lcom/kwad/components/ad/reward/e/h;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/o;Lcom/kwad/components/core/playable/PlayableSource;)Lcom/kwad/components/core/playable/PlayableSource;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/o;->sF:Lcom/kwad/components/core/playable/PlayableSource;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/o;)Lcom/kwad/components/core/playable/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/o;->oX:Lcom/kwad/components/core/playable/a;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o;->oX:Lcom/kwad/components/core/playable/a;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, v1, v2, v3}, Lcom/kwad/components/core/playable/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Lcom/kwad/components/core/e/d/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    const-string v1, "playable"

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v2, v2, Lcom/kwad/components/ad/reward/j;->pj:Z

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bB(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v1, v0}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/playable/a;->pw()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o;->oX:Lcom/kwad/components/core/playable/a;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/o$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/o$2;-><init>(Lcom/kwad/components/ad/reward/presenter/o;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/playable/a;->a(Lcom/kwad/components/core/webview/jshandler/ah$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o;->oX:Lcom/kwad/components/core/playable/a;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/o$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/o$3;-><init>(Lcom/kwad/components/ad/reward/presenter/o;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/playable/a;->a(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/o;->sG:Lcom/kwad/components/ad/reward/e/h;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method

.method public final e(Lcom/kwad/components/core/playable/PlayableSource;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o;->oX:Lcom/kwad/components/core/playable/a;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/playable/a;->e(Lcom/kwad/components/core/playable/PlayableSource;)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/o;->sF:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/playable/a;->e(Lcom/kwad/components/core/playable/PlayableSource;)V

    :cond_1
    return-void
.end method

.method public final hH()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o;->oX:Lcom/kwad/components/core/playable/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/playable/a;->hH()V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_playable_webview:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/o;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/playable/a;->pv()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/playable/a;->hH()V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/o;->sG:Lcom/kwad/components/ad/reward/e/h;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method
