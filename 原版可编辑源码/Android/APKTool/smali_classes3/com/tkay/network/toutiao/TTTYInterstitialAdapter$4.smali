.class final Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTFullVideoObject$FullVideoVsInteractionListener;


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

    .line 177
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClose()V
    .locals 1

    .line 201
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->v(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 202
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->w(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    :cond_0
    return-void
.end method

.method public final onShow()V
    .locals 2

    .line 181
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->p(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 182
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->q(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

    .line 185
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iget v0, v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->b:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    .line 186
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->r(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 187
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->s(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoStart()V

    :cond_1
    return-void
.end method

.method public final onSkippedVideo()V
    .locals 1

    .line 215
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->z(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)I

    return-void
.end method

.method public final onVideoBarClick()V
    .locals 1

    .line 194
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->t(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 195
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->u(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_0
    return-void
.end method

.method public final onVideoComplete()V
    .locals 1

    .line 208
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->x(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 209
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->y(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoEnd()V

    :cond_0
    return-void
.end method
