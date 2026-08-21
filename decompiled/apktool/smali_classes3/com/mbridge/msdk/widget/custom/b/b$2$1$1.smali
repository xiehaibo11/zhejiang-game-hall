.class final Lcom/mbridge/msdk/widget/custom/b/b$2$1$1;
.super Ljava/lang/Object;
.source "FastBlurUtil.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/widget/custom/b/b$2$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/widget/custom/b/b$2$1;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/b/b$2$1;)V
    .locals 0

    .line 332
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1$1;->a:Lcom/mbridge/msdk/widget/custom/b/b$2$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(I)V
    .locals 3

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 337
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1$1;->a:Lcom/mbridge/msdk/widget/custom/b/b$2$1;

    iget-object p1, p1, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->a:Landroid/graphics/Bitmap;

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1$1;->a:Lcom/mbridge/msdk/widget/custom/b/b$2$1;

    iget-object v0, v0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget-object v0, v0, Lcom/mbridge/msdk/widget/custom/b/b$2;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1$1;->a:Lcom/mbridge/msdk/widget/custom/b/b$2$1;

    iget-object v1, v1, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget v1, v1, Lcom/mbridge/msdk/widget/custom/b/b$2;->b:I

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1$1;->a:Lcom/mbridge/msdk/widget/custom/b/b$2$1;

    iget-object v2, v2, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget-object v2, v2, Lcom/mbridge/msdk/widget/custom/b/b$2;->d:Landroid/widget/ImageView;

    invoke-static {p1, v0, v1, v2}, Lcom/mbridge/msdk/widget/custom/b/b;->a(Landroid/graphics/Bitmap;Landroid/widget/ImageView;ILandroid/widget/ImageView;)V

    goto :goto_0

    .line 340
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1$1;->a:Lcom/mbridge/msdk/widget/custom/b/b$2$1;

    iget-object p1, p1, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->a:Landroid/graphics/Bitmap;

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1$1;->a:Lcom/mbridge/msdk/widget/custom/b/b$2$1;

    iget-object v0, v0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget-object v0, v0, Lcom/mbridge/msdk/widget/custom/b/b$2;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1$1;->a:Lcom/mbridge/msdk/widget/custom/b/b$2$1;

    iget-object v1, v1, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget v1, v1, Lcom/mbridge/msdk/widget/custom/b/b$2;->c:I

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/b/b$2$1$1;->a:Lcom/mbridge/msdk/widget/custom/b/b$2$1;

    iget-object v2, v2, Lcom/mbridge/msdk/widget/custom/b/b$2$1;->b:Lcom/mbridge/msdk/widget/custom/b/b$2;

    iget-object v2, v2, Lcom/mbridge/msdk/widget/custom/b/b$2;->d:Landroid/widget/ImageView;

    invoke-static {p1, v0, v1, v2}, Lcom/mbridge/msdk/widget/custom/b/b;->b(Landroid/graphics/Bitmap;Landroid/widget/ImageView;ILandroid/widget/ImageView;)V

    :goto_0
    return-void
.end method
