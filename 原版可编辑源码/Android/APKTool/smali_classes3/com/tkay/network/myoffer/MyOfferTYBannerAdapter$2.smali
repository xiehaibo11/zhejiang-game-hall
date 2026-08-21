.class final Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->a(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)V
    .locals 0

    .line 93
    iput-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 111
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 113
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 115
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->l(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 116
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->m(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClicked()V

    :cond_1
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 104
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->j(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 105
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->k(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClose()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 97
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->h(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 98
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;->i(Lcom/tkay/network/myoffer/MyOfferTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdShow()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 0

    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 0

    return-void
.end method
