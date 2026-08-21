.class final Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/g;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->show(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)V
    .locals 0

    .line 116
    iput-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 154
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 156
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 158
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->p(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 159
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->q(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_1
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 147
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->n(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 148
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->o(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 140
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->l(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 141
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->m(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 0

    return-void
.end method

.method public final onRewarded()V
    .locals 0

    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 133
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->j(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 134
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->k(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->b()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onVideoAdPlayEnd()V
    .locals 1

    .line 126
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->h(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 127
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->i(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoAdPlayStart()V
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->f(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 120
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;->g(Lcom/tkay/network/myoffer/MyOfferTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoStart()V

    :cond_0
    return-void
.end method
