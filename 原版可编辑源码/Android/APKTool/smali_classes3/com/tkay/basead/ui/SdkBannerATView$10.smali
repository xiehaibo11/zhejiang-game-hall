.class final Lcom/tkay/basead/ui/SdkBannerATView$10;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/SdkBannerATView;->b(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/widget/ImageView;

.field final synthetic b:Lcom/tkay/basead/ui/SdkBannerATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/SdkBannerATView;Landroid/widget/ImageView;)V
    .locals 0

    .line 252
    iput-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView$10;->b:Lcom/tkay/basead/ui/SdkBannerATView;

    iput-object p2, p0, Lcom/tkay/basead/ui/SdkBannerATView$10;->a:Landroid/widget/ImageView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 1

    .line 255
    iget-object v0, p0, Lcom/tkay/basead/ui/SdkBannerATView$10;->b:Lcom/tkay/basead/ui/SdkBannerATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 256
    iget-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView$10;->a:Landroid/widget/ImageView;

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
