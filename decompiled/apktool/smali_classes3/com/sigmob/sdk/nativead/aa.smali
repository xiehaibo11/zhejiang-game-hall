.class public Lcom/sigmob/sdk/nativead/aa;
.super Ljava/lang/Object;


# instance fields
.field private a:Landroid/view/ViewGroup;

.field private b:Lcom/sigmob/sdk/nativead/z;

.field private c:Lcom/sigmob/sdk/nativead/z;

.field private d:J


# direct methods
.method public constructor <init>(Landroid/view/ViewGroup;Lcom/sigmob/sdk/nativead/z;Lcom/sigmob/sdk/nativead/z;J)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/aa;->a:Landroid/view/ViewGroup;

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/aa;->b:Lcom/sigmob/sdk/nativead/z;

    iput-object p3, p0, Lcom/sigmob/sdk/nativead/aa;->c:Lcom/sigmob/sdk/nativead/z;

    iput-wide p4, p0, Lcom/sigmob/sdk/nativead/aa;->d:J

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/aa;)Landroid/view/ViewGroup;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/aa;->a:Landroid/view/ViewGroup;

    return-object p0
.end method


# virtual methods
.method public a()V
    .locals 9

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/aa;->a:Landroid/view/ViewGroup;

    const/4 v1, 0x2

    new-array v2, v1, [F

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/aa;->b:Lcom/sigmob/sdk/nativead/z;

    invoke-virtual {v3}, Lcom/sigmob/sdk/nativead/z;->a()I

    move-result v3

    int-to-float v3, v3

    const/4 v4, 0x0

    aput v3, v2, v4

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/aa;->c:Lcom/sigmob/sdk/nativead/z;

    invoke-virtual {v3}, Lcom/sigmob/sdk/nativead/z;->a()I

    move-result v3

    int-to-float v3, v3

    const/4 v5, 0x1

    aput v3, v2, v5

    const-string v3, "x"

    invoke-static {v0, v3, v2}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/aa;->a:Landroid/view/ViewGroup;

    new-array v3, v1, [F

    iget-object v6, p0, Lcom/sigmob/sdk/nativead/aa;->b:Lcom/sigmob/sdk/nativead/z;

    invoke-virtual {v6}, Lcom/sigmob/sdk/nativead/z;->b()I

    move-result v6

    int-to-float v6, v6

    aput v6, v3, v4

    iget-object v6, p0, Lcom/sigmob/sdk/nativead/aa;->c:Lcom/sigmob/sdk/nativead/z;

    invoke-virtual {v6}, Lcom/sigmob/sdk/nativead/z;->b()I

    move-result v6

    int-to-float v6, v6

    aput v6, v3, v5

    const-string v6, "y"

    invoke-static {v2, v6, v3}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v2

    new-array v3, v1, [I

    iget-object v6, p0, Lcom/sigmob/sdk/nativead/aa;->b:Lcom/sigmob/sdk/nativead/z;

    invoke-virtual {v6}, Lcom/sigmob/sdk/nativead/z;->c()I

    move-result v6

    aput v6, v3, v4

    iget-object v6, p0, Lcom/sigmob/sdk/nativead/aa;->c:Lcom/sigmob/sdk/nativead/z;

    invoke-virtual {v6}, Lcom/sigmob/sdk/nativead/z;->c()I

    move-result v6

    aput v6, v3, v5

    invoke-static {v3}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object v3

    new-array v6, v1, [I

    iget-object v7, p0, Lcom/sigmob/sdk/nativead/aa;->b:Lcom/sigmob/sdk/nativead/z;

    invoke-virtual {v7}, Lcom/sigmob/sdk/nativead/z;->d()I

    move-result v7

    aput v7, v6, v4

    iget-object v7, p0, Lcom/sigmob/sdk/nativead/aa;->c:Lcom/sigmob/sdk/nativead/z;

    invoke-virtual {v7}, Lcom/sigmob/sdk/nativead/z;->d()I

    move-result v7

    aput v7, v6, v5

    invoke-static {v6}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object v6

    new-instance v7, Lcom/sigmob/sdk/nativead/aa$1;

    invoke-direct {v7, p0}, Lcom/sigmob/sdk/nativead/aa$1;-><init>(Lcom/sigmob/sdk/nativead/aa;)V

    invoke-virtual {v3, v7}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    new-instance v7, Lcom/sigmob/sdk/nativead/aa$2;

    invoke-direct {v7, p0}, Lcom/sigmob/sdk/nativead/aa$2;-><init>(Lcom/sigmob/sdk/nativead/aa;)V

    invoke-virtual {v6, v7}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    new-instance v7, Landroid/animation/AnimatorSet;

    invoke-direct {v7}, Landroid/animation/AnimatorSet;-><init>()V

    const/4 v8, 0x4

    new-array v8, v8, [Landroid/animation/Animator;

    aput-object v0, v8, v4

    aput-object v2, v8, v5

    aput-object v3, v8, v1

    const/4 v0, 0x3

    aput-object v6, v8, v0

    invoke-virtual {v7, v8}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    iget-wide v0, p0, Lcom/sigmob/sdk/nativead/aa;->d:J

    invoke-virtual {v7, v0, v1}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    new-instance v0, Landroid/view/animation/DecelerateInterpolator;

    invoke-direct {v0}, Landroid/view/animation/DecelerateInterpolator;-><init>()V

    invoke-virtual {v7, v0}, Landroid/animation/AnimatorSet;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    invoke-virtual {v7}, Landroid/animation/AnimatorSet;->start()V

    return-void
.end method
