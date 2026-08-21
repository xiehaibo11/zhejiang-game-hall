.class Lcom/sigmob/sdk/base/common/f$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/f;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/f$b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/f$b;

.field final synthetic b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field final synthetic c:Lcom/sigmob/sdk/base/common/f;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/f;Lcom/sigmob/sdk/base/common/f$b;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/f$4;->c:Lcom/sigmob/sdk/base/common/f;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/f$4;->a:Lcom/sigmob/sdk/base/common/f$b;

    iput-object p3, p0, Lcom/sigmob/sdk/base/common/f$4;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public downloadProgress(Lcom/czhj/volley/toolbox/DownloadItem;JJ)V
    .locals 0

    return-void
.end method

.method public onCancel(Lcom/czhj/volley/toolbox/DownloadItem;)V
    .locals 0

    return-void
.end method

.method public onErrorResponse(Lcom/czhj/volley/toolbox/DownloadItem;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f$4;->a:Lcom/sigmob/sdk/base/common/f$b;

    if-eqz v0, :cond_1

    iget-object v0, p1, Lcom/czhj/volley/toolbox/DownloadItem;->error:Lcom/czhj/volley/VolleyError;

    invoke-virtual {v0}, Lcom/czhj/volley/VolleyError;->getMessage()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p1, Lcom/czhj/volley/toolbox/DownloadItem;->error:Lcom/czhj/volley/VolleyError;

    iget-object v1, v1, Lcom/czhj/volley/VolleyError;->networkResponse:Lcom/czhj/volley/NetworkResponse;

    if-eqz v1, :cond_0

    iget-object v0, p1, Lcom/czhj/volley/toolbox/DownloadItem;->error:Lcom/czhj/volley/VolleyError;

    iget-object v0, v0, Lcom/czhj/volley/VolleyError;->networkResponse:Lcom/czhj/volley/NetworkResponse;

    iget v0, v0, Lcom/czhj/volley/NetworkResponse;->statusCode:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$4;->a:Lcom/sigmob/sdk/base/common/f$b;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/f$4;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {v1, v2, v0}, Lcom/sigmob/sdk/base/common/f$b;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V

    :cond_1
    iget-object p1, p1, Lcom/czhj/volley/toolbox/DownloadItem;->error:Lcom/czhj/volley/VolleyError;

    const-string v0, "onErrorResponse: "

    invoke-static {v0, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    return-void
.end method

.method public onSuccess(Lcom/czhj/volley/toolbox/DownloadItem;)V
    .locals 2

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/f$4;->a:Lcom/sigmob/sdk/base/common/f$b;

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f$4;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const/4 v1, 0x0

    invoke-interface {p1, v0, v1}, Lcom/sigmob/sdk/base/common/f$b;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
