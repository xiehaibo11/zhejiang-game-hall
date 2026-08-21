.class public final Lcom/tkay/expressad/video/signal/a/l;
.super Lcom/tkay/expressad/video/signal/a/e;


# static fields
.field private static final n:Ljava/lang/String; = "onVideoStatusNotify"

.field private static final o:Ljava/lang/String; = "onJSClick"

.field private static final p:Ljava/lang/String; = "onVideoProgressNotify"

.field private static final q:Ljava/lang/String; = "webviewshow"

.field private static final r:Ljava/lang/String; = "showDataInfo"

.field private static final s:Ljava/lang/String; = "portrait"

.field private static final t:Ljava/lang/String; = "landscape"


# instance fields
.field private u:Landroid/webkit/WebView;


# direct methods
.method public constructor <init>(Landroid/webkit/WebView;)V
    .locals 0

    .line 25
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/e;-><init>()V

    .line 26
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/l;->u:Landroid/webkit/WebView;

    return-void
.end method

.method private static a(II)Ljava/lang/String;
    .locals 2

    if-eqz p1, :cond_0

    int-to-float p0, p0

    int-to-float v0, p1

    div-float/2addr p0, v0

    float-to-double v0, p0

    .line 81
    :try_start_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->a(Ljava/lang/Double;)D

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 83
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 86
    :cond_0
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 31
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/e;->a()V

    .line 32
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/l;->u:Landroid/webkit/WebView;

    invoke-static {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;)V

    return-void
.end method

.method public final a(I)V
    .locals 2

    .line 37
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/e;->a(I)V

    .line 39
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "status"

    .line 40
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 41
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v0, 0x2

    invoke-static {p1, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 42
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/l;->u:Landroid/webkit/WebView;

    const-string v1, "onVideoStatusNotify"

    invoke-static {v0, v1, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 44
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final a(IIII)V
    .locals 4

    .line 101
    invoke-super {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/video/signal/a/e;->a(IIII)V

    .line 103
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 104
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "landscape"

    const/4 v3, 0x2

    if-ne p1, v3, :cond_0

    const/4 p1, 0x1

    if-eq p2, p1, :cond_1

    goto :goto_0

    :cond_0
    if-ne p2, v3, :cond_1

    goto :goto_0

    :cond_1
    :try_start_1
    const-string v2, "portrait"

    :goto_0
    const-string p1, "orientation"

    .line 119
    invoke-virtual {v1, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "screen_width"

    .line 120
    invoke-virtual {v1, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "screen_height"

    .line 121
    invoke-virtual {v1, p1, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 122
    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 123
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 124
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p2, p0, Lcom/tkay/expressad/video/signal/a/l;->u:Landroid/webkit/WebView;

    const-string p3, "showDataInfo"

    invoke-static {p2, p3, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 126
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_2

    .line 127
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    return-void
.end method

.method public final a(ILjava/lang/String;)V
    .locals 2

    .line 50
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/e;->a(ILjava/lang/String;)V

    .line 52
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "type"

    .line 53
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "pt"

    .line 54
    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 55
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 p2, 0x2

    invoke-static {p1, p2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 56
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p2, p0, Lcom/tkay/expressad/video/signal/a/l;->u:Landroid/webkit/WebView;

    const-string v0, "onJSClick"

    invoke-static {p2, v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 58
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/video/module/TkayVideoView$a;)V
    .locals 4

    .line 64
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/e;->a(Lcom/tkay/expressad/video/module/TkayVideoView$a;)V

    .line 66
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "progress"

    .line 67
    iget v2, p1, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    iget v3, p1, Lcom/tkay/expressad/video/module/TkayVideoView$a;->b:I

    invoke-static {v2, v3}, Lcom/tkay/expressad/video/signal/a/l;->a(II)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "time"

    .line 68
    iget v2, p1, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "duration"

    .line 69
    iget p1, p1, Lcom/tkay/expressad/video/module/TkayVideoView$a;->b:I

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 70
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v0, 0x2

    invoke-static {p1, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 71
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/l;->u:Landroid/webkit/WebView;

    const-string v1, "onVideoProgressNotify"

    invoke-static {v0, v1, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 73
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final a(Ljava/lang/Object;)V
    .locals 2

    .line 91
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/e;->a(Ljava/lang/Object;)V

    if-eqz p1, :cond_0

    .line 93
    instance-of v0, p1, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 94
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v0, 0x2

    invoke-static {p1, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    const-string p1, ""

    .line 96
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/l;->u:Landroid/webkit/WebView;

    const-string v1, "webviewshow"

    invoke-static {v0, v1, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
