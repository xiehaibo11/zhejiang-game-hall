.class final Lcom/tkay/basead/ui/EndCardView$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/EndCardView;->b(Lcom/tkay/core/common/f/h;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:I

.field final synthetic c:Lcom/tkay/basead/ui/EndCardView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/EndCardView;Ljava/lang/String;I)V
    .locals 0

    .line 177
    iput-object p1, p0, Lcom/tkay/basead/ui/EndCardView$3;->c:Lcom/tkay/basead/ui/EndCardView;

    iput-object p2, p0, Lcom/tkay/basead/ui/EndCardView$3;->a:Ljava/lang/String;

    iput p3, p0, Lcom/tkay/basead/ui/EndCardView$3;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 2

    .line 180
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView$3;->a:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 182
    invoke-virtual {p2}, Landroid/graphics/Bitmap;->getWidth()I

    move-result p1

    int-to-float p1, p1

    const/high16 v0, 0x3f800000    # 1.0f

    mul-float/2addr p1, v0

    invoke-virtual {p2}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    int-to-float v0, v0

    div-float/2addr p1, v0

    .line 184
    iget v0, p0, Lcom/tkay/basead/ui/EndCardView$3;->b:I

    int-to-float v1, v0

    mul-float/2addr v1, p1

    float-to-int p1, v1

    .line 186
    iget-object v1, p0, Lcom/tkay/basead/ui/EndCardView$3;->c:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {v1}, Lcom/tkay/basead/ui/EndCardView;->e(Lcom/tkay/basead/ui/EndCardView;)Landroid/widget/ImageView;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    .line 187
    iput p1, v1, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 188
    iput v0, v1, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 189
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView$3;->c:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {p1}, Lcom/tkay/basead/ui/EndCardView;->e(Lcom/tkay/basead/ui/EndCardView;)Landroid/widget/ImageView;

    move-result-object p1

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 191
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView$3;->c:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {p1}, Lcom/tkay/basead/ui/EndCardView;->e(Lcom/tkay/basead/ui/EndCardView;)Landroid/widget/ImageView;

    move-result-object p1

    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 192
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView$3;->c:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {p1}, Lcom/tkay/basead/ui/EndCardView;->e(Lcom/tkay/basead/ui/EndCardView;)Landroid/widget/ImageView;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
