.class final Lcom/tkay/basead/ui/SdkBannerATView$9$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/SdkBannerATView$9;->onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/graphics/Bitmap;

.field final synthetic b:Lcom/tkay/basead/ui/SdkBannerATView$9;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/SdkBannerATView$9;Landroid/graphics/Bitmap;)V
    .locals 0

    .line 215
    iput-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView$9$1;->b:Lcom/tkay/basead/ui/SdkBannerATView$9;

    iput-object p2, p0, Lcom/tkay/basead/ui/SdkBannerATView$9$1;->a:Landroid/graphics/Bitmap;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 218
    iget-object v0, p0, Lcom/tkay/basead/ui/SdkBannerATView$9$1;->b:Lcom/tkay/basead/ui/SdkBannerATView$9;

    iget-object v0, v0, Lcom/tkay/basead/ui/SdkBannerATView$9;->d:Lcom/tkay/basead/ui/SdkBannerATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/SdkBannerATView;->getWidth()I

    move-result v0

    .line 219
    iget-object v1, p0, Lcom/tkay/basead/ui/SdkBannerATView$9$1;->b:Lcom/tkay/basead/ui/SdkBannerATView$9;

    iget-object v1, v1, Lcom/tkay/basead/ui/SdkBannerATView$9;->d:Lcom/tkay/basead/ui/SdkBannerATView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/SdkBannerATView;->getHeight()I

    move-result v1

    .line 220
    iget-object v2, p0, Lcom/tkay/basead/ui/SdkBannerATView$9$1;->a:Landroid/graphics/Bitmap;

    invoke-virtual {v2}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v2

    int-to-float v2, v2

    iget-object v3, p0, Lcom/tkay/basead/ui/SdkBannerATView$9$1;->a:Landroid/graphics/Bitmap;

    invoke-virtual {v3}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v3

    int-to-float v3, v3

    div-float/2addr v2, v3

    .line 222
    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/u;->a(IIF)[I

    move-result-object v0

    .line 224
    iget-object v1, p0, Lcom/tkay/basead/ui/SdkBannerATView$9$1;->b:Lcom/tkay/basead/ui/SdkBannerATView$9;

    iget-object v1, v1, Lcom/tkay/basead/ui/SdkBannerATView$9;->b:Lcom/tkay/core/common/res/image/RecycleImageView;

    invoke-virtual {v1}, Lcom/tkay/core/common/res/image/RecycleImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    if-eqz v1, :cond_0

    const/4 v2, 0x0

    .line 226
    aget v2, v0, v2

    iput v2, v1, Landroid/view/ViewGroup$LayoutParams;->width:I

    const/4 v2, 0x1

    .line 227
    aget v0, v0, v2

    iput v0, v1, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 229
    iget-object v0, p0, Lcom/tkay/basead/ui/SdkBannerATView$9$1;->b:Lcom/tkay/basead/ui/SdkBannerATView$9;

    iget-object v0, v0, Lcom/tkay/basead/ui/SdkBannerATView$9;->b:Lcom/tkay/core/common/res/image/RecycleImageView;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/res/image/RecycleImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method
