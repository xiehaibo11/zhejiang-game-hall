.class public Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;
.super Lcom/mbridge/msdk/video/bt/module/BTBaseView;
.source "MBridgeBTLayout.java"


# instance fields
.field private p:Landroid/webkit/WebView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 25
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 29
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method


# virtual methods
.method public broadcast(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 4

    const-string v0, "broadcast"

    .line 77
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->p:Landroid/webkit/WebView;

    if-eqz v1, :cond_0

    .line 79
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 80
    sget v3, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->n:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "id"

    .line 81
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->getInstanceId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "eventName"

    .line 82
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 83
    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 84
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->p:Landroid/webkit/WebView;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    const/4 v2, 0x2

    invoke-static {v1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, p2, v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 86
    :catch_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->p:Landroid/webkit/WebView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->getInstanceId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, p2, v0, v1}, Lcom/mbridge/msdk/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public notifyEvent(Ljava/lang/String;)V
    .locals 2

    .line 92
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->p:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 93
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->d:Ljava/lang/String;

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onBackPressed()V
    .locals 4

    .line 71
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->p:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 72
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->p:Landroid/webkit/WebView;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->d:Ljava/lang/String;

    const-string v3, "onSystemBackPressed"

    invoke-virtual {v0, v1, v3, v2}, Lcom/mbridge/msdk/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 4

    .line 49
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->p:Landroid/webkit/WebView;

    if-eqz v0, :cond_2

    .line 52
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 55
    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 56
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x2

    const-string v2, "orientation"

    if-ne p1, v1, :cond_1

    :try_start_1
    const-string p1, "landscape"

    .line 57
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_1
    const-string p1, "portrait"

    .line 59
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :goto_0
    const-string p1, "instanceId"

    .line 61
    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->d:Ljava/lang/String;

    invoke-virtual {v0, p1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 62
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 63
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->p:Landroid/webkit/WebView;

    invoke-virtual {v0, v1, v2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 65
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_1
    return-void
.end method

.method public onDestory()V
    .locals 0

    return-void
.end method

.method public setWebView(Landroid/webkit/WebView;)V
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->p:Landroid/webkit/WebView;

    return-void
.end method
