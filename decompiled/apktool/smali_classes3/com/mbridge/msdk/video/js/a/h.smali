.class public final Lcom/mbridge/msdk/video/js/a/h;
.super Lcom/mbridge/msdk/video/js/a/a;
.source "JSActivityProxy.java"


# instance fields
.field private a:Landroid/webkit/WebView;

.field private b:I


# direct methods
.method public constructor <init>(Landroid/webkit/WebView;)V
    .locals 1

    .line 34
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/a;-><init>()V

    const/4 v0, 0x0

    .line 32
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/h;->b:I

    .line 35
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/h;->a:Landroid/webkit/WebView;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 40
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/a;->a()V

    const/4 v0, 0x1

    .line 41
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/h;->b:I

    .line 42
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/h;->a:Landroid/webkit/WebView;

    const-string v2, "onSystemPause"

    const-string v3, ""

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(I)V
    .locals 0

    .line 85
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/a;->a(I)V

    .line 86
    iput p1, p0, Lcom/mbridge/msdk/video/js/a/h;->b:I

    return-void
.end method

.method public final a(Landroid/content/res/Configuration;)V
    .locals 3

    .line 60
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/a;->a(Landroid/content/res/Configuration;)V

    .line 63
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 65
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x2

    const-string v2, "orientation"

    if-ne p1, v1, :cond_0

    :try_start_1
    const-string p1, "landscape"

    .line 66
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_0
    const-string p1, "portrait"

    .line 68
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 70
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 71
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/h;->a:Landroid/webkit/WebView;

    invoke-virtual {v0, v1, v2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 73
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method

.method public final b()V
    .locals 4

    .line 47
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/a;->b()V

    const/4 v0, 0x0

    .line 48
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/h;->b:I

    .line 49
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/h;->a:Landroid/webkit/WebView;

    const-string v2, "onSystemResume"

    const-string v3, ""

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final c()V
    .locals 4

    .line 54
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/a;->c()V

    .line 55
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/h;->a:Landroid/webkit/WebView;

    const-string v2, "onSystemDestory"

    const-string v3, ""

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final g()V
    .locals 4

    .line 79
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/a;->g()V

    .line 80
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/h;->a:Landroid/webkit/WebView;

    const-string v2, "onSystemBackPressed"

    const-string v3, ""

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final h()I
    .locals 1

    .line 91
    iget v0, p0, Lcom/mbridge/msdk/video/js/a/h;->b:I

    return v0
.end method
