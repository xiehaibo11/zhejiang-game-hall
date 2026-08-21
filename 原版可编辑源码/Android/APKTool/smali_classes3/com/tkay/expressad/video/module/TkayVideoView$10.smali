.class final Lcom/tkay/expressad/video/module/TkayVideoView$10;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayVideoView;->f()Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayVideoView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V
    .locals 0

    .line 1258
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$10;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 4

    .line 1262
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result p2

    int-to-float p2, p2

    const/high16 v0, 0x3f800000    # 1.0f

    mul-float/2addr p2, v0

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    int-to-float v0, v0

    div-float/2addr p2, v0

    .line 1263
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$10;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    const/high16 v1, 0x41400000    # 12.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    int-to-float v2, v0

    mul-float/2addr v2, p2

    float-to-int p2, v2

    .line 1266
    new-instance v2, Landroid/widget/ImageView;

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$10;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v3, v3, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    invoke-direct {v2, v3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 1267
    sget-object v3, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v2, v3}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 1268
    invoke-virtual {v2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 1270
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {p1, p2, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 p2, 0xb

    .line 1271
    invoke-virtual {p1, p2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 p2, 0xc

    .line 1272
    invoke-virtual {p1, p2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1273
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$10;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object p2, p2, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    const/high16 v0, 0x40a00000    # 5.0f

    invoke-static {p2, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p2

    iput p2, p1, Landroid/widget/RelativeLayout$LayoutParams;->bottomMargin:I

    .line 1274
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$10;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object p2, p2, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    invoke-static {p2, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p2

    iput p2, p1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1275
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$10;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {p2, v2, p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
