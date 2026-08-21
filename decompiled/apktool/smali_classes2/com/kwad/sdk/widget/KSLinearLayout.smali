.class public Lcom/kwad/sdk/widget/KSLinearLayout;
.super Landroid/widget/LinearLayout;

# interfaces
.implements Lcom/kwad/sdk/widget/i;


# instance fields
.field private final SN:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private aLQ:Lcom/kwad/sdk/widget/g;

.field private aLR:Lcom/kwad/sdk/widget/i;

.field private final axd:Lcom/kwad/sdk/utils/ac$a;

.field private mRatio:F

.field private mViewRCHelper:Lcom/kwad/sdk/widget/h;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->SN:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mRatio:F

    new-instance v0, Lcom/kwad/sdk/utils/ac$a;

    invoke-direct {v0}, Lcom/kwad/sdk/utils/ac$a;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->axd:Lcom/kwad/sdk/utils/ac$a;

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/widget/KSLinearLayout;->init(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 2

    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->SN:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mRatio:F

    new-instance v0, Lcom/kwad/sdk/utils/ac$a;

    invoke-direct {v0}, Lcom/kwad/sdk/utils/ac$a;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->axd:Lcom/kwad/sdk/utils/ac$a;

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/widget/KSLinearLayout;->init(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 1

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    new-instance p3, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x1

    invoke-direct {p3, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object p3, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->SN:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 p3, 0x0

    iput p3, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mRatio:F

    new-instance p3, Lcom/kwad/sdk/utils/ac$a;

    invoke-direct {p3}, Lcom/kwad/sdk/utils/ac$a;-><init>()V

    iput-object p3, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->axd:Lcom/kwad/sdk/utils/ac$a;

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/widget/KSLinearLayout;->init(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private aa()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->aLQ:Lcom/kwad/sdk/widget/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/g;->onAttachedToWindow()V

    return-void
.end method

.method private ab()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->aLQ:Lcom/kwad/sdk/widget/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/g;->onDetachedFromWindow()V

    return-void
.end method

.method private init(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 4

    const/4 v0, 0x1

    if-eqz p2, :cond_0

    sget v1, Lcom/kwad/sdk/R$attr;->ksad_ratio:I

    new-array v2, v0, [I

    const/4 v3, 0x0

    aput v1, v2, v3

    invoke-static {v2}, Ljava/util/Arrays;->sort([I)V

    invoke-virtual {p1, p2, v2}, Landroid/content/Context;->obtainStyledAttributes(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;

    move-result-object v3

    invoke-static {v2, v1}, Ljava/util/Arrays;->binarySearch([II)I

    move-result v1

    const/4 v2, 0x0

    invoke-virtual {v3, v1, v2}, Landroid/content/res/TypedArray;->getFloat(IF)F

    move-result v1

    iput v1, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mRatio:F

    invoke-virtual {v3}, Landroid/content/res/TypedArray;->recycle()V

    :cond_0
    new-instance v1, Lcom/kwad/sdk/widget/g;

    invoke-direct {v1, p0, p0}, Lcom/kwad/sdk/widget/g;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/i;)V

    iput-object v1, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->aLQ:Lcom/kwad/sdk/widget/g;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/widget/g;->bR(Z)V

    new-instance v0, Lcom/kwad/sdk/widget/h;

    invoke-direct {v0}, Lcom/kwad/sdk/widget/h;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/widget/h;->initAttrs(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private sn()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->SN:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->getAndSet(Z)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "KSLinearLayout"

    const-string v1, "onViewAttached"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/sdk/widget/KSLinearLayout;->aa()V

    :cond_0
    return-void
.end method

.method private so()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->SN:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->getAndSet(Z)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "KSLinearLayout"

    const-string v1, "onViewDetached"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/sdk/widget/KSLinearLayout;->ab()V

    :cond_0
    return-void
.end method


# virtual methods
.method protected dispatchDraw(Landroid/graphics/Canvas;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/h;->beforeDispatchDraw(Landroid/graphics/Canvas;)V

    invoke-super {p0, p1}, Landroid/widget/LinearLayout;->dispatchDraw(Landroid/graphics/Canvas;)V

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/h;->afterDispatchDraw(Landroid/graphics/Canvas;)V

    return-void
.end method

.method public dispatchTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 3

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    if-eqz v0, :cond_1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->axd:Lcom/kwad/sdk/utils/ac$a;

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v1

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/utils/ac$a;->g(FF)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->axd:Lcom/kwad/sdk/utils/ac$a;

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/KSLinearLayout;->getWidth()I

    move-result v1

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/KSLinearLayout;->getHeight()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/utils/ac$a;->x(II)V

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->axd:Lcom/kwad/sdk/utils/ac$a;

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v1

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/utils/ac$a;->f(FF)V

    :goto_0
    invoke-super {p0, p1}, Landroid/widget/LinearLayout;->dispatchTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method public draw(Landroid/graphics/Canvas;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/h;->beforeDraw(Landroid/graphics/Canvas;)V

    invoke-super {p0, p1}, Landroid/widget/LinearLayout;->draw(Landroid/graphics/Canvas;)V

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/h;->afterDraw(Landroid/graphics/Canvas;)V

    return-void
.end method

.method public getTouchCoords()Lcom/kwad/sdk/utils/ac$a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->axd:Lcom/kwad/sdk/utils/ac$a;

    return-object v0
.end method

.method public getVisiblePercent()F
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->aLQ:Lcom/kwad/sdk/widget/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/g;->getVisiblePercent()F

    move-result v0

    return v0
.end method

.method protected onAttachedToWindow()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    invoke-super {p0}, Landroid/widget/LinearLayout;->onAttachedToWindow()V

    invoke-direct {p0}, Lcom/kwad/sdk/widget/KSLinearLayout;->sn()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    invoke-super {p0}, Landroid/widget/LinearLayout;->onDetachedFromWindow()V

    invoke-direct {p0}, Lcom/kwad/sdk/widget/KSLinearLayout;->so()V

    return-void
.end method

.method public onFinishTemporaryDetach()V
    .locals 0

    invoke-super {p0}, Landroid/widget/LinearLayout;->onFinishTemporaryDetach()V

    invoke-direct {p0}, Lcom/kwad/sdk/widget/KSLinearLayout;->sn()V

    return-void
.end method

.method protected onMeasure(II)V
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mRatio:F

    const/4 v1, 0x0

    cmpl-float v0, v0, v1

    if-eqz v0, :cond_0

    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result p2

    int-to-float p2, p2

    iget v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mRatio:F

    mul-float/2addr p2, v0

    float-to-int p2, p2

    const/high16 v0, 0x40000000    # 2.0f

    invoke-static {p2, v0}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result p2

    :cond_0
    invoke-super {p0, p1, p2}, Landroid/widget/LinearLayout;->onMeasure(II)V

    return-void
.end method

.method protected onSizeChanged(IIII)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->aLQ:Lcom/kwad/sdk/widget/g;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/kwad/sdk/widget/g;->b(IIII)V

    invoke-super {p0, p1, p2, p3, p4}, Landroid/widget/LinearLayout;->onSizeChanged(IIII)V

    iget-object p3, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->aLQ:Lcom/kwad/sdk/widget/g;

    invoke-virtual {p3}, Lcom/kwad/sdk/widget/g;->KF()V

    iget-object p3, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {p3, p1, p2}, Lcom/kwad/sdk/widget/h;->onSizeChanged(II)V

    return-void
.end method

.method public onStartTemporaryDetach()V
    .locals 0

    invoke-super {p0}, Landroid/widget/LinearLayout;->onStartTemporaryDetach()V

    invoke-direct {p0}, Lcom/kwad/sdk/widget/KSLinearLayout;->so()V

    return-void
.end method

.method public setRadius(F)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mViewRCHelper:Lcom/kwad/sdk/widget/h;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/h;->setRadius(F)V

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/KSLinearLayout;->postInvalidate()V

    return-void
.end method

.method public setRatio(F)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->mRatio:F

    return-void
.end method

.method public setViewVisibleListener(Lcom/kwad/sdk/widget/i;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->aLR:Lcom/kwad/sdk/widget/i;

    return-void
.end method

.method public setVisiblePercent(F)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->aLQ:Lcom/kwad/sdk/widget/g;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/g;->setVisiblePercent(F)V

    return-void
.end method

.method public final z(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/widget/KSLinearLayout;->aLR:Lcom/kwad/sdk/widget/i;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/widget/i;->z(Landroid/view/View;)V

    :cond_0
    return-void
.end method
