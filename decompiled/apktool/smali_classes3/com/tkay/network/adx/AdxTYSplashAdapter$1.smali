.class final Lcom/tkay/network/adx/AdxTYSplashAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/adx/AdxTYSplashAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/adx/AdxTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/adx/AdxTYSplashAdapter;)V
    .locals 0

    .line 41
    iput-object p1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$1;->a:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdCacheLoaded()V
    .locals 2

    .line 51
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$1;->a:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    iget-object v1, v0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    invoke-static {v1}, Lcom/tkay/basead/b;->a(Lcom/tkay/basead/d/b;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/network/adx/AdxTYSplashAdapter;->c:Ljava/util/Map;

    .line 52
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$1;->a:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->c(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 53
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$1;->a:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->d(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_0
    return-void
.end method

.method public final onAdDataLoaded()V
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$1;->a:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->a(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 45
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$1;->a:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->b(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdDataLoaded()V

    :cond_0
    return-void
.end method

.method public final onAdLoadFailed(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 59
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$1;->a:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->e(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 60
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$1;->a:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->f(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->b()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
