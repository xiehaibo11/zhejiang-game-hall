.class final Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/mbridge/msdk/out/InterstitialListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->a(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)V
    .locals 0

    .line 218
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onInterstitialAdClick(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 265
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->C(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 266
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->D(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_0
    return-void
.end method

.method public final onInterstitialClosed(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 258
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->A(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 259
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->B(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    :cond_0
    return-void
.end method

.method public final onInterstitialLoadFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 1

    .line 230
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->u(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 231
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->v(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const-string v0, ""

    invoke-interface {p1, v0, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onInterstitialLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 1

    .line 222
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->g:Z

    .line 223
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->s(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 224
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->t(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_0
    return-void
.end method

.method public final onInterstitialShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 1

    .line 252
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->y(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "onInterstitialShowFail:"

    invoke-virtual {v0, p2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 253
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->z(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)I

    return-void
.end method

.method public final onInterstitialShowSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 3

    .line 238
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    iget-object p1, p1, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->a:Lcom/mbridge/msdk/out/MBInterstitialHandler;

    if-eqz p1, :cond_0

    .line 239
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/ref/WeakReference;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    iget-object v2, v2, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->a:Lcom/mbridge/msdk/out/MBInterstitialHandler;

    invoke-direct {v1, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 244
    :catchall_0
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    const/4 v0, 0x0

    iput-boolean v0, p1, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->g:Z

    .line 245
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->w(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 246
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->x(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

    :cond_1
    return-void
.end method
