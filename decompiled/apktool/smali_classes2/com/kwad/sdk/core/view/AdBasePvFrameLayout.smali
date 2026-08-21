.class public Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;
.super Lcom/kwad/sdk/core/view/AdBaseFrameLayout;


# instance fields
.field private axe:J

.field private axf:F

.field private axg:Z

.field private axh:Z

.field private axi:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

.field private axj:Landroid/view/ViewTreeObserver;

.field private axk:Lcom/kwad/sdk/utils/bl;

.field private ct:Lcom/kwad/sdk/widget/j;

.field private mn:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;-><init>(Landroid/content/Context;)V

    const-wide/16 v0, 0x1f4

    iput-wide v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axe:J

    const p1, 0x3dcccccd    # 0.1f

    iput p1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axf:F

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axh:Z

    invoke-direct {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-wide/16 p1, 0x1f4

    iput-wide p1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axe:J

    const p1, 0x3dcccccd    # 0.1f

    iput p1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axf:F

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axh:Z

    invoke-direct {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const-wide/16 p1, 0x1f4

    iput-wide p1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axe:J

    const p1, 0x3dcccccd    # 0.1f

    iput p1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axf:F

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axh:Z

    invoke-direct {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->init()V

    return-void
.end method

.method private DS()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->DU()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->DT()V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->DV()V

    return-void
.end method

.method private DU()Z
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axk:Lcom/kwad/sdk/utils/bl;

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bl;->Ke()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axk:Lcom/kwad/sdk/utils/bl;

    iget-object v0, v0, Lcom/kwad/sdk/utils/bl;->aKq:Landroid/graphics/Rect;

    invoke-virtual {v0}, Landroid/graphics/Rect;->height()I

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->getHeight()I

    move-result v1

    sub-int/2addr v0, v1

    invoke-static {v0}, Ljava/lang/Math;->abs(I)I

    move-result v0

    int-to-float v0, v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->getHeight()I

    move-result v1

    int-to-float v1, v1

    const/high16 v2, 0x3f800000    # 1.0f

    iget v3, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axf:F

    sub-float/2addr v2, v3

    mul-float/2addr v1, v2

    cmpg-float v0, v0, v1

    if-gtz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->getHeight()I

    move-result v0

    if-lez v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->getWidth()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axk:Lcom/kwad/sdk/utils/bl;

    iget-object v0, v0, Lcom/kwad/sdk/utils/bl;->aKq:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->bottom:I

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axk:Lcom/kwad/sdk/utils/bl;

    iget-object v0, v0, Lcom/kwad/sdk/utils/bl;->aKq:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->top:I

    iget v1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->mn:I

    if-ge v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private DV()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axi:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout$1;-><init>(Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;)V

    iput-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axi:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axj:Landroid/view/ViewTreeObserver;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axi:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    invoke-virtual {v0, v1}, Landroid/view/ViewTreeObserver;->addOnScrollChangedListener(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V

    :cond_0
    return-void
.end method

.method private DW()V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axi:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axj:Landroid/view/ViewTreeObserver;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axj:Landroid/view/ViewTreeObserver;

    invoke-virtual {v0}, Landroid/view/ViewTreeObserver;->isAlive()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axj:Landroid/view/ViewTreeObserver;

    iget-object v1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axi:Landroid/view/ViewTreeObserver$OnScrollChangedListener;

    invoke-virtual {v0, v1}, Landroid/view/ViewTreeObserver;->removeOnScrollChangedListener(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V

    :cond_0
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axi:Landroid/view/ViewTreeObserver$OnScrollChangedListener;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;)Z
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->DU()Z

    move-result p0

    return p0
.end method

.method private init()V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/utils/bl;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/utils/bl;-><init>(Landroid/view/View;)V

    iput-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axk:Lcom/kwad/sdk/utils/bl;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/k;->getScreenHeight(Landroid/content/Context;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->mn:I

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axh:Z

    return-void
.end method

.method private nX()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axh:Z

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->DS()V

    :cond_0
    return-void
.end method


# virtual methods
.method protected final DT()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->DW()V

    iget-object v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->ct:Lcom/kwad/sdk/widget/j;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/widget/j;->am()V

    :cond_0
    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->onAttachedToWindow()V

    invoke-direct {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->DV()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->onDetachedFromWindow()V

    invoke-direct {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->DW()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axg:Z

    return-void
.end method

.method protected onSizeChanged(IIII)V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axg:Z

    const/4 v1, 0x1

    if-nez v0, :cond_0

    or-int v0, p3, p4

    if-nez v0, :cond_0

    or-int v0, p1, p2

    if-eqz v0, :cond_0

    iput-boolean v1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axg:Z

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-super {p0, p1, p2, p3, p4}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->onSizeChanged(IIII)V

    if-eqz v1, :cond_1

    invoke-direct {p0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->nX()V

    :cond_1
    return-void
.end method

.method public setCheckDefaultImpressionLogThreshold(F)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->axf:F

    return-void
.end method

.method public setVisibleListener(Lcom/kwad/sdk/widget/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->ct:Lcom/kwad/sdk/widget/j;

    return-void
.end method
