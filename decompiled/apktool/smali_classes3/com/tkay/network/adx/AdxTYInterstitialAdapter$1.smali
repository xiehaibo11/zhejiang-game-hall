.class final Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;
.super Lcom/tkay/basead/e/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->show(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;Lcom/tkay/core/common/f/h;)V
    .locals 0

    .line 45
    iput-object p1, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-direct {p0, p2}, Lcom/tkay/basead/e/f;-><init>(Lcom/tkay/core/common/f/h;)V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 88
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 90
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 92
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->k(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 93
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->l(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_1
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->i(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 82
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->j(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 73
    invoke-super {p0}, Lcom/tkay/basead/e/f;->onAdShow()V

    .line 74
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->g(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 75
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->h(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->m(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 100
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->n(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

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

    .line 62
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->e(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 63
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->f(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

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

    .line 55
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->c(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 56
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->d(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoAdPlayStart()V
    .locals 1

    .line 48
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->a(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 49
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYInterstitialAdapter$1;->b:Lcom/tkay/network/adx/AdxTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYInterstitialAdapter;->b(Lcom/tkay/network/adx/AdxTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoStart()V

    :cond_0
    return-void
.end method
