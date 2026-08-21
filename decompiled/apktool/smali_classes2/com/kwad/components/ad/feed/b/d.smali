.class public final Lcom/kwad/components/ad/feed/b/d;
.super Landroid/widget/FrameLayout;


# instance fields
.field private count:I

.field private eP:Landroid/widget/ImageView;

.field private eQ:Landroid/widget/ImageView;

.field private eR:Landroid/widget/ImageView;

.field private eS:Landroid/animation/Animator;

.field private eT:Landroid/animation/Animator;

.field private eU:Landroid/view/animation/Animation;

.field private eV:Landroid/view/animation/Animation;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/feed/b/d;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 p2, 0x0

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/ad/feed/b/d;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    const/4 p3, 0x0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    iput p3, p0, Lcom/kwad/components/ad/feed/b/d;->count:I

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/feed/b/d;->D(Landroid/content/Context;)V

    return-void
.end method

.method private D(Landroid/content/Context;)V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_promote_ad_click:I

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_inside_circle:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/b/d;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/d;->eP:Landroid/widget/ImageView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_outside_circle:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/b/d;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/d;->eQ:Landroid/widget/ImageView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_hand:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/b/d;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/d;->eR:Landroid/widget/ImageView;

    return-void
.end method

.method private a(Landroid/view/View;FI)Landroid/view/animation/Animation;
    .locals 12

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/d;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x41200000    # 10.0f

    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v0

    int-to-float v0, v0

    new-instance v1, Landroid/view/animation/AlphaAnimation;

    const/4 v2, 0x0

    invoke-direct {v1, p2, v2}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    new-instance p2, Landroid/view/animation/ScaleAnimation;

    int-to-float p3, p3

    div-float v7, p3, v0

    const/high16 v4, 0x3f800000    # 1.0f

    const/high16 v6, 0x3f800000    # 1.0f

    const/4 v8, 0x1

    const/high16 v9, 0x3f000000    # 0.5f

    const/4 v10, 0x1

    const/high16 v11, 0x3f000000    # 0.5f

    move-object v3, p2

    move v5, v7

    invoke-direct/range {v3 .. v11}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    new-instance p3, Landroid/view/animation/AnimationSet;

    const/4 v0, 0x1

    invoke-direct {p3, v0}, Landroid/view/animation/AnimationSet;-><init>(Z)V

    invoke-virtual {p3, v1}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    invoke-virtual {p3, p2}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    const-wide/16 v0, 0xc8

    invoke-virtual {p3, v0, v1}, Landroid/view/animation/AnimationSet;->setDuration(J)V

    new-instance p2, Lcom/kwad/components/ad/feed/b/d$3;

    invoke-direct {p2, p0, p1}, Lcom/kwad/components/ad/feed/b/d$3;-><init>(Lcom/kwad/components/ad/feed/b/d;Landroid/view/View;)V

    invoke-virtual {p3, p2}, Landroid/view/animation/AnimationSet;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    return-object p3
.end method

.method static synthetic a(Lcom/kwad/components/ad/feed/b/d;)Landroid/view/animation/Animation;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/b/d;->eU:Landroid/view/animation/Animation;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/feed/b/d;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/b/d;->eP:Landroid/widget/ImageView;

    return-object p0
.end method

.method private bn()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eR:Landroid/widget/ImageView;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/feed/b/d;->d(Landroid/view/View;)Landroid/animation/Animator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eS:Landroid/animation/Animator;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eR:Landroid/widget/ImageView;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/feed/b/d;->e(Landroid/view/View;)Landroid/animation/Animator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eT:Landroid/animation/Animator;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eP:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/d;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42080000    # 34.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    const v2, 0x3ee66666    # 0.45f

    invoke-direct {p0, v0, v2, v1}, Lcom/kwad/components/ad/feed/b/d;->a(Landroid/view/View;FI)Landroid/view/animation/Animation;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eU:Landroid/view/animation/Animation;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eQ:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/d;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42480000    # 50.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    const/high16 v2, 0x3f000000    # 0.5f

    invoke-direct {p0, v0, v2, v1}, Lcom/kwad/components/ad/feed/b/d;->a(Landroid/view/View;FI)Landroid/view/animation/Animation;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eV:Landroid/view/animation/Animation;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eS:Landroid/animation/Animator;

    new-instance v1, Lcom/kwad/components/ad/feed/b/d$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/feed/b/d$1;-><init>(Lcom/kwad/components/ad/feed/b/d;)V

    invoke-virtual {v0, v1}, Landroid/animation/Animator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eT:Landroid/animation/Animator;

    new-instance v1, Lcom/kwad/components/ad/feed/b/d$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/feed/b/d$2;-><init>(Lcom/kwad/components/ad/feed/b/d;)V

    invoke-virtual {v0, v1}, Landroid/animation/Animator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/feed/b/d;)Landroid/view/animation/Animation;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/b/d;->eV:Landroid/view/animation/Animation;

    return-object p0
