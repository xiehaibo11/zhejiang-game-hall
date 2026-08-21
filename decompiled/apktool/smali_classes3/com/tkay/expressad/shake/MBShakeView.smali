.class public Lcom/tkay/expressad/shake/MBShakeView;
.super Landroid/widget/LinearLayout;


# static fields
.field private static final a:Ljava/lang/String; = "MBSplashShakeView"


# instance fields
.field private b:Landroid/widget/ImageView;

.field private c:Landroid/view/animation/Animation;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 34
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 38
    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 42
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    .line 47
    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    return-void
.end method

.method private a(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 107
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 112
    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "tkay_cm_shake_view_view_other_app"

    const-string v2, "string"

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object p1

    :cond_0
    return-object p1
.end method

.method private a()V
    .locals 8

    .line 133
    new-instance v7, Landroid/view/animation/RotateAnimation;

    const/high16 v1, -0x3ee00000    # -10.0f

    const/high16 v2, 0x41200000    # 10.0f

    const/4 v3, 0x1

    const/high16 v4, 0x3f000000    # 0.5f

    const/4 v5, 0x1

    const/high16 v6, 0x3f000000    # 0.5f

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Landroid/view/animation/RotateAnimation;-><init>(FFIFIF)V

    iput-object v7, p0, Lcom/tkay/expressad/shake/MBShakeView;->c:Landroid/view/animation/Animation;

    const-wide/16 v0, 0x64

    .line 134
    invoke-virtual {v7, v0, v1}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 135
    iget-object v0, p0, Lcom/tkay/expressad/shake/MBShakeView;->c:Landroid/view/animation/Animation;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatMode(I)V

    .line 136
    iget-object v0, p0, Lcom/tkay/expressad/shake/MBShakeView;->c:Landroid/view/animation/Animation;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 137
    iget-object v0, p0, Lcom/tkay/expressad/shake/MBShakeView;->b:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/tkay/expressad/shake/MBShakeView;->c:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method

.method private static a(Landroid/view/View;)V
    .locals 2

    const-string v0, "#80000000"

    .line 119
    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    .line 120
    new-instance v1, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v1}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 121
    invoke-virtual {v1, v0}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    const/high16 v0, 0x43480000    # 200.0f

    .line 122
    invoke-virtual {v1, v0}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 123
    invoke-virtual {p0, v1}, Landroid/view/View;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    return-void
.end method


