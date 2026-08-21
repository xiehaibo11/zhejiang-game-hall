.class final Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/bt/module/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->c()Lcom/tkay/expressad/video/bt/module/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)V
    .locals 0

    .line 473
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 0

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 3

    .line 477
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 478
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "id"

    .line 480
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 481
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    .line 482
    sget-object v1, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->g(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "unitId"

    .line 483
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->h(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 484
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 485
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a()Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, " BT Call H5 onAdShow "

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 487
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a()Ljava/lang/String;

    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 489
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    const-string v1, "onSubPlayTemplateViewPlayStart"

    invoke-static {p1, v1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 545
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iput-object p2, v0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a:Lcom/tkay/expressad/foundation/d/c;

    .line 546
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 547
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v0, "id"

    .line 549
    invoke-virtual {p2, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 550
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    .line 551
    sget-object v0, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->k(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "unitId"

    .line 552
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->l(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "data"

    .line 553
    invoke-virtual {p2, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 554
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a()Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, " BT Call H5 onVideoAdClicked "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 556
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a()Ljava/lang/String;

    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 558
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p1

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    const-string v0, "onSubPlayTemplateViewClicked"

    invoke-static {p1, v0, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 526
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 527
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "id"

    .line 529
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 530
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    .line 531
    sget-object v1, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "unitId"

    .line 532
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->j(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "error"

    .line 533
    invoke-virtual {p1, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 534
    invoke-virtual {v0, p2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 535
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a()Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, " BT Call H5 onShowFail "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 537
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a()Ljava/lang/String;

    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 539
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    const-string v0, "onSubPlayTemplateViewPlayFailed"

    invoke-static {p1, v0, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;ZLcom/tkay/expressad/videocommon/c/c;)V
    .locals 5

    .line 495
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 496
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const/4 v1, 0x2

    :try_start_0
    const-string v2, "id"

    .line 498
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 499
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    if-eqz p3, :cond_0

    .line 501
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "name"

    .line 502
    invoke-virtual {p3}, Lcom/tkay/expressad/videocommon/c/c;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "amount"

    .line 503
    invoke-virtual {p3}, Lcom/tkay/expressad/videocommon/c/c;->b()I

    move-result p3

    invoke-virtual {v2, v3, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p3, "reward"

    .line 504
    invoke-virtual {p1, p3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    const-string p3, "isComplete"

    .line 506
    invoke-virtual {p1, p3, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string p3, "convert"

    if-eqz p2, :cond_1

    const/4 p2, 0x1

    goto :goto_0

    :cond_1
    move p2, v1

    .line 507
    :goto_0
    invoke-virtual {p1, p3, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 508
    invoke-virtual {v0, p2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 509
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a()Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, " BT Call H5 onAdClose "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 511
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a()Ljava/lang/String;

    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 513
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    const-string p3, "onSubPlayTemplateViewCloseBtnClicked"

    invoke-static {p1, p3, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 514
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    const-string p3, "onSubPlayTemplateViewDismissed"

    invoke-static {p1, p3, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final a(ZI)V
    .locals 1

    .line 520
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;Z)Z

    .line 521
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;I)I

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 3

    .line 564
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 565
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "id"

    .line 567
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 568
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "convert"

    const/4 v2, 0x1

    .line 569
    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    .line 570
    sget-object v1, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "unitId"

    .line 571
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->n(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 572
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 573
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a()Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, " BT Call H5 onVideoComplete "

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 575
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a()Ljava/lang/String;

    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 577
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    const-string v1, "onSubPlayTemplateViewPlayCompleted"

    invoke-static {p1, v1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 3

    .line 583
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 584
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "id"

    .line 586
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 587
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    .line 588
    sget-object v1, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->o(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "unitId"

    .line 589
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->p(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 590
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 591
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a()Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, " BT Call H5 onEndcardShow "

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 593
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a()Ljava/lang/String;

    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 595
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    const-string v1, "onSubPlayTemplateViewEndcardShowSuccess"

    invoke-static {p1, v1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
