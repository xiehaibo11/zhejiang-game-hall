.class public final Lcom/mbridge/msdk/mbjscommon/windvane/h;
.super Ljava/lang/Object;
.source "WindVaneCallJs.java"


# static fields
.field private static a:Lcom/mbridge/msdk/mbjscommon/windvane/h;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 10
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/h;

    invoke-direct {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a:Lcom/mbridge/msdk/mbjscommon/windvane/h;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/mbjscommon/windvane/h;
    .locals 1

    .line 16
    sget-object v0, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a:Lcom/mbridge/msdk/mbjscommon/windvane/h;

    return-object v0
.end method


# virtual methods
.method public final a(Landroid/webkit/WebView;)V
    .locals 5

    const-string v0, ""

    const-string v1, "onJSBridgeConnected"

    .line 155
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "api_version"

    const-string v4, "1.0.0"

    .line 156
    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 157
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    const/4 v3, 0x2

    invoke-static {v2, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    .line 1016
    sget-object v3, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a:Lcom/mbridge/msdk/mbjscommon/windvane/h;

    .line 158
    invoke-virtual {v3, p1, v1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 3016
    :catchall_0
    sget-object v2, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a:Lcom/mbridge/msdk/mbjscommon/windvane/h;

    .line 162
    invoke-virtual {v2, p1, v1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 2016
    :catch_0
    sget-object v2, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a:Lcom/mbridge/msdk/mbjscommon/windvane/h;

    .line 160
    invoke-virtual {v2, p1, v1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 61
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    new-array p3, v1, [Ljava/lang/Object;

    aput-object p2, p3, v2

    const-string p2, "javascript:window.WindVane.fireEvent(\'%s\', \'\');"

    .line 62
    invoke-static {p2, p3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    .line 66
    :cond_0
    invoke-static {p3}, Lcom/mbridge/msdk/mbjscommon/windvane/k;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    aput-object p2, v0, v2

    aput-object p3, v0, v1

    const-string p2, "javascript:window.WindVane.fireEvent(\'%s\',\'%s\');"

    .line 67
    invoke-static {p2, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    :goto_0
    if-eqz p1, :cond_2

    .line 72
    instance-of p3, p1, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p3, :cond_1

    .line 73
    move-object p3, p1

    check-cast p3, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 74
    invoke-virtual {p3}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result p3

    if-eqz p3, :cond_1

    return-void

    .line 79
    :cond_1
    :try_start_0
    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 83
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_0
    move-exception p1

    .line 81
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_1
    return-void
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 95
    instance-of v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v0, :cond_1

    .line 96
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 98
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    new-array p2, v1, [Ljava/lang/Object;

    .line 99
    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->g:Ljava/lang/String;

    aput-object v0, p2, v2

    const-string v0, "javascript:window.WindVane.onSuccess(%s,\'\');"

    invoke-static {v0, p2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    .line 103
    :cond_0
    invoke-static {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/k;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    .line 104
    iget-object v3, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->g:Ljava/lang/String;

    aput-object v3, v0, v2

    aput-object p2, v0, v1

    const-string p2, "javascript:window.WindVane.onSuccess(%s,\'%s\');"

    invoke-static {p2, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    .line 108
    :goto_0
    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v0

    if-nez v0, :cond_1

    .line 110
    :try_start_0
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 114
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_0
    move-exception p1

    .line 112
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 27
    instance-of v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v0, :cond_1

    .line 28
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 30
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    new-array p3, v1, [Ljava/lang/Object;

    aput-object p2, p3, v2

    const-string p2, "javascript:window.WindVane.fireEvent(\'%s\', \'\');"

    .line 31
    invoke-static {p2, p3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    .line 35
    :cond_0
    invoke-static {p3}, Lcom/mbridge/msdk/mbjscommon/windvane/k;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    aput-object p2, v0, v2

    aput-object p3, v0, v1

    const-string p2, "javascript:window.WindVane.fireEvent(\'%s\',\'%s\');"

    .line 36
    invoke-static {p2, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    .line 41
    :goto_0
    iget-object p3, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p3, :cond_1

    iget-object p3, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p3}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result p3

    if-nez p3, :cond_1

    .line 43
    :try_start_0
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 47
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_0
    move-exception p1

    .line 45
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method public final b(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 127
    instance-of v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v0, :cond_1

    .line 128
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 130
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    new-array v0, v2, [Ljava/lang/Object;

    .line 131
    iget-object v3, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->g:Ljava/lang/String;

    aput-object v3, v0, v1

    const-string v3, "javascript:window.WindVane.onFailure(%s,\'\');"

    invoke-static {v3, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    goto :goto_0

    .line 135
    :cond_0
    invoke-static {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/k;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    :goto_0
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    .line 136
    iget-object v3, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->g:Ljava/lang/String;

    aput-object v3, v0, v1

    aput-object p2, v0, v2

    const-string p2, "javascript:window.WindVane.onFailure(%s,\'%s\');"

    invoke-static {p2, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    .line 140
    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v0

    if-nez v0, :cond_1

    .line 142
    :try_start_0
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 146
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_0
    move-exception p1

    .line 144
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method
