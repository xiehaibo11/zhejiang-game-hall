.class public Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;
.super Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;
.source "BannerJSPlugin.java"


# instance fields
.field private final a:Ljava/lang/String;

.field private b:Lcom/mbridge/msdk/mbjscommon/bridge/c;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 19
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;-><init>()V

    const-string v0, "BannerJSBridge"

    .line 20
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->a:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "cai"

    const-string v1, "BannerJSBridge"

    .line 199
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 200
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 201
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->p(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 204
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public click(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "click"

    const-string v1, "BannerJSBridge"

    .line 77
    :try_start_0
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->addDownloaderListener(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 78
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 79
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 80
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 83
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "getFileInfo"

    const-string v1, "BannerJSBridge"

    .line 221
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 222
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 223
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->j(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 226
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public getNetstat(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "getNetstat"

    const-string v1, "BannerJSBridge"

    .line 177
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 179
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->o(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 182
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "gial"

    const-string v1, "BannerJSBridge"

    .line 210
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 211
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 212
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->q(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 215
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "handlerH5Exception"

    const-string v1, "BannerJSBridge"

    .line 155
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 156
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 157
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->m(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 160
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "increaseOfferFrequence"

    const-string v1, "BannerJSBridge"

    .line 133
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 134
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 135
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->l(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 138
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public init(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "init"

    const-string v1, "BannerJSBridge"

    .line 65
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 66
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 67
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 70
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public initialize(Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    .locals 1

    .line 26
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->initialize(Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    .line 29
    :try_start_0
    instance-of v0, p1, Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v0, :cond_0

    .line 30
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/bridge/c;

    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    goto :goto_0

    .line 32
    :cond_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    instance-of p1, p1, Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz p1, :cond_1

    .line 33
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/mbjscommon/bridge/c;

    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "BannerJSBridge"

    const-string v0, "initialize"

    .line 37
    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public install(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "install"

    const-string v1, "BannerJSBridge"

    .line 166
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 167
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 168
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->g(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 171
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public onJSBridgeConnect(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "onJSBridgeConnect"

    const-string v1, "BannerJSBridge"

    .line 43
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 44
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 45
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->f(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 48
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "openURL"

    const-string v1, "BannerJSBridge"

    .line 188
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 189
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 190
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->n(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 193
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "readyStatus"

    const-string v1, "BannerJSBridge"

    .line 54
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 55
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 56
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 59
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public reportUrls(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "reportUrls"

    const-string v1, "BannerJSBridge"

    .line 122
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 123
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 124
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->k(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 127
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public resetCountdown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "resetCountdown"

    const-string v1, "BannerJSBridge"

    .line 144
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 145
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 146
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->h(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 149
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public sendImpressions(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "sendImpressions"

    const-string v1, "BannerJSBridge"

    .line 111
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 112
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 113
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->i(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 116
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public sendNoticeAndCallBackClick(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 232
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->install(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "toggleCloseBtn"

    const-string v1, "BannerJSBridge"

    .line 89
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 90
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 91
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->d(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 94
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "triggerCloseBtn"

    const-string v1, "BannerJSBridge"

    .line 100
    :try_start_0
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    if-eqz v2, :cond_0

    .line 102
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/bridge/BannerJSPlugin;->b:Lcom/mbridge/msdk/mbjscommon/bridge/c;

    invoke-interface {v2, p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/c;->e(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 105
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method
