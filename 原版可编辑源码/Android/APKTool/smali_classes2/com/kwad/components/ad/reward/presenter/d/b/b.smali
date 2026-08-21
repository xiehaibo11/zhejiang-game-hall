.class public final Lcom/kwad/components/ad/reward/presenter/d/b/b;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Lcom/kwad/components/ad/reward/presenter/d/b/c;


# instance fields
.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private vN:Landroid/view/View;

.field private vO:Z

.field private final vP:Ljava/lang/Runnable;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/b/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/b/b$1;-><init>(Lcom/kwad/components/ad/reward/presenter/d/b/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->gt:Lcom/kwad/components/core/webview/b/e/e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/b/b$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/b/b$2;-><init>(Lcom/kwad/components/ad/reward/presenter/d/b/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vP:Ljava/lang/Runnable;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/d/b/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/d/b/b;)V
    .locals 0

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/d/b/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/b/b;->iK()V

    return-void
.end method

.method private iK()V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "showPageCloseBtn mPlayEndH5ShowSuccess: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v1, v1, Lcom/kwad/components/ad/reward/j;->pL:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", needHideCloseButton: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vO:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardPlayEndCloseBtn"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pL:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vO:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vN:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vN:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setAlpha(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vN:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->animate()Landroid/view/ViewPropertyAnimator;

    move-result-object v0

    const/high16 v1, 0x3f800000    # 1.0f

    invoke-virtual {v0, v1}, Landroid/view/ViewPropertyAnimator;->alpha(F)Landroid/view/ViewPropertyAnimator;

    move-result-object v0

    const-wide/16 v1, 0x1f4

    invoke-virtual {v0, v1, v2}, Landroid/view/ViewPropertyAnimator;->setDuration(J)Landroid/view/ViewPropertyAnimator;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/ViewPropertyAnimator;->start()V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->dA(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vO:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    :cond_0
    return-void
.end method

.method public final iJ()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pu:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-wide v0, v0, Lcom/kwad/components/ad/reward/j;->pE:J

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-nez v2, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vP:Ljava/lang/Runnable;

    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    return-void

    :cond_1
    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vP:Ljava/lang/Runnable;

    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vN:Landroid/view/View;

    if-ne p1, v0, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j;->fW()Lcom/kwad/components/core/playable/PlayableSource;

    move-result-object p1

    if-eqz p1, :cond_1

    sget-object v0, Lcom/kwad/components/core/playable/PlayableSource;->PENDANT_CLICK_NOT_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/playable/PlayableSource;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/components/core/playable/PlayableSource;->PENDANT_CLICK_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/playable/PlayableSource;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/components/core/playable/PlayableSource;->PENDANT_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/playable/PlayableSource;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/components/core/playable/PlayableSource;->ACTIONBAR_CLICK:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/playable/PlayableSource;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/b;->fq()V

    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/e;->w(Lcom/kwad/components/ad/reward/j;)V

    :cond_2
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_end_close_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vN:Landroid/view/View;

    invoke-virtual {v0, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vN:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->vP:Ljava/lang/Runnable;

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->b(Ljava/lang/Runnable;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/b;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void
.end method
