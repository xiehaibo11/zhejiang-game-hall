.class final Lcom/tkay/expressad/video/bt/module/TYTempContainer$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/f/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V
    .locals 0

    .line 780
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$5;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 783
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$5;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onPause()V

    .line 786
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 787
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "status"

    const/4 v2, 0x1

    .line 789
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 791
    :cond_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 793
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a()Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const-string v0, ""

    .line 795
    :goto_0
    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 796
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$5;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v1, v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const-string v2, "onFeedbackAlertStatusNotify"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final b()V
    .locals 3

    .line 801
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$5;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onResume()V

    const/4 v0, 0x2

    .line 804
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 805
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    if-eqz v2, :cond_0

    const-string v2, "status"

    .line 807
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 809
    :cond_0
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 811
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a()Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const-string v1, ""

    .line 813
    :goto_0
    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 814
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$5;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v1, v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const-string v2, "onFeedbackAlertStatusNotify"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final c()V
    .locals 3

    .line 819
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$5;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onResume()V

    const/4 v0, 0x2

    .line 822
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 823
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    if-eqz v2, :cond_0

    const-string v2, "status"

    .line 825
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 827
    :cond_0
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 829
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a()Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const-string v1, ""

    .line 831
    :goto_0
    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 832
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$5;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v1, v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const-string v2, "onFeedbackAlertStatusNotify"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
