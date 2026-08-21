.class final Lcom/mbridge/msdk/mbbanner/common/c/c$5;
.super Ljava/lang/Object;
.source "BannerShowManager.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/b/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbbanner/common/c/c;->d(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbbanner/common/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V
    .locals 0

    .line 1093
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$5;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 1096
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$5;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->n(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/out/MBBannerView;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBBannerView;->onPause()V

    .line 1099
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 1100
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "status"

    const/4 v2, 0x1

    .line 1102
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1104
    :cond_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 1106
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/common/c/c;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const-string v0, ""

    .line 1108
    :goto_0
    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 1109
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$5;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v2}, Lcom/mbridge/msdk/mbbanner/common/c/c;->q(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    move-result-object v2

    const-string v3, "onFeedbackAlertStatusNotify"

    invoke-virtual {v1, v2, v3, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 3

    .line 1132
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$5;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->n(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/out/MBBannerView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBBannerView;->onResume()V

    const/4 p1, 0x2

    .line 1135
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 1136
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "status"

    .line 1138
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1140
    :cond_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 1142
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/common/c/c;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const-string v0, ""

    .line 1144
    :goto_0
    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, p1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 1145
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$5;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->q(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    move-result-object v1

    const-string v2, "onFeedbackAlertStatusNotify"

    invoke-virtual {v0, v1, v2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final b()V
    .locals 4

    .line 1114
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$5;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->n(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/out/MBBannerView;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBBannerView;->onResume()V

    const/4 v0, 0x2

    .line 1117
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 1118
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    if-eqz v2, :cond_0

    const-string v2, "status"

    .line 1120
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1122
    :cond_0
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 1124
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/common/c/c;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const-string v1, ""

    .line 1126
    :goto_0
    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 1127
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$5;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v2}, Lcom/mbridge/msdk/mbbanner/common/c/c;->q(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    move-result-object v2

    const-string v3, "onFeedbackAlertStatusNotify"

    invoke-virtual {v1, v2, v3, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
