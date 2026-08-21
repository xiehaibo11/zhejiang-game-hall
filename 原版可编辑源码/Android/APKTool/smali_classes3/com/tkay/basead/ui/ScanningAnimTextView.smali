.class public Lcom/tkay/basead/ui/ScanningAnimTextView;
.super Landroid/widget/TextView;


# instance fields
.field a:Landroid/animation/ValueAnimator;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 27
    invoke-direct {p0, p1, p2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private static a()V
    .locals 0

    return-void
.end method


# virtual methods
.method protected onAttachedToWindow()V
    .locals 0

    .line 38
    invoke-super {p0}, Landroid/widget/TextView;->onAttachedToWindow()V

    .line 40
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ScanningAnimTextView;->startAnimation()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 45
    invoke-super {p0}, Landroid/widget/TextView;->onDetachedFromWindow()V

    .line 47
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ScanningAnimTextView;->stopAnimation()V

    return-void
.end method

.method protected onVisibilityChanged(Landroid/view/View;I)V
    .locals 0

    .line 62
    invoke-super {p0, p1, p2}, Landroid/widget/TextView;->onVisibilityChanged(Landroid/view/View;I)V

    .line 63
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ScanningAnimTextView;->isShown()Z

    move-result p1

    if-eqz p1, :cond_0

    if-nez p2, :cond_0

    .line 64
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ScanningAnimTextView;->startAnimation()V

    return-void

    .line 66
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ScanningAnimTextView;->stopAnimation()V

    return-void
.end method

.method protected onWindowVisibilityChanged(I)V
    .locals 1

    .line 52
    invoke-super {p0, p1}, Landroid/widget/TextView;->onWindowVisibilityChanged(I)V

    .line 53
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ScanningAnimTextView;->isShown()Z

    move-result v0

    if-eqz v0, :cond_0

    if-nez p1, :cond_0

    .line 54
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ScanningAnimTextView;->startAnimation()V

    return-void

    .line 56
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ScanningAnimTextView;->stopAnimation()V

    return-void
.end method

.method public startAnimation()V
    .locals 4

    .line 72
    iget-object v0, p0, Lcom/tkay/basead/ui/ScanningAnimTextView;->a:Landroid/animation/ValueAnimator;

    if-nez v0, :cond_0

    const/4 v0, 0x2

    new-array v1, v0, [F

    .line 73
    fill-array-data v1, :array_0

    invoke-static {v1}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/basead/ui/ScanningAnimTextView;->a:Landroid/animation/ValueAnimator;

    const-wide/16 v2, 0x1f4

    .line 74
    invoke-virtual {v1, v2, v3}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    .line 75
    iget-object v1, p0, Lcom/tkay/basead/ui/ScanningAnimTextView;->a:Landroid/animation/ValueAnimator;

    new-instance v2, Lcom/tkay/basead/ui/ScanningAnimTextView$1;

    invoke-direct {v2, p0}, Lcom/tkay/basead/ui/ScanningAnimTextView$1;-><init>(Lcom/tkay/basead/ui/ScanningAnimTextView;)V

    invoke-virtual {v1, v2}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    .line 84
    iget-object v1, p0, Lcom/tkay/basead/ui/ScanningAnimTextView;->a:Landroid/animation/ValueAnimator;

    invoke-virtual {v1, v0}, Landroid/animation/ValueAnimator;->setRepeatMode(I)V

    .line 85
    iget-object v0, p0, Lcom/tkay/basead/ui/ScanningAnimTextView;->a:Landroid/animation/ValueAnimator;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->setRepeatCount(I)V

    .line 89
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/ScanningAnimTextView;->a:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->isStarted()Z

    move-result v0

    if-nez v0, :cond_1

    .line 90
    iget-object v0, p0, Lcom/tkay/basead/ui/ScanningAnimTextView;->a:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->start()V

    :cond_1
    return-void

    :array_0
    .array-data 4
        0x3f800000    # 1.0f
        0x3f733333    # 0.95f
    .end array-data
.end method

.method public stopAnimation()V
    .locals 1

    .line 95
    iget-object v0, p0, Lcom/tkay/basead/ui/ScanningAnimTextView;->a:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_0

    .line 96
    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    :cond_0
    return-void
.end method
