.class final Lcom/tkay/expressad/splash/view/TYSplashView$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/view/TYSplashView;->d()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/view/TYSplashView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/view/TYSplashView;)V
    .locals 0

    .line 378
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 9

    .line 382
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashView;->a()Ljava/lang/String;

    const-string v0, ""
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x2

    :try_start_1
    new-array v4, v3, [I

    .line 386
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {v5}, Lcom/tkay/expressad/splash/view/TYSplashView;->a(Lcom/tkay/expressad/splash/view/TYSplashView;)Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v5

    invoke-virtual {v5, v4}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->getLocationOnScreen([I)V

    .line 387
    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashView;->a()Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "coordinate:"

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    aget v6, v4, v2

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "--"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v6, v4, v1

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 388
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    const-string v6, "startX"

    .line 389
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    aget v8, v4, v2

    int-to-float v8, v8

    invoke-static {v7, v8}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;F)I

    move-result v7

    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "startY"

    .line 390
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    aget v4, v4, v1

    int-to-float v4, v4

    invoke-static {v7, v4}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;F)I

    move-result v4

    invoke-virtual {v5, v6, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 391
    invoke-virtual {v5}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v4

    .line 393
    :try_start_2
    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashView;->a()Ljava/lang/String;

    invoke-virtual {v4}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :goto_0
    new-array v4, v3, [I

    .line 397
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {v5}, Lcom/tkay/expressad/splash/view/TYSplashView;->a(Lcom/tkay/expressad/splash/view/TYSplashView;)Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v5

    invoke-virtual {v5, v4}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->getLocationInWindow([I)V

    .line 398
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {v5}, Lcom/tkay/expressad/splash/view/TYSplashView;->a(Lcom/tkay/expressad/splash/view/TYSplashView;)Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v5

    aget v2, v4, v2

    aget v1, v4, v1

    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashView;

    .line 399
    invoke-static {v4}, Lcom/tkay/expressad/splash/view/TYSplashView;->a(Lcom/tkay/expressad/splash/view/TYSplashView;)Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->getWidth()I

    move-result v4

    iget-object v6, p0, Lcom/tkay/expressad/splash/view/TYSplashView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {v6}, Lcom/tkay/expressad/splash/view/TYSplashView;->a(Lcom/tkay/expressad/splash/view/TYSplashView;)Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->getHeight()I

    move-result v6

    .line 398
    invoke-static {v5, v2, v1, v4, v6}, Lcom/tkay/expressad/splash/view/TYSplashView;->transInfoForMraid(Landroid/webkit/WebView;IIII)V

    .line 401
    invoke-virtual {v0}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 402
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashView$1;->a:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->a(Lcom/tkay/expressad/splash/view/TYSplashView;)Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v1

    const-string v2, "webviewshow"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 404
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method
