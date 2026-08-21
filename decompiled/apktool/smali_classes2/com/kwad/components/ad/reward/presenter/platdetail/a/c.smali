.class public final Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private final gN:Lcom/kwad/components/ad/reward/e/e;

.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private final mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field private vk:Landroid/widget/ImageView;

.field private vl:Landroid/widget/TextView;

.field private vm:Z

.field private vn:Landroid/view/View;

.field private vo:J


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vm:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vn:Landroid/view/View;

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vo:J

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c$1;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c$2;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c$3;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->gN:Lcom/kwad/components/ad/reward/e/e;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vm:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->bU()V

    return-void
.end method

.method private bU()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pf:Ljava/util/Set;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->gN:Lcom/kwad/components/ad/reward/e/e;

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->X(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vo:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vn:Landroid/view/View;

    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vn:Landroid/view/View;

    const/16 v1, 0x8

    goto :goto_0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vo:J

    return-wide v0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->iu()V

    return-void
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vn:Landroid/view/View;

    return-object p0
.end method

.method private iu()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vn:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vn:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setAlpha(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vn:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    const/4 v0, 0x2

    new-array v0, v0, [F

    fill-array-data v0, :array_0

    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c$4;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c$4;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->start()V

    return-void

    nop

    :array_0
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->bU()V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vn:Landroid/view/View;

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vm:Z

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/presenter/e;->a(Lcom/kwad/components/ad/reward/j;Z)V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_detail_close_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vk:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_top_toolbar_close_tip:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vl:Landroid/widget/TextView;

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gD()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vl:Landroid/widget/TextView;

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gD()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vl:Landroid/widget/TextView;

    :goto_0
    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vn:Landroid/view/View;

    goto :goto_2

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gC()I

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vk:Landroid/widget/ImageView;

    sget v1, Lcom/kwad/sdk/R$drawable;->ksad_page_close:I

    goto :goto_1

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vk:Landroid/widget/ImageView;

    sget v1, Lcom/kwad/sdk/R$drawable;->ksad_video_skip_icon:I

    :goto_1
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vk:Landroid/widget/ImageView;

    goto :goto_0

    :goto_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vn:Landroid/view/View;

    invoke-virtual {v0, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->pf:Ljava/util/Set;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->gN:Lcom/kwad/components/ad/reward/e/e;

    invoke-interface {v0, v1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/c;->vn:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method
