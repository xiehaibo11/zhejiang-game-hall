.class final Lcom/tkay/network/mintegral/MintegralTYNativeAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYNativeAd;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/out/Campaign;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/mintegral/MintegralTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYNativeAd;)V
    .locals 0

    .line 53
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd$1;->a:Lcom/tkay/network/mintegral/MintegralTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 0

    .line 65
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd$1;->a:Lcom/tkay/network/mintegral/MintegralTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->notifyAdClicked()V

    return-void
.end method

.method public final onAdFramesLoaded(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Frame;",
            ">;)V"
        }
    .end annotation

    return-void
.end method

.method public final onAdLoadError(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onAdLoaded(Ljava/util/List;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;I)V"
        }
    .end annotation

    return-void
.end method

.method public final onLoggingImpression(I)V
    .locals 3

    .line 76
    :try_start_0
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd$1;->a:Lcom/tkay/network/mintegral/MintegralTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->getShowId()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/ref/WeakReference;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd$1;->a:Lcom/tkay/network/mintegral/MintegralTYNativeAd;

    iget-object v2, v2, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->d:Lcom/mbridge/msdk/out/Campaign;

    invoke-direct {v1, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 80
    :catchall_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd$1;->a:Lcom/tkay/network/mintegral/MintegralTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->notifyAdImpression()V

    return-void
.end method
