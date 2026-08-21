.class public Lcom/czhj/sdk/common/utils/ViewUtil;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Landroid/content/Context;)Landroid/view/View;
    .locals 1

    instance-of v0, p0, Landroid/app/Activity;

    if-nez v0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    check-cast p0, Landroid/app/Activity;

    invoke-virtual {p0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p0

    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p0

    const v0, 0x1020002

    invoke-virtual {p0, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p0

    return-object p0
.end method

.method public static getActivityFromView(Landroid/view/View;)Landroid/app/Activity;
    .locals 1

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p0

    :goto_0
    instance-of v0, p0, Landroid/content/ContextWrapper;

    if-eqz v0, :cond_1

    instance-of v0, p0, Landroid/app/Activity;

    if-eqz v0, :cond_0

    check-cast p0, Landroid/app/Activity;

    return-object p0

    :cond_0
    check-cast p0, Landroid/content/ContextWrapper;

    invoke-virtual {p0}, Landroid/content/ContextWrapper;->getBaseContext()Landroid/content/Context;

    move-result-object p0

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getActivityFromViewTop(Landroid/view/View;)Landroid/app/Activity;
    .locals 0

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/ViewUtil;->getRootViewFromView(Landroid/view/View;)Landroid/view/View;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/ViewUtil;->getActivityFromView(Landroid/view/View;)Landroid/app/Activity;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getRootViewFromView(Landroid/view/View;)Landroid/view/View;
    .locals 1

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Landroid/view/View;->getRootView()Landroid/view/View;

    move-result-object p0

    if-nez p0, :cond_1

    return-object v0

    :cond_1
    const v0, 0x1020002

    invoke-virtual {p0, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_2

    move-object p0, v0

    :cond_2
    return-object p0
.end method

.method public static getTopmostView(Landroid/content/Context;Landroid/view/View;)Landroid/view/View;
    .locals 0

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/ViewUtil;->a(Landroid/content/Context;)Landroid/view/View;

    move-result-object p0

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/ViewUtil;->getRootViewFromView(Landroid/view/View;)Landroid/view/View;

    move-result-object p1

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    move-object p0, p1

    :goto_0
    return-object p0
.end method

.method public static isPointInView(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 6

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v1

    float-to-int v1, v1

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result p1

    float-to-int p1, p1

    const/4 v2, 0x2

    new-array v2, v2, [I

    invoke-virtual {p0, v2}, Landroid/view/View;->getLocationOnScreen([I)V

    aget v3, v2, v0

    const/4 v4, 0x1

    aget v2, v2, v4

    invoke-virtual {p0}, Landroid/view/View;->getMeasuredWidth()I

    move-result v5

    add-int/2addr v5, v3

    invoke-virtual {p0}, Landroid/view/View;->getMeasuredHeight()I

    move-result p0

    add-int/2addr p0, v2

    if-lt p1, v2, :cond_1

    if-gt p1, p0, :cond_1

    if-lt v1, v3, :cond_1

    if-gt v1, v5, :cond_1

    return v4

    :cond_1
    return v0
.end method

.method public static removeFromParent(Landroid/view/View;)V
    .locals 1

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    instance-of v0, v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_1
    :goto_0
    return-void
.end method
