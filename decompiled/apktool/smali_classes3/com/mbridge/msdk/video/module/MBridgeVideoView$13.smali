.class final Lcom/mbridge/msdk/video/module/MBridgeVideoView$13;
.super Ljava/lang/Object;
.source "MBridgeVideoView.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/c/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V
    .locals 0

    .line 2210
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$13;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    const-string p2, "MBridgeVideoView"

    .line 2227
    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 2214
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_0

    .line 2215
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$13;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-static {p2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->E(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Landroid/widget/ImageView;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 2216
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$13;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-static {p2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->E(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Landroid/widget/ImageView;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p2, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 2217
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$13;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-static {p2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->E(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Landroid/widget/ImageView;

    move-result-object p2

    invoke-static {}, Lcom/mbridge/msdk/video/dynview/i/a;->a()Lcom/mbridge/msdk/video/dynview/i/a;

    move-result-object v0

    const/16 v1, 0x14

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/dynview/i/a;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 2221
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "MBridgeVideoView"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method
