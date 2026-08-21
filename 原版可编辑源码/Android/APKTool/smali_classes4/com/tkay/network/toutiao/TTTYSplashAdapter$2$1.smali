.class final Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfNative$CSJSplashAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;)V
    .locals 0

    .line 196
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onSplashLoadFail(Lcom/bykv/vk/openvk/CSJAdError;)V
    .locals 3

    .line 204
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/bykv/vk/openvk/CSJAdError;->getCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/bykv/vk/openvk/CSJAdError;->getMsg()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSplashLoadSuccess()V
    .locals 0

    return-void
.end method

.method public final onSplashRenderFail(Lcom/bykv/vk/openvk/CSJSplashAd;Lcom/bykv/vk/openvk/CSJAdError;)V
    .locals 2

    .line 237
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2}, Lcom/bykv/vk/openvk/CSJAdError;->getCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2}, Lcom/bykv/vk/openvk/CSJAdError;->getMsg()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, v0, p2}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSplashRenderSuccess(Lcom/bykv/vk/openvk/CSJSplashAd;)V
    .locals 3

    .line 209
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iput-object p1, v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    .line 212
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/CSJSplashAd;->getMediaExtraInfo()Ljava/util/Map;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 214
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->a(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Ljava/util/Map;

    move-result-object v0

    if-nez v0, :cond_0

    .line 215
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    new-instance v1, Ljava/util/HashMap;

    const/4 v2, 0x3

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    invoke-static {v0, v1}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->a(Lcom/tkay/network/toutiao/TTTYSplashAdapter;Ljava/util/Map;)Ljava/util/Map;

    .line 217
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->a(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 220
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 223
    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iget-boolean p1, p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->i:Z

    if-eqz p1, :cond_2

    .line 225
    :try_start_1
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->a(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Ljava/util/Map;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object v1, v1, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iget-object v1, v1, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d:Lcom/bykv/vk/openvk/CSJSplashAd;

    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object v2, v2, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iget-object v2, v2, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    invoke-virtual {p1, v0, v1, v2}, Lcom/tkay/network/toutiao/TTTYInitManager;->a(Ljava/util/Map;Lcom/bykv/vk/openvk/TTClientBidding;Lcom/tkay/core/api/TYBiddingListener;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    return-void

    .line 229
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->b(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 230
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->c(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_3
    return-void
.end method
