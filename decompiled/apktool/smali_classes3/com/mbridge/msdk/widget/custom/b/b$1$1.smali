.class final Lcom/mbridge/msdk/widget/custom/b/b$1$1;
.super Ljava/lang/Object;
.source "FastBlurUtil.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/widget/custom/b/b$1;->onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/graphics/Bitmap;

.field final synthetic b:Lcom/mbridge/msdk/widget/custom/b/b$1;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/b/b$1;Landroid/graphics/Bitmap;)V
    .locals 0

    .line 294
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/b/b$1$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$1;

    iput-object p2, p0, Lcom/mbridge/msdk/widget/custom/b/b$1$1;->a:Landroid/graphics/Bitmap;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 296
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$1$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$1;

    iget-object v0, v0, Lcom/mbridge/msdk/widget/custom/b/b$1;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$1$1;->a:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_0

    .line 297
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$1$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$1;

    iget-object v0, v0, Lcom/mbridge/msdk/widget/custom/b/b$1;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/b/b$1$1;->a:Landroid/graphics/Bitmap;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
