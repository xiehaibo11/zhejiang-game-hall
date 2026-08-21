.class public final Lcom/kwad/components/ad/reward/m/i;
.super Lcom/kwad/components/ad/reward/m/d;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/m/i$a;
    }
.end annotation


# instance fields
.field private gQ:Landroid/widget/TextView;

.field private lB:Lcom/kwad/components/core/widget/KSCornerImageView;

.field private lC:Landroid/widget/TextView;

.field private mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

.field private qx:Lcom/kwad/components/ad/reward/j;

.field private sw:Landroid/view/ViewGroup;

.field private yV:Landroid/view/ViewGroup;

.field private yW:Lcom/kwad/components/ad/widget/KsPriceView;

.field private yX:Landroid/widget/TextView;

.field private yY:Lcom/kwad/components/core/widget/KsStyledTextButton;

.field private yZ:Landroid/widget/TextView;

.field private za:Landroid/widget/TextView;

.field private zb:Landroid/view/View;

.field private zc:Landroid/widget/ImageView;


# direct methods
.method public constructor <init>(Lcom/kwad/components/ad/reward/j;Landroid/view/ViewGroup;Lcom/kwad/components/core/widget/KsLogoView;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/d;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->qx:Lcom/kwad/components/ad/reward/j;

    iput-object p3, p0, Lcom/kwad/components/ad/reward/m/i;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/m/i;->yV:Landroid/view/ViewGroup;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/i;->initView()V

    return-void
.end method

.method private static a(Landroid/view/View;F)Landroid/animation/Animator;
    .locals 7

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Landroid/view/View;->getWidth()I

    move-result v0

    if-gtz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Landroid/view/View;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$dimen;->ksad_jinniu_light_sweep_width:I

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDimension(I)F

    move-result v0

    add-float/2addr v0, p1

    const/4 p1, 0x1

    new-array v1, p1, [F

    const/4 v2, 0x0

    aput v0, v1, v2

    const-string v0, "translationX"

    invoke-static {p0, v0, v1}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    const-wide/16 v3, 0x3e8

    invoke-virtual {v0, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v0

    const v1, 0x3ed70a3d    # 0.42f

    const/4 v5, 0x0

    const/high16 v6, 0x3f800000    # 1.0f

    invoke-static {v1, v5, v6, v6}, Landroid/support/v4/view/animation/PathInterpolatorCompat;->create(FFFF)Landroid/view/animation/Interpolator;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    const/4 v1, 0x2

    new-array v5, v1, [F

    fill-array-data v5, :array_0

    const-string v6, "alpha"

    invoke-static {p0, v6, v5}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p0

    invoke-virtual {p0, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object p0

    new-instance v3, Landroid/animation/AnimatorSet;

    invoke-direct {v3}, Landroid/animation/AnimatorSet;-><init>()V

    new-array v1, v1, [Landroid/animation/Animator;

    aput-object v0, v1, v2

    aput-object p0, v1, p1

    invoke-virtual {v3, v1}, Landroid/animation/AnimatorSet;->playSequentially([Landroid/animation/Animator;)V

    return-object v3

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return-object p0

    :array_0
    .array-data 4
        0x3f800000    # 1.0f
        0x3f800000    # 1.0f
    .end array-data
.end method

.method private a(Landroid/view/View;Landroid/view/View;Landroid/view/View;)Landroid/animation/Animator;
    .locals 15

    move-object/from16 v0, p2

    invoke-virtual/range {p1 .. p1}, Landroid/view/View;->getHeight()I

    move-result v3

    if-lez v3, :cond_2

    invoke-virtual/range {p1 .. p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    if-nez v1, :cond_0

    goto/16 :goto_0

    :cond_0
    const v1, 0x3f028f5c    # 0.51f

    const v2, 0x3f2b851f    # 0.67f

    const/high16 v8, 0x3f800000    # 1.0f

    const/4 v9, 0x0

    invoke-static {v1, v9, v2, v8}, Landroid/support/v4/view/animation/PathInterpolatorCompat;->create(FFFF)Landroid/view/animation/Interpolator;

    move-result-object v1

    invoke-virtual/range {p1 .. p1}, Landroid/view/View;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    sget v4, Lcom/kwad/sdk/R$dimen;->ksad_reward_jinniu_card_height_full:I

    invoke-virtual {v2, v4}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v2

    const/4 v10, 0x2

    new-array v4, v10, [I

    const/4 v11, 0x0

    aput v3, v4, v11

    const/4 v12, 0x1

    aput v2, v4, v12

    invoke-static {v4}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object v2

    const-wide/16 v4, 0x1f4

    invoke-virtual {v2, v4, v5}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    move-result-object v13

    invoke-virtual {v13, v1}, Landroid/animation/ValueAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    invoke-virtual/range {p1 .. p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v1

    if-eqz v1, :cond_1

    if-eqz p3, :cond_1

    invoke-virtual/range {p3 .. p3}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    instance-of v1, v1, Landroid/view/ViewGroup$MarginLayoutParams;

    if-eqz v1, :cond_1

    invoke-virtual/range {p3 .. p3}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    move-object v4, v1

    check-cast v4, Landroid/view/ViewGroup$MarginLayoutParams;

    iget v5, v4, Landroid/view/ViewGroup$MarginLayoutParams;->bottomMargin:I

    new-instance v14, Lcom/kwad/components/ad/reward/m/i$3;

    move-object v1, v14

    move-object v2, p0

    move-object/from16 v6, p3

    move-object/from16 v7, p1

    invoke-direct/range {v1 .. v7}, Lcom/kwad/components/ad/reward/m/i$3;-><init>(Lcom/kwad/components/ad/reward/m/i;ILandroid/view/ViewGroup$MarginLayoutParams;ILandroid/view/View;Landroid/view/View;)V

    invoke-virtual {v13, v14}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    :cond_1
    new-instance v1, Landroid/animation/AnimatorSet;

    invoke-direct {v1}, Landroid/animation/AnimatorSet;-><init>()V

    new-array v2, v10, [F

    fill-array-data v2, :array_0

    const-string v3, "alpha"

    invoke-static {v0, v3, v2}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v2

    const-wide/16 v4, 0xc8

    invoke-virtual {v2, v4, v5}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v2

    const v4, 0x3f5c28f6    # 0.86f

    const v5, 0x3f547ae1    # 0.83f

    invoke-static {v4, v9, v5, v8}, Landroid/support/v4/view/animation/PathInterpolatorCompat;->create(FFFF)Landroid/view/animation/Interpolator;

    move-result-object v4

    new-array v5, v10, [F

    fill-array-data v5, :array_1

    invoke-static {v0, v3, v5}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    const-wide/16 v5, 0x12c

    invoke-virtual {v0, v5, v6}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/animation/Animator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    new-array v3, v10, [Landroid/animation/Animator;

    aput-object v2, v3, v11

    aput-object v0, v3, v12

    invoke-virtual {v1, v3}, Landroid/animation/AnimatorSet;->playSequentially([Landroid/animation/Animator;)V

    new-instance v0, Landroid/animation/AnimatorSet;

    invoke-direct {v0}, Landroid/animation/AnimatorSet;-><init>()V

    new-array v2, v10, [Landroid/animation/Animator;

    aput-object v13, v2, v11

    aput-object v1, v2, v12

    invoke-virtual {v0, v2}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    return-object v0

    :cond_2
    :goto_0
    const/4 v0, 0x0

    return-object v0

    nop

    :array_0
    .array-data 4
        0x0
        0x0
    .end array-data

    :array_1
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/m/i;Landroid/view/View;F)Landroid/animation/Animator;
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/components/ad/reward/m/i;->a(Landroid/view/View;F)Landroid/animation/Animator;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/m/i;Landroid/view/View;Landroid/view/View;Landroid/view/View;)Landroid/animation/Animator;
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/components/ad/reward/m/i;->a(Landroid/view/View;Landroid/view/View;Landroid/view/View;)Landroid/animation/Animator;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/m/i;)Landroid/view/ViewGroup;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/i;->sw:Landroid/view/ViewGroup;

    return-object p0
.end method

.method private a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/reward/m/i$a;)V
    .locals 3

    if-nez p2, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->lB:Lcom/kwad/components/core/widget/KSCornerImageView;

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->gu()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x4

    invoke-static {v0, v1, p1, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadAppIcon(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->gQ:Landroid/widget/TextView;

    if-eqz p1, :cond_1

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->getTitle()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->lC:Landroid/widget/TextView;

    if-eqz p1, :cond_2

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->gv()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->yW:Lcom/kwad/components/ad/widget/KsPriceView;

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Lcom/kwad/components/ad/widget/KsPriceView;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    sget v0, Lcom/kwad/sdk/R$dimen;->ksad_reward_jinniu_end_origin_text_size:I

    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yW:Lcom/kwad/components/ad/widget/KsPriceView;

    invoke-virtual {v0}, Lcom/kwad/components/ad/widget/KsPriceView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$color;->ksad_jinniu_end_origin_color:I

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getColor(I)I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/i;->yW:Lcom/kwad/components/ad/widget/KsPriceView;

    invoke-virtual {v1}, Lcom/kwad/components/ad/widget/KsPriceView;->getConfig()Lcom/kwad/components/ad/widget/KsPriceView$a;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/kwad/components/ad/widget/KsPriceView$a;->ag(I)Lcom/kwad/components/ad/widget/KsPriceView$a;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/kwad/components/ad/widget/KsPriceView$a;->ai(I)Lcom/kwad/components/ad/widget/KsPriceView$a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/widget/KsPriceView$a;->ah(I)Lcom/kwad/components/ad/widget/KsPriceView$a;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->yW:Lcom/kwad/components/ad/widget/KsPriceView;

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->ka()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->ef()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/components/ad/widget/KsPriceView;->d(Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_3
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->yX:Landroid/widget/TextView;

    const/16 v0, 0x8

    if-eqz p1, :cond_6

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->kd()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_4

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->yX:Landroid/widget/TextView;

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->kd()Ljava/lang/String;

    move-result-object v1

    :goto_0
    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    :cond_4
    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->getRating()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_5

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->yX:Landroid/widget/TextView;

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->getRating()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_5
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->yX:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_6
    :goto_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->yZ:Landroid/widget/TextView;

    if-eqz p1, :cond_7

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->kb()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_7

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->yZ:Landroid/widget/TextView;

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->kb()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_7
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->yY:Lcom/kwad/components/core/widget/KsStyledTextButton;

    if-eqz p1, :cond_8

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->kc()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_8

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->yY:Lcom/kwad/components/core/widget/KsStyledTextButton;

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->kc()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/widget/KsStyledTextButton;->setText(Ljava/lang/CharSequence;)V

    :cond_8
    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->kb()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_9

    goto :goto_2

    :cond_9
    const/4 v0, 0x0

    :goto_2
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->zb:Landroid/view/View;

    if-eqz p1, :cond_a

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    :cond_a
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->za:Landroid/widget/TextView;

    if-eqz p1, :cond_b

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->hg()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_b

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->za:Landroid/widget/TextView;

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/m/i$a;->hg()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_b
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/m/i;)Lcom/kwad/components/core/widget/KsStyledTextButton;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/i;->yY:Lcom/kwad/components/core/widget/KsStyledTextButton;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/m/i;)Lcom/kwad/components/core/widget/KsLogoView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/i;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/m/i;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/i;->zc:Landroid/widget/ImageView;

    return-object p0
.end method

.method private initView()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yV:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_jinniu_root:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->sw:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yV:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_jinniu_icon:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KSCornerImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->lB:Lcom/kwad/components/core/widget/KSCornerImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yV:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_jinniu_title:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->gQ:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yV:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_jinniu_desc:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->lC:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yV:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_jinniu_price:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/widget/KsPriceView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yW:Lcom/kwad/components/ad/widget/KsPriceView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yV:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_jinniu_right_label:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yX:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yV:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_jinniu_btn_buy:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsStyledTextButton;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yY:Lcom/kwad/components/core/widget/KsStyledTextButton;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yV:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_jinniu_light_sweep:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->zc:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yV:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_jinniu_coupon_layout:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->zb:Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yV:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_jinniu_coupon:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yZ:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yV:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_jinniu_coupon_prefix:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->za:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->sw:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yY:Lcom/kwad/components/core/widget/KsStyledTextButton;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/widget/KsStyledTextButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->sw:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/i;->sw:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    instance-of v2, v1, Landroid/widget/FrameLayout$LayoutParams;

    if-eqz v2, :cond_1

    check-cast v1, Landroid/widget/FrameLayout$LayoutParams;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v2, Lcom/kwad/sdk/R$dimen;->ksad_reward_follow_card_width_horizontal:I

    invoke-virtual {v0, v2}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v0

    iput v0, v1, Landroid/widget/FrameLayout$LayoutParams;->width:I

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->sw:Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/m/r;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/components/ad/reward/m/d;->a(Lcom/kwad/components/ad/reward/m/r;)V

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/m/r;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/i$a;->B(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/m/i$a;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/m/r;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/reward/m/i;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/reward/m/i$a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->sw:Landroid/view/ViewGroup;

    if-eqz p1, :cond_1

    new-instance v0, Lcom/kwad/components/ad/reward/m/i$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/m/i$1;-><init>(Lcom/kwad/components/ad/reward/m/i;)V

    const-wide/16 v1, 0xbb8

    invoke-virtual {p1, v0, v1, v2}, Landroid/view/ViewGroup;->postDelayed(Ljava/lang/Runnable;J)Z

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/i;->sw:Landroid/view/ViewGroup;

    new-instance v0, Lcom/kwad/components/ad/reward/m/i$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/m/i$2;-><init>(Lcom/kwad/components/ad/reward/m/i;)V

    const-wide/16 v1, 0x1388

    invoke-virtual {p1, v0, v1, v2}, Landroid/view/ViewGroup;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_1
    return-void
.end method

.method public final gQ()Landroid/view/ViewGroup;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->sw:Landroid/view/ViewGroup;

    return-object v0
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->sw:Landroid/view/ViewGroup;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    const/16 v2, 0x76

    const/4 v3, 0x2

    invoke-virtual {v0, v1, p1, v2, v3}, Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;II)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->yY:Lcom/kwad/components/core/widget/KsStyledTextButton;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {v0, v1, p1, v1, v1}, Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;II)V

    :cond_1
    return-void
.end method
