.class final Lcom/tkay/network/myoffer/MyOfferTYAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/myoffer/MyOfferTYAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/network/myoffer/MyOfferTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/myoffer/MyOfferTYAdapter;Landroid/content/Context;)V
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter$1;->b:Lcom/tkay/network/myoffer/MyOfferTYAdapter;

    iput-object p2, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter$1;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdCacheLoaded()V
    .locals 4

    .line 54
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter$1;->b:Lcom/tkay/network/myoffer/MyOfferTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->a(Lcom/tkay/network/myoffer/MyOfferTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 55
    new-instance v0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;

    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter$1;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter$1;->b:Lcom/tkay/network/myoffer/MyOfferTYAdapter;

    iget-object v2, v2, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->a:Lcom/tkay/basead/f/e;

    invoke-direct {v0, v1, v2}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;-><init>(Landroid/content/Context;Lcom/tkay/basead/f/e;)V

    .line 56
    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter$1;->b:Lcom/tkay/network/myoffer/MyOfferTYAdapter;

    invoke-static {v1}, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->b(Lcom/tkay/network/myoffer/MyOfferTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v1

    const/4 v2, 0x1

    new-array v2, v2, [Lcom/tkay/core/api/BaseAd;

    const/4 v3, 0x0

    aput-object v0, v2, v3

    invoke-interface {v1, v2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_0
    return-void
.end method

.method public final onAdDataLoaded()V
    .locals 0

    return-void
.end method

.method public final onAdLoadFailed(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 62
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter$1;->b:Lcom/tkay/network/myoffer/MyOfferTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->c(Lcom/tkay/network/myoffer/MyOfferTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 63
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYAdapter$1;->b:Lcom/tkay/network/myoffer/MyOfferTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYAdapter;->d(Lcom/tkay/network/myoffer/MyOfferTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->b()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
