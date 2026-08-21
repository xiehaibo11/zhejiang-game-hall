.class final Lcom/tkay/basead/ui/SdkBannerATView$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/SdkBannerATView;->p()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/ui/component/RoundImageView;

.field final synthetic b:Lcom/tkay/basead/ui/SdkBannerATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/SdkBannerATView;Lcom/tkay/core/common/ui/component/RoundImageView;)V
    .locals 0

    .line 434
    iput-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView$3;->b:Lcom/tkay/basead/ui/SdkBannerATView;

    iput-object p2, p0, Lcom/tkay/basead/ui/SdkBannerATView$3;->a:Lcom/tkay/core/common/ui/component/RoundImageView;

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

    .line 437
    iget-object v0, p0, Lcom/tkay/basead/ui/SdkBannerATView$3;->b:Lcom/tkay/basead/ui/SdkBannerATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 438
    iget-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView$3;->a:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/ui/component/RoundImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
