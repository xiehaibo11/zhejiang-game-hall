.class public abstract Lcom/kwad/components/core/video/VideoAdapters$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/video/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/video/VideoAdapters;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "a"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static b(Landroid/view/View;Landroid/view/View;II)Z
    .locals 1

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    if-eqz p2, :cond_4

    if-nez p3, :cond_1

    goto :goto_0

    :cond_1
    if-nez p1, :cond_2

    return v0

    :cond_2
    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result p0

    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result p1

    if-eqz p0, :cond_4

    if-nez p1, :cond_3

    goto :goto_0

    :cond_3
    const/4 p0, 0x1

    return p0

    :cond_4
    :goto_0
    return v0
.end method


# virtual methods
.method public final a(Landroid/view/View;Landroid/view/View;II)V
    .locals 4

    invoke-static {p1, p2, p3, p4}, Lcom/kwad/components/core/video/VideoAdapters$a;->b(Landroid/view/View;Landroid/view/View;II)Z

    move-result v0

    if-nez v0, :cond_0

    const-string p1, "AbstractVideoViewAdapter"

    const-string p2, "adaptVideo checkArguments invalid"

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-virtual {p2}, Landroid/view/View;->getHeight()I

    move-result v0

    int-to-float v0, v0

    invoke-virtual {p2}, Landroid/view/View;->getWidth()I

    move-result p2

    int-to-float p2, p2

    new-instance v1, Lcom/kwad/components/core/video/VideoAdapters$d;

    invoke-direct {v1, p2, v0}, Lcom/kwad/components/core/video/VideoAdapters$d;-><init>(FF)V

    new-instance p2, Lcom/kwad/components/core/video/VideoAdapters$d;

    int-to-float p3, p3

    int-to-float p4, p4

    invoke-direct {p2, p3, p4}, Lcom/kwad/components/core/video/VideoAdapters$d;-><init>(FF)V

    invoke-virtual {p2}, Lcom/kwad/components/core/video/VideoAdapters$d;->getRatio()F

    move-result p3

    const/high16 p4, 0x3f800000    # 1.0f

    cmpl-float p3, p3, p4

    const/4 v0, 0x1

    const/4 v2, 0x0

    if-ltz p3, :cond_1

    move p3, v0

    goto :goto_0

    :cond_1
    move p3, v2

    :goto_0
    invoke-virtual {v1}, Lcom/kwad/components/core/video/VideoAdapters$d;->getRatio()F

    move-result v3

    cmpl-float p4, v3, p4

    if-ltz p4, :cond_2

    goto :goto_1

    :cond_2
    move v0, v2

    :goto_1
    if-eqz v0, :cond_3

    if-eqz p3, :cond_3

    sget-object p3, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->PORTRAIT_VERTICAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    goto :goto_2

    :cond_3
    if-eqz v0, :cond_4

    sget-object p3, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->PORTRAIT_HORIZONTAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    goto :goto_2

    :cond_4
    if-eqz p3, :cond_5

    sget-object p3, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->LANDSCAPE_VERTICAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    goto :goto_2

    :cond_5
    sget-object p3, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->LANDSCAPE_HORIZONTAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    :goto_2
    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p4

    invoke-virtual {p0, p3, p4, v1, p2}, Lcom/kwad/components/core/video/VideoAdapters$a;->a(Lcom/kwad/components/core/video/VideoAdapters$AdaptType;Landroid/view/ViewGroup$LayoutParams;Lcom/kwad/components/core/video/VideoAdapters$d;Lcom/kwad/components/core/video/VideoAdapters$d;)V

    invoke-virtual {p1, p4}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method protected abstract a(Lcom/kwad/components/core/video/VideoAdapters$AdaptType;Landroid/view/ViewGroup$LayoutParams;Lcom/kwad/components/core/video/VideoAdapters$d;Lcom/kwad/components/core/video/VideoAdapters$d;)V
.end method
