.class public Lcom/tkay/expressad/splash/js/SplashJs;
.super Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;


# static fields
.field private static h:Ljava/lang/String; = "SplashJs"


# instance fields
.field private i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;-><init>()V

    return-void
.end method


# virtual methods
.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 100
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->cai(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 131
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 132
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/tkay/expressad/splash/js/SplashJsUtils;->getFileInfo(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 135
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    return-void
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 106
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 107
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->gial(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 114
    :try_start_0
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 117
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 118
    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 119
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 120
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {p2}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, p1, v1, p2, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/e;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    nop

    :catchall_0
    :cond_0
    return-void
.end method

.method public increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 163
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/tkay/expressad/splash/js/SplashJsUtils;->increaseOfferFrequence(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 165
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    return-void
.end method

.method public init(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 35
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->init(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public initialize(Landroid/content/Context;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 22
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->initialize(Landroid/content/Context;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    .line 24
    :try_start_0
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    instance-of p1, p1, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz p1, :cond_0

    .line 25
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public install(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 78
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->install(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onJSBridgeConnect(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 172
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 173
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->onJSBridgeConnect(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 92
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 93
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->openURL(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public pauseCountDown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 188
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 189
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->pauseCountDown(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 59
    :try_start_0
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 60
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "isReady"

    const/4 v1, 0x1

    .line 61
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    .line 62
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 63
    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 64
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 65
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/e;->readyState(Landroid/webkit/WebView;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    nop

    :catchall_0
    :cond_0
    return-void
.end method

.method public reportUrls(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 153
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 154
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->reportUrls(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public resetCountdown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 86
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->resetCountdown(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public resumeCountDown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 199
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 200
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->resumeCountDown(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public sendImpressions(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 142
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 143
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->sendImpressions(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 43
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJs;->i:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 51
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
