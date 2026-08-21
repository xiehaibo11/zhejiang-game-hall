.class public final Lcom/mbridge/msdk/widget/custom/b/a;
.super Ljava/lang/Object;
.source "DensityUtil.java"


# direct methods
.method public static a(Landroid/content/Context;F)I
    .locals 0

    .line 12
    invoke-static {p0}, Lcom/mbridge/msdk/widget/custom/b/a;->a(Landroid/content/Context;)Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F

    mul-float/2addr p1, p0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0
.end method

.method public static a(Landroid/content/Context;I)I
    .locals 1

    int-to-float p1, p1

    .line 34
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    const/4 v0, 0x1

    .line 32
    invoke-static {v0, p1, p0}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result p0

    float-to-int p0, p0

    return p0
.end method

.method public static a(Landroid/content/Context;)Landroid/util/DisplayMetrics;
    .locals 1

    const-string v0, "window"

    .line 22
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/WindowManager;

    .line 23
    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    .line 25
    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    .line 26
    invoke-virtual {p0, v0}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    return-object v0
.end method

.method public static b(Landroid/content/Context;F)I
    .locals 0

    .line 17
    invoke-static {p0}, Lcom/mbridge/msdk/widget/custom/b/a;->a(Landroid/content/Context;)Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F

    div-float/2addr p1, p0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0
.end method
