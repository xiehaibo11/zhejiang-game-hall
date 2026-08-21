.class public Lcom/sigmob/sdk/base/views/w;
.super Landroid/widget/RelativeLayout;


# instance fields
.field a:I

.field b:Z

.field private final c:Landroid/widget/TextView;

.field private final d:Landroid/widget/TextView;

.field private e:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 4

    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/base/views/w;->a:I

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/views/w;->b:Z

    const/high16 v0, 0x41f00000    # 30.0f

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/base/views/w;->a:I

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    iget v1, p0, Lcom/sigmob/sdk/base/views/w;->a:I

    const/4 v2, -0x2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    new-instance v1, Landroid/widget/TextView;

    invoke-direct {v1, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/w;->c:Landroid/widget/TextView;

    new-instance v1, Landroid/widget/TextView;

    invoke-direct {v1, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/w;->d:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/views/w;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    iget v0, p0, Lcom/sigmob/sdk/base/views/w;->a:I

    invoke-direct {p1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v0, 0x9

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x11

    if-lt v0, v1, :cond_0

    const/16 v0, 0x14

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/w;->d:Landroid/widget/TextView;

    const/high16 v2, -0x1000000

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextColor(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/w;->d:Landroid/widget/TextView;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setId(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/w;->d:Landroid/widget/TextView;

    const/4 v2, 0x1

    const/high16 v3, 0x41600000    # 14.0f

    invoke-virtual {v0, v2, v3}, Landroid/widget/TextView;->setTextSize(IF)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/w;->d:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setGravity(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/w;->d:Landroid/widget/TextView;

    invoke-virtual {p0, v0, p1}, Lcom/sigmob/sdk/base/views/w;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget p1, p0, Lcom/sigmob/sdk/base/views/w;->a:I

    div-int/lit8 p1, p1, 0x2

    const-string v0, "#ffffff"

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    new-instance v1, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v1}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    invoke-virtual {v1, v0}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    int-to-float p1, p1

    invoke-virtual {v1, p1}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    const/16 p1, 0x66

    invoke-virtual {v1, p1}, Landroid/graphics/drawable/GradientDrawable;->setAlpha(I)V

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/base/views/w;->setBackground(Landroid/graphics/drawable/Drawable;)V

    const-string p1, "skip"

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/w;->setContentDescription(Ljava/lang/CharSequence;)V

    return-void
.end method


# virtual methods
.method public a(I)V
    .locals 3

    iput p1, p0, Lcom/sigmob/sdk/base/views/w;->e:I

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/views/w;->b:Z

    if-eqz v0, :cond_0

    if-lez p1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/w;->c:Landroid/widget/TextView;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v2, 0x0

    aput-object p1, v1, v2

    invoke-static {v1}, Lcom/sigmob/sdk/base/d;->d([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/w;->c:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getVisibility()I

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/w;->c:Landroid/widget/TextView;

    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setVisibility(I)V

    goto :goto_0

    :cond_0
    if-lez p1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/w;->d:Landroid/widget/TextView;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/views/w;->b:Z

    return v0
.end method

.method public b()V
    .locals 7

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/views/w;->b:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/views/w;->b:Z

    if-eqz v0, :cond_1

    const-string v1, "show skip widget"

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :cond_1
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    iget v3, p0, Lcom/sigmob/sdk/base/views/w;->a:I

    invoke-direct {v1, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/w;->c:Landroid/widget/TextView;

    const/high16 v3, -0x1000000

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setTextColor(I)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/w;->c:Landroid/widget/TextView;

    const/high16 v3, 0x41600000    # 14.0f

    invoke-virtual {v2, v0, v3}, Landroid/widget/TextView;->setTextSize(IF)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/w;->c:Landroid/widget/TextView;

    const/16 v3, 0x11

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setGravity(I)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/w;->c:Landroid/widget/TextView;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/w;->d:Landroid/widget/TextView;

    const/16 v4, 0x8

    invoke-virtual {v2, v4}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/w;->c:Landroid/widget/TextView;

    iget v4, p0, Lcom/sigmob/sdk/base/views/w;->a:I

    int-to-float v5, v4

    const/high16 v6, 0x40400000    # 3.0f

    div-float/2addr v5, v6

    float-to-int v5, v5

    int-to-float v4, v4

    div-float/2addr v4, v6

    float-to-int v4, v4

    invoke-virtual {v2, v5, v3, v4, v3}, Landroid/widget/TextView;->setPadding(IIII)V

    iget v2, p0, Lcom/sigmob/sdk/base/views/w;->e:I

    if-lez v2, :cond_2

    iget-object v4, p0, Lcom/sigmob/sdk/base/views/w;->c:Landroid/widget/TextView;

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v0, v3

    invoke-static {v0}, Lcom/sigmob/sdk/base/d;->d([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/w;->c:Landroid/widget/TextView;

    invoke-static {}, Lcom/sigmob/sdk/base/d;->h()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/w;->c:Landroid/widget/TextView;

    invoke-virtual {p0, v0, v1}, Lcom/sigmob/sdk/base/views/w;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public getTime()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/views/w;->e:I

    return v0
.end method
