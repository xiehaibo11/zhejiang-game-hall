.class final Lcom/mbridge/msdk/splash/view/MBSplashView$1;
.super Ljava/lang/Object;
.source "MBSplashView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/splash/view/MBSplashView;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/view/MBSplashView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/view/MBSplashView;)V
    .locals 0

    .line 340
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 10

    const-string v0, "webviewshow"

    .line 344
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashView;->a()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, ""
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v2, 0x1

    const/4 v3, 0x0

    const/4 v4, 0x2

    :try_start_1
    new-array v5, v4, [I

    .line 348
    iget-object v6, p0, Lcom/mbridge/msdk/splash/view/MBSplashView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-static {v6}, Lcom/mbridge/msdk/splash/view/MBSplashView;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;)Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    move-result-object v6

    invoke-virtual {v6, v5}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->getLocationOnScreen([I)V

    .line 349
    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashView;->a()Ljava/lang/String;

    move-result-object v6

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "coordinate:"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v8, v5, v3

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "--"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v8, v5, v2

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 350
    new-instance v6, Lorg/json/JSONObject;

    invoke-direct {v6}, Lorg/json/JSONObject;-><init>()V

    const-string v7, "startX"

    .line 351
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v8

    aget v9, v5, v3

    int-to-float v9, v9

    invoke-static {v8, v9}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;F)I

    move-result v8

    invoke-virtual {v6, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v7, "startY"

    .line 352
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v8

    aget v5, v5, v2

    int-to-float v5, v5

    invoke-static {v8, v5}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;F)I

    move-result v5

    invoke-virtual {v6, v7, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 353
    invoke-virtual {v6}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v5

    .line 355
    :try_start_2
    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashView;->a()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7, v5}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    new-array v5, v4, [I

    .line 359
    iget-object v6, p0, Lcom/mbridge/msdk/splash/view/MBSplashView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-static {v6}, Lcom/mbridge/msdk/splash/view/MBSplashView;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;)Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    move-result-object v6

    invoke-virtual {v6, v5}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->getLocationInWindow([I)V

    .line 360
    iget-object v6, p0, Lcom/mbridge/msdk/splash/view/MBSplashView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-static {v6}, Lcom/mbridge/msdk/splash/view/MBSplashView;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;)Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    move-result-object v6

    aget v3, v5, v3

    aget v2, v5, v2

    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashView;

    .line 361
    invoke-static {v5}, Lcom/mbridge/msdk/splash/view/MBSplashView;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;)Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->getWidth()I

    move-result v5

    iget-object v7, p0, Lcom/mbridge/msdk/splash/view/MBSplashView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-static {v7}, Lcom/mbridge/msdk/splash/view/MBSplashView;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;)Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    move-result-object v7

    invoke-virtual {v7}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->getHeight()I

    move-result v7

    .line 360
    invoke-static {v6, v3, v2, v5, v7}, Lcom/mbridge/msdk/splash/view/MBSplashView;->transInfoForMraid(Landroid/webkit/WebView;IIII)V

    .line 363
    invoke-virtual {v1}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, v4}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    .line 364
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-static {v3}, Lcom/mbridge/msdk/splash/view/MBSplashView;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;)Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    move-result-object v3

    invoke-virtual {v2, v3, v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 366
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method
