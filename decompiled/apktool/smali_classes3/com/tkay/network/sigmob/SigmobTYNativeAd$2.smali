.class final Lcom/tkay/network/sigmob/SigmobTYNativeAd$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYNativeAd;->prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/sigmob/SigmobTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYNativeAd;)V
    .locals 0

    .line 145
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd$2;->a:Lcom/tkay/network/sigmob/SigmobTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onVideoCompleted()V
    .locals 1

    .line 173
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd$2;->a:Lcom/tkay/network/sigmob/SigmobTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->notifyAdVideoEnd()V

    return-void
.end method

.method public final onVideoError(Lcom/sigmob/windad/WindAdError;)V
    .locals 3

    .line 153
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd$2;->a:Lcom/tkay/network/sigmob/SigmobTYNativeAd;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->notifyAdVideoVideoPlayFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onVideoLoad()V
    .locals 0

    return-void
.end method

.method public final onVideoPause()V
    .locals 0

    return-void
.end method

.method public final onVideoResume()V
    .locals 0

    return-void
.end method

.method public final onVideoStart()V
    .locals 1

    .line 158
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd$2;->a:Lcom/tkay/network/sigmob/SigmobTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->notifyAdVideoStart()V

    return-void
.end method
