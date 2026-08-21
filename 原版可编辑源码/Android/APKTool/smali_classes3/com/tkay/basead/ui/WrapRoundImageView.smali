.class public Lcom/tkay/basead/ui/WrapRoundImageView;
.super Lcom/tkay/core/common/ui/component/RoundImageView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 25
    invoke-direct {p0, p1}, Lcom/tkay/core/common/ui/component/RoundImageView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 29
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/ui/component/RoundImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method


# virtual methods
.method public setBitmapAndResize(Landroid/graphics/Bitmap;II)[I
    .locals 2

    .line 37
    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/WrapRoundImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    const/4 v0, 0x0

    if-lez p2, :cond_1

    if-gtz p3, :cond_0

    goto :goto_0

    .line 46
    :cond_0
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result p1

    int-to-float p1, p1

    div-float/2addr v1, p1

    .line 48
    invoke-static {p2, p3, v1}, Lcom/tkay/core/common/l/u;->a(IIF)[I

    move-result-object p1

    .line 50
    invoke-virtual {p0}, Lcom/tkay/basead/ui/WrapRoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    if-eqz p2, :cond_1

    const/4 p3, 0x0

    .line 52
    aget p3, p1, p3

    iput p3, p2, Landroid/view/ViewGroup$LayoutParams;->width:I

    const/4 p3, 0x1

    .line 53
    aget p3, p1, p3

    iput p3, p2, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 55
    invoke-virtual {p0, p2}, Lcom/tkay/basead/ui/WrapRoundImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    .line 60
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return-object v0
.end method
