.class final Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;


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

    .line 262
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClicked(Landroid/view/View;I)V
    .locals 0

    .line 275
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->F(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 276
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->G(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_0
    return-void
.end method

.method public final onDismiss()V
    .locals 1

    .line 265
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->D(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 266
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->E(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    .line 268
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->A(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/bykv/vk/openvk/TTNtExpressObject;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 269
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->A(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/bykv/vk/openvk/TTNtExpressObject;

    move-result-object v0

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtExpressObject;->destroy()V

    :cond_1
    return-void
.end method

.method public final onRenderFail(Landroid/view/View;Ljava/lang/String;I)V
    .locals 0

    return-void
.end method

.method public final onRenderSuccess(Landroid/view/View;FF)V
    .locals 0

    return-void
.end method

.method public final onShow(Landroid/view/View;I)V
    .locals 0

    .line 282
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->H(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 283
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->I(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

    :cond_0
    return-void
.end method
