.class final Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/mbridge/msdk/out/NativeAdvancedAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;)V
    .locals 0

    .line 26
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd$1;->a:Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final closeFullScreen(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method

.method public final onClick(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 44
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd$1;->a:Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->notifyAdClicked()V

    return-void
.end method

.method public final onClose(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 64
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd$1;->a:Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->notifyAdDislikeClick()V

    return-void
.end method

.method public final onLeaveApp(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method

.method public final onLoadFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onLoadSuccessed(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method

.method public final onLogImpression(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 39
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd$1;->a:Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->notifyAdImpression()V

    return-void
.end method

.method public final showFullScreen(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method
