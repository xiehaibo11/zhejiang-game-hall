.class public Lcom/mbridge/msdk/mbjscommon/windvane/MvBridge;
.super Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;
.source "MvBridge.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;-><init>()V

    return-void
.end method


# virtual methods
.method public getDeviceInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    .line 21
    move-object p2, p1

    check-cast p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 22
    iget-object p2, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 24
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "a"

    const-string v1, "hello fail"

    .line 25
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 26
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/e;->a()Lcom/mbridge/msdk/mbjscommon/windvane/e;

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    .line 1119
    instance-of v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v0, :cond_1

    .line 1120
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 1122
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    const-string v0, "javascript:window.MvBridge.onFailure(%s,\'\');"

    new-array v3, v2, [Ljava/lang/Object;

    .line 1123
    iget-object v4, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->g:Ljava/lang/String;

    aput-object v4, v3, v1

    invoke-static {v0, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    goto :goto_0

    .line 1127
    :cond_0
    invoke-static {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/k;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    :goto_0
    const-string v0, "javascript:window.MvBridge.onFailure(%s,\'%s\');"

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/Object;

    .line 1128
    iget-object v4, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->g:Ljava/lang/String;

    aput-object v4, v3, v1

    aput-object p2, v3, v2

    invoke-static {v0, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    .line 1132
    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz v0, :cond_1

    .line 1134
    :try_start_1
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 1138
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_0
    move-exception p1

    .line 1136
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :catch_1
    :cond_1
    :goto_1
    return-void
.end method

.method public getTitle(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    .line 9
    move-object p2, p1

    check-cast p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 10
    iget-object v0, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 12
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "a"

    const-string v2, "hello succ"

    .line 13
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 14
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/e;->a()Lcom/mbridge/msdk/mbjscommon/windvane/e;

    move-result-object v1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, p1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/e;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 15
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/e;->a()Lcom/mbridge/msdk/mbjscommon/windvane/e;

    const-string p1, "receiveMessage"

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1024
    instance-of v1, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v1, :cond_1

    .line 1025
    check-cast p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 1027
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_0

    const-string v0, "javascript:window.MvBridge.fireEvent(\'%s\', \'\');"

    new-array v1, v3, [Ljava/lang/Object;

    aput-object p1, v1, v2

    .line 1028
    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 1032
    :cond_0
    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/k;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "javascript:window.MvBridge.fireEvent(\'%s\',\'%s\');"

    const/4 v4, 0x2

    new-array v4, v4, [Ljava/lang/Object;

    aput-object p1, v4, v2

    aput-object v0, v4, v3

    .line 1033
    invoke-static {v1, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    .line 1038
    :goto_0
    iget-object v0, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz v0, :cond_1

    .line 1040
    :try_start_1
    iget-object p2, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 1044
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_0
    move-exception p1

    .line 1042
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :catch_1
    :cond_1
    :goto_1
    return-void
.end method

.method public openWindow(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 32
    move-object p2, p1

    check-cast p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 33
    iget-object p2, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 35
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "a"

    const-string v1, "hello succ"

    .line 36
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 37
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/e;->a()Lcom/mbridge/msdk/mbjscommon/windvane/e;

    move-result-object v0

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/e;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public sendNoticeAndCallBackClick(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
