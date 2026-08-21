.class final Lcom/mbridge/msdk/widget/custom/b/b$1;
.super Ljava/lang/Object;
.source "FastBlurUtil.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/c/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/widget/custom/b/b;->a(Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;)V
    .locals 0

    .line 291
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/b/b$1;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 305
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/b/b$1;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    new-instance p2, Lcom/mbridge/msdk/widget/custom/b/b$1$2;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/widget/custom/b/b$1$2;-><init>(Lcom/mbridge/msdk/widget/custom/b/b$1;)V

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 1

    .line 294
    iget-object p2, p0, Lcom/mbridge/msdk/widget/custom/b/b$1;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    new-instance v0, Lcom/mbridge/msdk/widget/custom/b/b$1$1;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/widget/custom/b/b$1$1;-><init>(Lcom/mbridge/msdk/widget/custom/b/b$1;Landroid/graphics/Bitmap;)V

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
