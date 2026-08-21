.class public Lcom/tkay/core/activity/component/LoadingView;
.super Landroid/widget/ImageView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 28
    invoke-direct {p0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 29
    invoke-direct {p0}, Lcom/tkay/core/activity/component/LoadingView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 33
    invoke-direct {p0, p1, p2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 34
    invoke-direct {p0}, Lcom/tkay/core/activity/component/LoadingView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 38
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 39
    invoke-direct {p0}, Lcom/tkay/core/activity/component/LoadingView;->a()V

    return-void
.end method

.method private a()V
    .locals 4

    .line 43
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/LoadingView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/LoadingView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "core_loading"

    const-string v3, "drawable"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/activity/component/LoadingView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 45
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    const/4 v2, 0x0

    if-lt v0, v1, :cond_0

    const/4 v0, 0x2

    .line 47
    invoke-virtual {p0, v0, v2}, Lcom/tkay/core/activity/component/LoadingView;->setLayerType(ILandroid/graphics/Paint;)V

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    .line 50
    invoke-virtual {p0, v0, v2}, Lcom/tkay/core/activity/component/LoadingView;->setLayerType(ILandroid/graphics/Paint;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 57
    :catch_0
    :goto_0
    invoke-static {p0}, Lcom/tkay/core/activity/component/LoadingView;->a(Landroid/view/View;)V

    return-void
.end method

.method private static a(Landroid/view/View;)V
    .locals 8

    .line 62
    new-instance v7, Landroid/view/animation/RotateAnimation;

    const/4 v1, 0x0

    const/high16 v2, 0x43b40000    # 360.0f

    const/4 v3, 0x1

    const/high16 v4, 0x3f000000    # 0.5f

    const/4 v5, 0x1

    const/high16 v6, 0x3f000000    # 0.5f

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Landroid/view/animation/RotateAnimation;-><init>(FFIFIF)V

    .line 63
    new-instance v0, Landroid/view/animation/LinearInterpolator;

    invoke-direct {v0}, Landroid/view/animation/LinearInterpolator;-><init>()V

    const/4 v1, -0x1

    .line 64
    invoke-virtual {v7, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 65
    invoke-virtual {v7, v0}, Landroid/view/animation/Animation;->setInterpolator(Landroid/view/animation/Interpolator;)V

    const-wide/16 v0, 0x3e8

    .line 66
    invoke-virtual {v7, v0, v1}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 67
    invoke-virtual {p0, v7}, Landroid/view/View;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method


# virtual methods
.method public startAnimation()V
    .locals 0

    .line 71
    invoke-static {p0}, Lcom/tkay/core/activity/component/LoadingView;->a(Landroid/view/View;)V

    return-void
.end method
