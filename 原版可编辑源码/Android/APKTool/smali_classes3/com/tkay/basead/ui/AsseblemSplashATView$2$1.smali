.class final Lcom/tkay/basead/ui/AsseblemSplashATView$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/AsseblemSplashATView$2;->onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/graphics/Bitmap;

.field final synthetic b:Lcom/tkay/basead/ui/AsseblemSplashATView$2;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/AsseblemSplashATView$2;Landroid/graphics/Bitmap;)V
    .locals 0

    .line 130
    iput-object p1, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2$1;->b:Lcom/tkay/basead/ui/AsseblemSplashATView$2;

    iput-object p2, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2$1;->a:Landroid/graphics/Bitmap;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 133
    iget-object v0, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2$1;->b:Lcom/tkay/basead/ui/AsseblemSplashATView$2;

    iget-object v0, v0, Lcom/tkay/basead/ui/AsseblemSplashATView$2;->b:Lcom/tkay/basead/ui/WrapRoundImageView;

    iget-object v1, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2$1;->a:Landroid/graphics/Bitmap;

    iget-object v2, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2$1;->b:Lcom/tkay/basead/ui/AsseblemSplashATView$2;

    iget-object v2, v2, Lcom/tkay/basead/ui/AsseblemSplashATView$2;->a:Landroid/widget/FrameLayout;

    invoke-virtual {v2}, Landroid/widget/FrameLayout;->getWidth()I

    move-result v2

    iget-object v3, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2$1;->b:Lcom/tkay/basead/ui/AsseblemSplashATView$2;

    iget-object v3, v3, Lcom/tkay/basead/ui/AsseblemSplashATView$2;->a:Landroid/widget/FrameLayout;

    invoke-virtual {v3}, Landroid/widget/FrameLayout;->getHeight()I

    move-result v3

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/basead/ui/WrapRoundImageView;->setBitmapAndResize(Landroid/graphics/Bitmap;II)[I

    .line 134
    iget-object v0, p0, Lcom/tkay/basead/ui/AsseblemSplashATView$2$1;->b:Lcom/tkay/basead/ui/AsseblemSplashATView$2;

    iget-object v0, v0, Lcom/tkay/basead/ui/AsseblemSplashATView$2;->b:Lcom/tkay/basead/ui/WrapRoundImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/WrapRoundImageView;->setVisibility(I)V

    return-void
.end method
