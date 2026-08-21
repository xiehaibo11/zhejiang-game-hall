.class public Lcom/sigmob/sdk/base/views/j;
.super Landroid/widget/RelativeLayout;


# instance fields
.field a:I

.field private final b:Landroid/widget/ImageView;

.field private final c:Landroid/widget/TextView;

.field private final d:Landroid/widget/TextView;

.field private final e:I

.field private f:Landroid/widget/TextView;

.field private g:Landroid/widget/TextView;

.field private h:Lcom/sigmob/sdk/base/views/p;

.field private i:Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

.field private j:Lcom/sigmob/sdk/base/views/j;

.field private k:I

.field private l:Z

.field private m:I

.field private n:I

.field private o:Z

.field private p:Z

.field private q:Z

.field private r:Landroid/widget/LinearLayout;

.field private s:Lcom/sigmob/sdk/base/models/BaseAdUnit;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;FLjava/lang/String;IILjava/lang/String;IIIIIF)V
    .locals 10

    move-object v0, p0

    move-object v1, p1

    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x0

    iput-object v2, v0, Lcom/sigmob/sdk/base/views/j;->j:Lcom/sigmob/sdk/base/views/j;

    const/4 v2, 0x0

    iput v2, v0, Lcom/sigmob/sdk/base/views/j;->k:I

    move/from16 v3, p15

    invoke-static {v3, p1}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v3

    iput v3, v0, Lcom/sigmob/sdk/base/views/j;->a:I

    const/high16 v3, 0x41200000    # 10.0f

    invoke-static {v3, p1}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v3

    iput v3, v0, Lcom/sigmob/sdk/base/views/j;->n:I

    move-object v3, p2

    iput-object v3, v0, Lcom/sigmob/sdk/base/views/j;->s:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move/from16 v4, p7

    iput v4, v0, Lcom/sigmob/sdk/base/views/j;->k:I

    move/from16 v4, p8

    iput v4, v0, Lcom/sigmob/sdk/base/views/j;->e:I

    new-instance v4, Landroid/widget/TextView;

    invoke-direct {v4, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v4, v0, Lcom/sigmob/sdk/base/views/j;->d:Landroid/widget/TextView;

    move-object v5, p3

    invoke-virtual {v4, p3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->d:Landroid/widget/TextView;

    const/4 v5, 0x1

    const/high16 v6, 0x41800000    # 16.0f

    invoke-virtual {v4, v5, v6}, Landroid/widget/TextView;->setTextSize(IF)V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->d:Landroid/widget/TextView;

    const/high16 v6, -0x1000000

    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setTextColor(I)V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->d:Landroid/widget/TextView;

    invoke-virtual {v4}, Landroid/widget/TextView;->setSingleLine()V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->d:Landroid/widget/TextView;

    invoke-static {v2}, Landroid/graphics/Typeface;->defaultFromStyle(I)Landroid/graphics/Typeface;

    move-result-object v6

    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setTypeface(Landroid/graphics/Typeface;)V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->d:Landroid/widget/TextView;

    sget-object v6, Landroid/text/TextUtils$TruncateAt;->END:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->d:Landroid/widget/TextView;

    const/16 v6, 0x10

    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setGravity(I)V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->d:Landroid/widget/TextView;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v7

    invoke-virtual {v4, v7}, Landroid/widget/TextView;->setId(I)V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->d:Landroid/widget/TextView;

    iget v7, v0, Lcom/sigmob/sdk/base/views/j;->n:I

    div-int/lit8 v7, v7, 0x6

    invoke-virtual {v4, v7, v2, v2, v2}, Landroid/widget/TextView;->setPadding(IIII)V

    move/from16 v4, p12

    iput v4, v0, Lcom/sigmob/sdk/base/views/j;->m:I

    new-instance v4, Landroid/widget/TextView;

    invoke-direct {v4, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v4, v0, Lcom/sigmob/sdk/base/views/j;->c:Landroid/widget/TextView;

    const/high16 v7, 0x41600000    # 14.0f

    invoke-virtual {v4, v5, v7}, Landroid/widget/TextView;->setTextSize(IF)V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->c:Landroid/widget/TextView;

    move/from16 v7, p11

    invoke-virtual {v4, v7}, Landroid/widget/TextView;->setTextColor(I)V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->c:Landroid/widget/TextView;

    const/16 v7, 0x11

    invoke-virtual {v4, v7}, Landroid/widget/TextView;->setGravity(I)V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->d:Landroid/widget/TextView;

    invoke-virtual {v4}, Landroid/widget/TextView;->setSingleLine()V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->c:Landroid/widget/TextView;

    sget-object v7, Landroid/text/TextUtils$TruncateAt;->END:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v4, v7}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    iget-object v4, v0, Lcom/sigmob/sdk/base/views/j;->c:Landroid/widget/TextView;

    move-object v7, p4

    invoke-virtual {v4, p4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/high16 v4, 0x40a00000    # 5.0f

    invoke-static {v4, p1}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v4

    new-instance v7, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v7}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    move/from16 v8, p10

    invoke-virtual {v7, v8}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    mul-int/lit8 v8, v4, 0x6

    int-to-float v8, v8

    invoke-virtual {v7, v8}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    new-instance v8, Lcom/sigmob/sdk/base/views/h;

    invoke-direct {v8, p1}, Lcom/sigmob/sdk/base/views/h;-><init>(Landroid/content/Context;)V

    iput-object v8, v0, Lcom/sigmob/sdk/base/views/j;->b:Landroid/widget/ImageView;

    sget-object v9, Landroid/widget/ImageView$ScaleType;->FIT_START:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v8, v9}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    iget-object v8, v0, Lcom/sigmob/sdk/base/views/j;->b:Landroid/widget/ImageView;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v9

    invoke-virtual {v8, v9}, Landroid/widget/ImageView;->setId(I)V

    iget-object v8, v0, Lcom/sigmob/sdk/base/views/j;->b:Landroid/widget/ImageView;

    check-cast v8, Lcom/sigmob/sdk/base/views/h;

    iput-boolean v2, v8, Lcom/sigmob/sdk/base/views/h;->b:Z

    iget-object v2, v0, Lcom/sigmob/sdk/base/views/j;->b:Landroid/widget/ImageView;

    check-cast v2, Lcom/sigmob/sdk/base/views/h;

    mul-int/lit8 v4, v4, 0x2

    int-to-float v4, v4

    iput v4, v2, Lcom/sigmob/sdk/base/views/h;->a:F

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v2, v6, :cond_0

    iget-object v2, v0, Lcom/sigmob/sdk/base/views/j;->c:Landroid/widget/TextView;

    invoke-virtual {v2, v7}, Landroid/widget/TextView;->setBackground(Landroid/graphics/drawable/Drawable;)V

    goto :goto_0

    :cond_0
    iget-object v2, v0, Lcom/sigmob/sdk/base/views/j;->c:Landroid/widget/TextView;

    invoke-virtual {v2, v7}, Landroid/widget/TextView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    :goto_0
    iget-object v2, v0, Lcom/sigmob/sdk/base/views/j;->c:Landroid/widget/TextView;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v7

    invoke-virtual {v2, v7}, Landroid/widget/TextView;->setId(I)V

    new-instance v2, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v2}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    invoke-virtual {v2, v4}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    move/from16 v4, p13

    invoke-virtual {v2, v4}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    move/from16 v4, p14

    invoke-virtual {v2, v4}, Landroid/graphics/drawable/GradientDrawable;->setAlpha(I)V

    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v4, v6, :cond_1

    invoke-virtual {p0, v2}, Lcom/sigmob/sdk/base/views/j;->setBackground(Landroid/graphics/drawable/Drawable;)V

    goto :goto_1

    :cond_1
    invoke-virtual {p0, v2}, Lcom/sigmob/sdk/base/views/j;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    :goto_1
    iput-object v0, v0, Lcom/sigmob/sdk/base/views/j;->j:Lcom/sigmob/sdk/base/views/j;

    iget v2, v0, Lcom/sigmob/sdk/base/views/j;->e:I

    if-ne v2, v5, :cond_2

    move v2, p5

    invoke-virtual {p0, p1, p5}, Lcom/sigmob/sdk/base/views/j;->a(Landroid/content/Context;F)V

    goto :goto_2

    :cond_2
    move-object/from16 v2, p6

    invoke-virtual {p0, p1, v2}, Lcom/sigmob/sdk/base/views/j;->a(Landroid/content/Context;Ljava/lang/String;)V

    :goto_2
    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v2

    if-eqz v2, :cond_3

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v2

    iget-object v2, v2, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    if-eqz v2, :cond_3

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/j;->a(Landroid/content/Context;)V

    :cond_3
    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/views/j;->setupUILayout(Landroid/content/Context;)V

    iget-object v1, v0, Lcom/sigmob/sdk/base/views/j;->b:Landroid/widget/ImageView;

    const/4 v2, 0x4

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    move-object/from16 v1, p9

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/base/views/j;->a(Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/j;->g()V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/views/j;)Lcom/sigmob/sdk/base/views/j;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/j;->j:Lcom/sigmob/sdk/base/views/j;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/views/j;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/views/j;->p:Z

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/views/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/j;->g()V

    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/views/j;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/views/j;->q:Z

    return p1
