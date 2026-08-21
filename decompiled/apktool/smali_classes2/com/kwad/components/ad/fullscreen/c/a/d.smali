.class public final Lcom/kwad/components/ad/fullscreen/c/a/d;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private gK:Landroid/widget/ImageView;

.field private gL:Landroid/widget/TextView;

.field private gM:Landroid/view/View;

.field private gN:Lcom/kwad/components/ad/reward/e/e;

.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/l;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gM:Landroid/view/View;

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/a/d$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/a/d$1;-><init>(Lcom/kwad/components/ad/fullscreen/c/a/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gt:Lcom/kwad/components/core/webview/b/e/e;

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/a/d$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/a/d$2;-><init>(Lcom/kwad/components/ad/fullscreen/c/a/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gN:Lcom/kwad/components/ad/reward/e/e;

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/a/d$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/a/d$3;-><init>(Lcom/kwad/components/ad/fullscreen/c/a/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/fullscreen/c/a/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/fullscreen/c/a/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/a/d;->bU()V

    return-void
.end method

.method private bU()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pf:Ljava/util/Set;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gN:Lcom/kwad/components/ad/reward/e/e;

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private bX()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gM:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gM:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setAlpha(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gM:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    const/4 v0, 0x2

    new-array v0, v0, [F

    fill-array-data v0, :array_0

    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/fullscreen/c/a/d$4;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/fullscreen/c/a/d$4;-><init>(Lcom/kwad/components/ad/fullscreen/c/a/d;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->start()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gM:Landroid/view/View;

    invoke-virtual {v0, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void

    :array_0
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data
.end method

.method static synthetic c(Lcom/kwad/components/ad/fullscreen/c/a/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/a/d;->bX()V

    return-void
.end method

.method static synthetic d(Lcom/kwad/components/ad/fullscreen/c/a/d;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gM:Landroid/view/View;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/a/d;->bU()V

    return-void
.end method

.method public final f(J)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ad(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    cmp-long p1, p1, v0

    if-ltz p1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/a/d;->bX()V

    :cond_0
    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gM:Landroid/view/View;

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/presenter/e;->a(Lcom/kwad/components/ad/reward/j;Z)V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_skip_icon:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gK:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_top_toolbar_close_tip:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gL:Landroid/widget/TextView;

    invoke-static {}, Lcom/kwad/components/ad/fullscreen/a/b;->bG()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/16 v1, 0x8

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gL:Landroid/widget/TextView;

    invoke-static {}, Lcom/kwad/components/ad/fullscreen/a/b;->bG()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gK:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gL:Landroid/widget/TextView;

    :goto_0
    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gM:Landroid/view/View;

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/fullscreen/a/b;->bF()I

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gK:Landroid/widget/ImageView;

    sget v2, Lcom/kwad/sdk/R$drawable;->ksad_page_close:I

    goto :goto_1

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gK:Landroid/widget/ImageView;

    sget v2, Lcom/kwad/sdk/R$drawable;->ksad_video_skip_icon:I

    :goto_1
    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setImageResource(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gL:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gK:Landroid/widget/ImageView;

    goto :goto_0
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pf:Ljava/util/Set;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->gN:Lcom/kwad/components/ad/reward/e/e;

    invoke-interface {v0, v1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/a/d;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    return-void
.end method
