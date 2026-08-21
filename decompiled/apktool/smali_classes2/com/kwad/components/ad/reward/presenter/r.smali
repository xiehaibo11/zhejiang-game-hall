.class public final Lcom/kwad/components/ad/reward/presenter/r;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/f;
.implements Lcom/kwad/components/core/i/a$a;
.implements Lcom/kwad/components/core/webview/jshandler/n$b;


# instance fields
.field private cH:Lcom/kwad/sdk/core/webview/d/a/a;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field private pb:Lcom/kwad/components/ad/reward/g;

.field private rY:Landroid/widget/ImageView;

.field private sZ:I

.field private showTime:J

.field private ta:Landroid/view/View;

.field private tb:Lcom/kwad/components/core/widget/KsLogoView;

.field private tc:Lcom/kwad/components/core/video/DetailVideoView;

.field private td:I

.field private te:Landroid/view/View;

.field private tf:Landroid/widget/FrameLayout;

.field private tg:Landroid/animation/Animator;

.field private th:Landroid/animation/Animator;

.field private ti:Landroid/animation/Animator;

.field private tj:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private tk:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/i/c;",
            ">;"
        }
    .end annotation
.end field

.field private tl:J

.field private tm:J

.field private tn:F

.field private to:F

.field private tp:F

.field private tq:Z

.field private tr:J