.end method

.method static synthetic c(Lcom/sigmob/sdk/base/views/j;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/j;->b:Landroid/widget/ImageView;

    return-object p0
.end method

.method private c()V
    .locals 2

    iget v0, p0, Lcom/sigmob/sdk/base/views/j;->k:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/j;->f()V

    goto :goto_1

    :cond_1
    :goto_0
    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/j;->h()V

    goto :goto_1

    :cond_2
    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/j;->e()V

    :goto_1
    return-void
.end method

.method private d()V
    .locals 4

    const/4 v0, 0x3

    new-array v1, v0, [F

    fill-array-data v1, :array_0

    const-string v2, "scaleX"

    invoke-static {v2, v1}, Landroid/animation/PropertyValuesHolder;->ofFloat(Ljava/lang/String;[F)Landroid/animation/PropertyValuesHolder;

    move-result-object v1

    new-array v0, v0, [F

    fill-array-data v0, :array_1

    const-string v2, "scaleY"

    invoke-static {v2, v0}, Landroid/animation/PropertyValuesHolder;->ofFloat(Ljava/lang/String;[F)Landroid/animation/PropertyValuesHolder;

    move-result-object v0

    const/4 v2, 0x2

    new-array v2, v2, [Landroid/animation/PropertyValuesHolder;

    const/4 v3, 0x0

    aput-object v1, v2, v3

    const/4 v1, 0x1

    aput-object v0, v2, v1

    invoke-static {p0, v2}, Landroid/animation/ObjectAnimator;->ofPropertyValuesHolder(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/views/j$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/views/j$1;-><init>(Lcom/sigmob/sdk/base/views/j;)V

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/j;->f()V

    const-wide/16 v1, 0x7d0

    invoke-virtual {v0, v1, v2}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->start()V

    return-void

    :array_0
    .array-data 4
        0x3e99999a    # 0.3f
        0x3f000000    # 0.5f
        0x3f800000    # 1.0f
    .end array-data

    :array_1
    .array-data 4
        0x3e99999a    # 0.3f
        0x3f000000    # 0.5f
        0x3f800000    # 1.0f
    .end array-data
.end method

.method static synthetic d(Lcom/sigmob/sdk/base/views/j;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/base/views/j;->l:Z

    return p0
.end method

.method private e()V
    .locals 15

    const/4 v0, 0x0

    invoke-static {v0, v0}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v0

    const v1, 0x3f733333    # 0.95f

    const/high16 v2, 0x3f000000    # 0.5f

    invoke-static {v2, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v2

    const v3, 0x3f19999a    # 0.6f

    const v4, 0x3f666666    # 0.9f

    invoke-static {v3, v4}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v3

    const/high16 v4, 0x3f800000    # 1.0f

    const v5, 0x3f333333    # 0.7f

    invoke-static {v5, v4}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v5

    const v6, 0x3f4ccccd    # 0.8f

    invoke-static {v6, v1}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v1

    invoke-static {v4, v4}, Landroid/animation/Keyframe;->ofFloat(FF)Landroid/animation/Keyframe;

    move-result-object v4

    const/4 v6, 0x6

    new-array v7, v6, [Landroid/animation/Keyframe;

    const/4 v8, 0x0

    aput-object v0, v7, v8

    const/4 v9, 0x1

    aput-object v2, v7, v9

    const/4 v10, 0x2

    aput-object v3, v7, v10

    const/4 v11, 0x3

    aput-object v5, v7, v11

    const/4 v12, 0x4

    aput-object v1, v7, v12

    const/4 v13, 0x5

    aput-object v4, v7, v13

    const-string v14, "scaleX"

    invoke-static {v14, v7}, Landroid/animation/PropertyValuesHolder;->ofKeyframe(Ljava/lang/String;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;

    move-result-object v7

    new-array v6, v6, [Landroid/animation/Keyframe;

    aput-object v0, v6, v8

    aput-object v2, v6, v9

    aput-object v3, v6, v10

    aput-object v5, v6, v11

    aput-object v1, v6, v12

    aput-object v4, v6, v13

    const-string v0, "scaleY"

    invoke-static {v0, v6}, Landroid/animation/PropertyValuesHolder;->ofKeyframe(Ljava/lang/String;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;

    move-result-object v0

    new-array v1, v10, [Landroid/animation/PropertyValuesHolder;

    aput-object v7, v1, v8

    aput-object v0, v1, v9

    invoke-static {p0, v1}, Landroid/animation/ObjectAnimator;->ofPropertyValuesHolder(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;

    move-result-object v0

    const-wide/16 v1, 0x3e8

    invoke-virtual {v0, v1, v2}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/j;->f()V

    iput-boolean v9, p0, Lcom/sigmob/sdk/base/views/j;->q:Z

    new-instance v1, Lcom/sigmob/sdk/base/views/j$2;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/views/j$2;-><init>(Lcom/sigmob/sdk/base/views/j;)V

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->start()V

    return-void
.end method

.method static synthetic e(Lcom/sigmob/sdk/base/views/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/j;->c()V

    return-void
.end method

.method private f()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/views/j;->o:Z

    const/4 v0, 0x0

    invoke-super {p0, v0}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    return-void
.end method

.method private g()V
    .locals 1

    const/4 v0, 0x4

    invoke-super {p0, v0}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    return-void
.end method

.method private h()V
    .locals 10

    const-string v0, "startDownToUpAnimator"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    new-instance v0, Landroid/view/animation/TranslateAnimation;

    const/4 v2, 0x2

    const/4 v3, 0x0

    const/4 v4, 0x2

    const/4 v5, 0x0

    const/4 v6, 0x2

    const/high16 v7, 0x3f800000    # 1.0f

    const/4 v8, 0x2

    const/4 v9, 0x0

    move-object v1, v0

    invoke-direct/range {v1 .. v9}, Landroid/view/animation/TranslateAnimation;-><init>(IFIFIFIF)V

    new-instance v1, Landroid/view/animation/LinearInterpolator;

    invoke-direct {v1}, Landroid/view/animation/LinearInterpolator;-><init>()V

    invoke-virtual {v0, v1}, Landroid/view/animation/TranslateAnimation;->setInterpolator(Landroid/view/animation/Interpolator;)V

    const-wide/16 v1, 0x1f4

    invoke-virtual {v0, v1, v2}, Landroid/view/animation/TranslateAnimation;->setDuration(J)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/j;->f()V

    new-instance v1, Lcom/sigmob/sdk/base/views/j$3;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/views/j$3;-><init>(Lcom/sigmob/sdk/base/views/j;)V

    invoke-virtual {v0, v1}, Landroid/view/animation/TranslateAnimation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/j;->j:Lcom/sigmob/sdk/base/views/j;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/views/j;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method

.method private i()V
    .locals 10

    const-string v0, "startUpToDownAnimator"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    new-instance v0, Landroid/view/animation/TranslateAnimation;

    const/4 v2, 0x2

    const/4 v3, 0x0

    const/4 v4, 0x2

    const/4 v5, 0x0

    const/4 v6, 0x2

    const/4 v7, 0x0

    const/4 v8, 0x2

    const/high16 v9, 0x3f800000    # 1.0f

    move-object v1, v0

    invoke-direct/range {v1 .. v9}, Landroid/view/animation/TranslateAnimation;-><init>(IFIFIFIF)V

    new-instance v1, Landroid/view/animation/LinearInterpolator;

    invoke-direct {v1}, Landroid/view/animation/LinearInterpolator;-><init>()V

    invoke-virtual {v0, v1}, Landroid/view/animation/TranslateAnimation;->setInterpolator(Landroid/view/animation/Interpolator;)V

    const-wide/16 v1, 0x1f4

    invoke-virtual {v0, v1, v2}, Landroid/view/animation/TranslateAnimation;->setDuration(J)V

    new-instance v1, Lcom/sigmob/sdk/base/views/j$4;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/views/j$4;-><init>(Lcom/sigmob/sdk/base/views/j;)V

    invoke-virtual {v0, v1}, Landroid/view/animation/TranslateAnimation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/j;->j:Lcom/sigmob/sdk/base/views/j;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/views/j;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method

.method private setupUILayout(Landroid/content/Context;)V
    .locals 7

    const/high16 v0, 0x42700000    # 60.0f

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v0

    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xf

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget v3, p0, Lcom/sigmob/sdk/base/views/j;->n:I

    div-int/lit8 v4, v3, 0x4

    const/4 v5, 0x0

    invoke-virtual {v1, v3, v4, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    iget-object v3, p0, Lcom/sigmob/sdk/base/views/j;->b:Landroid/widget/ImageView;

    invoke-virtual {p0, v3, v1}, Lcom/sigmob/sdk/base/views/j;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    int-to-float v0, v0

    const v3, 0x3fe66666    # 1.8f

    div-float/2addr v0, v3

    float-to-int v0, v0

    const/4 v3, -0x2

    invoke-direct {v1, v3, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget v0, p0, Lcom/sigmob/sdk/base/views/j;->n:I

    invoke-virtual {v1, v5, v5, v0, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v0, 0xb

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/j;->c:Landroid/widget/TextView;

    iget v4, p0, Lcom/sigmob/sdk/base/views/j;->n:I

    invoke-virtual {v0, v4, v5, v4, v5}, Landroid/widget/TextView;->setPadding(IIII)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/j;->c:Landroid/widget/TextView;

    invoke-virtual {p0, v0, v1}, Lcom/sigmob/sdk/base/views/j;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v0, Landroid/widget/LinearLayout;

    invoke-direct {v0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setOrientation(I)V

    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v4, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget v6, p0, Lcom/sigmob/sdk/base/views/j;->n:I

    div-int/lit8 v6, v6, 0x2

    invoke-virtual {v4, v6, v5, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    invoke-virtual {v4, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/j;->b:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getId()I

    move-result v2

    invoke-virtual {v4, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/j;->c:Landroid/widget/TextView;

    invoke-virtual {v2}, Landroid/widget/TextView;->getId()I

    move-result v2

    invoke-virtual {v4, v5, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    invoke-virtual {p0, v0, v4}, Lcom/sigmob/sdk/base/views/j;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v2, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object v4, p0, Lcom/sigmob/sdk/base/views/j;->d:Landroid/widget/TextView;

    invoke-virtual {v0, v4, v2}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/j;->f:Landroid/widget/TextView;

    if-eqz v2, :cond_0

    new-instance v2, Landroid/widget/RelativeLayout;

    invoke-direct {v2, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {p1, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object v4, p0, Lcom/sigmob/sdk/base/views/j;->f:Landroid/widget/TextView;

    invoke-virtual {v2, v4, p1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {p1, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object v4, p0, Lcom/sigmob/sdk/base/views/j;->f:Landroid/widget/TextView;

    invoke-virtual {v4}, Landroid/widget/TextView;->getId()I

    move-result v4

    invoke-virtual {p1, v1, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/4 v1, 0x6

    iget-object v4, p0, Lcom/sigmob/sdk/base/views/j;->f:Landroid/widget/TextView;

    invoke-virtual {v4}, Landroid/widget/TextView;->getId()I

    move-result v4

    invoke-virtual {p1, v1, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 v1, 0x8

    iget-object v4, p0, Lcom/sigmob/sdk/base/views/j;->f:Landroid/widget/TextView;

    invoke-virtual {v4}, Landroid/widget/TextView;->getId()I

    move-result v4

    invoke-virtual {p1, v1, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/j;->h:Lcom/sigmob/sdk/base/views/p;

    invoke-virtual {v2, v1, p1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {p1, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v2, p1}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j;->g:Landroid/widget/TextView;

    if-eqz p1, :cond_1

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {p1, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/j;->g:Landroid/widget/TextView;

    invoke-virtual {v0, v1, p1}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j;->r:Landroid/widget/LinearLayout;

    if-eqz p1, :cond_2

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {p1, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/j;->r:Landroid/widget/LinearLayout;

    invoke-virtual {v0, v1, p1}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2
    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;)V
    .locals 7

    new-instance v0, Landroid/widget/LinearLayout;

    invoke-direct {v0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/j;->r:Landroid/widget/LinearLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setOrientation(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/j;->r:Landroid/widget/LinearLayout;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->setId(I)V

    const/high16 v0, 0x40a00000    # 5.0f

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v0

    const-string v2, "\u6743\u9650"

    const-string v3, "\u5f00\u53d1\u8005"

    const-string v4, "\u7248\u672c"

    const-string v5, "\u9690\u79c1\u534f\u8bae"

    filled-new-array {v2, v3, v4, v5}, [Ljava/lang/String;

    move-result-object v2

    move v3, v1

    :goto_0
    const/4 v4, 0x4

    if-ge v3, v4, :cond_0

    new-instance v4, Landroid/widget/TextView;

    invoke-direct {v4, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const/high16 v5, 0x41200000    # 10.0f

    const/4 v6, 0x1

    invoke-virtual {v4, v6, v5}, Landroid/widget/TextView;->setTextSize(IF)V

    aget-object v5, v2, v3

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const v5, -0x777778

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setTextColor(I)V

    const v5, 0x3f333333    # 0.7f

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setAlpha(F)V

    div-int/lit8 v5, v0, 0x2

    invoke-virtual {v4, v5, v1, v5, v1}, Landroid/widget/TextView;->setPadding(IIII)V

    new-instance v5, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v6, -0x2

    invoke-direct {v5, v6, v6}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v5, v1, v1, v0, v1}, Landroid/widget/LinearLayout$LayoutParams;->setMargins(IIII)V

    iget-object v6, p0, Lcom/sigmob/sdk/base/views/j;->r:Landroid/widget/LinearLayout;

    invoke-virtual {v6, v4, v5}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method public a(Landroid/content/Context;F)V
    .locals 4

    new-instance v0, Landroid/widget/TextView;

    invoke-direct {v0, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/j;->f:Landroid/widget/TextView;

    const/4 v1, 0x1

    const/high16 v2, 0x41600000    # 14.0f

    invoke-virtual {v0, v1, v2}, Landroid/widget/TextView;->setTextSize(IF)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/j;->f:Landroid/widget/TextView;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setId(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/j;->f:Landroid/widget/TextView;

    const/16 v2, 0x11

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setGravity(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/j;->f:Landroid/widget/TextView;

    const v2, -0x777778

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextColor(I)V

    const/4 v0, 0x0

    cmpl-float v0, p2, v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/j;->f:Landroid/widget/TextView;

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    invoke-static {p2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v3

    aput-object v3, v1, v2

    const-string v2, "%.1f"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    new-instance v0, Lcom/sigmob/sdk/base/views/p;

    invoke-direct {v0, p1, p2}, Lcom/sigmob/sdk/base/views/p;-><init>(Landroid/content/Context;F)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/j;->h:Lcom/sigmob/sdk/base/views/p;

    return-void
.end method

.method public a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Landroid/widget/TextView;

    invoke-direct {v0, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/j;->g:Landroid/widget/TextView;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setId(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j;->g:Landroid/widget/TextView;

    const v0, -0x777778

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setTextColor(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j;->g:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->setSingleLine()V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j;->g:Landroid/widget/TextView;

    const/16 v0, 0x11

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setGravity(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j;->g:Landroid/widget/TextView;

    const/4 v0, 0x1

    const/high16 v1, 0x41600000    # 14.0f

    invoke-virtual {p1, v0, v1}, Landroid/widget/TextView;->setTextSize(IF)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j;->g:Landroid/widget/TextView;

    sget-object v0, Landroid/text/TextUtils$TruncateAt;->END:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j;->g:Landroid/widget/TextView;

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getImageLoader()Lcom/czhj/volley/toolbox/ImageLoader;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v1, Lcom/sigmob/sdk/base/views/j$5;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/views/j$5;-><init>(Lcom/sigmob/sdk/base/views/j;)V

    invoke-virtual {v0, p1, v1}, Lcom/czhj/volley/toolbox/ImageLoader;->get(Ljava/lang/String;Lcom/czhj/volley/toolbox/ImageLoader$ImageListener;)Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/j;->i:Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

    :cond_0
    return-void
.end method

.method public a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/views/j;->o:Z

    return v0
.end method

.method public b()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/views/j;->p:Z

    return v0
.end method

.method public getFourElementsLayout()Landroid/widget/LinearLayout;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/j;->r:Landroid/widget/LinearLayout;

    return-object v0
.end method

.method public getVisibility()I
    .locals 1

    invoke-super {p0}, Landroid/widget/RelativeLayout;->getVisibility()I

    move-result v0

    return v0
.end method

.method public setOnTouchListener(Landroid/view/View$OnTouchListener;)V
    .locals 2

    iget v0, p0, Lcom/sigmob/sdk/base/views/j;->m:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/j;->c:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    goto :goto_0

    :cond_0
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    :goto_0
    return-void
.end method

.method public setVisibility(I)V
    .locals 1

    const/16 v0, 0x8

    if-ne p1, v0, :cond_0

    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j;->i:Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

    invoke-virtual {p1}, Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;->cancelRequest()V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/views/j;->l:Z

    goto :goto_1

    :cond_0
    if-nez p1, :cond_3

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/views/j;->l:Z

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j;->j:Lcom/sigmob/sdk/base/views/j;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/j;->getAnimation()Landroid/view/animation/Animation;

    move-result-object p1

    if-nez p1, :cond_2

    iget-boolean p1, p0, Lcom/sigmob/sdk/base/views/j;->q:Z

    if-eqz p1, :cond_1

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j;->b:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/widget/ImageView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_6

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/j;->c()V

    goto :goto_1

    :cond_2
    :goto_0
    return-void

    :cond_3
    const/4 v0, 0x4

    if-ne p1, v0, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j;->j:Lcom/sigmob/sdk/base/views/j;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/j;->getAnimation()Landroid/view/animation/Animation;

    move-result-object p1

    if-eqz p1, :cond_4

    return-void

    :cond_4
    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/j;->i()V

    goto :goto_1

    :cond_5
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    :cond_6
    :goto_1
    return-void
.end method
