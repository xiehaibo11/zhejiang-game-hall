.class public Lcom/kwad/sdk/widget/RatioFrameLayout;
.super Landroid/widget/FrameLayout;


# instance fields
.field private aqQ:D


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/widget/RatioFrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/sdk/widget/RatioFrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const-wide/16 p1, 0x0

    iput-wide p1, p0, Lcom/kwad/sdk/widget/RatioFrameLayout;->aqQ:D

    return-void
.end method


# virtual methods
.method public getRatio()D
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/widget/RatioFrameLayout;->aqQ:D

    return-wide v0
.end method

.method protected onMeasure(II)V
    .locals 4

    iget-wide v0, p0, Lcom/kwad/sdk/widget/RatioFrameLayout;->aqQ:D

    const-wide/16 v2, 0x0

    cmpl-double v0, v0, v2

    if-eqz v0, :cond_0

    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result p2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "widthSize:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RatioFrameLayout"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    int-to-double v0, p2

    iget-wide v2, p0, Lcom/kwad/sdk/widget/RatioFrameLayout;->aqQ:D

    mul-double/2addr v0, v2

    double-to-int p2, v0

    const/high16 v0, 0x40000000    # 2.0f

    invoke-static {p2, v0}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result p2

    :cond_0
    invoke-super {p0, p1, p2}, Landroid/widget/FrameLayout;->onMeasure(II)V

    return-void
.end method

.method public setRatio(D)V
    .locals 0

    iput-wide p1, p0, Lcom/kwad/sdk/widget/RatioFrameLayout;->aqQ:D

    return-void
.end method
