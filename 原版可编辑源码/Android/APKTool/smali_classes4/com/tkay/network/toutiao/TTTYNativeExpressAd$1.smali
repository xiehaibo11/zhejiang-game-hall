.class final Lcom/tkay/network/toutiao/TTTYNativeExpressAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressVideoListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->setAdData(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)V
    .locals 0

    .line 65
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClickRetry()V
    .locals 0

    return-void
.end method

.method public final onProgressUpdate(JJ)V
    .locals 4

    .line 94
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->getVideoDuration()D

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmpl-double v0, v0, v2

    const-wide v1, 0x408f400000000000L    # 1000.0

    if-nez v0, :cond_0

    .line 95
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    long-to-double p3, p3

    div-double/2addr p3, v1

    invoke-virtual {v0, p3, p4}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->setVideoDuration(D)V

    .line 98
    :cond_0
    iget-object p3, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    long-to-double p1, p1

    div-double/2addr p1, v1

    iput-wide p1, p3, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->d:D

    .line 99
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    iget-wide p2, p1, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->d:D

    double-to-int p2, p2

    invoke-virtual {p1, p2}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->notifyAdVideoPlayProgress(I)V

    return-void
.end method

.method public final onVideoComplete()V
    .locals 1

    .line 104
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->notifyAdVideoEnd()V

    return-void
.end method

.method public final onVideoContinuePlay()V
    .locals 0

    return-void
.end method

.method public final onVideoError(II)V
    .locals 3

    .line 73
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    .line 74
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v2, 0x0

    aput-object p1, v1, v2

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x1

    aput-object p1, v1, p2

    const-string p1, "onVideoError, errorCode: %d, errorMsg: %s"

    .line 73
    invoke-static {p1, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public final onVideoLoad()V
    .locals 0

    return-void
.end method

.method public final onVideoPaused()V
    .locals 0

    return-void
.end method

.method public final onVideoStartPlay()V
    .locals 1

    .line 79
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$1;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->notifyAdVideoStart()V

    return-void
.end method
