.class final Lcom/tkay/basead/ui/SdkBannerATView$9;
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
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/core/common/res/image/RecycleImageView;

.field final synthetic c:Lcom/tkay/core/common/res/image/RecycleImageView;

.field final synthetic d:Lcom/tkay/basead/ui/SdkBannerATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/SdkBannerATView;Ljava/lang/String;Lcom/tkay/core/common/res/image/RecycleImageView;Lcom/tkay/core/common/res/image/RecycleImageView;)V
    .locals 0

    .line 208
    iput-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView$9;->d:Lcom/tkay/basead/ui/SdkBannerATView;

    iput-object p2, p0, Lcom/tkay/basead/ui/SdkBannerATView$9;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/basead/ui/SdkBannerATView$9;->b:Lcom/tkay/core/common/res/image/RecycleImageView;

    iput-object p4, p0, Lcom/tkay/basead/ui/SdkBannerATView$9;->c:Lcom/tkay/core/common/res/image/RecycleImageView;

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

    .line 211
    iget-object v0, p0, Lcom/tkay/basead/ui/SdkBannerATView$9;->a:Ljava/lang/String;

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 212
    iget-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView$9;->b:Lcom/tkay/core/common/res/image/RecycleImageView;

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/res/image/RecycleImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 215
    iget-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView$9;->d:Lcom/tkay/basead/ui/SdkBannerATView;

    new-instance v0, Lcom/tkay/basead/ui/SdkBannerATView$9$1;

    invoke-direct {v0, p0, p2}, Lcom/tkay/basead/ui/SdkBannerATView$9$1;-><init>(Lcom/tkay/basead/ui/SdkBannerATView$9;Landroid/graphics/Bitmap;)V

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/SdkBannerATView;->post(Ljava/lang/Runnable;)Z

    .line 234
    iget-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView$9;->d:Lcom/tkay/basead/ui/SdkBannerATView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1, p2}, Lcom/tkay/core/common/l/b;->a(Landroid/content/Context;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 235
    iget-object p2, p0, Lcom/tkay/basead/ui/SdkBannerATView$9;->c:Lcom/tkay/core/common/res/image/RecycleImageView;

    invoke-virtual {p2, p1}, Lcom/tkay/core/common/res/image/RecycleImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
