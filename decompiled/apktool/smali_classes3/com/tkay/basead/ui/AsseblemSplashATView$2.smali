.class final Lcom/tkay/basead/ui/AsseblemSplashATView$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/AsseblemSplashATView;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/widget/FrameLayout;

.field final synthetic b:Lcom/tkay/basead/ui/WrapRoundImageView;

.field final synthetic c:Lcom/tkay/core/common/ui/component/RoundImageView;

.field final synthetic d:Lcom/tkay/basead/ui/AsseblemSplashATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/AsseblemSplashATView;Landroid/widget/FrameLayout;Lcom/tkay/basead/ui/WrapRoundImageView;Lcom/tkay/core/common/ui/component/RoundImageView;)V
    .locals 0

    .line 125
    iput-object p1, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2;->d:Lcom/tkay/basead/ui/AsseblemSplashATView;

    iput-object p2, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2;->a:Landroid/widget/FrameLayout;

    iput-object p3, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2;->b:Lcom/tkay/basead/ui/WrapRoundImageView;

    iput-object p4, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2;->c:Lcom/tkay/core/common/ui/component/RoundImageView;

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

    .line 128
    iget-object v0, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2;->d:Lcom/tkay/basead/ui/AsseblemSplashATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/AsseblemSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 130
    iget-object p1, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2;->a:Landroid/widget/FrameLayout;

    new-instance v0, Lcom/tkay/basead/ui/AsseblemSplashATView$2$1;

    invoke-direct {v0, p0, p2}, Lcom/tkay/basead/ui/AsseblemSplashATView$2$1;-><init>(Lcom/tkay/basead/ui/AsseblemSplashATView$2;Landroid/graphics/Bitmap;)V

    invoke-virtual {p1, v0}, Landroid/widget/FrameLayout;->post(Ljava/lang/Runnable;)Z

    .line 138
    iget-object p1, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2;->d:Lcom/tkay/basead/ui/AsseblemSplashATView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1, p2}, Lcom/tkay/core/common/l/b;->a(Landroid/content/Context;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 139
    iget-object p2, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2;->c:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p2, p1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
