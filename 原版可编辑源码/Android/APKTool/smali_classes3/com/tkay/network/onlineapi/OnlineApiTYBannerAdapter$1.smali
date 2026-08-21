.class final Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdCacheLoaded()V
    .locals 3

    .line 64
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->c(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/basead/d/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/basead/d/a;->a()Landroid/view/View;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->a(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;Landroid/view/View;)Landroid/view/View;

    .line 65
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->d(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 66
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->e(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 67
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->f(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 69
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->g(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const-string v1, ""

    const-string v2, "Online bannerView = null"

    invoke-interface {v0, v1, v2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final onAdDataLoaded()V
    .locals 1

    .line 57
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->a(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 58
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->b(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdDataLoaded()V

    :cond_0
    return-void
.end method

.method public final onAdLoadFailed(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 76
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->h(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 77
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->i(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->b()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
