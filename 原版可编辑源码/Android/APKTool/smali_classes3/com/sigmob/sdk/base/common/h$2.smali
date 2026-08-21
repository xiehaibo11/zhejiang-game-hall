.class Lcom/sigmob/sdk/base/common/h$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/sdk/common/network/JsonRequest$Listener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/h;->i(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/h;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/h;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h$2;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onErrorResponse(Lcom/czhj/volley/VolleyError;)V
    .locals 5

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$2;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/common/h$2$5;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/common/h$2$5;-><init>(Lcom/sigmob/sdk/base/common/h$2;)V

    const-string v2, "download_start"

    const-string v3, "0"

    invoke-static {v2, v3, v0, v1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    invoke-virtual {p1}, Lcom/czhj/volley/VolleyError;->getMessage()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/h$2;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v1}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    new-instance v3, Lcom/sigmob/sdk/base/common/h$2$6;

    invoke-direct {v3, p0}, Lcom/sigmob/sdk/base/common/h$2$6;-><init>(Lcom/sigmob/sdk/base/common/h$2;)V

    const/4 v4, 0x0

    invoke-static {v2, v4, v0, v1, v3}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    invoke-virtual {p1}, Lcom/czhj/volley/VolleyError;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void
.end method

.method public onSuccess(Lorg/json/JSONObject;)V
    .locals 6

    const-string v0, "data"

    const-string v1, "0"

    const-string v2, "download_start"

    const/4 v3, 0x0

    :try_start_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "GDTConvertRequest response "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const-string v4, "ret"

    invoke-virtual {p1, v4}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v4

    if-nez v4, :cond_1

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v4

    const-string v5, "dstlink"

    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    const-string v0, "clickid"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$2;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    instance-of v5, v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v5, :cond_0

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v5, "_CLICKID_"

    invoke-virtual {v0, v5, p1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$2;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1, v4}, Lcom/sigmob/sdk/base/common/h;->a(Lcom/sigmob/sdk/base/common/h;Ljava/lang/String;)Ljava/lang/String;

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$2;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/sigmob/sdk/base/common/n;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$2;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    new-instance v4, Lcom/sigmob/sdk/base/common/h$2$1;

    invoke-direct {v4, p0}, Lcom/sigmob/sdk/base/common/h$2$1;-><init>(Lcom/sigmob/sdk/base/common/h$2;)V

    invoke-static {v2, v1, v0, v4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$2;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    new-instance v4, Lcom/sigmob/sdk/base/common/h$2$2;

    invoke-direct {v4, p0}, Lcom/sigmob/sdk/base/common/h$2$2;-><init>(Lcom/sigmob/sdk/base/common/h$2;)V

    invoke-static {v2, v3, p1, v0, v4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$2;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    new-instance v4, Lcom/sigmob/sdk/base/common/h$2$3;

    invoke-direct {v4, p0}, Lcom/sigmob/sdk/base/common/h$2$3;-><init>(Lcom/sigmob/sdk/base/common/h$2;)V

    invoke-static {v2, v1, v0, v4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$2;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/common/h$2$4;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/common/h$2$4;-><init>(Lcom/sigmob/sdk/base/common/h$2;)V

    invoke-static {v2, v3, p1, v0, v1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :goto_0
    return-void
.end method
