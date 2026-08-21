.class public Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;
.super Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;


# instance fields
.field private final h:Ljava/lang/String;

.field private i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 18
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;-><init>()V

    const-string v0, "BannerJSBridge"

    .line 19
    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->h:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 199
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 200
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->cai(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public click(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 78
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 79
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->click(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 221
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 222
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public getNetstat(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 177
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 178
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->getNetstat(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 210
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 211
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->gial(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 155
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 156
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 133
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 134
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public init(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 65
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 66
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->init(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public initialize(Landroid/content/Context;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 1

    .line 25
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->initialize(Landroid/content/Context;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    .line 28
    :try_start_0
    instance-of v0, p1, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 29
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    return-void

    .line 31
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    instance-of p1, p1, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz p1, :cond_1

    .line 32
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public install(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 166
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 167
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->install(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public onJSBridgeConnect(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 43
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 44
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->onJSBridgeConnect(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 188
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 189
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->openURL(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 54
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 55
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public reportUrls(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 122
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 123
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->reportUrls(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public resetCountdown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 144
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 145
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->resetCountdown(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public sendImpressions(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 111
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 112
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->sendImpressions(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 89
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 90
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 100
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    if-eqz v0, :cond_0

    .line 101
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/bridge/BannerJSPlugin;->i:Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/IBannerJSBridge;->triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method
