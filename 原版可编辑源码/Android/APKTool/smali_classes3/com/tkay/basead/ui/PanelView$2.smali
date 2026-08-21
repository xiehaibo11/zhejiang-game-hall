.class final Lcom/tkay/basead/ui/PanelView$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/PanelView;->a(Lcom/tkay/core/common/f/h;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Landroid/view/ViewGroup$LayoutParams;

.field final synthetic c:Lcom/tkay/basead/ui/PanelView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/PanelView;Ljava/lang/String;Landroid/view/ViewGroup$LayoutParams;)V
    .locals 0

    .line 282
    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView$2;->c:Lcom/tkay/basead/ui/PanelView;

    iput-object p2, p0, Lcom/tkay/basead/ui/PanelView$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/basead/ui/PanelView$2;->b:Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 305
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$2;->c:Lcom/tkay/basead/ui/PanelView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PanelView;->b(Lcom/tkay/basead/ui/PanelView;)Landroid/widget/ImageView;

    move-result-object p1

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 2

    .line 285
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView$2;->a:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 286
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$2;->c:Lcom/tkay/basead/ui/PanelView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PanelView;->b(Lcom/tkay/basead/ui/PanelView;)Landroid/widget/ImageView;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 289
    invoke-virtual {p2}, Landroid/graphics/Bitmap;->getWidth()I

    move-result p1

    int-to-float p1, p1

    const/high16 v0, 0x3f800000    # 1.0f

    mul-float/2addr p1, v0

    invoke-virtual {p2}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    int-to-float v0, v0

    div-float/2addr p1, v0

    .line 291
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView$2;->b:Landroid/view/ViewGroup$LayoutParams;

    iget v0, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    int-to-float v1, v0

    mul-float/2addr v1, p1

    float-to-int p1, v1

    .line 293
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView$2;->b:Landroid/view/ViewGroup$LayoutParams;

    iput p1, v1, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 294
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$2;->b:Landroid/view/ViewGroup$LayoutParams;

    iput v0, p1, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 295
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$2;->c:Lcom/tkay/basead/ui/PanelView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PanelView;->b(Lcom/tkay/basead/ui/PanelView;)Landroid/widget/ImageView;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView$2;->b:Landroid/view/ViewGroup$LayoutParams;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 297
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$2;->c:Lcom/tkay/basead/ui/PanelView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PanelView;->b(Lcom/tkay/basead/ui/PanelView;)Landroid/widget/ImageView;

    move-result-object p1

    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 298
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$2;->c:Lcom/tkay/basead/ui/PanelView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PanelView;->b(Lcom/tkay/basead/ui/PanelView;)Landroid/widget/ImageView;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 299
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$2;->c:Lcom/tkay/basead/ui/PanelView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PanelView;->b(Lcom/tkay/basead/ui/PanelView;)Landroid/widget/ImageView;

    move-result-object p1

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method
