.class public Lcom/mbridge/msdk/splash/js/SplashJs;
.super Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;
.source "SplashJs.java"


# static fields
.field private static a:Ljava/lang/String; = "SplashJs"


# instance fields
.field private b:Lcom/mbridge/msdk/splash/js/b;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;-><init>()V

    return-void
.end method


# virtual methods
.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 98
    sget-object v0, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "cai"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v0, :cond_0

    .line 100
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->f(Ljava/lang/Object;Ljava/lang/String;)V

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

    invoke-static {p1, v0}, Lcom/mbridge/msdk/splash/js/c;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 135
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 105
    sget-object v0, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "gial"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 106
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v0, :cond_0

    .line 107
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->g(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 114
    :try_start_0
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 117
    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 118
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 119
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 120
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {p2}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, p1, v1, p2, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/d;->a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 125
    sget-object p2, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    const-string v0, "handlerH5Exception"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 163
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/mbridge/msdk/splash/js/c;->b(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 165
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public init(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 33
    sget-object v0, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "initialize"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 34
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v0, :cond_0

    .line 35
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public initialize(Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    .locals 1

    .line 22
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->initialize(Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    .line 24
    :try_start_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    instance-of p1, p1, Lcom/mbridge/msdk/splash/js/b;

    if-eqz p1, :cond_0

    .line 25
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/splash/js/b;

    iput-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 28
    sget-object p2, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    const-string v0, "initialize"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public install(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 76
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/splash/js/SplashJs;->addDownloaderListener(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 77
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v0, :cond_0

    .line 78
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->d(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onJSBridgeConnect(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string v0, "onJSBridgeConnect"

    .line 171
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 172
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v1, :cond_0

    .line 173
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->k(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 176
    sget-object p2, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 91
    sget-object v0, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "openURL"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 92
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v0, :cond_0

    .line 93
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->e(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public pauseCountDown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string v0, "pauseCountDown"

    .line 187
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 188
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v1, :cond_0

    .line 189
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->l(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 192
    sget-object p2, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 59
    :try_start_0
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 60
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "isReady"

    const/4 v1, 0x1

    .line 61
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    .line 62
    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 63
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 64
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 65
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/d;->a(Landroid/webkit/WebView;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 70
    sget-object p2, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    const-string v0, "readyStatus"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public reportUrls(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string v0, "reportUrls"

    .line 152
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 153
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v1, :cond_0

    .line 154
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->j(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 157
    sget-object p2, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public resetCountdown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 84
    sget-object v0, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "resetCountdown"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 85
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v0, :cond_0

    .line 86
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->h(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public resumeCountDown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string v0, "resumeCountDown"

    .line 198
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 199
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v1, :cond_0

    .line 200
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->m(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 203
    sget-object p2, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public sendImpressions(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string v0, "sendImpressions"

    .line 141
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 142
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v1, :cond_0

    .line 143
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->i(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 146
    sget-object p2, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public sendNoticeAndCallBackClick(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 182
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/splash/js/SplashJs;->install(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 41
    sget-object v0, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "toggleCloseBtn"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 42
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v0, :cond_0

    .line 43
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->b(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 49
    sget-object v0, Lcom/mbridge/msdk/splash/js/SplashJs;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "triggerCloseBtn"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 50
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/SplashJs;->b:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v0, :cond_0

    .line 51
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/splash/js/b;->c(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
