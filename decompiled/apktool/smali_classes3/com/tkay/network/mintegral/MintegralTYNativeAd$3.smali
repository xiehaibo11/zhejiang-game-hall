.class final Lcom/tkay/network/mintegral/MintegralTYNativeAd$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYNativeAd;->getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
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

    .line 204
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd$3;->a:Lcom/tkay/network/mintegral/MintegralTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onEnterFullscreen()V
    .locals 0

    return-void
.end method

.method public final onExitFullscreen()V
    .locals 0

    return-void
.end method

.method public final onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onVideoAdClicked(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 0

    .line 232
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd$3;->a:Lcom/tkay/network/mintegral/MintegralTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->notifyAdClicked()V

    return-void
.end method

.method public final onVideoComplete()V
    .locals 1

    .line 242
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd$3;->a:Lcom/tkay/network/mintegral/MintegralTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->notifyAdVideoEnd()V

    return-void
.end method

.method public final onVideoStart()V
    .locals 1

    .line 237
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYNativeAd$3;->a:Lcom/tkay/network/mintegral/MintegralTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->notifyAdVideoStart()V

    return-void
.end method
