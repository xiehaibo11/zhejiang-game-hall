.class public Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;
.super Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;
.source "MraidJSBridge.java"


# instance fields
.field private a:Lcom/mbridge/msdk/mbjscommon/mraid/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;-><init>()V

    return-void
.end method


# virtual methods
.method public close(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string p2, "MRAID close"

    const-string v0, "MraidJSBridge"

    .line 89
    instance-of v1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v1, :cond_0

    .line 90
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 2034
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a$a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    .line 91
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v2, "close"

    invoke-virtual {v1, p1, v2}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 95
    :cond_0
    :try_start_0
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    if-eqz p1, :cond_1

    .line 97
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    invoke-interface {p1}, Lcom/mbridge/msdk/mbjscommon/mraid/b;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 100
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public expand(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "MraidJSBridge"

    .line 162
    instance-of v1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v1, :cond_0

    .line 163
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 5034
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a$a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    .line 164
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v2, "expand"

    invoke-virtual {v1, p1, v2}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 168
    :cond_0
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "url"

    .line 169
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v1, "shouldUseCustomClose"

    .line 170
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 172
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "MRAID expand "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 174
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    if-eqz v1, :cond_1

    .line 175
    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p1

    const-string v1, "true"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    .line 176
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    invoke-interface {v1, p2, p1}, Lcom/mbridge/msdk/mbjscommon/mraid/b;->expand(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "MRAID expand"

    .line 179
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public initialize(Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    .locals 1

    .line 30
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->initialize(Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    .line 32
    :try_start_0
    instance-of v0, p1, Lcom/mbridge/msdk/mbjscommon/mraid/b;

    if-eqz v0, :cond_0

    .line 33
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/mraid/b;

    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    goto :goto_0

    .line 35
    :cond_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    instance-of p1, p1, Lcom/mbridge/msdk/mbjscommon/mraid/b;

    if-eqz p1, :cond_1

    .line 36
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/mbjscommon/mraid/b;

    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    .line 39
    :cond_1
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getMraidObject()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_2

    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getMraidObject()Ljava/lang/Object;

    move-result-object p1

    instance-of p1, p1, Lcom/mbridge/msdk/mbjscommon/mraid/b;

    if-eqz p1, :cond_2

    .line 40
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getMraidObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/mbjscommon/mraid/b;

    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 44
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_2

    .line 45
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method

.method public open(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const-string v0, "MraidJSBridge"

    .line 58
    instance-of v1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v1, :cond_0

    .line 59
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 60
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 1034
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a$a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    const-string v2, "open"

    .line 61
    invoke-virtual {v1, p1, v2}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 65
    :goto_0
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "url"

    .line 66
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 68
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "MRAID Open "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 70
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    if-eqz v1, :cond_2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    if-eqz p1, :cond_1

    .line 71
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p1, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->lastTouchTime:J

    sub-long/2addr v1, v3

    sget v3, Lcom/mbridge/msdk/click/b/a;->c:I

    int-to-long v3, v3

    cmp-long v1, v1, v3

    if-lez v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    invoke-interface {v1}, Lcom/mbridge/msdk/mbjscommon/mraid/b;->getMraidCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->getUrl()Ljava/lang/String;

    move-result-object p1

    sget v2, Lcom/mbridge/msdk/click/b/a;->a:I

    invoke-static {v1, p1, v2}, Lcom/mbridge/msdk/click/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)Z

    move-result p1

    if-eqz p1, :cond_1

    return-void

    .line 74
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/mbjscommon/mraid/b;->open(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    const-string p2, "MRAID Open"

    .line 77
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    :goto_1
    return-void
.end method

.method public sendNoticeAndCallBackClick(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 229
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->open(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public setOrientationProperties(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    const-string v0, "MRAID setOrientationProperties"

    const-string v1, "MraidJSBridge"

    .line 192
    instance-of v2, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v2, :cond_0

    .line 193
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 6034
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a$a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v2

    .line 194
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v3, "setOrientationProperties"

    invoke-virtual {v2, p1, v3}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 198
    :cond_0
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "allowOrientationChange"

    .line 199
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v2, "forceOrientation"

    .line 200
    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 202
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 203
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    if-eqz v2, :cond_3

    .line 204
    invoke-virtual {p2}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p2

    const-string v2, "true"

    invoke-virtual {p2, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    .line 206
    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result p2

    const v2, 0x2b77bb9b

    if-eq p2, v2, :cond_2

    const v2, 0x5545f2bb

    if-eq p2, v2, :cond_1

    goto :goto_1

    :cond_1
    const-string p2, "landscape"

    :goto_0
    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    goto :goto_1

    :cond_2
    const-string p2, "portrait"
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 223
    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public unload(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string p2, "MRAID unload"

    const-string v0, "MraidJSBridge"

    .line 113
    instance-of v1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v1, :cond_0

    .line 114
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 3034
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a$a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    .line 115
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v2, "unload"

    invoke-virtual {v1, p1, v2}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 119
    :cond_0
    :try_start_0
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 120
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    if-eqz p1, :cond_1

    .line 121
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    invoke-interface {p1}, Lcom/mbridge/msdk/mbjscommon/mraid/b;->unload()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 124
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public useCustomClose(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "MraidJSBridge"

    .line 135
    instance-of v1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v1, :cond_0

    .line 136
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 4034
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a$a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    .line 137
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v2, "useCustomClose"

    invoke-virtual {v1, p1, v2}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 141
    :cond_0
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "shouldUseCustomClose"

    .line 142
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 144
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "MRAID useCustomClose "

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 146
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    if-eqz p2, :cond_1

    .line 147
    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p1

    const-string p2, "true"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    .line 148
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/mraid/MraidJSBridge;->a:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/mbjscommon/mraid/b;->useCustomClose(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "MRAID useCustomClose"

    .line 151
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method
