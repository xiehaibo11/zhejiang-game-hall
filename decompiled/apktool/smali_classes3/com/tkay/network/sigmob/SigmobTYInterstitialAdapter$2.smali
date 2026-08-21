.class final Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/windad/interstitial/WindInterstitialAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)V
    .locals 0

    .line 119
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onInterstitialAdClicked(Ljava/lang/String;)V
    .locals 1

    .line 171
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 172
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->l(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 173
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->m(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_0
    return-void
.end method

.method public final onInterstitialAdClosed(Ljava/lang/String;)V
    .locals 1

    .line 180
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 181
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->n(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 182
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->o(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    :cond_0
    return-void
.end method

.method public final onInterstitialAdLoadError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 1

    .line 189
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    if-eqz p1, :cond_0

    .line 191
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, v0, p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onInterstitialAdLoadSuccess(Ljava/lang/String;)V
    .locals 4

    .line 122
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 123
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->c(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->d(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 124
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    .line 125
    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->d(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->getEcpm()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    iget-object v1, v1, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    .line 126
    invoke-static {v2}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->d(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    move-result-object v2

    const/4 v3, 0x0

    .line 124
    invoke-static {p1, v0, v1, v2, v3}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->onC2SBiddingResultWithCache(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYBiddingListener;Ljava/lang/Object;Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 129
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->e(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 130
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->f(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_1
    return-void
.end method

.method public final onInterstitialAdPlayEnd(Ljava/lang/String;)V
    .locals 1

    .line 162
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 163
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->j(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 164
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->k(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoEnd()V

    :cond_0
    return-void
.end method

.method public final onInterstitialAdPlayError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 2

    .line 197
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 198
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p2}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->p(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 199
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p2}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->q(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, v0, p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onInterstitialAdPlayStart(Ljava/lang/String;)V
    .locals 1

    .line 147
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 153
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 154
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

    .line 155
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->i(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoStart()V

    :cond_0
    return-void
.end method

.method public final onInterstitialAdPreLoadFail(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onInterstitialAdPreLoadSuccess(Ljava/lang/String;)V
    .locals 0

    return-void
.end method
