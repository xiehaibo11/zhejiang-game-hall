.class public final Lcom/kwad/sdk/widget/g;
.super Ljava/lang/Object;


# instance fields
.field private final aMk:Lcom/kwad/sdk/widget/i;

.field private aMl:F

.field private aMm:Z

.field private aMn:Z

.field private aMo:Z

.field private aMp:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

.field private final axk:Lcom/kwad/sdk/utils/bl;

.field private final mView:Landroid/view/View;

.field private final mn:I


# direct methods
.method public constructor <init>(Landroid/view/View;Lcom/kwad/sdk/widget/i;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const v0, 0x3dcccccd    # 0.1f

    iput v0, p0, Lcom/kwad/sdk/widget/g;->aMl:F

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/widget/g;->aMo:Z

    iput-object p1, p0, Lcom/kwad/sdk/widget/g;->mView:Landroid/view/View;

    iput-object p2, p0, Lcom/kwad/sdk/widget/g;->aMk:Lcom/kwad/sdk/widget/i;

    new-instance p2, Lcom/kwad/sdk/utils/bl;

    invoke-direct {p2, p1}, Lcom/kwad/sdk/utils/bl;-><init>(Landroid/view/View;)V

    iput-object p2, p0, Lcom/kwad/sdk/widget/g;->axk:Lcom/kwad/sdk/utils/bl;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/k;->getScreenHeight(Landroid/content/Context;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/widget/g;->mn:I

    return-void
.end method

.method private DV()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/widget/g;->aMp:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/widget/g$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/widget/g$1;-><init>(Lcom/kwad/sdk/widget/g;)V

    iput-object v0, p0, Lcom/kwad/sdk/widget/g;->aMp:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    iget-object v0, p0, Lcom/kwad/sdk/widget/g;->mView:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/widget/g;->aMp:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    invoke-virtual {v0, v1}, Landroid/view/ViewTreeObserver;->addOnScrollChangedListener(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V

    :cond_0
    return-void
.end method

.method private DW()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/widget/g;->aMp:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    if-nez v0, :cond_0

    return-void

    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/widget/g;->mView:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/sdk/widget/g;->aMp:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    invoke-virtual {v0, v1}, Landroid/view/ViewTreeObserver;->removeOnScrollChangedListener(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V

    :cond_1
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/widget/g;->aMp:Landroid/view/ViewTreeObserver$OnScrollChangedListener;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method

.method private KG()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/widget/g;->KH()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/sdk/widget/g;->am()V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/sdk/widget/g;->DW()V

    invoke-direct {p0}, Lcom/kwad/sdk/widget/g;->DV()V

    return-void
.end method

.method private KH()Z
    .locals 5

    iget-object v0, p0, Lcom/kwad/sdk/widget/g;->axk:Lcom/kwad/sdk/utils/bl;

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bl;->Ke()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/widget/g;->axk:Lcom/kwad/sdk/utils/bl;

    iget-object v0, v0, Lcom/kwad/sdk/utils/bl;->aKq:Landroid/graphics/Rect;

    invoke-virtual {v0}, Landroid/graphics/Rect;->height()I

    move-result v0

    iget-object v2, p0, Lcom/kwad/sdk/widget/g;->mView:Landroid/view/View;

    invoke-virtual {v2}, Landroid/view/View;->getHeight()I

    move-result v2

    sub-int/2addr v0, v2

    invoke-static {v0}, Ljava/lang/Math;->abs(I)I

    move-result v0

    int-to-float v0, v0

    iget-object v2, p0, Lcom/kwad/sdk/widget/g;->mView:Landroid/view/View;

    invoke-virtual {v2}, Landroid/view/View;->getHeight()I

    move-result v2

    int-to-float v2, v2

    const/high16 v3, 0x3f800000    # 1.0f

    iget v4, p0, Lcom/kwad/sdk/widget/g;->aMl:F

    sub-float/2addr v3, v4

    mul-float/2addr v2, v3

    cmpg-float v0, v0, v2

    if-gtz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/widget/g;->mView:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getHeight()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/widget/g;->mView:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getWidth()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/widget/g;->axk:Lcom/kwad/sdk/utils/bl;

    iget-object v0, v0, Lcom/kwad/sdk/utils/bl;->aKq:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->bottom:I

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/widget/g;->axk:Lcom/kwad/sdk/utils/bl;

    iget-object v0, v0, Lcom/kwad/sdk/utils/bl;->aKq:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->top:I

    iget v2, p0, Lcom/kwad/sdk/widget/g;->mn:I

    if-ge v0, v2, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    return v1
.end method

.method static synthetic a(Lcom/kwad/sdk/widget/g;)Z
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/widget/g;->KH()Z

    move-result p0

    return p0
.end method

.method private am()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/widget/g;->DW()V

    iget-object v0, p0, Lcom/kwad/sdk/widget/g;->aMk:Lcom/kwad/sdk/widget/i;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/widget/g;->mView:Landroid/view/View;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/widget/i;->z(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/sdk/widget/g;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/widget/g;->am()V

    return-void
.end method

.method private nX()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/widget/g;->aMo:Z

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/sdk/widget/g;->KG()V

    :cond_0
    return-void
.end method


# virtual methods
.method public final KF()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/widget/g;->aMn:Z

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/sdk/widget/g;->nX()V

    :cond_0
    return-void
.end method

.method public final b(IIII)V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/widget/g;->aMn:Z

    iget-boolean v0, p0, Lcom/kwad/sdk/widget/g;->aMm:Z

    if-nez v0, :cond_0

    or-int/2addr p3, p4

    if-nez p3, :cond_0

    or-int/2addr p1, p2

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/sdk/widget/g;->aMn:Z

    iput-boolean p1, p0, Lcom/kwad/sdk/widget/g;->aMm:Z

    :cond_0
    return-void
.end method

.method public final bR(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/widget/g;->aMo:Z

    return-void
.end method

.method public final getVisiblePercent()F
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/widget/g;->aMl:F

    return v0
.end method

.method public final onAttachedToWindow()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/widget/g;->DV()V

    return-void
.end method

.method public final onDetachedFromWindow()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/widget/g;->DW()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/widget/g;->aMm:Z

    return-void
.end method

.method public final setVisiblePercent(F)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/widget/g;->aMl:F

    return-void
.end method
