.class public final Lcom/kwad/components/ad/feed/b/e;
.super Landroid/widget/FrameLayout;


# instance fields
.field private eY:Landroid/view/View;

.field private eZ:Landroid/widget/ImageView;

.field private fa:Landroid/animation/Animator;

.field private fb:Lcom/kwad/sdk/widget/c;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/feed/b/e;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 p2, 0x0

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/ad/feed/b/e;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    const/4 p3, 0x0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/feed/b/e;->init(Landroid/content/Context;)V

    return-void
.end method

.method private a(Landroid/view/View;JF)Landroid/animation/Animator;
    .locals 3

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    const p2, 0x3e6147ae    # 0.22f

    const p3, 0x3f170a3d    # 0.59f

    const p4, 0x3eb851ec    # 0.36f

    const/high16 v0, 0x3f800000    # 1.0f

    invoke-static {p2, p3, p4, v0}, Landroid/support/v4/view/animation/PathInterpolatorCompat;->create(FFFF)Landroid/view/animation/Interpolator;

    move-result-object p2

    iget-object p3, p0, Lcom/kwad/components/ad/feed/b/e;->eZ:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result p4

    int-to-float p4, p4

    invoke-virtual {p3, p4}, Landroid/widget/ImageView;->setPivotX(F)V

    iget-object p3, p0, Lcom/kwad/components/ad/feed/b/e;->eZ:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result p4

    int-to-float p4, p4

    invoke-virtual {p3, p4}, Landroid/widget/ImageView;->setPivotY(F)V

    const/high16 p3, 0x41800000    # 16.0f

    const-wide/16 v0, 0x64

    invoke-static {p1, p2, v0, v1, p3}, Lcom/kwad/components/core/t/m;->a(Landroid/view/View;Landroid/view/animation/Interpolator;JF)Landroid/animation/Animator;

    move-result-object p4

    invoke-static {p1, p2, v0, v1, p3}, Lcom/kwad/components/core/t/m;->a(Landroid/view/View;Landroid/view/animation/Interpolator;JF)Landroid/animation/Animator;

    move-result-object v2

    invoke-static {p1, p2, v0, v1, p3}, Lcom/kwad/components/core/t/m;->a(Landroid/view/View;Landroid/view/animation/Interpolator;JF)Landroid/animation/Animator;

    move-result-object p1

    new-instance p2, Landroid/animation/AnimatorSet;

    invoke-direct {p2}, Landroid/animation/AnimatorSet;-><init>()V

    const/4 p3, 0x3

    new-array p3, p3, [Landroid/animation/Animator;

    const/4 v0, 0x0

    aput-object p4, p3, v0

    const/4 p4, 0x1

    aput-object v2, p3, p4

    const/4 p4, 0x2

    aput-object p1, p3, p4

    invoke-virtual {p2, p3}, Landroid/animation/AnimatorSet;->playSequentially([Landroid/animation/Animator;)V

    return-object p2
.end method

.method static synthetic a(Lcom/kwad/components/ad/feed/b/e;)Landroid/animation/Animator;
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/feed/b/e;->bo()Landroid/animation/Animator;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/feed/b/e;Landroid/animation/Animator;)Landroid/animation/Animator;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/e;->fa:Landroid/animation/Animator;

    return-object p1
.end method

.method private b(Landroid/view/View;I)Landroid/animation/Animator;
    .locals 7

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result v0

    int-to-float v0, v0

    const/high16 v1, 0x40000000    # 2.0f

    div-float/2addr v0, v1

    invoke-virtual {p1, v0}, Landroid/view/View;->setPivotX(F)V

    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result v0

    int-to-float v0, v0

    div-float/2addr v0, v1

    invoke-virtual {p1, v0}, Landroid/view/View;->setPivotY(F)V

    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result v0

    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result v1

    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result v0

    int-to-float v0, v0

    const/4 v1, 0x2

    new-array v2, v1, [F

    int-to-float p2, p2

    div-float/2addr p2, v0

    const/4 v0, 0x0

    aput p2, v2, v0

    const/high16 v3, 0x3f800000    # 1.0f

    const/4 v4, 0x1

    aput v3, v2, v4

    const-string v5, "scaleX"

    invoke-static {p1, v5, v2}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v2

    new-array v5, v1, [F

    aput p2, v5, v0

    aput v3, v5, v4

    const-string p2, "scaleY"

    invoke-static {p1, p2, v5}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p2

    new-array v3, v1, [F

    fill-array-data v3, :array_0

    const-string v5, "alpha"

    invoke-static {p1, v5, v3}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v3

    new-instance v5, Landroid/animation/AnimatorSet;

    invoke-direct {v5}, Landroid/animation/AnimatorSet;-><init>()V

    const/4 v6, 0x3

    new-array v6, v6, [Landroid/animation/Animator;

    aput-object v2, v6, v0

    aput-object p2, v6, v4

    aput-object v3, v6, v1

    invoke-virtual {v5, v6}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    const-wide/16 v0, 0x1f4

    invoke-virtual {v5, v0, v1}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    new-instance p2, Lcom/kwad/components/ad/feed/b/e$2;

    invoke-direct {p2, p0, p1}, Lcom/kwad/components/ad/feed/b/e$2;-><init>(Lcom/kwad/components/ad/feed/b/e;Landroid/view/View;)V

    invoke-virtual {v5, p2}, Landroid/animation/AnimatorSet;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    return-object v5

    :array_0
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data
.end method

.method static synthetic b(Lcom/kwad/components/ad/feed/b/e;)Landroid/animation/Animator;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/b/e;->fa:Landroid/animation/Animator;

    return-object p0
.end method

.method private bo()Landroid/animation/Animator;
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/e;->eY:Landroid/view/View;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/e;->eZ:Landroid/widget/ImageView;

    if-eqz v1, :cond_1

    invoke-virtual {v0}, Landroid/view/View;->getWidth()I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/e;->eY:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getHeight()I

    move-result v1

    add-int/2addr v0, v1

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/e;->eZ:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getWidth()I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/e;->eZ:Landroid/widget/ImageView;

    invoke-virtual {v1}, Landroid/widget/ImageView;->getHeight()I

    move-result v1

    add-int/2addr v0, v1

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/feed/b/e;->bp()Landroid/animation/Animator;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/e;->eZ:Landroid/widget/ImageView;

    const-wide/16 v2, 0x64

    const/high16 v4, 0x41800000    # 16.0f

    invoke-direct {p0, v1, v2, v3, v4}, Lcom/kwad/components/ad/feed/b/e;->a(Landroid/view/View;JF)Landroid/animation/Animator;

    move-result-object v1

    invoke-direct {p0}, Lcom/kwad/components/ad/feed/b/e;->bq()Landroid/animation/Animator;

    move-result-object v2

    new-instance v3, Landroid/animation/AnimatorSet;

    invoke-direct {v3}, Landroid/animation/AnimatorSet;-><init>()V

    const/4 v4, 0x3

    new-array v4, v4, [Landroid/animation/Animator;

    const/4 v5, 0x0

    aput-object v0, v4, v5

    const/4 v0, 0x1

    aput-object v1, v4, v0

    const/4 v0, 0x2

    aput-object v2, v4, v0

    invoke-virtual {v3, v4}, Landroid/animation/AnimatorSet;->playSequentially([Landroid/animation/Animator;)V

    return-object v3

    :cond_1
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private bp()Landroid/animation/Animator;
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/e;->eY:Landroid/view/View;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/e;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x43000000    # 128.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/feed/b/e;->b(Landroid/view/View;I)Landroid/animation/Animator;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/e;->eZ:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/e;->getContext()Landroid/content/Context;

    move-result-object v2

    const v3, 0x428e3852    # 71.11f

    invoke-static {v2, v3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {p0, v1, v2}, Lcom/kwad/components/ad/feed/b/e;->b(Landroid/view/View;I)Landroid/animation/Animator;

    move-result-object v1

    new-instance v2, Landroid/animation/AnimatorSet;

    invoke-direct {v2}, Landroid/animation/AnimatorSet;-><init>()V

    const-wide/16 v3, 0x1f4

    invoke-virtual {v2, v3, v4}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    const/4 v3, 0x2

    new-array v3, v3, [Landroid/animation/Animator;

    const/4 v4, 0x0

    aput-object v0, v3, v4

    const/4 v0, 0x1

    aput-object v1, v3, v0

    invoke-virtual {v2, v3}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    return-object v2
.end method

.method private bq()Landroid/animation/Animator;
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/e;->eY:Landroid/view/View;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/feed/b/e;->f(Landroid/view/View;)Landroid/animation/Animator;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/e;->eZ:Landroid/widget/ImageView;

    invoke-direct {p0, v1}, Lcom/kwad/components/ad/feed/b/e;->f(Landroid/view/View;)Landroid/animation/Animator;

    move-result-object v1

    new-instance v2, Landroid/animation/AnimatorSet;

    invoke-direct {v2}, Landroid/animation/AnimatorSet;-><init>()V

    const-wide/16 v3, 0x1f4

    invoke-virtual {v2, v3, v4}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    const/4 v3, 0x2

    new-array v3, v3, [Landroid/animation/Animator;

    const/4 v4, 0x0

    aput-object v0, v3, v4

    const/4 v0, 0x1

    aput-object v1, v3, v0

    invoke-virtual {v2, v3}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    return-object v2
.end method

.method static synthetic c(Lcom/kwad/components/ad/feed/b/e;)Lcom/kwad/sdk/widget/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/b/e;->fb:Lcom/kwad/sdk/widget/c;

    return-object p0
.end method

.method private f(Landroid/view/View;)Landroid/animation/Animator;
    .locals 4

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    const/4 v0, 0x2

    new-array v0, v0, [F

    fill-array-data v0, :array_0

    const-string v1, "alpha"

    invoke-static {p1, v1, v0}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    new-instance v1, Landroid/animation/AnimatorSet;

    invoke-direct {v1}, Landroid/animation/AnimatorSet;-><init>()V

    invoke-virtual {v1, v0}, Landroid/animation/AnimatorSet;->play(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;

    const-wide/16 v2, 0x1f4

    invoke-virtual {v1, v2, v3}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    new-instance v0, Lcom/kwad/components/ad/feed/b/e$3;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/feed/b/e$3;-><init>(Lcom/kwad/components/ad/feed/b/e;Landroid/view/View;)V

    invoke-virtual {v1, v0}, Landroid/animation/AnimatorSet;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    return-object v1

    :array_0
    .array-data 4
        0x3f800000    # 1.0f
        0x0
    .end array-data
.end method

.method private init(Landroid/content/Context;)V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_feed_shake:I

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/b/e;->setClickable(Z)V

    sget p1, Lcom/kwad/sdk/R$id;->ksad_feed_shake_bg:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/b/e;->findViewById(I)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/e;->eY:Landroid/view/View;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_feed_shake_icon:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/b/e;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/e;->eZ:Landroid/widget/ImageView;

    return-void
.end method


# virtual methods
.method public final a(Landroid/animation/AnimatorListenerAdapter;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/e;->fa:Landroid/animation/Animator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/Animator;->cancel()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/e;->fa:Landroid/animation/Animator;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/e;->eZ:Landroid/widget/ImageView;

    new-instance v1, Lcom/kwad/components/ad/feed/b/e$1;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/ad/feed/b/e$1;-><init>(Lcom/kwad/components/ad/feed/b/e;Landroid/animation/AnimatorListenerAdapter;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final setOnViewEventListener(Lcom/kwad/sdk/widget/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/e;->fb:Lcom/kwad/sdk/widget/c;

    return-void
.end method
