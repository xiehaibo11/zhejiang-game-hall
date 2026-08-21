.class final Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->onLoadSuccessed(Lcom/mbridge/msdk/out/MBridgeIds;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;)V
    .locals 0

    .line 131
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2$1;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 134
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2$1;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->isAdReady()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 135
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2$1;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->e(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 136
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2$1;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->f(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 140
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2$1;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->g(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 141
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2$1;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->h(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const-string v1, ""

    const-string v2, "Mintegral Splash Ad is not ready."

    invoke-interface {v0, v1, v2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method
