.class public Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;
.super Landroid/widget/RelativeLayout;


# instance fields
.field private a:Lcom/tkay/expressad/advanced/d/c;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 25
    invoke-direct {p0, p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 29
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;)Lcom/tkay/expressad/advanced/d/c;
    .locals 0

    .line 11
    iget-object p0, p0, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->a:Lcom/tkay/expressad/advanced/d/c;

    return-object p0
.end method

.method private a(I)V
    .locals 3

    .line 71
    new-instance v0, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup$1;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup$1;-><init>(Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;I)V

    const-wide/16 v1, 0xc8

    invoke-virtual {p0, v0, v1, v2}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method


# virtual methods
.method protected onAttachedToWindow()V
    .locals 1

    .line 35
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    .line 36
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->a:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 37
    invoke-direct {p0, v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->a(I)V

    .line 38
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x2

    .line 39
    invoke-direct {p0, v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->a(I)V

    :cond_0
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 2

    .line 47
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onDetachedFromWindow()V

    .line 48
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->a:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 49
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/d/c;->e(I)V

    :cond_0
    return-void
.end method

.method protected onVisibilityChanged(Landroid/view/View;I)V
    .locals 0

    .line 55
    invoke-super {p0, p1, p2}, Landroid/widget/RelativeLayout;->onVisibilityChanged(Landroid/view/View;I)V

    const/4 p1, 0x2

    if-nez p2, :cond_0

    .line 57
    invoke-direct {p0, p1}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->a(I)V

    .line 58
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    .line 59
    invoke-direct {p0, p1}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->a(I)V

    return-void

    .line 62
    :cond_0
    iget-object p2, p0, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->a:Lcom/tkay/expressad/advanced/d/c;

    if-eqz p2, :cond_1

    .line 63
    invoke-virtual {p2, p1}, Lcom/tkay/expressad/advanced/d/c;->e(I)V

    :cond_1
    return-void
.end method

.method public setProvider(Lcom/tkay/expressad/advanced/d/c;)V
    .locals 0

    .line 17
    iput-object p1, p0, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->a:Lcom/tkay/expressad/advanced/d/c;

    return-void
.end method
