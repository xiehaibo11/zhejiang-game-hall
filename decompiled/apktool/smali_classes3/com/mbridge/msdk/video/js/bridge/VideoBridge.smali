.class public Lcom/mbridge/msdk/video/js/bridge/VideoBridge;
.super Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;
.source "VideoBridge.java"


# instance fields
.field private b:Landroid/os/Handler;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 15
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;-><init>()V

    .line 16
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    return-void
.end method

.method static synthetic A(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->loadads(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic B(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic C(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->reportUrls(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic D(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->createWebview(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic E(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->createView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic F(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->createPlayerView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic G(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->createSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic H(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->destroyComponent(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic I(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getComponentOptions(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic J(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setViewRect(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic K(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->removeFromSuperView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic L(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->appendSubView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic M(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->appendViewTo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic N(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->onlyAppendSubView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic O(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->onlyAppendViewTo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic P(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->bringViewToFront(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic Q(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->hideView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic R(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->showView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic S(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setViewBgColor(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic T(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setViewAlpha(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic U(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setViewScale(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic V(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->insertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic W(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->insertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic X(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->onlyInsertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic Y(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->onlyInsertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic Z(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->webviewLoad(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->init(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aA(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->clearAllCache(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aB(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getCutout(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aC(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getAppSetting(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aD(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getRewardSetting(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aE(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getRewardUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aF(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aG(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getEncryptPrice(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aa(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->webviewReload(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ab(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->webviewGoBack(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ac(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->webviewGoForward(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ad(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerPlay(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ae(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerPause(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic af(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerResume(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ag(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerStop(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ah(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerUpdateFrame(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ai(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerMute(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aj(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerUnmute(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ak(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerGetMuteState(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic al(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerSetSource(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic am(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerSetRenderType(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic an(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->preloadSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ao(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->closeAd(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ap(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->broadcast(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aq(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->ivRewardAdsWithoutVideo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ar(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setSubPlayTemplateInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic as(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->webviewFireEvent(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic at(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic au(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->handleNativeObject(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic av(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->loadingResourceStatus(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aw(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->createNativeEC(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ax(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setCacheItem(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic ay(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->removeCacheItem(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic az(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getAllCache(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->click(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->statistics(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic e(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->showVideoLocation(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->soundOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic g(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->videoOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic h(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->closeVideoOperte(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic i(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->progressOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic j(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->progressBarOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic k(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getCurrentProgress(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic l(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->showVideoClickView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic m(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setScaleFitXY(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic n(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic o(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic p(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic q(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->isSystemResume(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic r(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->readyStatus(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic s(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playVideoFinishOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic t(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->openURL(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic u(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->cai(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic v(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->gial(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic w(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->showAlertView(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic x(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->closeWeb(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic y(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getSDKInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic z(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public appendSubView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 559
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 560
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->appendSubView(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 562
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$32;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$32;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public appendViewTo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 573
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 574
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->appendViewTo(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 576
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$33;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$33;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public bringViewToFront(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 614
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 615
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->bringViewToFront(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 617
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$37;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$37;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public broadcast(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 996
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 997
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->broadcast(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 999
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$65;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$65;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 301
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 302
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->cai(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 304
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$14;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$14;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public clearAllCache(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1150
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1151
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->clearAllCache(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1153
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$77;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$77;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public click(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 34
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 35
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->click(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 37
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$12;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$12;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public closeAd(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 982
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 983
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->closeAd(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 985
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$64;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$64;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public closeVideoOperte(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 118
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 119
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->closeVideoOperte(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 121
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$78;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$78;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public closeWeb(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 343
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 344
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->closeWeb(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 346
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$17;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$17;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    .line 352
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "type"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public createNativeEC(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1094
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1095
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->createNativeEC(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1097
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$73;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$73;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public createPlayerView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 463
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 464
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->createPlayerView(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 466
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$26;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$26;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public createSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 477
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 478
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->createSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 480
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$27;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$27;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public createView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 448
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 449
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->createView(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 451
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$25;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$25;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public createWebview(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 434
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 435
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->createWebview(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 437
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$24;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$24;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public destroyComponent(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 497
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 498
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->destroyComponent(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 500
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$28;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$28;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public getAllCache(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1136
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1137
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getAllCache(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1139
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$76;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$76;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public getAppSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1178
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1179
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getAppSetting(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1181
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$80;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$80;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public getComponentOptions(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 511
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 512
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getComponentOptions(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 514
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$29;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$29;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public getCurrentProgress(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 160
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 161
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getCurrentProgress(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 163
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$3;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public getCutout(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1164
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1165
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getCutout(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1167
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$79;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$79;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public getEncryptPrice(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1235
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1236
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getEncryptPrice(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1238
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$84;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$84;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 372
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 373
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 375
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$19;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$19;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public getRewardSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1192
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1193
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getRewardSetting(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1195
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$81;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$81;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public getRewardUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1206
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1207
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getRewardUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1209
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$82;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$82;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public getSDKInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 358
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 359
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getSDKInfo(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 361
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$18;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$18;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public getUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1220
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1221
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->getUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1223
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$83;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$83;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 315
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 316
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->gial(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 318
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$15;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$15;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public handleNativeObject(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1066
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1067
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->handleNativeObject(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1069
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$71;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$71;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 230
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 231
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 233
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$8;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$8;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public hideView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 628
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 629
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->hideView(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 631
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$38;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$38;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1052
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1053
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1055
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$70;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$70;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public init(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 20
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 21
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->init(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 23
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$1;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public insertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 698
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 699
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->insertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 701
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$43;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$43;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public insertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 712
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 713
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->insertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 715
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$44;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$44;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public isSystemResume(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 244
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 245
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->isSystemResume(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 247
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$9;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$9;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public ivRewardAdsWithoutVideo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1010
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1011
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->ivRewardAdsWithoutVideo(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1013
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$66;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$66;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public loadads(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 386
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 387
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->loadads(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 389
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$20;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$20;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public loadingResourceStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1080
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1081
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->loadingResourceStatus(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1083
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$72;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$72;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 202
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 203
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 205
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$6;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$6;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public onlyAppendSubView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 586
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 587
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->onlyAppendSubView(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 589
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$35;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$35;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public onlyAppendViewTo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 600
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 601
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->onlyAppendViewTo(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 603
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$36;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$36;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public onlyInsertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 725
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 726
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->onlyInsertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 728
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$46;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$46;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public onlyInsertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 739
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 740
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->onlyInsertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 742
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$47;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$47;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 287
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 288
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->openURL(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 290
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$13;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$13;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public playVideoFinishOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 273
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 274
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playVideoFinishOperate(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 276
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$11;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$11;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public playerGetMuteState(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 919
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 920
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerGetMuteState(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 922
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$60;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$60;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public playerMute(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 891
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 892
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerMute(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 894
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$58;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$58;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public playerPause(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 835
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 836
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerPause(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 838
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$53;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$53;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public playerPlay(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 821
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 822
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerPlay(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 824
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$52;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$52;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public playerResume(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 849
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 850
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerResume(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 852
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$54;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$54;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public playerSetRenderType(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 947
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 948
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerSetRenderType(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 950
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$62;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$62;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public playerSetSource(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 933
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 934
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerSetSource(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 936
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$61;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$61;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public playerStop(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 863
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 864
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerStop(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 866
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$55;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$55;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public playerUnmute(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 905
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 906
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerUnmute(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 908
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$59;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$59;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public playerUpdateFrame(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 877
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 878
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->playerUpdateFrame(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 880
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$57;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$57;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public preloadSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 967
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 968
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->preloadSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 970
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$63;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$63;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public progressBarOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 146
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 147
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->progressBarOperate(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 149
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$2;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public progressOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 132
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 133
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->progressOperate(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 135
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$85;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$85;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 400
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 401
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 403
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$21;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$21;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string v0, "JS-Video-Brigde"

    const-string v1, "VIDEOBridge readyStatus"

    .line 258
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 259
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 260
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->readyStatus(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 262
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$10;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$10;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public removeCacheItem(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1122
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1123
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->removeCacheItem(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1125
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$75;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$75;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public removeFromSuperView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 545
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 546
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->removeFromSuperView(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 548
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$31;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$31;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public reportUrls(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 414
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 415
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->reportUrls(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 417
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$22;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$22;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public setCacheItem(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1108
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1109
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setCacheItem(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1111
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$74;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$74;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public setScaleFitXY(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 188
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 189
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setScaleFitXY(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 191
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$5;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$5;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public setSubPlayTemplateInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1024
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1025
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setSubPlayTemplateInfo(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1027
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$68;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$68;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public setViewAlpha(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 670
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 671
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setViewAlpha(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 673
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$41;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$41;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public setViewBgColor(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 656
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 657
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setViewBgColor(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 659
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$40;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$40;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public setViewRect(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 531
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 532
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setViewRect(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 534
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$30;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$30;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public setViewScale(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 684
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 685
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->setViewScale(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 687
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$42;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$42;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public showAlertView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 329
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 330
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->showAlertView(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 332
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$16;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$16;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public showVideoClickView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 174
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 175
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->showVideoClickView(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 177
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$4;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public showVideoLocation(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 76
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 77
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->showVideoLocation(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 79
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$45;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$45;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public showView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 642
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 643
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->showView(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 645
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$39;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$39;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public soundOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 90
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 91
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->soundOperate(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 93
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$56;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$56;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public statistics(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 48
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 49
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->statistics(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 51
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$23;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$23;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 216
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 217
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 219
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$7;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$7;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 62
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 63
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 65
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$34;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$34;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public videoOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 104
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 105
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->videoOperate(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 107
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$67;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$67;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public webviewFireEvent(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1038
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1039
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->webviewFireEvent(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1041
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$69;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$69;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public webviewGoBack(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 787
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 788
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->webviewGoBack(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 790
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$50;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$50;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public webviewGoForward(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 801
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 802
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->webviewGoForward(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 804
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$51;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$51;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public webviewLoad(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 759
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 760
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->webviewLoad(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 762
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$48;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$48;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method public webviewReload(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 773
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 774
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->webviewReload(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 776
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/VideoBridge;->b:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$49;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/VideoBridge$49;-><init>(Lcom/mbridge/msdk/video/js/bridge/VideoBridge;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method
