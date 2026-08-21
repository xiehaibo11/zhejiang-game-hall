.class final Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)V
    .locals 0

    .line 49
    iput-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$1;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdCacheLoaded()V
    .locals 2

    .line 57
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$1;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->a(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 58
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$1;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->b(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_0
    return-void
.end method

.method public final onAdDataLoaded()V
    .locals 0

    return-void
.end method

.method public final onAdLoadFailed(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 64
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$1;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->c(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 65
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$1;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->d(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->b()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
