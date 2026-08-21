.class public Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;
.super Lcom/kwad/sdk/core/webview/KsAdWebView;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView$a;
    }
.end annotation


# instance fields
.field private OE:Z

.field private OF:Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView$a;

.field private OG:F

.field private OH:Z

.field private Oh:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OE:Z

    invoke-direct {p0}, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->pk()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OE:Z

    invoke-direct {p0}, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->pk()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/sdk/core/webview/KsAdWebView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OE:Z

    invoke-direct {p0}, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->pk()V

    return-void
.end method

.method private pk()V
    .locals 1

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->Oh:I

    return-void
.end method


# virtual methods
.method protected onMeasure(II)V
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->Oh:I

    if-eqz v0, :cond_2

    invoke-static {}, Lcom/kwad/components/core/t/d;->qn()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/kwad/sdk/d/a/a;->getStatusBarHeight(Landroid/content/Context;)I

    move-result p2

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    :goto_0
    invoke-virtual {p0}, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->getContext()Landroid/content/Context;

    move-result-object v0

    instance-of v0, v0, Landroid/app/Activity;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->e(Landroid/app/Activity;)I

    move-result v0

    goto :goto_1

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->getScreenHeight(Landroid/content/Context;)I

    move-result v0

    :goto_1
    sub-int/2addr v0, p2

    iget p2, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->Oh:I

    sub-int/2addr v0, p2

    const/high16 p2, 0x40000000    # 2.0f

    invoke-static {v0, p2}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result p2

    :cond_2
    invoke-super {p0, p1, p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->onMeasure(II)V

    return-void
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 5

    invoke-static {p1}, Landroid/view/MotionEvent;->obtain(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;

    move-result-object v0

    iget-boolean v1, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OE:Z

    if-eqz v1, :cond_0

    invoke-super {p0, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1

    :cond_0
    invoke-static {p1}, Landroid/support/v4/view/MotionEventCompat;->getActionMasked(Landroid/view/MotionEvent;)I

    move-result v1

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v2

    const/4 v3, 0x0

    if-eqz v1, :cond_5

    const/4 p1, 0x1

    if-eq v1, p1, :cond_3

    const/4 v4, 0x2

    if-eq v1, v4, :cond_1

    const/4 v0, 0x3

    if-eq v1, v0, :cond_3

    goto :goto_0

    :cond_1
    iget v1, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OG:F

    sub-float v3, v1, v2

    iget-object v4, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OF:Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView$a;

    if-eqz v4, :cond_2

    cmpg-float v1, v2, v1

    if-gtz v1, :cond_2

    iput-boolean p1, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OH:Z

    invoke-interface {v4, v3}, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView$a;->d(F)V

    :cond_2
    invoke-super {p0, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result v3

    goto :goto_0

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OF:Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView$a;

    if-eqz v0, :cond_6

    iget v0, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OG:F

    sub-float/2addr v0, v2

    const/4 v1, 0x0

    cmpl-float v0, v0, v1

    if-gez v0, :cond_4

    iget-boolean v0, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OH:Z

    if-eqz v0, :cond_6

    :cond_4
    iget-object v0, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OF:Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView$a;

    invoke-interface {v0}, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView$a;->pq()Z

    move-result v0

    if-eqz v0, :cond_6

    iput-boolean p1, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OE:Z

    goto :goto_0

    :cond_5
    iput v2, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OG:F

    iput-boolean v3, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OH:Z

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result v3

    :cond_6
    :goto_0
    return v3
.end method

.method public setDisableAnimation(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OE:Z

    return-void
.end method

.method public setSplitScrollWebViewListener(Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView;->OF:Lcom/kwad/components/core/page/splitLandingPage/view/SplitScrollWebView$a;

    return-void
.end method
