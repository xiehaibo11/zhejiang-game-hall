.class public final Lcom/kwad/components/ad/reward/presenter/platdetail/b;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field private final tW:J

.field private final tX:J

.field private final tY:J

.field private tZ:Landroid/view/View;

.field private ua:Landroid/view/View;

.field private ub:Landroid/view/View;

.field private uc:Landroid/view/View;

.field private ud:Z

.field private ue:Z

.field private uf:Landroid/animation/Animator;

.field private ug:Landroid/animation/Animator;

.field private uh:Landroid/animation/Animator;

.field private ui:Landroid/animation/Animator;

.field private uj:J

.field private uk:Lcom/kwad/sdk/utils/az;

.field private ul:Lcom/kwad/sdk/utils/az;

.field private um:Landroid/view/animation/Interpolator;


# direct methods
.method public constructor <init>()V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const-wide/16 v0, 0x640

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->tW:J

    const-wide/16 v0, 0xbb8

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->tX:J

    const-wide/16 v2, 0x1388

    iput-wide v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->tY:J

    const/4 v2, 0x0

    iput-boolean v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ud:Z

    iput-boolean v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ue:Z

    const/4 v2, 0x0

    iput-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ui:Landroid/animation/Animator;

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uj:J

    const/4 v0, 0x0

    const v1, 0x3f147ae1    # 0.58f

    const/high16 v2, 0x3f800000    # 1.0f

    invoke-static {v0, v0, v1, v2}, Landroid/support/v4/view/animation/PathInterpolatorCompat;->create(FFFF)Landroid/view/animation/Interpolator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->um:Landroid/view/animation/Interpolator;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b$1;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uj:J

    return-wide v0
.end method

