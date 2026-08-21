.class final Lcom/mbridge/msdk/widget/custom/b/b$2$1;
.super Ljava/lang/Object;
.source "FastBlurUtil.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/widget/custom/b/b$2;->onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/graphics/Bitmap;

.field final synthetic b:Lcom/mbridge/msdk/widget/custom/b/b$2;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/b/b$2;Landroid/graphics/Bitmap;)V
    .locals 0

    .line 321
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iput-object p2, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->a:Landroid/graphics/Bitmap;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 324
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->a:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_2

    .line 325
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->a:Landroid/graphics/Bitmap;

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v0

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->a:Landroid/graphics/Bitmap;

    invoke-virtual {v1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v1

    if-lt v0, v1, :cond_1

    .line 326
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget v0, v0, Lcom/mbridge/msdk/widget/custom/b/b$2;->b:I

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget v1, v1, Lcom/mbridge/msdk/widget/custom/b/b$2;->c:I

    if-lt v0, v1, :cond_0

    .line 328
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->a:Landroid/graphics/Bitmap;

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget-object v1, v1, Lcom/mbridge/msdk/widget/custom/b/b$2;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget v2, v2, Lcom/mbridge/msdk/widget/custom/b/b$2;->b:I

    iget-object v3, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget-object v3, v3, Lcom/mbridge/msdk/widget/custom/b/b$2;->d:Landroid/widget/ImageView;

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/widget/custom/b/b;->a(Landroid/graphics/Bitmap;Landroid/widget/ImageView;ILandroid/widget/ImageView;)V

    goto :goto_0

    .line 330
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->a:Landroid/graphics/Bitmap;

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget-object v1, v1, Lcom/mbridge/msdk/widget/custom/b/b$2;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget v2, v2, Lcom/mbridge/msdk/widget/custom/b/b$2;->c:I

    iget-object v3, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget-object v3, v3, Lcom/mbridge/msdk/widget/custom/b/b$2;->d:Landroid/widget/ImageView;

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/widget/custom/b/b;->b(Landroid/graphics/Bitmap;Landroid/widget/ImageView;ILandroid/widget/ImageView;)V

    .line 332
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget-object v0, v0, Lcom/mbridge/msdk/widget/custom/b/b$2;->e:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    new-instance v1, Lcom/mbridge/msdk/widget/custom/b/b$2$1$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/widget/custom/b/b$2$1$1;-><init>(Lcom/mbridge/msdk/widget/custom/b/b$2$1;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->registerOrientationListener(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;)V

    goto :goto_1

    .line 346
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->a:Landroid/graphics/Bitmap;

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget-object v1, v1, Lcom/mbridge/msdk/widget/custom/b/b$2;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget v2, v2, Lcom/mbridge/msdk/widget/custom/b/b$2;->b:I

    iget-object v3, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget-object v3, v3, Lcom/mbridge/msdk/widget/custom/b/b$2;->d:Landroid/widget/ImageView;

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/widget/custom/b/b;->c(Landroid/graphics/Bitmap;Landroid/widget/ImageView;ILandroid/widget/ImageView;)V

    :cond_2
    :goto_1
    return-void
.end method
