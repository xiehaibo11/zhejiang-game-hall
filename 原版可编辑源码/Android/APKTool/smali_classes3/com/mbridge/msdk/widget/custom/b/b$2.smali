.class final Lcom/mbridge/msdk/widget/custom/b/b$2;
.super Ljava/lang/Object;
.source "FastBlurUtil.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/c/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/widget/custom/b/b;->a(Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;Landroid/widget/ImageView;Ljava/lang/String;IILcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

.field final synthetic b:I

.field final synthetic c:I

.field final synthetic d:Landroid/widget/ImageView;

.field final synthetic e:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;IILandroid/widget/ImageView;Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)V
    .locals 0

    .line 318
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    iput p2, p0, Lcom/mbridge/msdk/widget/custom/b/b$2;->b:I

    iput p3, p0, Lcom/mbridge/msdk/widget/custom/b/b$2;->c:I

    iput-object p4, p0, Lcom/mbridge/msdk/widget/custom/b/b$2;->d:Landroid/widget/ImageView;

    iput-object p5, p0, Lcom/mbridge/msdk/widget/custom/b/b$2;->e:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 356
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/b/b$2;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    new-instance p2, Lcom/mbridge/msdk/widget/custom/b/b$2$2;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/widget/custom/b/b$2$2;-><init>(Lcom/mbridge/msdk/widget/custom/b/b$2;)V

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 1

    .line 321
    iget-object p2, p0, Lcom/mbridge/msdk/widget/custom/b/b$2;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    new-instance v0, Lcom/mbridge/msdk/widget/custom/b/b$2$1;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/widget/custom/b/b$2$1;-><init>(Lcom/mbridge/msdk/widget/custom/b/b$2;Landroid/graphics/Bitmap;)V

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
