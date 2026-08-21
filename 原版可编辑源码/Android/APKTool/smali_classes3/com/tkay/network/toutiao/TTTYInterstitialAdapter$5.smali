.class final Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)V
    .locals 0

    .line 221
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onError(ILjava/lang/String;)V
    .locals 1

    .line 224
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onNtExpressVnLoad(Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/TTNtExpressObject;",
            ">;)V"
        }
    .end annotation

    .line 229
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    const/4 v1, 0x0

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-static {v0, p1}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->a(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;Lcom/bykv/vk/openvk/TTNtExpressObject;)Lcom/bykv/vk/openvk/TTNtExpressObject;

    .line 230
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->A(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/bykv/vk/openvk/TTNtExpressObject;

    move-result-object p1

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->render()V

    .line 232
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->A(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/bykv/vk/openvk/TTNtExpressObject;

    move-result-object p1

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->getMediaExtraInfo()Ljava/util/Map;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 234
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->b(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Ljava/util/Map;

    move-result-object v0

    if-nez v0, :cond_0

    .line 235
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    new-instance v2, Ljava/util/HashMap;

    const/4 v3, 0x3

    invoke-direct {v2, v3}, Ljava/util/HashMap;-><init>(I)V

    invoke-static {v0, v2}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->a(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;Ljava/util/Map;)Ljava/util/Map;

    .line 237
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->b(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 240
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 243
    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iget-boolean p1, p1, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->h:Z

    if-eqz p1, :cond_2

    .line 245
    :try_start_1
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->b(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Ljava/util/Map;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v1}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->A(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/bykv/vk/openvk/TTNtExpressObject;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iget-object v2, v2, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    invoke-virtual {p1, v0, v1, v2}, Lcom/tkay/network/toutiao/TTTYInitManager;->a(Ljava/util/Map;Lcom/bykv/vk/openvk/TTClientBidding;Lcom/tkay/core/api/TYBiddingListener;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    return-void

    .line 251
    :cond_2
    :try_start_2
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->B(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 252
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->C(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    new-array v0, v1, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :cond_3
    return-void

    :catchall_2
    move-exception p1

    .line 255
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method