.end method

.method private d(Landroid/view/View;)Landroid/animation/Animator;
    .locals 8

    const/4 v0, 0x2

    new-array v1, v0, [F

    fill-array-data v1, :array_0

    const-string v2, "rotation"

    invoke-static {p1, v2, v1}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v1

    new-array v2, v0, [F

    const/4 v3, 0x0

    const/4 v4, 0x0

    aput v3, v2, v4

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/d;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v6, 0x41180000    # 9.5f

    invoke-static {v5, v6}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v5

    neg-int v5, v5

    int-to-float v5, v5

    const/4 v7, 0x1

    aput v5, v2, v7

    const-string v5, "translationX"

    invoke-static {p1, v5, v2}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v2

    new-array v5, v0, [F

    aput v3, v5, v4

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/d;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v6}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v3

    neg-int v3, v3

    int-to-float v3, v3

    aput v3, v5, v7

    const-string v3, "translationY"

    invoke-static {p1, v3, v5}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p1

    new-instance v3, Landroid/animation/AnimatorSet;

    invoke-direct {v3}, Landroid/animation/AnimatorSet;-><init>()V

    const-wide/16 v5, 0xfa

    invoke-virtual {v3, v5, v6}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    const/4 v5, 0x3

    new-array v5, v5, [Landroid/animation/Animator;

    aput-object v1, v5, v4

    aput-object v2, v5, v7

    aput-object p1, v5, v0

    invoke-virtual {v3, v5}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    return-object v3

    :array_0
    .array-data 4
        0x0
        -0x3ee00000    # -10.0f
    .end array-data
.end method

.method static synthetic d(Lcom/kwad/components/ad/feed/b/d;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/b/d;->eQ:Landroid/widget/ImageView;

    return-object p0
.end method

.method private e(Landroid/view/View;)Landroid/animation/Animator;
    .locals 9

    const/4 v0, 0x2

    new-array v1, v0, [F

    fill-array-data v1, :array_0

    const-string v2, "rotation"

    invoke-static {p1, v2, v1}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v1

    new-array v2, v0, [F

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/d;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x41180000    # 9.5f

    invoke-static {v3, v4}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v3

    neg-int v3, v3

    int-to-float v3, v3

    const/4 v5, 0x0

    aput v3, v2, v5

    const/4 v3, 0x0

    const/4 v6, 0x1

    aput v3, v2, v6

    const-string v7, "translationX"

    invoke-static {p1, v7, v2}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v2

    new-array v7, v0, [F

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/d;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-static {v8, v4}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v4

    neg-int v4, v4

    int-to-float v4, v4

    aput v4, v7, v5

    aput v3, v7, v6

    const-string v3, "translationY"

    invoke-static {p1, v3, v7}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p1

    new-instance v3, Landroid/animation/AnimatorSet;

    invoke-direct {v3}, Landroid/animation/AnimatorSet;-><init>()V

    const-wide/16 v7, 0xfa

    invoke-virtual {v3, v7, v8}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    const/4 v4, 0x3

    new-array v4, v4, [Landroid/animation/Animator;

    aput-object v1, v4, v5

    aput-object v2, v4, v6

    aput-object p1, v4, v0

    invoke-virtual {v3, v4}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    return-object v3

    :array_0
    .array-data 4
        -0x3ee00000    # -10.0f
        0x0
    .end array-data
.end method

.method static synthetic e(Lcom/kwad/components/ad/feed/b/d;)Landroid/animation/Animator;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/b/d;->eT:Landroid/animation/Animator;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/feed/b/d;)I
    .locals 2

    iget v0, p0, Lcom/kwad/components/ad/feed/b/d;->count:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/kwad/components/ad/feed/b/d;->count:I

    return v0
.end method

.method static synthetic g(Lcom/kwad/components/ad/feed/b/d;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/feed/b/d;->count:I

    return p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/feed/b/d;)Landroid/animation/Animator;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/b/d;->eS:Landroid/animation/Animator;

    return-object p0
.end method


# virtual methods
.method public final bl()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/feed/b/d;->bn()V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eS:Landroid/animation/Animator;

    invoke-virtual {v0}, Landroid/animation/Animator;->start()V

    return-void
.end method

.method public final bm()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eS:Landroid/animation/Animator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/Animator;->cancel()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eT:Landroid/animation/Animator;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/animation/Animator;->cancel()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eU:Landroid/view/animation/Animation;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/view/animation/Animation;->cancel()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/d;->eV:Landroid/view/animation/Animation;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Landroid/view/animation/Animation;->cancel()V

    :cond_3
    return-void
.end method
