.class final Lcom/tkay/basead/ui/MediaATView$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/MediaATView;->init(II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/MediaATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/MediaATView;)V
    .locals 0

    .line 173
    iput-object p1, p0, Lcom/tkay/basead/ui/MediaATView$2;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 197
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView$2;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-static {p1}, Lcom/tkay/basead/ui/MediaATView;->c(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;

    move-result-object p1

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 3

    .line 176
    iget-object v0, p0, Lcom/tkay/basead/ui/MediaATView$2;->a:Lcom/tkay/basead/ui/MediaATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 177
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView$2;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-static {p1}, Lcom/tkay/basead/ui/MediaATView;->c(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 180
    invoke-virtual {p2}, Landroid/graphics/Bitmap;->getWidth()I

    move-result p1

    int-to-float p1, p1

    const/high16 v0, 0x3f800000    # 1.0f

    mul-float/2addr p1, v0

    invoke-virtual {p2}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    int-to-float v0, v0

    div-float/2addr p1, v0

    .line 181
    iget-object v0, p0, Lcom/tkay/basead/ui/MediaATView$2;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/MediaATView;->c(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 182
    iget v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    int-to-float v2, v1

    mul-float/2addr v2, p1

    float-to-int p1, v2

    .line 185
    iput p1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 186
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 187
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView$2;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-static {p1}, Lcom/tkay/basead/ui/MediaATView;->c(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 189
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView$2;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-static {p1}, Lcom/tkay/basead/ui/MediaATView;->c(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;

    move-result-object p1

    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 190
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView$2;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-static {p1}, Lcom/tkay/basead/ui/MediaATView;->c(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 191
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView$2;->a:Lcom/tkay/basead/ui/MediaATView;

    invoke-static {p1}, Lcom/tkay/basead/ui/MediaATView;->c(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;

    move-result-object p1

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method
