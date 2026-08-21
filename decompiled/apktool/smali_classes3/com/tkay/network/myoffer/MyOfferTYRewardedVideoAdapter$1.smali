.class final Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)V
    .locals 0

    .line 57
    iput-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdCacheLoaded()V
    .locals 2

    .line 65
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->a(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/basead/f/f;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/basead/b;->a(Lcom/tkay/basead/f/c;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->b:Ljava/util/Map;

    .line 66
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->b(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 67
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->c(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

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

    .line 73
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->d(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 74
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->e(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->b()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
