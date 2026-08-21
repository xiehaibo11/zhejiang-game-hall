.class final Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfNative$BnVfListener;


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

    .line 54
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onBnVbLoad(Lcom/bykv/vk/openvk/TTBnObject;)V
    .locals 2

    const-string v0, ""

    if-nez p1, :cond_0

    .line 63
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    const-string v1, "TTAD is null!"

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 66
    :cond_0
    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTBnObject;->getBannerView()Landroid/view/View;

    move-result-object v1

    if-nez v1, :cond_1

    .line 68
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    const-string v1, "TTBannerView is null!"

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 72
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iput-object p1, v0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->j:Lcom/bykv/vk/openvk/TTBnObject;

    .line 75
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->o:Lcom/bykv/vk/openvk/TTAppDownloadListener;

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/TTBnObject;->setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V

    .line 77
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iput-object v1, v0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->c:Landroid/view/View;

    .line 78
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->c:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1$1;-><init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;)V

    invoke-virtual {v0, v1}, Landroid/view/ViewTreeObserver;->addOnPreDrawListener(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V

    .line 104
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->l:Lcom/bykv/vk/openvk/TTBnObject$AdInteractionListener;

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/TTBnObject;->setBannerInteractionListener(Lcom/bykv/vk/openvk/TTBnObject$AdInteractionListener;)V

    .line 106
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->a(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 107
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->b(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_2
    return-void
.end method

.method public final onError(ILjava/lang/String;)V
    .locals 1

    .line 57
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
