.class final Lcom/tkay/basead/ui/BaseSdkSplashATView$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseSdkSplashATView;->o()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/ViewGroup$LayoutParams;

.field final synthetic b:Lcom/tkay/basead/ui/BaseSdkSplashATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseSdkSplashATView;Landroid/view/ViewGroup$LayoutParams;)V
    .locals 0

    .line 160
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;->b:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    iput-object p2, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;->a:Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 182
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;->b:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/ui/component/RoundImageView;->setVisibility(I)V

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 2

    .line 163
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;->b:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 166
    invoke-virtual {p2}, Landroid/graphics/Bitmap;->getWidth()I

    move-result p1

    int-to-float p1, p1

    const/high16 v0, 0x3f800000    # 1.0f

    mul-float/2addr p1, v0

    invoke-virtual {p2}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    int-to-float v0, v0

    div-float/2addr p1, v0

    .line 168
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;->a:Landroid/view/ViewGroup$LayoutParams;

    iget v0, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    int-to-float v1, v0

    mul-float/2addr v1, p1

    float-to-int p1, v1

    .line 170
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;->a:Landroid/view/ViewGroup$LayoutParams;

    iput p1, v1, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 171
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;->a:Landroid/view/ViewGroup$LayoutParams;

    iput v0, p1, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 172
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;->b:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;->a:Landroid/view/ViewGroup$LayoutParams;

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/ui/component/RoundImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 174
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;->b:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/ui/component/RoundImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 175
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;->b:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/ui/component/RoundImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 176
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;->b:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/ui/component/RoundImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method
