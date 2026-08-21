.class public final Lcom/kwad/sdk/utils/bm;
.super Ljava/lang/Object;


# direct methods
.method public static a(Landroid/view/View;IZ)Z
    .locals 1

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/utils/bm;->b(Landroid/view/View;IZ)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/utils/bm;->cr(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    return v0
.end method

.method private static b(Landroid/view/View;IZ)Z
    .locals 7

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-nez v1, :cond_1

    return v0

    :cond_1
    invoke-virtual {p0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/m/l;->dr(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object v1

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Landroid/app/Activity;->isFinishing()Z

    move-result v1

    if-eqz v1, :cond_2

    return v0

    :cond_2
    invoke-virtual {p0}, Landroid/view/View;->isShown()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-virtual {p0}, Landroid/view/View;->getVisibility()I

    move-result v1

    if-eqz v1, :cond_3

    goto :goto_0

    :cond_3
    if-eqz p2, :cond_4

    invoke-virtual {p0}, Landroid/view/View;->hasWindowFocus()Z

    move-result p2

    if-nez p2, :cond_4

    return v0

    :cond_4
    new-instance p2, Landroid/graphics/Rect;

    invoke-direct {p2}, Landroid/graphics/Rect;-><init>()V

    invoke-virtual {p0, p2}, Landroid/view/View;->getGlobalVisibleRect(Landroid/graphics/Rect;)Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-virtual {p2}, Landroid/graphics/Rect;->height()I

    move-result v1

    int-to-long v1, v1

    invoke-virtual {p2}, Landroid/graphics/Rect;->width()I

    move-result p2

    int-to-long v3, p2

    mul-long/2addr v1, v3

    invoke-virtual {p0}, Landroid/view/View;->getHeight()I

    move-result p2

    int-to-long v3, p2

    invoke-virtual {p0}, Landroid/view/View;->getWidth()I

    move-result p0

    int-to-long v5, p0

    mul-long/2addr v3, v5

    const-wide/16 v5, 0x0

    cmp-long p0, v3, v5

    if-lez p0, :cond_5

    const-wide/16 v5, 0x64

    mul-long/2addr v1, v5

    int-to-long p0, p1

    mul-long/2addr p0, v3

    cmp-long p0, v1, p0

    if-ltz p0, :cond_5

    const/4 p0, 0x1

    return p0

    :cond_5
    :goto_0
    return v0
.end method

.method private static cr(Landroid/content/Context;)Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/utils/an;->IP()Lcom/kwad/sdk/utils/an;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/utils/an;->cr(Landroid/content/Context;)Z

    move-result p0

    return p0
.end method

.method public static o(Landroid/view/View;I)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x1

    invoke-static {p0, p1, v1}, Lcom/kwad/sdk/utils/bm;->b(Landroid/view/View;IZ)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Landroid/view/View;->hasWindowFocus()Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/utils/bm;->cr(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_1

    return v1

    :cond_1
    return v0
.end method