.field private ts:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->sZ:I

    const-wide/16 v0, 0x1f4

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tl:J

    const-wide/16 v0, 0x32

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tm:J

    const v0, 0x3f9cdcdd

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tn:F

    const v0, 0x3f4e0233

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->to:F

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tp:F

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tq:Z

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->showTime:J

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tr:J

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/r$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/r$1;-><init>(Lcom/kwad/components/ad/reward/presenter/r;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/r$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/r$5;-><init>(Lcom/kwad/components/ad/reward/presenter/r;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    return-void
.end method

.method private K(Z)Z
    .locals 8

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/r;->hP()F

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/r;->b(F)I

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/r;->M(I)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->pb:Lcom/kwad/components/ad/reward/g;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/g;->ap()Z

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "webLoadSuccess: "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "RewardPreEndCardPresenter"

    invoke-static {v4, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-nez v1, :cond_1

    return v2

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/r;->hP()F

    move-result v1

    invoke-direct {p0, v1}, Lcom/kwad/components/ad/reward/presenter/r;->a(F)I

    move-result v5

    neg-int v0, v0

    int-to-float v4, v0

    iput v4, p0, Lcom/kwad/components/ad/reward/presenter/r;->tp:F

    const/4 v3, 0x1

    const/4 v6, 0x1

    move-object v2, p0

    move v7, p1

    invoke-direct/range {v2 .. v7}, Lcom/kwad/components/ad/reward/presenter/r;->a(ZFIZZ)Landroid/animation/Animator;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->tg:Landroid/animation/Animator;

    invoke-virtual {p1}, Landroid/animation/Animator;->start()V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/r;->hO()Landroid/animation/Animator;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->ti:Landroid/animation/Animator;

    invoke-virtual {p1}, Landroid/animation/Animator;->start()V

    const/4 p1, 0x2

    iput p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->sZ:I

    const/4 p1, 0x1

    return p1
.end method

.method private L(Z)V
    .locals 8

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/r;->hP()F

    move-result v0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/r;->hQ()F

    move-result v1

    sub-float/2addr v0, v1

    iget v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->tp:F

    add-float v4, v0, v1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/r;->hQ()F

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/r;->a(F)I

    move-result v5

    const/4 v3, 0x0

    const/4 v6, 0x0

    move-object v2, p0

    move v7, p1

    invoke-direct/range {v2 .. v7}, Lcom/kwad/components/ad/reward/presenter/r;->a(ZFIZZ)Landroid/animation/Animator;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->th:Landroid/animation/Animator;

    invoke-virtual {p1}, Landroid/animation/Animator;->start()V

    invoke-static {}, Lcom/kwad/sdk/core/d/a;->AW()Lcom/kwad/sdk/core/d/a;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->tj:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/d/a;->ar(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    const/4 p1, 0x3

    iput p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->sZ:I

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->pb:Lcom/kwad/components/ad/reward/g;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/g;->fC()V

    :cond_0
    return-void
.end method

.method private M(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->ta:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    instance-of v1, v0, Landroid/widget/FrameLayout$LayoutParams;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    iput p1, v0, Landroid/widget/FrameLayout$LayoutParams;->height:I

    neg-int p1, p1

    iput p1, v0, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    return-void

    :cond_0
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, p1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    iput p1, v0, Landroid/widget/FrameLayout$LayoutParams;->height:I

    neg-int p1, p1

    iput p1, v0, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->ta:Landroid/view/View;

    invoke-virtual {p1, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private a(F)I
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/r;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->e(Landroid/app/Activity;)I

    move-result v0

    int-to-float v0, v0

    sub-float/2addr v0, p1

    float-to-int p1, v0

    return p1
.end method

.method private a(Lcom/kwad/components/ad/reward/e/f;)I
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/r;->getPriority()I

    move-result v0

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/f;->getPriority()I

    move-result p1

    sub-int/2addr v0, p1

    return v0
.end method

.method private a(ZFIZZ)Landroid/animation/Animator;
    .locals 7

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getUpAnimator: translationY0: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v1, ", videoTargetHeight: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardPreEndCardPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x2

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->ta:Landroid/view/View;

    new-array v3, v1, [F

    aput p2, v3, v2

    const-string p2, "translationY"

    invoke-static {p1, p2, v3}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p1

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->ta:Landroid/view/View;

    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result p1

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/r;->ta:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    new-array v4, v0, [F

    int-to-float p1, p1

    aput p1, v4, v2

    invoke-static {p2}, Ljava/lang/Math;->abs(F)F

    move-result p1

    aput p1, v4, v1

    invoke-static {v4}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object p1

    new-instance p2, Lcom/kwad/components/ad/reward/presenter/r$3;

    invoke-direct {p2, p0, v3}, Lcom/kwad/components/ad/reward/presenter/r$3;-><init>(Lcom/kwad/components/ad/reward/presenter/r;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {p1, p2}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    :goto_0
    const/4 p2, 0x0

    if-eqz p4, :cond_1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/r;->tb:Lcom/kwad/components/core/widget/KsLogoView;

    new-array p4, v0, [F

    fill-array-data p4, :array_0

    const-string v3, "alpha"

    invoke-static {p2, v3, p4}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p2

    :cond_1
    iget-object p4, p0, Lcom/kwad/components/ad/reward/presenter/r;->rY:Landroid/widget/ImageView;

    invoke-virtual {p4}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p4

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/r;->tc:Lcom/kwad/components/core/video/DetailVideoView;

    iget-object v4, p0, Lcom/kwad/components/ad/reward/presenter/r;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v5, Lcom/kwad/components/ad/reward/presenter/r$4;

    invoke-direct {v5, p0, p4}, Lcom/kwad/components/ad/reward/presenter/r$4;-><init>(Lcom/kwad/components/ad/reward/presenter/r;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {v3, v4, p3, v5}, Lcom/kwad/components/core/video/DetailVideoView;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILandroid/animation/ValueAnimator$AnimatorUpdateListener;)Landroid/animation/ValueAnimator;

    move-result-object p3

    if-eqz p5, :cond_2

    iget-wide v3, p0, Lcom/kwad/components/ad/reward/presenter/r;->tl:J

    goto :goto_1

    :cond_2
    iget-wide v3, p0, Lcom/kwad/components/ad/reward/presenter/r;->tm:J

    :goto_1
    const p4, 0x3f147ae1    # 0.58f

    const/high16 v5, 0x3f800000    # 1.0f

    const/4 v6, 0x0

    invoke-static {v6, v6, p4, v5}, Landroid/support/v4/view/animation/PathInterpolatorCompat;->create(FFFF)Landroid/view/animation/Interpolator;

    move-result-object p4

    new-instance v5, Landroid/animation/AnimatorSet;

    invoke-direct {v5}, Landroid/animation/AnimatorSet;-><init>()V

    invoke-virtual {v5, v3, v4}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    invoke-virtual {v5, p4}, Landroid/animation/AnimatorSet;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    if-eqz p2, :cond_4

    if-eqz p5, :cond_3

    const/4 p4, 0x3

    new-array p4, p4, [Landroid/animation/Animator;

    aput-object p1, p4, v2

    aput-object p2, p4, v1

    aput-object p3, p4, v0

    invoke-virtual {v5, p4}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    goto :goto_2

    :cond_3
    new-array p3, v0, [Landroid/animation/Animator;

    aput-object p1, p3, v2

    aput-object p2, p3, v1

    invoke-virtual {v5, p3}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    goto :goto_2

    :cond_4
    if-eqz p5, :cond_5

    new-array p2, v0, [Landroid/animation/Animator;

    aput-object p1, p2, v2

    aput-object p3, p2, v1

    invoke-virtual {v5, p2}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    goto :goto_2

    :cond_5
    new-array p2, v1, [Landroid/animation/Animator;

    aput-object p1, p2, v2

    invoke-virtual {v5, p2}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    :goto_2
    return-object v5

    :array_0
    .array-data 4
        0x0
        0x437f0000    # 255.0f
    .end array-data
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/r;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/r;->ta:Landroid/view/View;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/r;J)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/presenter/r;->f(J)V

    return-void
.end method

.method private b(F)I
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/r;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$dimen;->ksad_reward_middle_end_card_logo_view_height:I

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/r;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$dimen;->ksad_reward_middle_end_card_logo_view_margin_bottom:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v1

    int-to-float v0, v0

    add-float/2addr p1, v0

    int-to-float v0, v1

    add-float/2addr p1, v0

    float-to-int p1, p1

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/r;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/r;->rY:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/r;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/r;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/r;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tk:Ljava/util/List;

    return-object p0
.end method

.method private d(Ljava/util/List;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;)V"
        }
    .end annotation

    new-instance v0, Lcom/kwad/components/ad/reward/g;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    invoke-direct {v0, p1, v1, p0}, Lcom/kwad/components/ad/reward/g;-><init>(Ljava/util/List;Lorg/json/JSONObject;Lcom/kwad/components/core/webview/jshandler/n$b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->pb:Lcom/kwad/components/ad/reward/g;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->pb:Lcom/kwad/components/ad/reward/g;

    iput-object v0, p1, Lcom/kwad/components/ad/reward/j;->pb:Lcom/kwad/components/ad/reward/g;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->pb:Lcom/kwad/components/ad/reward/g;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->be(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/g;->z(Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->pb:Lcom/kwad/components/ad/reward/g;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/g;->a(Lcom/kwad/sdk/core/webview/d/a/a;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->pb:Lcom/kwad/components/ad/reward/g;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/r;->tf:Landroid/widget/FrameLayout;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, p1, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v4, p0, Lcom/kwad/components/ad/reward/presenter/r;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v5, p1, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    iget v6, p1, Lcom/kwad/components/ad/reward/j;->mScreenOrientation:I

    invoke-virtual/range {v1 .. v6}, Lcom/kwad/components/ad/reward/g;->a(Landroid/widget/FrameLayout;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;I)V

    const-string p1, "RewardPreEndCardPresenter"

    const-string v0, "startPreloadWebView"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->pb:Lcom/kwad/components/ad/reward/g;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/r$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/r$2;-><init>(Lcom/kwad/components/ad/reward/presenter/r;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/g;->a(Lcom/kwad/components/ad/k/b$b;)V

    return-void
.end method

.method private f(J)V
    .locals 7

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tj:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->ts:Z

    if-eqz v1, :cond_1

    return-void

    :cond_1
    iget-wide v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->showTime:J

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-gtz v1, :cond_2

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bb(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->showTime:J

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tj:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->ba(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v0

    iget-wide v5, p0, Lcom/kwad/components/ad/reward/presenter/r;->showTime:J

    add-long/2addr v0, v5

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tr:J

    :cond_2
    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->showTime:J

    cmp-long v2, v0, v3

    const/4 v5, 0x1

    if-lez v2, :cond_4

    iget-boolean v2, p0, Lcom/kwad/components/ad/reward/presenter/r;->tq:Z

    if-nez v2, :cond_4

    cmp-long v0, p1, v0

    if-lez v0, :cond_4

    invoke-direct {p0, v5}, Lcom/kwad/components/ad/reward/presenter/r;->K(Z)Z

    move-result v0

    xor-int/2addr v0, v5

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->ts:Z

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "showError: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->ts:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardPreEndCardPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->ts:Z

    if-eqz v0, :cond_3

    return-void

    :cond_3
    iput-boolean v5, p0, Lcom/kwad/components/ad/reward/presenter/r;->tq:Z

    :cond_4
    iget v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->sZ:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_5

    move v0, v5

    goto :goto_0

    :cond_5
    const/4 v0, 0x0

    :goto_0
    iget-wide v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->tr:J

    cmp-long v3, v1, v3

    if-lez v3, :cond_6

    if-nez v0, :cond_6

    cmp-long p1, p1, v1

    if-lez p1, :cond_6

    invoke-direct {p0, v5}, Lcom/kwad/components/ad/reward/presenter/r;->L(Z)V

    :cond_6
    return-void
.end method

.method private hO()Landroid/animation/Animator;
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->te:Landroid/view/View;

    const/4 v1, 0x2

    new-array v1, v1, [F

    fill-array-data v1, :array_0

    const-string v2, "alpha"

    invoke-static {v0, v2, v1}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    const/high16 v1, 0x3e800000    # 0.25f

    const v2, 0x3dcccccd    # 0.1f

    const/high16 v3, 0x3f800000    # 1.0f

    invoke-static {v1, v2, v1, v3}, Landroid/support/v4/view/animation/PathInterpolatorCompat;->create(FFFF)Landroid/view/animation/Interpolator;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    const-wide/16 v1, 0xc8

    invoke-virtual {v0, v1, v2}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    return-object v0

    :array_0
    .array-data 4
        0x437f0000    # 255.0f
        0x0
    .end array-data
.end method

.method private hP()F
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/r;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->d(Landroid/app/Activity;)I

    move-result v0

    int-to-float v0, v0

    iget v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->tn:F

    div-float/2addr v0, v1

    return v0
.end method

.method private hQ()F
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/r;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->d(Landroid/app/Activity;)I

    move-result v0

    int-to-float v0, v0

    iget v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->to:F

    div-float/2addr v0, v1

    return v0
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/core/i/a$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tc:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->E(Landroid/view/View;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->td:I

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tc:Lcom/kwad/components/core/video/DetailVideoView;

    const/16 v1, 0x31

    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->n(Landroid/view/View;I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tb:Lcom/kwad/components/core/widget/KsLogoView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/KsLogoView;->aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method public final bD()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tj:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->sZ:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/r;->K(Z)Z

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/r;->L(Z)V

    return-void

    :cond_1
    const/4 v2, 0x2

    if-ne v0, v2, :cond_2

    invoke-direct {p0, v1}, Lcom/kwad/components/ad/reward/presenter/r;->L(Z)V

    :cond_2
    :goto_0
    return-void
.end method

.method public final c(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/components/core/i/c;",
            ">;)V"
        }
    .end annotation

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onInnerAdLoad: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardPreEndCardPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/i/c;

    invoke-virtual {v0}, Lcom/kwad/components/core/i/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tj:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->tk:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-static {p1}, Lcom/kwad/components/core/i/c;->j(Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/r;->d(Ljava/util/List;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/e/f;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/r;->a(Lcom/kwad/components/ad/reward/e/f;)I

    move-result p1

    return p1
.end method

.method public final getPriority()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_middle_end_card:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/r;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->ta:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_player:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/r;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/video/DetailVideoView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tc:Lcom/kwad/components/core/video/DetailVideoView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_logo_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/r;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tb:Lcom/kwad/components/core/widget/KsLogoView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_blur_video_cover:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/r;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->rY:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_web_card_webView:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/r;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->te:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_middle_end_card_webview_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/r;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tf:Landroid/widget/FrameLayout;

    return-void
.end method

.method public final onError(ILjava/lang/String;)V
    .locals 1

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "onError : msg "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "RewardPreEndCardPresenter"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onRequestResult(I)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onRequestResult : adNumber "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "RewardPreEndCardPresenter"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pz:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/core/i/a$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->pb:Lcom/kwad/components/ad/reward/g;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/g;->lI()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->ti:Landroid/animation/Animator;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/animation/Animator;->cancel()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tc:Lcom/kwad/components/core/video/DetailVideoView;

    if-eqz v0, :cond_2

    iget v1, p0, Lcom/kwad/components/ad/reward/presenter/r;->td:I

    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->n(Landroid/view/View;I)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tg:Landroid/animation/Animator;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Landroid/animation/Animator;->cancel()V

    :cond_3
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->ti:Landroid/animation/Animator;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r;->tg:Landroid/animation/Animator;

    return-void
.end method

.method public final y(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/i/c;

    sget v1, Lcom/kwad/components/core/i/e;->AGGREGATION:I

    invoke-direct {v0, p1, v1}, Lcom/kwad/components/core/i/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/core/i/c;)V

    :cond_0
    return-void
.end method
