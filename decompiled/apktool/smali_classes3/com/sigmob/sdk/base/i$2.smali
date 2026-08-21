.class Lcom/sigmob/sdk/base/i$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/network/e$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/i;->T()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/i;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/i;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/i$2;->a:Lcom/sigmob/sdk/base/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;)V
    .locals 1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;->config:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    if-eqz v0, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/base/i$2;->a:Lcom/sigmob/sdk/base/i;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/i;->a(Lcom/sigmob/sdk/base/i;Lcom/sigmob/sdk/base/models/config/SdkConfig;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/i$2;->a:Lcom/sigmob/sdk/base/i;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/i;->b(Lcom/sigmob/sdk/base/i;Lcom/sigmob/sdk/base/models/config/SdkConfig;)V

    goto :goto_0

    :cond_0
    iget-object p1, p1, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;->error_message:Ljava/lang/String;

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    iget-object p1, p0, Lcom/sigmob/sdk/base/i$2;->a:Lcom/sigmob/sdk/base/i;

    invoke-static {p1}, Lcom/sigmob/sdk/base/i;->b(Lcom/sigmob/sdk/base/i;)V

    return-void
.end method

.method public onErrorResponse(Lcom/czhj/volley/VolleyError;)V
    .locals 0

    invoke-virtual {p1}, Lcom/czhj/volley/VolleyError;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/i$2;->a:Lcom/sigmob/sdk/base/i;

    invoke-static {p1}, Lcom/sigmob/sdk/base/i;->b(Lcom/sigmob/sdk/base/i;)V

    return-void
.end method
