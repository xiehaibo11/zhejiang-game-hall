.class public Lcom/sigmob/sdk/videoAd/j;
.super Landroid/widget/ImageView;


# instance fields
.field private a:Lcom/sigmob/sdk/base/views/s;

.field private final b:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    new-instance v0, Lcom/sigmob/sdk/base/views/s;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/base/views/s;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/j;->a:Lcom/sigmob/sdk/base/views/s;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/j;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    const/high16 v0, 0x40000000    # 2.0f

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/videoAd/j;->b:I

    return-void
.end method


# virtual methods
.method public a()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/j;->a:Lcom/sigmob/sdk/base/views/s;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/s;->a()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/j;->a:Lcom/sigmob/sdk/base/views/s;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/s;->a(I)V

    return-void
.end method

.method public a(I)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/j;->a:Lcom/sigmob/sdk/base/views/s;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/views/s;->a(I)V

    return-void
.end method

.method public a(II)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/j;->a:Lcom/sigmob/sdk/base/views/s;

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/base/views/s;->a(II)V

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/videoAd/j;->setVisibility(I)V

    return-void
.end method

.method getImageViewDrawable()Lcom/sigmob/sdk/base/views/s;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/j;->a:Lcom/sigmob/sdk/base/views/s;

    return-object v0
.end method

.method public setAnchorId(I)V
    .locals 3

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    iget v1, p0, Lcom/sigmob/sdk/videoAd/j;->b:I

    const/4 v2, -0x1

    invoke-direct {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0x8

    invoke-virtual {v0, v1, p1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/j;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method setImageViewDrawable(Lcom/sigmob/sdk/base/views/s;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/j;->a:Lcom/sigmob/sdk/base/views/s;

    return-void
.end method
