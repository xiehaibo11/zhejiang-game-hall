.class final Lcom/tkay/expressad/splash/c/d$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/f/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/c/d;->h()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/c/d;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/c/d;)V
    .locals 0

    .line 454
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d$6;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 457
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$6;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/c/d;->e()V

    .line 460
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 461
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "status"

    const/4 v2, 0x1

    .line 463
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 465
    :cond_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 467
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d$6;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v1}, Lcom/tkay/expressad/splash/c/d;->i(Lcom/tkay/expressad/splash/c/d;)Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const-string v0, ""

    .line 469
    :goto_0
    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 470
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d$6;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v1}, Lcom/tkay/expressad/splash/c/d;->d(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashWebview()Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v1

    const-string v2, "onFeedbackAlertStatusNotify"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final b()V
    .locals 3

    .line 475
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$6;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/c/d;->d()V

    const/4 v0, 0x2

    .line 478
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 479
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    if-eqz v2, :cond_0

    const-string v2, "status"

    .line 481
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 483
    :cond_0
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 485
    iget-object v2, p0, Lcom/tkay/expressad/splash/c/d$6;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v2}, Lcom/tkay/expressad/splash/c/d;->i(Lcom/tkay/expressad/splash/c/d;)Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const-string v1, ""

    .line 487
    :goto_0
    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 488
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d$6;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v1}, Lcom/tkay/expressad/splash/c/d;->d(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashWebview()Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v1

    const-string v2, "onFeedbackAlertStatusNotify"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final c()V
    .locals 3

    .line 493
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$6;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/c/d;->d()V

    const/4 v0, 0x2

    .line 496
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 497
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    if-eqz v2, :cond_0

    const-string v2, "status"

    .line 499
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 501
    :cond_0
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 503
    iget-object v2, p0, Lcom/tkay/expressad/splash/c/d$6;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v2}, Lcom/tkay/expressad/splash/c/d;->i(Lcom/tkay/expressad/splash/c/d;)Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const-string v1, ""

    .line 505
    :goto_0
    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 506
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d$6;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v1}, Lcom/tkay/expressad/splash/c/d;->d(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashWebview()Lcom/tkay/expressad/splash/view/TYSplashWebview;

    move-result-object v1

    const-string v2, "onFeedbackAlertStatusNotify"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
