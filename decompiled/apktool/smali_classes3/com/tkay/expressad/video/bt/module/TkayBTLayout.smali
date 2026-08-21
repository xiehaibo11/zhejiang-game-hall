.class public Lcom/tkay/expressad/video/bt/module/TkayBTLayout;
.super Lcom/tkay/expressad/video/bt/module/BTBaseView;


# static fields
.field private static final p:Ljava/lang/String; = "portrait"

.field private static final q:Ljava/lang/String; = "landscape"


# instance fields
.field private r:Landroid/webkit/WebView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 20
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 24
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method


# virtual methods
.method public broadcast(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 4

    const-string v0, "broadcast"

    .line 72
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->r:Landroid/webkit/WebView;

    if-eqz v1, :cond_0

    .line 74
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 75
    sget v3, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->n:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "id"

    .line 76
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->getInstanceId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "eventName"

    .line 77
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 78
    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 79
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->r:Landroid/webkit/WebView;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v1, 0x2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, v0, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 81
    :catch_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->r:Landroid/webkit/WebView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->getInstanceId()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, v0, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public notifyEvent(Ljava/lang/String;)V
    .locals 2

    .line 87
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->r:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 88
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->d:Ljava/lang/String;

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onBackPressed()V
    .locals 3

    .line 66
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->r:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 67
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->r:Landroid/webkit/WebView;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->d:Ljava/lang/String;

    const-string v2, "onSystemBackPressed"

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 4

    .line 45
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->r:Landroid/webkit/WebView;

    if-eqz v0, :cond_2

    .line 47
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 50
    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 51
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x2

    const-string v2, "orientation"

    if-ne p1, v1, :cond_1

    :try_start_1
    const-string p1, "landscape"

    .line 52
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_1
    const-string p1, "portrait"

    .line 54
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :goto_0
    const-string p1, "instanceId"

    .line 56
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->d:Ljava/lang/String;

    invoke-virtual {v0, p1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 57
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 58
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->r:Landroid/webkit/WebView;

    invoke-static {v0, v2, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 60
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    return-void
.end method

.method public onDestory()V
    .locals 0

    return-void
.end method

.method public setWebView(Landroid/webkit/WebView;)V
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->r:Landroid/webkit/WebView;

    return-void
.end method
