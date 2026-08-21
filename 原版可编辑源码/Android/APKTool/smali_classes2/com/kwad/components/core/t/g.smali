.class public final Lcom/kwad/components/core/t/g;
.super Ljava/lang/Object;


# direct methods
.method public static a(Lcom/kwad/components/core/widget/e;Landroid/view/ViewGroup;)V
    .locals 4

    if-eqz p0, :cond_3

    if-nez p1, :cond_0

    goto :goto_2

    :cond_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_3

    invoke-virtual {p1, v1}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    instance-of v3, v2, Lcom/kwad/components/core/widget/d;

    if-eqz v3, :cond_1

    check-cast v2, Lcom/kwad/components/core/widget/d;

    invoke-interface {v2, p0}, Lcom/kwad/components/core/widget/d;->a(Lcom/kwad/components/core/widget/e;)V

    goto :goto_1

    :cond_1
    instance-of v3, v2, Landroid/view/ViewGroup;

    if-eqz v3, :cond_2

    check-cast v2, Landroid/view/ViewGroup;

    invoke-static {p0, v2}, Lcom/kwad/components/core/t/g;->a(Lcom/kwad/components/core/widget/e;Landroid/view/ViewGroup;)V

    :cond_2
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_3
    :goto_2
    return-void
.end method

.method public static b(Lcom/kwad/components/core/widget/e;Landroid/graphics/drawable/Drawable;)V
    .locals 1

    instance-of v0, p1, Landroid/graphics/drawable/ShapeDrawable;

    if-eqz v0, :cond_0

    check-cast p1, Landroid/graphics/drawable/ShapeDrawable;

    invoke-virtual {p1}, Landroid/graphics/drawable/ShapeDrawable;->getPaint()Landroid/graphics/Paint;

    move-result-object p1

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/e;->sv()I

    move-result p0

    invoke-virtual {p1, p0}, Landroid/graphics/Paint;->setColor(I)V

    return-void

    :cond_0
    instance-of v0, p1, Landroid/graphics/drawable/ColorDrawable;

    if-eqz v0, :cond_1

    check-cast p1, Landroid/graphics/drawable/ColorDrawable;

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/e;->sv()I

    move-result p0

    invoke-virtual {p1, p0}, Landroid/graphics/drawable/ColorDrawable;->setColor(I)V

    return-void

    :cond_1
    instance-of v0, p1, Landroid/graphics/drawable/GradientDrawable;

    if-eqz v0, :cond_2

    check-cast p1, Landroid/graphics/drawable/GradientDrawable;

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/e;->sv()I

    move-result p0

    invoke-virtual {p1, p0}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    :cond_2
    return-void
.end method
