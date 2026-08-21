.class final Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/g;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->show(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)V
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 88
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 90
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 92
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->k(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 93
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->l(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_1
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->i(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 82
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->j(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->g(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 75
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->h(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->m(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 100
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->n(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public final onRewarded()V
    .locals 0

    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 63
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->e(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 64
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->f(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

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

    .line 56
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->c(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 57
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->d(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoAdPlayStart()V
    .locals 1

    .line 49
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->a(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 50
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;->b(Lcom/tkay/network/onlineapi/OnlineApiTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoStart()V

    :cond_0
    return-void
.end method
