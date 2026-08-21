.class public final Lcom/kwad/sdk/a/a/e;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private final ahN:Z

.field private final ahO:Z

.field private ahP:Landroid/view/View;

.field private ahQ:Landroid/widget/ImageView;

.field private ahR:Landroid/widget/TextView;

.field private ahS:Landroid/widget/Button;

.field private ahT:I

.field private ahU:I

.field private ahV:Z

.field private final mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private final mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private final mContext:Landroid/content/Context;

.field private mRootView:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;ZZZ)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/a/a/e;->mContext:Landroid/content/Context;

    iput-object p2, p0, Lcom/kwad/sdk/a/a/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/a/a/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iput-boolean p3, p0, Lcom/kwad/sdk/a/a/e;->ahN:Z

    iput-boolean p4, p0, Lcom/kwad/sdk/a/a/e;->ahO:Z

    invoke-direct {p0}, Lcom/kwad/sdk/a/a/e;->yj()Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    iput-boolean p5, p0, Lcom/kwad/sdk/a/a/e;->ahV:Z

    invoke-direct {p0}, Lcom/kwad/sdk/a/a/e;->ll()V

    return-void
.end method

.method private A(Landroid/view/View;)Landroid/animation/Animator;
    .locals 5

    iget-boolean v0, p0, Lcom/kwad/sdk/a/a/e;->ahN:Z

    const/4 v1, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x2

    const/4 v4, 0x0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/kwad/sdk/a/a/e;->ahO:Z

    if-eqz v0, :cond_0

    sget-object v0, Landroid/view/View;->TRANSLATION_X:Landroid/util/Property;

    new-array v3, v3, [F

    aput v4, v3, v2

    iget v2, p0, Lcom/kwad/sdk/a/a/e;->ahU:I

    int-to-float v2, v2

    aput v2, v3, v1

    invoke-static {p1, v0, v3}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Landroid/util/Property;[F)Landroid/animation/ObjectAnimator;

    move-result-object p1

    goto :goto_0

    :cond_0
    sget-object v0, Landroid/view/View;->TRANSLATION_Y:Landroid/util/Property;

    new-array v3, v3, [F

    aput v4, v3, v2

    iget v2, p0, Lcom/kwad/sdk/a/a/e;->ahT:I

    neg-int v2, v2

    int-to-float v2, v2

    aput v2, v3, v1

    invoke-static {p1, v0, v3}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Landroid/util/Property;[F)Landroid/animation/ObjectAnimator;

    move-result-object p1

    :goto_0
    const v0, 0x3ed70a3d    # 0.42f

    const v1, 0x3f59999a    # 0.85f

    const v2, 0x3f23d70a    # 0.64f

    invoke-static {v4, v0, v1, v2}, Landroid/support/v4/view/animation/PathInterpolatorCompat;->create(FFFF)Landroid/view/animation/Interpolator;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/animation/ObjectAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    const-wide/16 v0, 0x104

    invoke-virtual {p1, v0, v1}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/sdk/a/a/e;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    return-object p0
.end method

.method private b(Landroid/widget/FrameLayout;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$dimen;->ksad_install_tips_card_height:I

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v0

    iget-object v1, p0, Lcom/kwad/sdk/a/a/e;->mContext:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$dimen;->ksad_install_tips_card_margin:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v1

    add-int v2, v0, v1

    iput v2, p0, Lcom/kwad/sdk/a/a/e;->ahT:I

    iget-object v2, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    invoke-virtual {v2}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    instance-of v3, v2, Landroid/widget/FrameLayout$LayoutParams;

    if-eqz v3, :cond_0

    check-cast v2, Landroid/widget/FrameLayout$LayoutParams;

    goto :goto_0

    :cond_0
    new-instance v2, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v0}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    :goto_0
    const/16 v0, 0x30

    iput v0, v2, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    iput v1, v2, Landroid/widget/FrameLayout$LayoutParams;->leftMargin:I

    iput v1, v2, Landroid/widget/FrameLayout$LayoutParams;->rightMargin:I

    iput v1, v2, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    iget v1, p0, Lcom/kwad/sdk/a/a/e;->ahT:I

    neg-int v1, v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Landroid/view/View;->setTranslationY(F)V

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    invoke-virtual {p1, v0, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-direct {p0}, Lcom/kwad/sdk/a/a/e;->show()V

    return-void
.end method

.method private c(Landroid/widget/FrameLayout;)V
    .locals 5

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/be;->getScreenWidth(Landroid/content/Context;)I

    move-result v0

    iget-object v1, p0, Lcom/kwad/sdk/a/a/e;->mContext:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$dimen;->ksad_install_tips_bottom_margin_left:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v1

    iget-object v2, p0, Lcom/kwad/sdk/a/a/e;->mContext:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    sget v3, Lcom/kwad/sdk/R$dimen;->ksad_install_tips_bottom_margin_bottom:I

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v2

    iget-object v3, p0, Lcom/kwad/sdk/a/a/e;->mContext:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    sget v4, Lcom/kwad/sdk/R$dimen;->ksad_install_tips_bottom_height:I

    invoke-virtual {v3, v4}, Landroid/content/res/Resources;->getDimensionPixelOffset(I)I

    move-result v3

    sub-int/2addr v0, v1

    iput v0, p0, Lcom/kwad/sdk/a/a/e;->ahU:I

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    instance-of v4, v0, Landroid/widget/FrameLayout$LayoutParams;

    if-eqz v4, :cond_0

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    goto :goto_0

    :cond_0
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v4, -0x1

    invoke-direct {v0, v4, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    :goto_0
    const/16 v3, 0x50

    iput v3, v0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->leftMargin:I

    const/4 v1, 0x0

    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->rightMargin:I

    iput v2, v0, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    iget-object v1, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    iget v2, p0, Lcom/kwad/sdk/a/a/e;->ahU:I

    int-to-float v2, v2

    invoke-virtual {v1, v2}, Landroid/view/View;->setTranslationX(F)V

    iget-object v1, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    invoke-virtual {p1, v1, v0}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-direct {p0}, Lcom/kwad/sdk/a/a/e;->show()V

    return-void
.end method

.method private ll()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->ahS:Landroid/widget/Button;

    iget-boolean v1, p0, Lcom/kwad/sdk/a/a/e;->ahN:Z

    if-eqz v1, :cond_0

    const-string v1, "\u5b89\u88c5"

    goto :goto_0

    :cond_0
    const-string v1, "\u6253\u5f00"

    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->ahP:Landroid/view/View;

    invoke-virtual {v0, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->ahS:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/a/a/e;->ahQ:Landroid/widget/ImageView;

    iget-object v2, p0, Lcom/kwad/sdk/a/a/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v3, 0x8

    invoke-static {v1, v0, v2, v3}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadAppIcon(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ao(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    const/4 v2, 0x0

    if-lt v1, v3, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v3, 0x7

    invoke-virtual {v0, v2, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "..."

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :cond_1
    iget-object v1, p0, Lcom/kwad/sdk/a/a/e;->mContext:Landroid/content/Context;

    iget-boolean v3, p0, Lcom/kwad/sdk/a/a/e;->ahN:Z

    if-eqz v3, :cond_2

    sget v3, Lcom/kwad/sdk/R$string;->ksad_install_tips:I

    goto :goto_1

    :cond_2
    sget v3, Lcom/kwad/sdk/R$string;->ksad_launch_tips:I

    :goto_1
    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/Object;

    aput-object v0, v4, v2

    invoke-virtual {v1, v3, v4}, Landroid/content/Context;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/a/a/e;->ahR:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private show()V
    .locals 7

    iget-boolean v0, p0, Lcom/kwad/sdk/a/a/e;->ahN:Z

    const/4 v1, 0x0

    const/4 v2, 0x1

    const/4 v3, 0x0

    const/4 v4, 0x2

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/kwad/sdk/a/a/e;->ahO:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    sget-object v5, Landroid/view/View;->TRANSLATION_X:Landroid/util/Property;

    new-array v4, v4, [F

    iget v6, p0, Lcom/kwad/sdk/a/a/e;->ahU:I

    int-to-float v6, v6

    aput v6, v4, v3

    aput v1, v4, v2

    invoke-static {v0, v5, v4}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Landroid/util/Property;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    sget-object v5, Landroid/view/View;->TRANSLATION_Y:Landroid/util/Property;

    new-array v4, v4, [F

    iget v6, p0, Lcom/kwad/sdk/a/a/e;->ahT:I

    neg-int v6, v6

    int-to-float v6, v6

    aput v6, v4, v3

    aput v1, v4, v2

    invoke-static {v0, v5, v4}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Landroid/util/Property;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    :goto_0
    const/high16 v1, 0x3e800000    # 0.25f

    const v2, 0x3dcccccd    # 0.1f

    const v3, 0x3e8a3d71    # 0.27f

    const v4, 0x3f5eb852    # 0.87f

    invoke-static {v1, v2, v3, v4}, Landroid/support/v4/view/animation/PathInterpolatorCompat;->create(FFFF)Landroid/view/animation/Interpolator;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    const-wide/16 v1, 0x12c

    invoke-virtual {v0, v1, v2}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->start()V

    return-void
.end method

.method private yj()Landroid/view/View;
    .locals 3

    iget-boolean v0, p0, Lcom/kwad/sdk/a/a/e;->ahN:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/kwad/sdk/a/a/e;->ahO:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mContext:Landroid/content/Context;

    sget v2, Lcom/kwad/sdk/R$layout;->ksad_install_tips_bottom:I

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mContext:Landroid/content/Context;

    sget v2, Lcom/kwad/sdk/R$layout;->ksad_install_tips:I

    :goto_0
    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$dimen;->ksad_install_tips_card_elevation:I

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDimension(I)F

    move-result v0

    iget-object v1, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    invoke-static {v1, v0}, Landroid/support/v4/view/ViewCompat;->setElevation(Landroid/view/View;F)V

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_install_tips_close:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/a/a/e;->ahP:Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_install_tips_icon:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/sdk/a/a/e;->ahQ:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_install_tips_content:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/sdk/a/a/e;->ahR:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_install_tips_install:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/kwad/sdk/a/a/e;->ahS:Landroid/widget/Button;

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    return-object v0
.end method


# virtual methods
.method public final a(Landroid/widget/FrameLayout;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-boolean v0, p0, Lcom/kwad/sdk/a/a/e;->ahN:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/sdk/a/a/e;->ahO:Z

    if-eqz v0, :cond_1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/a/a/e;->c(Landroid/widget/FrameLayout;)V

    goto :goto_0

    :cond_1
    invoke-direct {p0, p1}, Lcom/kwad/sdk/a/a/e;->b(Landroid/widget/FrameLayout;)V

    :goto_0
    iget-object p1, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    new-instance v0, Lcom/kwad/sdk/a/a/e$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/a/a/e$1;-><init>(Lcom/kwad/sdk/a/a/e;)V

    const-wide/16 v1, 0x2710

    invoke-virtual {p1, v0, v1, v2}, Landroid/view/View;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public final dismiss()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/kwad/sdk/a/a/e;->mRootView:Landroid/view/View;

    invoke-direct {p0, v1}, Lcom/kwad/sdk/a/a/e;->A(Landroid/view/View;)Landroid/animation/Animator;

    move-result-object v1

    new-instance v2, Lcom/kwad/sdk/a/a/e$2;

    invoke-direct {v2, p0, v0}, Lcom/kwad/sdk/a/a/e$2;-><init>(Lcom/kwad/sdk/a/a/e;Landroid/view/ViewGroup;)V

    invoke-virtual {v1, v2}, Landroid/animation/Animator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    invoke-virtual {v1}, Landroid/animation/Animator;->start()V

    invoke-static {}, Lcom/kwad/sdk/a/a/c;->yb()Lcom/kwad/sdk/a/a/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/a/a/c;->yg()V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/sdk/a/a/e;->dismiss()V

    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    sget v1, Lcom/kwad/sdk/R$id;->ksad_install_tips_install:I

    const/4 v2, 0x1

    const/16 v3, 0x17

    if-ne v0, v1, :cond_4

    iget-boolean p1, p0, Lcom/kwad/sdk/a/a/e;->ahN:Z

    if-eqz p1, :cond_2

    iget-boolean p1, p0, Lcom/kwad/sdk/a/a/e;->ahV:Z

    if-eqz p1, :cond_0

    new-instance p1, Lcom/kwad/sdk/core/report/j;

    invoke-direct {p1}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v0, 0x1d

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/j;->ci(I)Lcom/kwad/sdk/core/report/j;

    invoke-virtual {p1, v3}, Lcom/kwad/sdk/core/report/j;->cm(I)Lcom/kwad/sdk/core/report/j;

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;)V

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/kwad/sdk/a/a/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v0, 0x2d

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/report/a;->p(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    :goto_0
    const-class p1, Lcom/kwad/sdk/service/a/e;

    invoke-static {p1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {p1}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadFilePath:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/kwad/sdk/utils/ak;->an(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/sdk/a/a/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, v2}, Lcom/kwad/sdk/core/report/a;->i(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    :cond_1
    return-void

    :cond_2
    iget-object p1, p0, Lcom/kwad/sdk/a/a/e;->mContext:Landroid/content/Context;

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/sdk/utils/ak;->am(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/kwad/sdk/a/a/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/report/a;->ax(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_3
    iget-object p1, p0, Lcom/kwad/sdk/a/a/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v0, 0x2f

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/report/a;->o(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void

    :cond_4
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result p1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_install_tips_close:I

    if-ne p1, v0, :cond_7

    iget-boolean p1, p0, Lcom/kwad/sdk/a/a/e;->ahN:Z

    if-eqz p1, :cond_6

    iget-boolean p1, p0, Lcom/kwad/sdk/a/a/e;->ahV:Z

    if-eqz p1, :cond_5

    new-instance p1, Lcom/kwad/sdk/core/report/j;

    invoke-direct {p1}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v0, 0x45

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/j;->ci(I)Lcom/kwad/sdk/core/report/j;

    invoke-virtual {p1, v3}, Lcom/kwad/sdk/core/report/j;->cm(I)Lcom/kwad/sdk/core/report/j;

    invoke-virtual {p1, v2}, Lcom/kwad/sdk/core/report/j;->cq(I)Lcom/kwad/sdk/core/report/j;

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;)V

    return-void

    :cond_5
    iget-object p1, p0, Lcom/kwad/sdk/a/a/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v0, 0x2e

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/report/a;->p(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void

    :cond_6
    iget-object p1, p0, Lcom/kwad/sdk/a/a/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v0, 0x30

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/report/a;->o(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    :cond_7
    return-void
.end method
