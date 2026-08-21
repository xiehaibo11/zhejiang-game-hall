.class public Lcom/tkay/expressad/video/module/TkayClickMiniCardView;
.super Lcom/tkay/expressad/video/module/TkayH5EndCardView;


# static fields
.field private static final A:F = 0.7f


# instance fields
.field private B:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 35
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 31
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->B:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 39
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 31
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->B:Z

    return-void
.end method

.method private a(Landroid/view/View;)V
    .locals 4

    .line 129
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v0

    .line 130
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v1

    int-to-float v0, v0

    const v2, 0x3f333333    # 0.7f

    mul-float/2addr v0, v2

    const/high16 v3, 0x3f000000    # 0.5f

    add-float/2addr v0, v3

    float-to-int v0, v0

    int-to-float v1, v1

    mul-float/2addr v1, v2

    add-float/2addr v1, v3

    float-to-int v1, v1

    .line 133
    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    .line 134
    iput v0, v2, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 135
    iput v1, v2, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 136
    invoke-virtual {p1, v2}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method


# virtual methods
.method protected final a()Ljava/lang/String;
    .locals 3

    .line 74
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 75
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 77
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->d()Ljava/lang/String;

    move-result-object v1

    .line 79
    :cond_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, ".zip"

    invoke-virtual {v1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 80
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 81
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    move-object v1, v0

    :cond_1
    return-object v1
.end method

.method protected final b()Landroid/widget/RelativeLayout$LayoutParams;
    .locals 3

    .line 53
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xd

    const/4 v2, -0x1

    .line 54
    invoke-virtual {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    return-object v0
.end method

.method protected final e()V
    .locals 1

    .line 61
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e()V

    .line 62
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->f:Z

    if-eqz v0, :cond_0

    const-string v0, "tkay_reward_minicard_bg"

    .line 64
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->findColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setBackgroundResource(I)V

    .line 66
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->p:Landroid/view/View;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->a(Landroid/view/View;)V

    const/4 v0, 0x1

    .line 67
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setClickable(Z)V

    :cond_0
    return-void
.end method

.method public onSelfConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    .line 45
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->f:Z

    if-eqz v0, :cond_0

    .line 46
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->p:Landroid/view/View;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->a(Landroid/view/View;)V

    .line 48
    :cond_0
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 0

    .line 91
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    const/4 p1, 0x0

    .line 92
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setCloseVisible(I)V

    return-void
.end method

.method public resizeMiniCard(II)V
    .locals 2

    .line 154
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xb

    if-ge v0, v1, :cond_0

    return-void

    .line 157
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->a:Landroid/content/Context;

    check-cast v0, Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    const v1, 0x1020002

    invoke-virtual {v0, v1}, Landroid/view/Window;->findViewById(I)Landroid/view/View;

    move-result-object v0

    .line 158
    invoke-virtual {v0}, Landroid/view/View;->getWidth()I

    move-result v1

    .line 159
    invoke-virtual {v0}, Landroid/view/View;->getHeight()I

    move-result v0

    if-lez p1, :cond_1

    if-lez p2, :cond_1

    if-gt p1, v1, :cond_1

    if-gt p2, v0, :cond_1

    .line 161
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->p:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 162
    iput p1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 163
    iput p2, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 164
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->p:Landroid/view/View;

    invoke-virtual {p1, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    return-void
.end method

.method public setMiniCardLocation(IIII)V
    .locals 0

    const/4 p1, 0x1

    .line 149
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->B:Z

    .line 150
    invoke-virtual {p0, p3, p4}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->resizeMiniCard(II)V

    return-void
.end method

.method public setRadius(I)V
    .locals 2

    if-lez p1, :cond_1

    .line 170
    new-instance v0, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v0}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 171
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    int-to-float p1, p1

    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    int-to-float p1, p1

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    const/4 p1, -0x1

    .line 172
    invoke-virtual {v0, p1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 173
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt p1, v1, :cond_0

    .line 174
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setBackground(Landroid/graphics/drawable/Drawable;)V

    goto :goto_0

    .line 176
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 178
    :goto_0
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x15

    if-lt p1, v0, :cond_1

    .line 179
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setClipToOutline(Z)V

    :cond_1
    return-void
.end method

.method public setTkayClickMiniCardViewClickable(Z)V
    .locals 0

    .line 144
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setClickable(Z)V

    return-void
.end method

.method public setTkayClickMiniCardViewTransparent()V
    .locals 1

    const/4 v0, 0x0

    .line 140
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setBackgroundColor(I)V

    return-void
.end method

.method public webviewshow()V
    .locals 2

    .line 98
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayClickMiniCardView$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView$1;-><init>(Lcom/tkay/expressad/video/module/TkayClickMiniCardView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
