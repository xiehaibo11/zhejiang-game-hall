.class public Lcom/tkay/expressad/video/signal/communication/VideoBridge;
.super Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;


# instance fields
.field private j:Landroid/os/Handler;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 18
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;-><init>()V

    .line 19
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    return-void
.end method

.method static synthetic A(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->loadads(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic B(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic C(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->reportUrls(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic D(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->createWebview(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic E(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->createView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic F(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->createPlayerView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic G(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->createSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic H(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->destroyComponent(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic I(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getComponentOptions(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic J(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setViewRect(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic K(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->removeFromSuperView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic L(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->appendSubView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic M(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->appendViewTo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic N(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->onlyAppendSubView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic O(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->onlyAppendViewTo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic P(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->bringViewToFront(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic Q(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->hideView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic R(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->showView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic S(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setViewBgColor(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic T(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setViewAlpha(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic U(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setViewScale(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic V(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->insertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic W(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->insertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic X(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->onlyInsertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic Y(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->onlyInsertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic Z(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->webviewLoad(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->init(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aA(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->clearAllCache(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aB(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getCutout(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aC(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getAppSetting(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aD(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getRewardSetting(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aE(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getRewardUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aF(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aG(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getEncryptPrice(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aa(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->webviewReload(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ab(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->webviewGoBack(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ac(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->webviewGoForward(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ad(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerPlay(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ae(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerPause(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic af(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerResume(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ag(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerStop(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ah(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerUpdateFrame(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ai(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerMute(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aj(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerUnmute(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ak(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerGetMuteState(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic al(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerSetSource(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic am(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerSetRenderType(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic an(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->preloadSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ao(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->closeAd(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ap(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->broadcast(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aq(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->ivRewardAdsWithoutVideo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ar(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setSubPlayTemplateInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic as(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->webviewFireEvent(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic at(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic au(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->handleNativeObject(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic av(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->loadingResourceStatus(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aw(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->createNativeEC(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ax(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setCacheItem(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ay(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->removeCacheItem(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic az(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getAllCache(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->click(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->statistics(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic e(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->showVideoLocation(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic f(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->soundOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic g(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->videoOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic h(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->closeVideoOperte(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic i(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->progressOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic j(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->progressBarOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic k(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getCurrentProgress(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic l(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->showVideoClickView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic m(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setScaleFitXY(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic n(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic o(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic p(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic q(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->isSystemResume(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic r(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->readyStatus(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic s(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playVideoFinishOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic t(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->openURL(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic u(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->cai(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic v(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->gial(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic w(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->showAlertView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic x(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->closeWeb(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic y(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getSDKInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic z(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public appendSubView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 565
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 566
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->appendSubView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 568
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$38;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$38;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public appendViewTo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 579
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 580
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->appendViewTo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 582
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$39;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$39;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public bringViewToFront(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 621
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 622
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->bringViewToFront(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 624
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$42;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$42;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public broadcast(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1004
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1005
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->broadcast(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1007
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$68;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$68;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 307
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 308
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->cai(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 310
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$21;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$21;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public clearAllCache(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1158
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1159
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->clearAllCache(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1161
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$79;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$79;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public click(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 40
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 41
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->click(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 43
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$2;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public closeAd(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 990
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 991
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->closeAd(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 993
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$67;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$67;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public closeVideoOperte(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 124
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 125
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->closeVideoOperte(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 127
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$8;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$8;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public closeWeb(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 349
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 350
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->closeWeb(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 352
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$24;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$24;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public createNativeEC(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1102
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1103
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->createNativeEC(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1105
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$75;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$75;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public createPlayerView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 469
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 470
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->createPlayerView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 472
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$32;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$32;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public createSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 483
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 484
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->createSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 486
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$33;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$33;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public createView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 454
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 455
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->createView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 457
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$31;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$31;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public createWebview(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 440
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 441
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->createWebview(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 443
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$30;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$30;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public destroyComponent(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 503
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 504
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->destroyComponent(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 506
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$34;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$34;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public feedbackLayoutOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 1257
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->feedbackLayoutOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public feedbackOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 1262
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->feedbackOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public feedbackPopupOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 1267
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->feedbackPopupOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public getAllCache(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1144
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1145
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getAllCache(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1147
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$78;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$78;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public getAppSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1186
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1187
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getAppSetting(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1189
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$81;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$81;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public getComponentOptions(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 517
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 518
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getComponentOptions(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 520
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$35;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$35;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public getCurrentProgress(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 166
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 167
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getCurrentProgress(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 169
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$11;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$11;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public getCutout(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1172
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1173
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getCutout(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1175
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$80;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$80;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public getEncryptPrice(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1243
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1244
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getEncryptPrice(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1246
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$85;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$85;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 378
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 379
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 381
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$26;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$26;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public getRewardSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1200
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1201
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getRewardSetting(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1203
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$82;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$82;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public getRewardUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1214
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1215
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getRewardUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1217
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$83;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$83;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public getSDKInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 364
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 365
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getSDKInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 367
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$25;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$25;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public getUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1228
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1229
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->getUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1231
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$84;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$84;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 321
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 322
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->gial(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 324
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$22;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$22;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public handleNativeObject(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1074
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1075
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->handleNativeObject(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1077
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$73;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$73;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 236
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 237
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 239
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$16;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$16;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public hideView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 635
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 636
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->hideView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 638
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$43;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$43;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1060
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1061
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1063
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$72;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$72;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public init(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 23
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 24
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->init(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 26
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$1;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public insertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 705
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 706
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->insertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 708
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$48;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$48;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public insertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 719
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 720
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->insertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 722
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$49;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$49;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public isSystemResume(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 250
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 251
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->isSystemResume(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 253
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$17;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$17;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public ivRewardAdsWithoutVideo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1018
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1019
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->ivRewardAdsWithoutVideo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1021
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$69;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$69;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public loadads(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 392
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 393
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->loadads(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 395
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$27;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$27;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public loadingResourceStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1088
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1089
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->loadingResourceStatus(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1091
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$74;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$74;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 208
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 209
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 211
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$14;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$14;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onlyAppendSubView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 593
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 594
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->onlyAppendSubView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 596
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$40;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$40;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onlyAppendViewTo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 607
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 608
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->onlyAppendViewTo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 610
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$41;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$41;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onlyInsertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 733
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 734
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->onlyInsertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 736
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$50;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$50;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onlyInsertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 747
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 748
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->onlyInsertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 750
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$51;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$51;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 293
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 294
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->openURL(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 296
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$20;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$20;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public playVideoFinishOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 279
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 280
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playVideoFinishOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 282
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$19;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$19;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public playerGetMuteState(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 927
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 928
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerGetMuteState(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 930
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$63;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$63;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public playerMute(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 899
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 900
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerMute(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 902
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$61;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$61;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public playerPause(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 843
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 844
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerPause(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 846
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$57;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$57;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public playerPlay(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 829
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 830
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerPlay(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 832
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$56;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$56;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public playerResume(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 857
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 858
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerResume(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 860
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$58;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$58;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public playerSetRenderType(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 955
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 956
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerSetRenderType(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 958
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$65;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$65;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public playerSetSource(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 941
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 942
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerSetSource(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 944
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$64;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$64;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public playerStop(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 871
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 872
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerStop(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 874
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$59;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$59;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public playerUnmute(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 913
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 914
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerUnmute(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 916
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$62;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$62;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public playerUpdateFrame(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 885
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 886
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->playerUpdateFrame(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 888
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$60;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$60;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public preloadSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 975
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 976
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->preloadSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 978
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$66;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$66;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public progressBarOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 152
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 153
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->progressBarOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 155
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$10;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$10;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public progressOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 138
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 139
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->progressOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 141
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$9;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$9;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 406
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 407
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 409
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$28;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$28;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 265
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 266
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->readyStatus(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 268
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$18;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$18;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public removeCacheItem(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1130
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1131
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->removeCacheItem(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1133
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$77;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$77;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public removeFromSuperView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 551
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 552
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->removeFromSuperView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 554
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$37;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$37;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public reportUrls(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 420
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 421
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->reportUrls(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 423
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$29;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$29;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public setCacheItem(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1116
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1117
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setCacheItem(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1119
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$76;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$76;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public setScaleFitXY(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 194
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 195
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setScaleFitXY(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 197
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$13;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$13;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public setSubPlayTemplateInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1032
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1033
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setSubPlayTemplateInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1035
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$70;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$70;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public setViewAlpha(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 677
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 678
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setViewAlpha(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 680
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$46;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$46;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public setViewBgColor(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 663
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 664
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setViewBgColor(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 666
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$45;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$45;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public setViewRect(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 537
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 538
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setViewRect(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 540
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$36;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$36;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public setViewScale(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 691
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 692
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->setViewScale(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 694
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$47;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$47;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public showAlertView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 335
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 336
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->showAlertView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 338
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$23;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$23;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public showVideoClickView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 180
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 181
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->showVideoClickView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 183
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$12;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$12;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public showVideoLocation(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 82
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 83
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->showVideoLocation(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 85
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$5;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$5;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public showView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 649
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 650
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->showView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 652
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$44;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$44;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public soundOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 96
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 97
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->soundOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 99
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$6;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$6;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public statistics(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 54
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 55
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->statistics(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 57
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$3;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 222
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 223
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 225
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$15;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$15;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 68
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 69
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 71
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$4;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public videoOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 110
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 111
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->videoOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 113
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$7;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$7;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public webviewFireEvent(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1046
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1047
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->webviewFireEvent(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1049
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$71;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$71;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public webviewGoBack(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 795
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 796
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->webviewGoBack(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 798
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$54;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$54;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public webviewGoForward(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 809
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 810
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->webviewGoForward(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 812
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$55;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$55;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public webviewLoad(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 767
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 768
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->webviewLoad(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 770
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$52;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$52;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public webviewReload(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 781
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 782
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->webviewReload(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 784
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/VideoBridge;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/VideoBridge$53;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/VideoBridge$53;-><init>(Lcom/tkay/expressad/video/signal/communication/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
