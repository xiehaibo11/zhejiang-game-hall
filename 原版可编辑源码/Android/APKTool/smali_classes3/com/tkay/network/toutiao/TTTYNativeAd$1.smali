.class final Lcom/tkay/network/toutiao/TTTYNativeAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfObject$VideoVfListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYNativeAd;->setAdData(ZLandroid/graphics/Bitmap;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYNativeAd;)V
    .locals 0

    .line 121
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onProgressUpdate(JJ)V
    .locals 4

    .line 150
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->getVideoDuration()D

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmpl-double v0, v0, v2

    const-wide v1, 0x408f400000000000L    # 1000.0

    if-nez v0, :cond_0

    .line 151
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    long-to-double p3, p3

    div-double/2addr p3, v1

    invoke-virtual {v0, p3, p4}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setVideoDuration(D)V

    .line 154
    :cond_0
    iget-object p3, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    long-to-double p1, p1

    div-double/2addr p1, v1

    iput-wide p1, p3, Lcom/tkay/network/toutiao/TTTYNativeAd;->f:D

    .line 155
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    iget-wide p2, p1, Lcom/tkay/network/toutiao/TTTYNativeAd;->f:D

    double-to-int p2, p2

    invoke-virtual {p1, p2}, Lcom/tkay/network/toutiao/TTTYNativeAd;->notifyAdVideoPlayProgress(I)V

    return-void
.end method

.method public final onVideoComplete(Lcom/bykv/vk/openvk/TTVfObject;)V
    .locals 0

    .line 145
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->notifyAdVideoEnd()V

    return-void
.end method

.method public final onVideoContinuePlay(Lcom/bykv/vk/openvk/TTVfObject;)V
    .locals 0

    return-void
.end method

.method public final onVideoError(II)V
    .locals 0

    return-void
.end method

.method public final onVideoLoad(Lcom/bykv/vk/openvk/TTVfObject;)V
    .locals 0

    return-void
.end method

.method public final onVideoPaused(Lcom/bykv/vk/openvk/TTVfObject;)V
    .locals 0

    return-void
.end method

.method public final onVideoStartPlay(Lcom/bykv/vk/openvk/TTVfObject;)V
    .locals 0

    .line 132
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->notifyAdVideoStart()V

    return-void
.end method
