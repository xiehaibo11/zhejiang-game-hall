.class final Lcom/mbridge/msdk/widget/custom/baseview/c;
.super Ljava/lang/Object;
.source "MorphingAnimation.java"


# instance fields
.field private a:Lcom/mbridge/msdk/widget/custom/baseview/d;

.field private b:I

.field private c:I

.field private d:I

.field private e:I

.field private f:I

.field private g:I

.field private h:I

.field private i:F

.field private j:F

.field private k:F

.field private l:Landroid/widget/TextView;

.field private m:Lcom/mbridge/msdk/widget/custom/baseview/f;


# direct methods
.method public constructor <init>(Landroid/widget/TextView;Lcom/mbridge/msdk/widget/custom/baseview/f;)V
    .locals 0

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 34
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->l:Landroid/widget/TextView;

    .line 35
    iput-object p2, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->m:Lcom/mbridge/msdk/widget/custom/baseview/f;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/widget/custom/baseview/c;)I
    .locals 0

    .line 7
    iget p0, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->c:I

    return p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/widget/custom/baseview/c;)I
    .locals 0

    .line 7
    iget p0, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->d:I

    return p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/widget/custom/baseview/c;)F
    .locals 0

    .line 7
    iget p0, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->k:F

    return p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/widget/custom/baseview/c;)Landroid/widget/TextView;
    .locals 0

    .line 7
    iget-object p0, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->l:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/widget/custom/baseview/c;)Lcom/mbridge/msdk/widget/custom/baseview/d;
    .locals 0

    .line 7
    iget-object p0, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->a:Lcom/mbridge/msdk/widget/custom/baseview/d;

    return-object p0
.end method


# virtual methods
.method public final a()V
    .locals 10

    const/4 v0, 0x2

    new-array v1, v0, [I

    .line 83
    iget v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->c:I

    const/4 v3, 0x0

    aput v2, v1, v3

    iget v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->d:I

    const/4 v4, 0x1

    aput v2, v1, v4

    invoke-static {v1}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object v1

    .line 84
    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->m:Lcom/mbridge/msdk/widget/custom/baseview/f;

    invoke-virtual {v2}, Lcom/mbridge/msdk/widget/custom/baseview/f;->a()Landroid/graphics/drawable/GradientDrawable;

    move-result-object v2

    .line 85
    new-instance v5, Lcom/mbridge/msdk/widget/custom/baseview/c$1;

    invoke-direct {v5, p0, v2}, Lcom/mbridge/msdk/widget/custom/baseview/c$1;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/c;Landroid/graphics/drawable/GradientDrawable;)V

    invoke-virtual {v1, v5}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    new-array v5, v0, [I

    .line 108
    iget v6, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->e:I

    aput v6, v5, v3

    iget v6, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->f:I

    aput v6, v5, v4

    const-string v6, "color"

    invoke-static {v2, v6, v5}, Landroid/animation/ObjectAnimator;->ofInt(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;

    move-result-object v5

    .line 109
    new-instance v6, Landroid/animation/ArgbEvaluator;

    invoke-direct {v6}, Landroid/animation/ArgbEvaluator;-><init>()V

    invoke-virtual {v5, v6}, Landroid/animation/ObjectAnimator;->setEvaluator(Landroid/animation/TypeEvaluator;)V

    .line 111
    iget-object v6, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->m:Lcom/mbridge/msdk/widget/custom/baseview/f;

    new-array v7, v0, [I

    iget v8, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->g:I

    aput v8, v7, v3

    iget v8, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->h:I

    aput v8, v7, v4

    const-string v8, "strokeColor"

    .line 112
    invoke-static {v6, v8, v7}, Landroid/animation/ObjectAnimator;->ofInt(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;

    move-result-object v6

    .line 113
    new-instance v7, Landroid/animation/ArgbEvaluator;

    invoke-direct {v7}, Landroid/animation/ArgbEvaluator;-><init>()V

    invoke-virtual {v6, v7}, Landroid/animation/ObjectAnimator;->setEvaluator(Landroid/animation/TypeEvaluator;)V

    new-array v7, v0, [F

    .line 115
    iget v8, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->i:F

    aput v8, v7, v3

    iget v8, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->j:F

    aput v8, v7, v4

    const-string v8, "cornerRadius"

    .line 116
    invoke-static {v2, v8, v7}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v2

    .line 118
    new-instance v7, Landroid/animation/AnimatorSet;

    invoke-direct {v7}, Landroid/animation/AnimatorSet;-><init>()V

    .line 119
    iget v8, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->b:I

    int-to-long v8, v8

    invoke-virtual {v7, v8, v9}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    const/4 v8, 0x4

    new-array v8, v8, [Landroid/animation/Animator;

    aput-object v1, v8, v3

    aput-object v5, v8, v4

    aput-object v6, v8, v0

    const/4 v0, 0x3

    aput-object v2, v8, v0

    .line 120
    invoke-virtual {v7, v8}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    .line 121
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/c$2;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/custom/baseview/c$2;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/c;)V

    invoke-virtual {v7, v0}, Landroid/animation/AnimatorSet;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    .line 144
    invoke-virtual {v7}, Landroid/animation/AnimatorSet;->start()V

    return-void
.end method

.method public final a(F)V
    .locals 0

    .line 71
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->i:F

    return-void
.end method

.method public final a(I)V
    .locals 0

    .line 39
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->b:I

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/widget/custom/baseview/d;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->a:Lcom/mbridge/msdk/widget/custom/baseview/d;

    return-void
.end method

.method public final b(F)V
    .locals 0

    .line 75
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->j:F

    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 47
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->c:I

    return-void
.end method

.method public final c(F)V
    .locals 0

    .line 79
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->k:F

    return-void
.end method

.method public final c(I)V
    .locals 0

    .line 51
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->d:I

    return-void
.end method

.method public final d(I)V
    .locals 0

    .line 55
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->e:I

    return-void
.end method

.method public final e(I)V
    .locals 0

    .line 59
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->f:I

    return-void
.end method

.method public final f(I)V
    .locals 0

    .line 63
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->g:I

    return-void
.end method

.method public final g(I)V
    .locals 0

    .line 67
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c;->h:I

    return-void
.end method
