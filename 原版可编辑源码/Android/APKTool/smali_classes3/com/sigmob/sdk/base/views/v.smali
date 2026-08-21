.class public Lcom/sigmob/sdk/base/views/v;
.super Landroid/widget/RelativeLayout;


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2


# instance fields
.field private c:Landroid/widget/ImageView;

.field private d:Landroid/widget/TextView;

.field private e:Landroid/widget/TextView;

.field private f:Landroid/animation/AnimatorSet;

.field private g:Landroid/animation/ObjectAnimator;

.field private h:Landroid/animation/ObjectAnimator;

.field private i:Landroid/view/View;

.field private j:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/views/v;->a(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/views/v;->a(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/views/v;->a(Landroid/content/Context;)V

    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/views/v;->b(Landroid/content/Context;)I

    move-result v0

    invoke-static {p1, v0, p0}, Landroid/view/View;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    const-string v0, "sig_shakeImageView"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/views/v;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/v;->c:Landroid/widget/ImageView;

    const-string v0, "sig_shakeTitleView"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/views/v;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/v;->d:Landroid/widget/TextView;

    const-string v0, "sig_shakeDescView"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/views/v;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/v;->e:Landroid/widget/TextView;

    const-string v0, "sig_shake_view"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/v;->findViewById(I)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/v;->i:Landroid/view/View;

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/v;->c()V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/v;->b()V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/views/v;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/base/views/v;->j:Z

    return p0
.end method

.method private b(Landroid/content/Context;)I
    .locals 1

    const-string v0, "sig_shake_view_layout"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getLayoutId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/views/v;)Landroid/animation/ObjectAnimator;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/v;->g:Landroid/animation/ObjectAnimator;

    return-object p0
.end method

.method private b()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/v;->c:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    iget v0, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/v;->c:Landroid/widget/ImageView;

    invoke-virtual {v1}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    iget v1, v1, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/v;->c:Landroid/widget/ImageView;

    int-to-float v1, v1

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setPivotX(F)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/v;->c:Landroid/widget/ImageView;

    int-to-float v0, v0

    const v2, 0x3f4ccccd    # 0.8f

    mul-float/2addr v0, v2

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setPivotY(F)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/v;->c:Landroid/widget/ImageView;

    const/16 v1, 0xb

    new-array v1, v1, [F

    fill-array-data v1, :array_0

    const-string v2, "rotation"

    invoke-static {v0, v2, v1}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/v;->g:Landroid/animation/ObjectAnimator;

    new-instance v1, Landroid/view/animation/LinearInterpolator;

    invoke-direct {v1}, Landroid/view/animation/LinearInterpolator;-><init>()V

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/v;->g:Landroid/animation/ObjectAnimator;

    new-instance v1, Lcom/sigmob/sdk/base/views/v$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/views/v$1;-><init>(Lcom/sigmob/sdk/base/views/v;)V

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/v;->g:Landroid/animation/ObjectAnimator;

    const-wide/16 v1, 0x5dc

    invoke-virtual {v0, v1, v2}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    return-void

    nop

    :array_0
    .array-data 4
        0x0
        0x41900000    # 18.0f
        0x0
        -0x3e700000    # -18.0f
        0x0
        0x41900000    # 18.0f
        0x0
        -0x3e700000    # -18.0f
        0x0
        0x41900000    # 18.0f
        0x0
    .end array-data
.end method

.method private c()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/v;->i:Landroid/view/View;

    const/4 v1, 0x5

    new-array v1, v1, [F

    fill-array-data v1, :array_0

    const-string v2, "translationY"

    invoke-static {v0, v2, v1}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/v;->h:Landroid/animation/ObjectAnimator;

    new-instance v1, Landroid/view/animation/LinearInterpolator;

    invoke-direct {v1}, Landroid/view/animation/LinearInterpolator;-><init>()V

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/v;->h:Landroid/animation/ObjectAnimator;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/v;->h:Landroid/animation/ObjectAnimator;

    const-wide/16 v1, 0x190

    invoke-virtual {v0, v1, v2}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    return-void

    :array_0
    .array-data 4
        0x0
        0x41f00000    # 30.0f
        0x0
        -0x3e100000    # -30.0f
        0x0
    .end array-data
.end method


# virtual methods
.method a()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/v;->h:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->start()V

    return-void
.end method

.method public a(I)V
    .locals 1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/views/v;->j:Z

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/v;->g:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1}, Landroid/animation/ObjectAnimator;->cancel()V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/v;->h:Landroid/animation/ObjectAnimator;

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/base/views/v;->g:Landroid/animation/ObjectAnimator;

    :goto_0
    invoke-virtual {p1}, Landroid/animation/ObjectAnimator;->start()V

    return-void
.end method
