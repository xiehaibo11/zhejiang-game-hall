.class final Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfNative$RdVideoVfListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onError(ILjava/lang/String;)V
    .locals 1

    .line 51
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onRdVideoCached()V
    .locals 0

    return-void
.end method

.method public final onRdVideoCached(Lcom/bykv/vk/openvk/TTRdVideoObject;)V
    .locals 3

    .line 62
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0, p1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;Lcom/bykv/vk/openvk/TTRdVideoObject;)Lcom/bykv/vk/openvk/TTRdVideoObject;

    .line 64
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/bykv/vk/openvk/TTRdVideoObject;

    move-result-object p1

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTRdVideoObject;->getMediaExtraInfo()Ljava/util/Map;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 66
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->b(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v0

    if-nez v0, :cond_0

    .line 67
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    new-instance v1, Ljava/util/HashMap;

    const/4 v2, 0x3

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    invoke-static {v0, v1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;Ljava/util/Map;)Ljava/util/Map;

    .line 69
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->b(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 72
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 75
    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    iget-boolean p1, p1, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->d:Z

    if-eqz p1, :cond_2

    .line 77
    :try_start_1
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->b(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/bykv/vk/openvk/TTRdVideoObject;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    iget-object v2, v2, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    invoke-virtual {p1, v0, v1, v2}, Lcom/tkay/network/toutiao/TTTYInitManager;->a(Ljava/util/Map;Lcom/bykv/vk/openvk/TTClientBidding;Lcom/tkay/core/api/TYBiddingListener;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    return-void

    .line 82
    :cond_2
    :try_start_2
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->c(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 83
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->d(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :cond_3
    return-void

    :catchall_2
    move-exception p1

    .line 86
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final onRdVideoVrLoad(Lcom/bykv/vk/openvk/TTRdVideoObject;)V
    .locals 0

    .line 95
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->e(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 96
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->f(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdDataLoaded()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 99
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method
