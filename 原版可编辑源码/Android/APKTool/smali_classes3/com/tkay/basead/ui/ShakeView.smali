.class public Lcom/tkay/basead/ui/ShakeView;
.super Lcom/tkay/basead/ui/BaseShakeView;


# instance fields
.field private c:Landroid/widget/ImageView;

.field private d:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 27
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseShakeView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 31
    invoke-direct {p0, p1, p2}, Lcom/tkay/basead/ui/BaseShakeView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 35
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/basead/ui/BaseShakeView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    .line 40
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/ui/BaseShakeView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    return-void
.end method

.method private a(Landroid/view/View;)V
    .locals 3

    .line 78
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x42e60000    # 115.0f

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    const-string v1, "#99000000"

    .line 79
    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    .line 80
    new-instance v2, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v2}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 81
    invoke-virtual {v2, v1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    int-to-float v0, v0

    .line 82
    invoke-virtual {v2, v0}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 83
    invoke-virtual {p1, v2}, Landroid/view/View;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    return-void
.end method


# virtual methods
.method final a()V
    .locals 6

    const/4 v0, 0x1

    .line 45
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ShakeView;->setOrientation(I)V

    .line 46
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ShakeView;->setGravity(I)V

    .line 48
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/ShakeView;->c:Landroid/widget/ImageView;

    .line 49
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42e60000    # 115.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v0, v1, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 50
    iget-object v1, p0, Lcom/tkay/basead/ui/ShakeView;->c:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 51
    iget-object v0, p0, Lcom/tkay/basead/ui/ShakeView;->c:Landroid/widget/ImageView;

    .line 1078
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    const-string v2, "#99000000"

    .line 1079
    invoke-static {v2}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v2

    .line 1080
    new-instance v3, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v3}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 1081
    invoke-virtual {v3, v2}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    int-to-float v1, v1

    .line 1082
    invoke-virtual {v3, v1}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 1083
    invoke-virtual {v0, v3}, Landroid/view/View;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 53
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/ShakeView;->a:Landroid/widget/ImageView;

    .line 54
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42980000    # 76.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0x11

    .line 55
    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    .line 56
    iget-object v1, p0, Lcom/tkay/basead/ui/ShakeView;->a:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 57
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_shake_icon"

    const-string v2, "drawable"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 58
    iget-object v1, p0, Lcom/tkay/basead/ui/ShakeView;->a:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 60
    new-instance v0, Landroid/widget/FrameLayout;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    .line 61
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v1, v2, v2}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 62
    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 63
    iget-object v2, p0, Lcom/tkay/basead/ui/ShakeView;->c:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 64
    iget-object v2, p0, Lcom/tkay/basead/ui/ShakeView;->a:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 67
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v2

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeView;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "myoffer_splash_shake_hint_text"

    const-string v5, "layout"

    invoke-static {v3, v4, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    const/4 v4, 0x0

    invoke-virtual {v2, v3, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/basead/ui/ShakeView;->d:Landroid/view/View;

    .line 68
    invoke-virtual {v2, v1}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 69
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-string v2, "tv_splash_shake_hint_text"

    const-string v3, "id"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 70
    iget-object v2, p0, Lcom/tkay/basead/ui/ShakeView;->d:Landroid/view/View;

    invoke-virtual {v2, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    .line 71
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const-string v3, "myoffer_shake_full_title"

    const-string v4, "string"

    invoke-static {v2, v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(I)V

    .line 73
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ShakeView;->addView(Landroid/view/View;)V

    .line 74
    iget-object v0, p0, Lcom/tkay/basead/ui/ShakeView;->d:Landroid/view/View;

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ShakeView;->addView(Landroid/view/View;)V

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 0

    .line 88
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseShakeView;->onAttachedToWindow()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 93
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseShakeView;->onDetachedFromWindow()V

    return-void
.end method

.method public setOnClickListener(Landroid/view/View$OnClickListener;)V
    .locals 1

    .line 99
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/ui/ShakeView;->a:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 100
    iget-object v0, p0, Lcom/tkay/basead/ui/ShakeView;->c:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 101
    iget-object v0, p0, Lcom/tkay/basead/ui/ShakeView;->d:Landroid/view/View;

    invoke-virtual {v0, p1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
