.class final Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/mbridge/msdk/out/MBSplashLoadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->a(Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)V
    .locals 0

    .line 123
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final isSupportZoomOut(Lcom/mbridge/msdk/out/MBridgeIds;Z)V
    .locals 0

    return-void
.end method

.method public final onLoadFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;I)V
    .locals 0

    .line 151
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 152
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->j(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p3

    invoke-interface {p1, p3, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onLoadSuccessed(Lcom/mbridge/msdk/out/MBridgeIds;I)V
    .locals 2

    .line 126
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-virtual {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->isAdReady()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 127
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->c(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 128
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->d(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 p2, 0x0

    new-array p2, p2, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 131
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    new-instance p2, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2$1;

    invoke-direct {p2, p0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;)V

    const-wide/16 v0, 0xa

    invoke-virtual {p1, p2, v0, v1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->postOnMainThreadDelayed(Ljava/lang/Runnable;J)V

    :cond_1
    return-void
.end method
