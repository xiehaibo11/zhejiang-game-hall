.class public final Lcom/mbridge/msdk/video/module/a/a/i;
.super Lcom/mbridge/msdk/video/module/a/a/d;
.source "RoundedImageLoaderListener.java"


# instance fields
.field private a:I


# direct methods
.method public constructor <init>(Landroid/widget/ImageView;I)V
    .locals 0

    .line 20
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/a/a/d;-><init>(Landroid/widget/ImageView;)V

    .line 21
    iput p2, p0, Lcom/mbridge/msdk/video/module/a/a/i;->a:I

    return-void
.end method


# virtual methods
.method public final onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 1

    if-nez p1, :cond_0

    :try_start_0
    const-string p1, "ImageLoaderListener"

    const-string p2, "bitmap=null"

    .line 28
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 31
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/a/a/i;->b:Landroid/widget/ImageView;

    if-eqz p2, :cond_1

    .line 32
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_1

    const/4 p2, 0x1

    .line 33
    iget v0, p0, Lcom/mbridge/msdk/video/module/a/a/i;->a:I

    invoke-static {p1, p2, v0}, Lcom/mbridge/msdk/foundation/tools/y;->a(Landroid/graphics/Bitmap;II)Landroid/graphics/Bitmap;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 35
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/a/a/i;->b:Landroid/widget/ImageView;

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 40
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 41
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method
