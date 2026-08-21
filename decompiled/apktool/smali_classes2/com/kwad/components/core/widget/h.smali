.class public final Lcom/kwad/components/core/widget/h;
.super Landroid/view/ViewOutlineProvider;


# instance fields
.field private Zd:F


# direct methods
.method private constructor <init>(F)V
    .locals 0

    invoke-direct {p0}, Landroid/view/ViewOutlineProvider;-><init>()V

    iput p1, p0, Lcom/kwad/components/core/widget/h;->Zd:F

    return-void
.end method

.method public static b(Landroid/view/View;F)V
    .locals 1

    const/4 v0, 0x0

    cmpg-float v0, p1, v0

    if-gtz v0, :cond_0

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Landroid/view/View;->setOutlineProvider(Landroid/view/ViewOutlineProvider;)V

    const/4 p1, 0x0

    :goto_0
    invoke-virtual {p0, p1}, Landroid/view/View;->setClipToOutline(Z)V

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/components/core/widget/h;

    invoke-direct {v0, p1}, Lcom/kwad/components/core/widget/h;-><init>(F)V

    invoke-virtual {p0, v0}, Landroid/view/View;->setOutlineProvider(Landroid/view/ViewOutlineProvider;)V

    const/4 p1, 0x1

    goto :goto_0
.end method


# virtual methods
.method public final getOutline(Landroid/view/View;Landroid/graphics/Outline;)V
    .locals 6

    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result v3

    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result v4

    iget v5, p0, Lcom/kwad/components/core/widget/h;->Zd:F

    const/4 v1, 0x0

    const/4 v2, 0x0

    move-object v0, p2

    invoke-virtual/range {v0 .. v5}, Landroid/graphics/Outline;->setRoundRect(IIIIF)V

    return-void
.end method
