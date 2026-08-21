.class final Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTInteractionVi$AdInteractionListener;


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

    .line 95
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClicked()V
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->e(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 100
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->f(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_0
    return-void
.end method

.method public final onDismiss()V
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->i(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 114
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->j(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    :cond_0
    return-void
.end method

.method public final onShow()V
    .locals 1

    .line 106
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->g(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 107
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->h(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

    :cond_0
    return-void
.end method
