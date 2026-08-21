.class final Lcom/tkay/network/adx/AdxTYBannerAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/adx/AdxTYBannerAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/adx/AdxTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/adx/AdxTYBannerAdapter;)V
    .locals 0

    .line 58
    iput-object p1, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdCacheLoaded()V
    .locals 3

    .line 68
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->c(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/basead/d/a;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 72
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->d(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 73
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->c(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/basead/d/a;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/basead/b;->a(Lcom/tkay/basead/d/b;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/network/adx/AdxTYBannerAdapter;->b:Ljava/util/Map;

    .line 75
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->c(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/basead/d/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;

    iget-object v2, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v2}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->c(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/basead/d/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/basead/d/a;->e()Lcom/tkay/core/common/f/h;

    move-result-object v2

    invoke-direct {v1, p0, v2}, Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;-><init>(Lcom/tkay/network/adx/AdxTYBannerAdapter$1;Lcom/tkay/core/common/f/h;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/d/a;->a(Lcom/tkay/basead/e/a;)V

    .line 115
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->c(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/basead/d/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/basead/d/a;->a()Landroid/view/View;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->a(Lcom/tkay/network/adx/AdxTYBannerAdapter;Landroid/view/View;)Landroid/view/View;

    .line 117
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->m(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 118
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->n(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 120
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->o(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const-string v1, ""

    const-string v2, "Adx bannerView = null"

    invoke-interface {v0, v1, v2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final onAdDataLoaded()V
    .locals 1

    .line 61
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->a(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 62
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->b(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdDataLoaded()V

    :cond_0
    return-void
.end method

.method public final onAdLoadFailed(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 128
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->p(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 129
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->q(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->b()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
