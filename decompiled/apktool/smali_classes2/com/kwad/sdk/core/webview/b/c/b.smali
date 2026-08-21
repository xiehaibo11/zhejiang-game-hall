.class public final Lcom/kwad/sdk/core/webview/b/c/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/webview/b/c/b$a;
    }
.end annotation


# static fields
.field public static final ayQ:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lorg/json/JSONObject;",
            ">;"
        }
    .end annotation
.end field

.field public static ayR:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/webview/b/c/b;->ayQ:Ljava/util/Map;

    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/sdk/core/webview/b/c/b;->ayR:Z

    return-void
.end method

.method public static a(Lcom/kwad/sdk/h/a/b;I)V
    .locals 4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p0}, Lcom/kwad/sdk/h/a/b;->FC()J

    move-result-wide v2

    sub-long/2addr v0, v2

    new-instance v2, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    invoke-direct {v2}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;-><init>()V

    iget-object v3, p0, Lcom/kwad/sdk/h/a/b;->aCb:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setSceneId(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/sdk/h/a/b;->version:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setH5Version(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object v2

    iget v3, p0, Lcom/kwad/sdk/h/a/b;->loadType:I

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setLoadType(I)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object v2

    invoke-virtual {v2, p1}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setState(I)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p1

    iget-object p0, p0, Lcom/kwad/sdk/h/a/b;->packageUrl:Ljava/lang/String;

    invoke-virtual {p1, p0}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setPackageUrl(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p0

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setInterval(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p0

    const-string p1, "ad_client_apm_log"

    invoke-static {p1, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwad/sdk/commercial/model/HybridLoadMsg;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/h/a/b;IILjava/lang/String;)V
    .locals 4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p0}, Lcom/kwad/sdk/h/a/b;->FC()J

    move-result-wide v2

    sub-long/2addr v0, v2

    new-instance p1, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    invoke-direct {p1}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;-><init>()V

    iget-object v2, p0, Lcom/kwad/sdk/h/a/b;->aCb:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setSceneId(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p1

    iget-object v2, p0, Lcom/kwad/sdk/h/a/b;->version:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setH5Version(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p1

    iget v2, p0, Lcom/kwad/sdk/h/a/b;->loadType:I

    invoke-virtual {p1, v2}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setLoadType(I)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p1

    const/4 v2, 0x0

    invoke-virtual {p1, v2}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setState(I)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p1

    iget-object p0, p0, Lcom/kwad/sdk/h/a/b;->packageUrl:Ljava/lang/String;

    invoke-virtual {p1, p0}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setPackageUrl(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setFailState(I)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p0

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setInterval(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p0

    invoke-virtual {p0, p3}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setFailReason(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p0

    const-string p1, "ad_client_error_log"

    invoke-static {p1, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwad/sdk/commercial/model/HybridLoadMsg;)V

    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
    .locals 7

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/b;->ayQ:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lorg/json/JSONObject;

    if-nez v0, :cond_0

    const-wide/16 v1, -0x3

    goto :goto_0

    :cond_0
    const-string v1, "c_loadUrl"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v5, v1, v3

    if-gtz v5, :cond_1

    const-wide/16 v1, -0x2

    goto :goto_0

    :cond_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    sub-long v1, v5, v1

    const-wide/32 v5, 0x186a0

    cmp-long v5, v1, v5

    if-gtz v5, :cond_2

    cmp-long v3, v1, v3

    if-gez v3, :cond_3

    :cond_2
    const-wide/16 v1, -0x1

    :cond_3
    :goto_0
    const/4 v3, 0x2

    if-ne p2, v3, :cond_4

    const-string v3, "ad_client_error_log"

    goto :goto_1

    :cond_4
    const-string v3, "ad_client_apm_log"

    :goto_1
    if-eqz v0, :cond_5

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_2

    :cond_5
    const-string v0, ""

    :goto_2
    new-instance v4, Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;

    invoke-direct {v4}, Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;-><init>()V

    invoke-virtual {v4, p0}, Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;->setUrl(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;->setState(I)Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;->setCostTime(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;

    move-result-object p0

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;->setInterval(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;

    move-result-object p0

    invoke-virtual {p0, p3}, Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;->setFailReason(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;

    move-result-object p0

    invoke-static {v3, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/webview/b/c/b;->eh(Ljava/lang/String;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V
    .locals 3

    const/4 v0, 0x2

    if-ne p2, v0, :cond_0

    const-string v0, "ad_client_error_log"

    goto :goto_0

    :cond_0
    const-string v0, "ad_client_apm_log"

    :goto_0
    const-wide/32 v1, 0xea60

    cmp-long v1, p4, v1

    if-gtz v1, :cond_1

    const-wide/16 v1, 0x0

    cmp-long v1, p4, v1

    if-gez v1, :cond_2

    :cond_1
    const-wide/16 p4, -0x1

    :cond_2
    new-instance v1, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    invoke-direct {v1}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;-><init>()V

    invoke-virtual {v1, p1}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setSceneId(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setUrl(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setState(I)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p0

    invoke-static {p4, p5}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setInterval(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p0

    invoke-virtual {p0, p3}, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;->setFailReason(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->b(Ljava/lang/String;Lcom/kwad/sdk/commercial/model/HybridLoadMsg;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 5

    const-string v0, ""

    invoke-static {p1}, Lcom/kwad/sdk/core/webview/b/c/b;->eg(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "c_"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v1, v2, v3, v4}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    const-string v2, "pageStatus"

    invoke-virtual {p2, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_3

    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2, p3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p3, "status"

    invoke-virtual {p2, p3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p3

    const-string v2, "errorMsg"

    invoke-virtual {p2, v2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "webViewCostParams"

    invoke-virtual {p2, v3, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_2

    const/4 p2, 0x1

    if-ne p3, p2, :cond_1

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/webview/b/c/b;->ac(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    invoke-static {p0, v2}, Lcom/kwad/sdk/core/webview/b/c/b;->ad(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    :goto_1
    invoke-static {p1}, Lcom/kwad/sdk/core/webview/b/c/b;->eh(Ljava/lang/String;)V

    return-void

    :catchall_0
    move-exception p0

    goto :goto_2

    :catch_0
    move-exception p0

    :try_start_1
    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-static {p1}, Lcom/kwad/sdk/core/webview/b/c/b;->eh(Ljava/lang/String;)V

    return-void

    :goto_2
    invoke-static {p1}, Lcom/kwad/sdk/core/webview/b/c/b;->eh(Ljava/lang/String;)V

    throw p0

    :cond_3
    return-void
.end method

.method public static ab(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/webview/b/c/b;->eg(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "c_"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {p0, p1, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    return-void
.end method

.method private static ac(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const/4 v0, 0x1

    const-string v1, ""

    invoke-static {p0, p1, v0, v1}, Lcom/kwad/sdk/core/webview/b/c/b;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    return-void
.end method

.method public static ad(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const-string v0, ""

    const/4 v1, 0x2

    invoke-static {p0, v0, v1, p1}, Lcom/kwad/sdk/core/webview/b/c/b;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    return-void
.end method

.method public static b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const-string v0, "/"

    invoke-virtual {p2, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p2, v0}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    invoke-virtual {p2, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p2

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/webview/b/c/b;->eg(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "c_responseStart_"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {p0, p1, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    return-void
.end method

.method public static c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const-string v0, "/"

    invoke-virtual {p2, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p2, v0}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    invoke-virtual {p2, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p2

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/webview/b/c/b;->eg(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "c_responseEnd_"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {p0, p1, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    return-void
.end method

.method private static eg(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/b;->ayQ:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lorg/json/JSONObject;

    if-nez v0, :cond_0

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    sget-object v1, Lcom/kwad/sdk/core/webview/b/c/b;->ayQ:Ljava/util/Map;

    invoke-interface {v1, p0, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-object v0
.end method

.method private static eh(Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/b;->ayQ:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static ei(Ljava/lang/String;)V
    .locals 5

    invoke-static {p0}, Lcom/kwad/sdk/core/webview/b/c/b;->eg(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {}, Lcom/kwad/sdk/core/webview/b/a;->Ee()Lcom/kwad/sdk/core/webview/b/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/b/a;->Ef()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-gtz v2, :cond_0

    const-wide/16 v0, -0x1

    goto :goto_0

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long v0, v2, v0

    :goto_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    const-string v4, "c_loadUrl"

    invoke-static {p0, v4, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    const-string v2, "c_init_interval"

    invoke-static {p0, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    sget-boolean v0, Lcom/kwad/sdk/core/webview/b/c/b;->ayR:Z

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    goto :goto_1

    :cond_1
    const/4 v0, 0x2

    :goto_1
    const-string v1, "c_init_state"

    invoke-static {p0, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    const/4 p0, 0x0

    sput-boolean p0, Lcom/kwad/sdk/core/webview/b/c/b;->ayR:Z

    return-void
.end method