.method private a(Landroid/view/View;J)Landroid/animation/Animator;
    .locals 8

    const/4 v0, 0x5

    new-array v0, v0, [F

    fill-array-data v0, :array_0

    const-string v1, "scaleX"

    invoke-static {p1, v1, v0}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v1

    const-string v2, "scaleY"

    invoke-static {p1, v2, v0}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p1

    new-instance v0, Landroid/animation/AnimatorSet;

    invoke-direct {v0}, Landroid/animation/AnimatorSet;-><init>()V

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ua:Landroid/view/View;

    const/4 v3, 0x1

    const/4 v4, 0x0

    const/4 v5, 0x2

    if-eqz v2, :cond_0

    new-array v6, v5, [F

    fill-array-data v6, :array_1

    const-string v7, "alpha"

    invoke-static {v2, v7, v6}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v2

    const/4 v6, 0x3

    new-array v6, v6, [Landroid/animation/Animator;

    aput-object v1, v6, v4

    aput-object p1, v6, v3

    aput-object v2, v6, v5

    invoke-virtual {v0, v6}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    goto :goto_0

    :cond_0
    new-array v2, v5, [Landroid/animation/Animator;

    aput-object v1, v2, v4

    aput-object p1, v2, v3

    invoke-virtual {v0, v2}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    :goto_0
    invoke-virtual {v0, p2, p3}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->um:Landroid/view/animation/Interpolator;

    invoke-virtual {v0, p1}, Landroid/animation/AnimatorSet;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    return-object v0

    :array_0
    .array-data 4
        0x3f800000    # 1.0f
        0x3f8d9168    # 1.106f
        0x3f800000    # 1.0f
        0x3f8d9168    # 1.106f
        0x3f800000    # 1.0f
    .end array-data

    :array_1
    .array-data 4
        0x3e4ccccd    # 0.2f
        0x0
    .end array-data
.end method

.method private a(Landroid/view/View;Landroid/view/View;)Landroid/animation/Animator;
    .locals 6

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->o(Landroid/view/View;)Landroid/animation/Animator;

    move-result-object p1

    invoke-direct {p0, p2}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->o(Landroid/view/View;)Landroid/animation/Animator;

    move-result-object v0

    const/4 v1, 0x1

    new-array v2, v1, [F

    const/high16 v3, 0x3f800000    # 1.0f

    const/4 v4, 0x0

    aput v3, v2, v4

    const-string v3, "scaleX"

    invoke-static {p2, v3, v2}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p2

    const-wide/16 v2, 0x12c

    invoke-virtual {p2, v2, v3}, Landroid/animation/Animator;->setDuration(J)Landroid/animation/Animator;

    new-instance v2, Landroid/animation/AnimatorSet;

    invoke-direct {v2}, Landroid/animation/AnimatorSet;-><init>()V

    const/4 v3, 0x2

    new-array v5, v3, [Landroid/animation/Animator;

    aput-object p2, v5, v4

    aput-object v0, v5, v1

    invoke-virtual {v2, v5}, Landroid/animation/AnimatorSet;->playSequentially([Landroid/animation/Animator;)V

    new-instance p2, Landroid/animation/AnimatorSet;

    invoke-direct {p2}, Landroid/animation/AnimatorSet;-><init>()V

    new-array v0, v3, [Landroid/animation/Animator;

    aput-object p1, v0, v4

    aput-object v2, v0, v1

    invoke-virtual {p2, v0}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    return-object p2
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Landroid/animation/Animator;)Landroid/animation/Animator;
    .locals 0

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ui:Landroid/animation/Animator;

    return-object p1
.end method

.method private a(ILandroid/view/ViewGroup;)Landroid/view/View;
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$layout;->ksad_image_player_sweep:I

    const/4 v2, 0x0

    invoke-virtual {v0, v1, p2, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p2

    check-cast p2, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    return-object p2
.end method

.method private a(Landroid/animation/Animator;)V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ud:Z

    if-nez v0, :cond_0

    invoke-virtual {p1}, Landroid/animation/Animator;->start()V

    return-void

    :cond_0
    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ui:Landroid/animation/Animator;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Landroid/view/View;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->p(Landroid/view/View;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ud:Z

    return p1
.end method

.method private b(Landroid/view/View;J)Landroid/animation/Animator;
    .locals 5

    const-wide/16 p2, 0x640

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->a(Landroid/view/View;J)Landroid/animation/Animator;

    move-result-object v0

    const/4 v1, 0x1

    new-array v2, v1, [F

    const/high16 v3, 0x3f800000    # 1.0f

    const/4 v4, 0x0

    aput v3, v2, v4

    const-string v3, "alpha"

    invoke-static {p1, v3, v2}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p1

    const-wide/16 v2, 0x1388

    invoke-virtual {p1, v2, v3}, Landroid/animation/Animator;->setDuration(J)Landroid/animation/Animator;

    new-instance v2, Landroid/animation/AnimatorSet;

    invoke-direct {v2}, Landroid/animation/AnimatorSet;-><init>()V

    const/4 v3, 0x2

    new-array v3, v3, [Landroid/animation/Animator;

    aput-object v0, v3, v4

    aput-object p1, v3, v1

    invoke-virtual {v2, v3}, Landroid/animation/AnimatorSet;->playSequentially([Landroid/animation/Animator;)V

    invoke-virtual {v2, p2, p3}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    return-object v2
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Landroid/view/View;)Landroid/view/View;
    .locals 0

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ua:Landroid/view/View;

    return-object p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ia()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Landroid/animation/Animator;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->a(Landroid/animation/Animator;)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ue:Z

    return p1
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)Landroid/animation/Animator;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ui:Landroid/animation/Animator;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Landroid/view/View;)Landroid/view/View;
    .locals 0

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ub:Landroid/view/View;

    return-object p1
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ua:Landroid/view/View;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/platdetail/b;Landroid/view/View;)Landroid/view/View;
    .locals 0

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uc:Landroid/view/View;

    return-object p1
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ue:Z

    return p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)Landroid/animation/Animator;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ug:Landroid/animation/Animator;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)Landroid/animation/Animator;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uh:Landroid/animation/Animator;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ub:Landroid/view/View;

    return-object p0
.end method

.method private hY()V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$dimen;->ksad_image_player_sweep_wave_width_start:I

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$dimen;->ksad_image_player_sweep_wave_height_start:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v1

    new-instance v2, Lcom/kwad/sdk/utils/az;

    invoke-direct {v2, v0, v1}, Lcom/kwad/sdk/utils/az;-><init>(II)V

    iput-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uk:Lcom/kwad/sdk/utils/az;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$dimen;->ksad_image_player_sweep_wave_width_end:I

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$dimen;->ksad_image_player_sweep_wave_height_end:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v1

    new-instance v2, Lcom/kwad/sdk/utils/az;

    invoke-direct {v2, v0, v1}, Lcom/kwad/sdk/utils/az;-><init>(II)V

    iput-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ul:Lcom/kwad/sdk/utils/az;

    return-void
.end method

.method private hZ()Landroid/view/View;
    .locals 2

    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setClickable(Z)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setFocusable(Z)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setFocusableInTouchMode(Z)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setLongClickable(Z)V

    const-string v1, "#222222"

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setBackgroundColor(I)V

    const v1, 0x3e4ccccd    # 0.2f

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setAlpha(F)V

    return-object v0
.end method

.method static synthetic i(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uc:Landroid/view/View;

    return-object p0
.end method

.method private ia()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->tZ:Landroid/view/View;

    const-wide/16 v1, 0x640

    invoke-direct {p0, v0, v1, v2}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->a(Landroid/view/View;J)Landroid/animation/Animator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uf:Landroid/animation/Animator;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ub:Landroid/view/View;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uc:Landroid/view/View;

    invoke-direct {p0, v0, v3}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->a(Landroid/view/View;Landroid/view/View;)Landroid/animation/Animator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ug:Landroid/animation/Animator;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->tZ:Landroid/view/View;

    invoke-direct {p0, v0, v1, v2}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->b(Landroid/view/View;J)Landroid/animation/Animator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uh:Landroid/animation/Animator;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uf:Landroid/animation/Animator;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/platdetail/b$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b$2;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)V

    invoke-virtual {v0, v1}, Landroid/animation/Animator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ug:Landroid/animation/Animator;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/platdetail/b$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b$3;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)V

    invoke-virtual {v0, v1}, Landroid/animation/Animator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uh:Landroid/animation/Animator;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/platdetail/b$4;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b$4;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/b;)V

    invoke-virtual {v0, v1}, Landroid/animation/Animator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uf:Landroid/animation/Animator;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->a(Landroid/animation/Animator;)V

    return-void
.end method

.method private o(Landroid/view/View;)Landroid/animation/Animator;
    .locals 9

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->getScreenHeight(Landroid/content/Context;)I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ul:Lcom/kwad/sdk/utils/az;

    invoke-virtual {v1}, Lcom/kwad/sdk/utils/az;->getHeight()I

    move-result v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uk:Lcom/kwad/sdk/utils/az;

    invoke-virtual {v2}, Lcom/kwad/sdk/utils/az;->getHeight()I

    move-result v2

    add-int/2addr v1, v2

    const/4 v2, 0x2

    div-int/2addr v1, v2

    const/4 v3, 0x1

    new-array v4, v3, [F

    add-int/2addr v0, v1

    neg-int v0, v0

    int-to-float v0, v0

    const/4 v1, 0x0

    aput v0, v4, v1

    const-string v0, "translationY"

    invoke-static {p1, v0, v4}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    iget-object v4, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ul:Lcom/kwad/sdk/utils/az;

    invoke-virtual {v4}, Lcom/kwad/sdk/utils/az;->Ju()F

    move-result v4

    iget-object v5, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uk:Lcom/kwad/sdk/utils/az;

    invoke-virtual {v5}, Lcom/kwad/sdk/utils/az;->Ju()F

    move-result v5

    div-float/2addr v4, v5

    iget-object v5, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ul:Lcom/kwad/sdk/utils/az;

    invoke-virtual {v5}, Lcom/kwad/sdk/utils/az;->Jv()F

    move-result v5

    iget-object v6, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uk:Lcom/kwad/sdk/utils/az;

    invoke-virtual {v6}, Lcom/kwad/sdk/utils/az;->Jv()F

    move-result v6

    div-float/2addr v5, v6

    new-array v6, v2, [F

    const/high16 v7, 0x3f800000    # 1.0f

    aput v7, v6, v1

    aput v4, v6, v3

    const-string v4, "scaleX"

    invoke-static {p1, v4, v6}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v4

    new-array v6, v2, [F

    aput v7, v6, v1

    aput v5, v6, v3

    const-string v5, "scaleY"

    invoke-static {p1, v5, v6}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v5

    new-array v6, v2, [F

    fill-array-data v6, :array_0

    const-string v7, "alpha"

    invoke-static {p1, v7, v6}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p1

    new-instance v6, Landroid/animation/AnimatorSet;

    invoke-direct {v6}, Landroid/animation/AnimatorSet;-><init>()V

    const-wide/16 v7, 0xbb8

    invoke-virtual {v6, v7, v8}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    const/4 v7, 0x4

    new-array v7, v7, [Landroid/animation/Animator;

    aput-object v4, v7, v1

    aput-object v5, v7, v3

    aput-object v0, v7, v2

    const/4 v0, 0x3

    aput-object p1, v7, v0

    invoke-virtual {v6, v7}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->um:Landroid/view/animation/Interpolator;

    invoke-virtual {v6, p1}, Landroid/animation/AnimatorSet;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    return-object v6

    :array_0
    .array-data 4
        0x3f800000    # 1.0f
        0x3f4ccccd    # 0.8f
    .end array-data
.end method

.method private static p(Landroid/view/View;)V
    .locals 1

    if-eqz p0, :cond_0

    :try_start_0
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->hY()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_play_layout:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/l/d;->jT()Lcom/kwad/components/ad/reward/l/a;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/reward/l/a;->Q(Landroid/content/Context;)Landroid/widget/FrameLayout;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->tZ:Landroid/view/View;

    const/4 v2, -0x1

    invoke-virtual {v0, v1, v2, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;II)V

    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {v0, v2, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0x51

    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uk:Lcom/kwad/sdk/utils/az;

    invoke-virtual {v1}, Lcom/kwad/sdk/utils/az;->getHeight()I

    move-result v1

    neg-int v1, v1

    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    sget v1, Lcom/kwad/sdk/R$id;->ksad_root_container:I

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/FrameLayout;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->hZ()Landroid/view/View;

    move-result-object v3

    iput-object v3, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ua:Landroid/view/View;

    invoke-virtual {v1, v3, v2, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;II)V

    sget v2, Lcom/kwad/sdk/R$drawable;->ksad_image_player_sweep1:I

    invoke-direct {p0, v2, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->a(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v2

    iput-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ub:Landroid/view/View;

    invoke-virtual {v1, v2, v0}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    sget v2, Lcom/kwad/sdk/R$drawable;->ksad_image_player_sweep2:I

    invoke-direct {p0, v2, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->a(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v2

    iput-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uc:Landroid/view/View;

    invoke-virtual {v1, v2, v0}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public final onDestroy()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onDestroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->tZ:Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jT()Lcom/kwad/components/ad/reward/l/a;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/a;->release()V

    :cond_0
    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->ug:Landroid/animation/Animator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/Animator;->cancel()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uf:Landroid/animation/Animator;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/animation/Animator;->cancel()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->uh:Landroid/animation/Animator;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/animation/Animator;->cancel()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    return-void
.end method
