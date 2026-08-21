.class final Lcom/kwad/components/core/webview/b/h$15;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h;->rS()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Wk:Lcom/kwad/components/core/webview/b/h;

.field final synthetic Wp:Ljava/lang/String;

.field final synthetic Wq:Ljava/lang/String;

.field final synthetic Wr:Ljava/lang/String;

.field final synthetic Ws:Ljava/lang/String;

.field final synthetic Wt:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$15;->Wk:Lcom/kwad/components/core/webview/b/h;

    iput-object p2, p0, Lcom/kwad/components/core/webview/b/h$15;->Wp:Ljava/lang/String;

    iput-object p3, p0, Lcom/kwad/components/core/webview/b/h$15;->Wq:Ljava/lang/String;

    iput-object p4, p0, Lcom/kwad/components/core/webview/b/h$15;->Wr:Ljava/lang/String;

    iput-object p5, p0, Lcom/kwad/components/core/webview/b/h$15;->Ws:Ljava/lang/String;

    iput-object p6, p0, Lcom/kwad/components/core/webview/b/h$15;->Wt:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "coverage_task_id"

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h$15;->Wp:Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "user"

    const-string v2, ""

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "timestamp"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    const-wide/16 v4, 0x3e8

    div-long/2addr v2, v4

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "branch_name"

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h$15;->Wq:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "version"

    const-string v2, "3.3.42"

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "tk_version"

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h$15;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v2}, Lcom/kwad/components/core/webview/b/h;->n(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    move-result-object v2

    iget v2, v2, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateVersionCode:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "tk_template_ids"

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h$15;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v2}, Lcom/kwad/components/core/webview/b/h;->n(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateId:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    invoke-static {}, Lcom/kwad/sdk/g;->wX()Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/kwad/components/core/webview/b/h$15;->Wr:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/analysis/add/pkg/info"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    invoke-interface {v1, v2, v3, v0}, Lcom/kwad/sdk/export/proxy/AdHttpProxy;->doPost(Ljava/lang/String;Ljava/util/Map;Lorg/json/JSONObject;)Lcom/kwad/sdk/core/network/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/c;->Bd()Z

    move-result v1

    const-string v2, "TKLoadController"

    if-eqz v1, :cond_0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v4, "\u4e0a\u4f20TK\u8986\u76d6\u7387pkg\u5b8c\u6210:"

    invoke-direct {v1, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, v0, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    :cond_0
    const-string v0, "\u4e0a\u4f20\u8986\u76d6\u7387pkg\u5931\u8d25"

    :goto_1
    invoke-static {v2, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/g;->wX()Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/kwad/components/core/webview/b/h$15;->Wr:Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "/attachment/ec"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v4, Lcom/kwad/components/core/webview/b/h$15$1;

    invoke-direct {v4, p0}, Lcom/kwad/components/core/webview/b/h$15$1;-><init>(Lcom/kwad/components/core/webview/b/h$15;)V

    invoke-interface {v0, v1, v3, v4}, Lcom/kwad/sdk/export/proxy/AdHttpProxy;->doPost(Ljava/lang/String;Ljava/util/Map;Lcom/kwad/sdk/export/proxy/AdHttpBodyBuilder;)Lcom/kwad/sdk/core/network/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/c;->Bd()Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "\u4e0a\u4f20TK\u8986\u76d6\u7387\u5b8c\u6210:"

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, v0, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_2
    invoke-static {v2, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    const-string v0, "\u4e0a\u4f20TK\u8986\u76d6\u7387\u5931\u8d25"

    goto :goto_2
.end method
