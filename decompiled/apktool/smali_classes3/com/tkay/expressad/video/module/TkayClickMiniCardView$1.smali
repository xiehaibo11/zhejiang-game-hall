.class final Lcom/tkay/expressad/video/module/TkayClickMiniCardView$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->webviewshow()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayClickMiniCardView;)V
    .locals 0

    .line 99
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView$1;->a:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 8

    :try_start_0
    const-string v0, ""
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x2

    :try_start_1
    new-array v2, v1, [I

    .line 107
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView$1;->a:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    iget-object v3, v3, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v3, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getLocationOnScreen([I)V

    .line 108
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "coordinate:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v4, 0x0

    aget v5, v2, v4

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "--"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v5, 0x1

    aget v6, v2, v5

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 109
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v6, "startX"

    .line 110
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    aget v4, v2, v4

    int-to-float v4, v4

    invoke-static {v7, v4}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;F)I

    move-result v4

    invoke-virtual {v3, v6, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v4, "startY"

    .line 111
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v6

    aget v2, v2, v5

    int-to-float v2, v2

    invoke-static {v6, v2}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {v3, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 112
    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 114
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 116
    :goto_0
    invoke-virtual {v0}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 117
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayClickMiniCardView$1;->a:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    iget-object v1, v1, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const-string v2, "webviewshow"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 119
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method
