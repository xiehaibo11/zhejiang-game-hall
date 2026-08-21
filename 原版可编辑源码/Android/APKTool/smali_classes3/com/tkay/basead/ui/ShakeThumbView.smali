.class public Lcom/tkay/basead/ui/ShakeThumbView;
.super Lcom/tkay/basead/ui/BaseShakeView;


# instance fields
.field private c:Landroid/widget/ImageView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 25
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseShakeView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 29
    invoke-direct {p0, p1, p2}, Lcom/tkay/basead/ui/BaseShakeView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 33
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/basead/ui/BaseShakeView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    .line 38
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/ui/BaseShakeView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    return-void
.end method

.method private a(Landroid/view/View;)V
    .locals 3

    .line 79
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeThumbView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x42b00000    # 88.0f

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    const-string v1, "#99000000"

    .line 80
    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    .line 81
    new-instance v2, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v2}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 82
    invoke-virtual {v2, v1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    int-to-float v0, v0

    .line 83
    invoke-virtual {v2, v0}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 84
    invoke-virtual {p1, v2}, Landroid/view/View;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    return-void
.end method


# virtual methods
.method final a()V
    .locals 6

    const/4 v0, 0x1

    .line 43
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ShakeThumbView;->setOrientation(I)V

    .line 44
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ShakeThumbView;->setGravity(I)V

    .line 46
    new-instance v1, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeThumbView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/basead/ui/ShakeThumbView;->c:Landroid/widget/ImageView;

    .line 47
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeThumbView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42b40000    # 90.0f

    invoke-static {v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeThumbView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v1, v2, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 48
    iget-object v2, p0, Lcom/tkay/basead/ui/ShakeThumbView;->c:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 49
    iget-object v1, p0, Lcom/tkay/basead/ui/ShakeThumbView;->c:Landroid/widget/ImageView;

    .line 1079
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeThumbView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42b00000    # 88.0f

    invoke-static {v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    const-string v3, "#99000000"

    .line 1080
    invoke-static {v3}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v3

    .line 1081
    new-instance v4, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v4}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 1082
    invoke-virtual {v4, v3}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    int-to-float v2, v2

    .line 1083
    invoke-virtual {v4, v2}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 1084
    invoke-virtual {v1, v4}, Landroid/view/View;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 51
    new-instance v1, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeThumbView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/basead/ui/ShakeThumbView;->a:Landroid/widget/ImageView;

    .line 52
    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeThumbView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42200000    # 40.0f

    invoke-static {v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeThumbView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v1, v2, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0x31

    .line 53
    iput v2, v1, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    .line 54
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeThumbView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41400000    # 12.0f

    invoke-static {v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    .line 55
    iget-object v2, p0, Lcom/tkay/basead/ui/ShakeThumbView;->a:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 56
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_shake_icon"

    const-string v3, "drawable"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 57
    iget-object v2, p0, Lcom/tkay/basead/ui/ShakeThumbView;->a:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 59
    new-instance v1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeThumbView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 60
    new-instance v2, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v3, -0x2

    invoke-direct {v2, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const/16 v4, 0x51

    .line 61
    iput v4, v2, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    .line 62
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeThumbView;->getContext()Landroid/content/Context;

    move-result-object v4

    const/high16 v5, 0x41500000    # 13.0f

    invoke-static {v4, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v4

    iput v4, v2, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    .line 63
    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 64
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const-string v4, "myoffer_shake_simple_title"

    const-string v5, "string"

    invoke-static {v2, v4, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(I)V

    const/high16 v2, 0x41300000    # 11.0f

    .line 65
    invoke-virtual {v1, v0, v2}, Landroid/widget/TextView;->setTextSize(IF)V

    const/4 v0, -0x1

    .line 66
    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setTextColor(I)V

    .line 68
    new-instance v0, Landroid/widget/FrameLayout;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeThumbView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    .line 69
    new-instance v2, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v2, v3, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 70
    invoke-virtual {v0, v2}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 71
    iget-object v2, p0, Lcom/tkay/basead/ui/ShakeThumbView;->c:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 72
    iget-object v2, p0, Lcom/tkay/basead/ui/ShakeThumbView;->a:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 73
    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 75
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ShakeThumbView;->addView(Landroid/view/View;)V

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 0

    .line 89
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseShakeView;->onAttachedToWindow()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 94
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseShakeView;->onDetachedFromWindow()V

    return-void
.end method

.method public setOnClickListener(Landroid/view/View$OnClickListener;)V
    .locals 1

    .line 100
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/ui/ShakeThumbView;->a:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 101
    iget-object v0, p0, Lcom/tkay/basead/ui/ShakeThumbView;->c:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
