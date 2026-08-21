.class final Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/toutiao/TTTYBannerAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V
    .locals 0

    .line 158
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClicked(Landroid/view/View;I)V
    .locals 0

    .line 161
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->i(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 162
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->j(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClicked()V

    :cond_0
    return-void
.end method

.method public final onRenderFail(Landroid/view/View;Ljava/lang/String;I)V
    .locals 0

    .line 176
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p3, p2}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onRenderSuccess(Landroid/view/View;FF)V
    .locals 1

    .line 181
    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iput-object p1, p2, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->c:Landroid/view/View;

    .line 183
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->g(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/bykv/vk/openvk/TTNtExpressObject;

    move-result-object p1

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->getMediaExtraInfo()Ljava/util/Map;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 185
    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p2}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->m(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Ljava/util/Map;

    move-result-object p2

    if-nez p2, :cond_0

    .line 186
    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    new-instance p3, Ljava/util/HashMap;

    const/4 v0, 0x3

    invoke-direct {p3, v0}, Ljava/util/HashMap;-><init>(I)V

    invoke-static {p2, p3}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->a(Lcom/tkay/network/toutiao/TTTYBannerAdapter;Ljava/util/Map;)Ljava/util/Map;

    .line 188
    :cond_0
    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p2}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->m(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Ljava/util/Map;

    move-result-object p2

    invoke-interface {p2, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 191
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 194
    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    const/4 p2, 0x0

    iput-boolean p2, p1, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->h:Z

    .line 195
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iget-boolean p1, p1, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->i:Z

    if-eqz p1, :cond_2

    .line 197
    :try_start_1
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p2}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->m(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Ljava/util/Map;

    move-result-object p2

    iget-object p3, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p3}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->g(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/bykv/vk/openvk/TTNtExpressObject;

    move-result-object p3

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    invoke-virtual {p1, p2, p3, v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->a(Ljava/util/Map;Lcom/bykv/vk/openvk/TTClientBidding;Lcom/tkay/core/api/TYBiddingListener;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    return-void

    .line 201
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->n(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 202
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->o(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    new-array p2, p2, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_3
    return-void
.end method

.method public final onShow(Landroid/view/View;I)V
    .locals 0

    .line 168
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->k(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iget-boolean p1, p1, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->h:Z

    if-nez p1, :cond_0

    .line 169
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->l(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdShow()V

    .line 170
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    const/4 p2, 0x1

    iput-boolean p2, p1, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->h:Z

    :cond_0
    return-void
.end method
