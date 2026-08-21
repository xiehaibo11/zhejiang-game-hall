.class final Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/mbridge/msdk/out/BannerAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a(Landroid/content/Context;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

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

    .line 105
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->g(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 106
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->h(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClicked()V

    :cond_0
    return-void
.end method

.method public final onCloseBanner(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 127
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->i(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 128
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->j(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClose()V

    :cond_0
    return-void
.end method

.method public final onLeaveApp(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method

.method public final onLoadFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 1

    .line 80
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 81
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->b(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const-string v0, ""

    invoke-interface {p1, v0, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onLoadSuccessed(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 1

    .line 87
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->c(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 88
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->d(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_0
    return-void
.end method

.method public final onLogImpression(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 3

    .line 95
    :try_start_0
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/ref/WeakReference;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    iget-object v2, v2, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a:Lcom/mbridge/msdk/out/MBBannerView;

    invoke-direct {v1, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 98
    :catchall_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->e(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 99
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->f(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdShow()V

    :cond_0
    return-void
.end method

.method public final showFullScreen(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method
