.class public abstract Lcom/kwad/components/ad/widget/tailframe/appbar/a;
.super Landroid/widget/LinearLayout;


# instance fields
.field protected Bd:Lcom/kwad/components/ad/widget/AppScoreView;

.field protected Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

.field protected GA:Landroid/view/View;

.field protected HJ:Landroid/widget/TextView;

.field protected dx:Landroid/widget/TextView;

.field protected iI:Landroid/animation/ValueAnimator;

.field protected lh:Landroid/widget/ImageView;

.field protected li:Landroid/widget/TextView;

.field protected yA:Lcom/kwad/components/ad/i/a;

.field private yB:Ljava/lang/Runnable;

.field protected yp:Landroid/view/View;

.field protected yq:Landroid/widget/Button;

.field protected yr:Landroid/widget/Button;

.field protected yx:Lcom/kwad/components/ad/widget/KsAppTagsView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    invoke-direct {p0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->initView()V

    return-void
.end method

.method private initView()V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->getLayoutId()I

    move-result v1

    invoke-static {v0, v1, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->GA:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_icon:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->lh:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_name:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->li:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_score:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/widget/AppScoreView;

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->Bd:Lcom/kwad/components/ad/widget/AppScoreView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_download_count:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->dx:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_introduce:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->HJ:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_download_bar:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/page/widget/TextProgressBar;

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-virtual {p0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41800000    # 16.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setTextDimen(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setTextColor(I)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_tags:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/widget/KsAppTagsView;

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_install_action:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yq:Landroid/widget/Button;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_install_start:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yr:Landroid/widget/Button;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_install_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yp:Landroid/view/View;

    new-instance v0, Lcom/kwad/components/ad/i/a;

    iget-object v1, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->GA:Landroid/view/View;

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/i/a;-><init>(Landroid/view/View;)V

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yA:Lcom/kwad/components/ad/i/a;

    return-void
.end method

.method private mc()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->iI:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x3

    new-array v0, v0, [F

    fill-array-data v0, :array_0

    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->iI:Landroid/animation/ValueAnimator;

    const-wide/16 v1, 0x4b0

    invoke-virtual {v0, v1, v2}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->iI:Landroid/animation/ValueAnimator;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->setRepeatCount(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->iI:Landroid/animation/ValueAnimator;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->setRepeatMode(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->iI:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/components/ad/widget/tailframe/appbar/a$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a$2;-><init>(Lcom/kwad/components/ad/widget/tailframe/appbar/a;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->iI:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->start()V

    return-void

    :array_0
    .array-data 4
        0x3f800000    # 1.0f
        0x3f99999a    # 1.2f
        0x3f800000    # 1.0f
    .end array-data
.end method


# virtual methods
.method public b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 7

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    const/16 v2, 0xc

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->lh:Landroid/widget/ImageView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ct(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->lh:Landroid/widget/ImageView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    :goto_0
    invoke-static {v1, v3, p1, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadAppIcon(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object v1, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->li:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bO(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    const/4 v2, 0x1

    const/16 v3, 0x8

    const/4 v4, 0x0

    if-nez v1, :cond_4

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->as(Lcom/kwad/sdk/core/response/model/AdInfo;)F

    move-result v1

    const/high16 v5, 0x40400000    # 3.0f

    cmpl-float v5, v1, v5

    if-ltz v5, :cond_1

    move v5, v2

    goto :goto_1

    :cond_1
    move v5, v4

    :goto_1
    if-eqz v5, :cond_2

    iget-object v5, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->Bd:Lcom/kwad/components/ad/widget/AppScoreView;

    invoke-virtual {v5, v1}, Lcom/kwad/components/ad/widget/AppScoreView;->setScore(F)V

    iget-object v1, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->Bd:Lcom/kwad/components/ad/widget/AppScoreView;

    invoke-virtual {v1, v4}, Lcom/kwad/components/ad/widget/AppScoreView;->setVisibility(I)V

    goto :goto_2

    :cond_2
    iget-object v1, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->Bd:Lcom/kwad/components/ad/widget/AppScoreView;

    invoke-virtual {v1, v3}, Lcom/kwad/components/ad/widget/AppScoreView;->setVisibility(I)V

    :goto_2
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ar(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_3

    iget-object v5, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->dx:Landroid/widget/TextView;

    invoke-virtual {v5, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v1, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->dx:Landroid/widget/TextView;

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setVisibility(I)V

    goto :goto_3

    :cond_3
    iget-object v1, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->dx:Landroid/widget/TextView;

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_4
    :goto_3
    iget-object v1, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->HJ:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-virtual {v0, v3}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yp:Landroid/view/View;

    invoke-virtual {v0, v4}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yr:Landroid/widget/Button;

    const-string v1, "\u67e5\u770b\u8be6\u60c5"

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yq:Landroid/widget/Button;

    new-array v1, v2, [Ljava/lang/Object;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zC()I

    move-result v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v4

    const-string v2, "\u6d4f\u89c8\u8be6\u60c5\u9875%s\u79d2\uff0c\u9886\u53d6\u5956\u52b1"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    iget-boolean v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mRewardVerifyCalled:Z

    if-nez v0, :cond_8

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yB:Ljava/lang/Runnable;

    if-nez v0, :cond_5

    new-instance v0, Lcom/kwad/components/ad/widget/tailframe/appbar/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a$1;-><init>(Lcom/kwad/components/ad/widget/tailframe/appbar/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yB:Ljava/lang/Runnable;

    :cond_5
    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yp:Landroid/view/View;

    iget-object v1, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yB:Ljava/lang/Runnable;

    const-wide/16 v5, 0x640

    invoke-virtual {v0, v1, v5, v6}, Landroid/view/View;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_4

    :cond_6
    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-virtual {v0, v4}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yp:Landroid/view/View;

    invoke-virtual {v0, v3}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yB:Ljava/lang/Runnable;

    if-eqz v0, :cond_7

    iget-object v1, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yp:Landroid/view/View;

    invoke-virtual {v1, v0}, Landroid/view/View;->removeCallbacks(Ljava/lang/Runnable;)Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yB:Ljava/lang/Runnable;

    :cond_7
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->z(Lcom/kwad/sdk/core/response/model/AdInfo;)V

    :cond_8
    :goto_4
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_a

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/c;->bX(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_9

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

    invoke-virtual {v0, v4}, Lcom/kwad/components/ad/widget/KsAppTagsView;->setVisibility(I)V

    goto :goto_5

    :cond_9
    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

    invoke-virtual {v0, v3}, Lcom/kwad/components/ad/widget/KsAppTagsView;->setVisibility(I)V

    :goto_5
    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/widget/KsAppTagsView;->setAppTags(Ljava/util/List;)V

    :cond_a
    return-void
.end method

.method public getBtnInstallContainer()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yp:Landroid/view/View;

    return-object v0
.end method

.method public abstract getLayoutId()I
.end method

.method public getTextProgressBar()Lcom/kwad/components/core/page/widget/TextProgressBar;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->Bt:Lcom/kwad/components/core/page/widget/TextProgressBar;

    return-object v0
.end method

.method public final kq()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->iI:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->iI:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->iI:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->end()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yB:Ljava/lang/Runnable;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yp:Landroid/view/View;

    invoke-virtual {v1, v0}, Landroid/view/View;->removeCallbacks(Ljava/lang/Runnable;)Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yB:Ljava/lang/Runnable;

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->yA:Lcom/kwad/components/ad/i/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/i/a;->lN()V

    return-void
.end method

.method public final z(Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 1

    iget p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    const/4 v0, 0x3

    if-eq p1, v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->mc()V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/widget/tailframe/appbar/a;->kq()V

    return-void
.end method
