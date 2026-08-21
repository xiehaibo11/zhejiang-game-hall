.class final Lcom/tkay/expressad/video/module/TkayNativeEndCardView$11;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V
    .locals 0

    .line 344
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$11;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 347
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_0

    if-eqz p1, :cond_0

    .line 348
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_0

    .line 350
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result p2

    int-to-float p2, p2

    const/high16 v0, 0x3f800000    # 1.0f

    mul-float/2addr p2, v0

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    int-to-float v0, v0

    div-float/2addr p2, v0

    .line 351
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$11;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a:Landroid/content/Context;

    const/high16 v1, 0x41400000    # 12.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    int-to-float v1, v0

    mul-float/2addr v1, p2

    float-to-int p2, v1

    .line 353
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$11;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    iput v0, v1, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 354
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$11;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    iput p2, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 355
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$11;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {p2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 356
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$11;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;

    move-result-object p1

    const/high16 p2, 0x55000000

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setBackgroundColor(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