# virtual methods
.method public initView(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 51
    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/shake/MBShakeView;->initView(Ljava/lang/String;Z)V

    return-void
.end method

.method public initView(Ljava/lang/String;Z)V
    .locals 12

    const/4 v0, 0x1

    .line 55
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/shake/MBShakeView;->setOrientation(I)V

    .line 56
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/shake/MBShakeView;->setGravity(I)V

    .line 58
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 59
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42700000    # 60.0f

    const/high16 v4, 0x42a00000    # 80.0f

    if-eqz p2, :cond_0

    move v5, v3

    goto :goto_0

    :cond_0
    move v5, v4

    :goto_0
    invoke-static {v2, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v5

    if-eqz p2, :cond_1

    goto :goto_1

    :cond_1
    move v3, v4

    :goto_1
    invoke-static {v5, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v1, v2, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 60
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    const-string v1, "#80000000"

    .line 1119
    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    .line 1120
    new-instance v2, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v2}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 1121
    invoke-virtual {v2, v1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    const/high16 v1, 0x43480000    # 200.0f

    .line 1122
    invoke-virtual {v2, v1}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 1123
    invoke-virtual {v0, v2}, Landroid/view/View;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 63
    new-instance v1, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/expressad/shake/MBShakeView;->b:Landroid/widget/ImageView;

    .line 64
    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42200000    # 40.0f

    const/high16 v4, 0x41a00000    # 20.0f

    if-eqz p2, :cond_2

    move v5, v4

    goto :goto_2

    :cond_2
    move v5, v3

    :goto_2
    invoke-static {v2, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v5

    if-eqz p2, :cond_3

    move v3, v4

    :cond_3
    invoke-static {v5, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v1, v2, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0x11

    .line 65
    iput v2, v1, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    .line 66
    iget-object v3, p0, Lcom/tkay/expressad/shake/MBShakeView;->b:Landroid/widget/ImageView;

    invoke-virtual {v3, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 67
    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v3

    const-string v5, "tkay_splash_btn_shake"

    const-string v6, "drawable"

    invoke-virtual {v1, v5, v6, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 68
    iget-object v3, p0, Lcom/tkay/expressad/shake/MBShakeView;->b:Landroid/widget/ImageView;

    invoke-virtual {v3, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 70
    new-instance v1, Landroid/widget/FrameLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v1, v3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    .line 71
    new-instance v3, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v5, -0x2

    invoke-direct {v3, v5, v5}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 72
    invoke-virtual {v1, v3}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 73
    invoke-virtual {v1, v0}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 74
    iget-object v0, p0, Lcom/tkay/expressad/shake/MBShakeView;->b:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 76
    new-instance v0, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v0, v3}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 77
    new-instance v3, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v3, v5, v5}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 78
    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v6

    const/high16 v7, 0x41200000    # 10.0f

    invoke-static {v6, v7}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v6

    iput v6, v3, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 79
    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 80
    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setGravity(I)V

    .line 82
    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v3

    iget-object v3, v3, Landroid/content/res/Configuration;->locale:Ljava/util/Locale;

    .line 83
    invoke-virtual {v3}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    .line 84
    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v6

    const-string v7, "string"

    const-string v8, "tkay_cm_shake_view_hint_text"

    invoke-static {v6, v8, v7}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v3, v6}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/high16 v3, 0x41800000    # 16.0f

    if-eqz p2, :cond_4

    move v4, v3

    .line 85
    :cond_4
    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setTextSize(F)V

    const/4 v4, -0x1

    .line 86
    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setTextColor(I)V

    const/high16 v6, -0x1000000

    const/high16 v8, 0x41000000    # 8.0f

    const/high16 v9, 0x40400000    # 3.0f

    .line 87
    invoke-virtual {v0, v8, v9, v9, v6}, Landroid/widget/TextView;->setShadowLayer(FFFI)V

    .line 2107
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-eqz v10, :cond_5

    .line 2112
    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v10

    const-string v11, "tkay_cm_shake_view_view_other_app"

    invoke-static {v10, v11, v7}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {p1, v7}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object p1

    .line 91
    :cond_5
    new-instance v7, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-direct {v7, v10}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 92
    new-instance v10, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v10, v5, v5}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 93
    invoke-virtual {p0}, Lcom/tkay/expressad/shake/MBShakeView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v11, 0x40a00000    # 5.0f

    invoke-static {v5, v11}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    iput v5, v10, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 94
    invoke-virtual {v7, v10}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 95
    invoke-virtual {v7, v2}, Landroid/widget/TextView;->setGravity(I)V

    .line 96
    invoke-virtual {v7, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    if-eqz p2, :cond_6

    const/high16 v3, 0x41400000    # 12.0f

    .line 97
    :cond_6
    invoke-virtual {v7, v3}, Landroid/widget/TextView;->setTextSize(F)V

    .line 98
    invoke-virtual {v7, v4}, Landroid/widget/TextView;->setTextColor(I)V

    .line 99
    invoke-virtual {v7, v8, v9, v9, v6}, Landroid/widget/TextView;->setShadowLayer(FFFI)V

    .line 101
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/shake/MBShakeView;->addView(Landroid/view/View;)V

    .line 102
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/shake/MBShakeView;->addView(Landroid/view/View;)V

    .line 103
    invoke-virtual {p0, v7}, Lcom/tkay/expressad/shake/MBShakeView;->addView(Landroid/view/View;)V

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 8

    .line 128
    invoke-super {p0}, Landroid/widget/LinearLayout;->onAttachedToWindow()V

    .line 2133
    new-instance v7, Landroid/view/animation/RotateAnimation;

    const/high16 v1, -0x3ee00000    # -10.0f

    const/high16 v2, 0x41200000    # 10.0f

    const/4 v3, 0x1

    const/high16 v4, 0x3f000000    # 0.5f

    const/4 v5, 0x1

    const/high16 v6, 0x3f000000    # 0.5f

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Landroid/view/animation/RotateAnimation;-><init>(FFIFIF)V

    iput-object v7, p0, Lcom/tkay/expressad/shake/MBShakeView;->c:Landroid/view/animation/Animation;

    const-wide/16 v0, 0x64

    .line 2134
    invoke-virtual {v7, v0, v1}, Landroid/view/animation/Animation;->setDuration(J)V

    .line 2135
    iget-object v0, p0, Lcom/tkay/expressad/shake/MBShakeView;->c:Landroid/view/animation/Animation;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatMode(I)V

    .line 2136
    iget-object v0, p0, Lcom/tkay/expressad/shake/MBShakeView;->c:Landroid/view/animation/Animation;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/view/animation/Animation;->setRepeatCount(I)V

    .line 2137
    iget-object v0, p0, Lcom/tkay/expressad/shake/MBShakeView;->b:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/tkay/expressad/shake/MBShakeView;->c:Landroid/view/animation/Animation;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method
