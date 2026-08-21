.class final Lcom/tkay/basead/ui/SinglePictureSplashATView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/SinglePictureSplashATView;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/ui/component/RoundImageView;

.field final synthetic b:Lcom/tkay/basead/ui/SinglePictureSplashATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/SinglePictureSplashATView;Lcom/tkay/core/common/ui/component/RoundImageView;)V
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$1;->b:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    iput-object p2, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$1;->a:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 3

    .line 62
    iget-object v0, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$1;->b:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 64
    iget-object p1, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$1;->b:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_splash_ad_content_image_area"

    const-string v2, "id"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/tkay/basead/ui/WrapRoundImageView;

    .line 66
    iget-object v0, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$1;->b:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->j()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 67
    sget-object v0, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/WrapRoundImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 69
    invoke-virtual {p1, p2}, Lcom/tkay/basead/ui/WrapRoundImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    goto :goto_0

    .line 71
    :cond_0
    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/WrapRoundImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 73
    new-instance v0, Lcom/tkay/basead/ui/SinglePictureSplashATView$1$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/basead/ui/SinglePictureSplashATView$1$1;-><init>(Lcom/tkay/basead/ui/SinglePictureSplashATView$1;Lcom/tkay/basead/ui/WrapRoundImageView;Landroid/graphics/Bitmap;)V

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/WrapRoundImageView;->post(Ljava/lang/Runnable;)Z

    .line 84
    :goto_0
    iget-object p1, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$1;->a:Lcom/tkay/core/common/ui/component/RoundImageView;

    if-eqz p1, :cond_1

    .line 85
    iget-object p1, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$1;->b:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1, p2}, Lcom/tkay/core/common/l/b;->a(Landroid/content/Context;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 86
    iget-object p2, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$1;->a:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p2, p1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_1
    return-void
.end method
