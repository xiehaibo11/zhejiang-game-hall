.class Lcom/sigmob/sdk/base/network/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/network/b;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdRequest;Lcom/czhj/volley/NetworkResponse;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field final synthetic d:Lcom/czhj/volley/NetworkResponse;


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/czhj/volley/NetworkResponse;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/network/b$2;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/sigmob/sdk/base/network/b$2;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/base/network/b$2;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p4, p0, Lcom/sigmob/sdk/base/network/b$2;->d:Lcom/czhj/volley/NetworkResponse;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 2

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_2

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/b$2;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setUrl(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/b$2;->b:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setTracking_type(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/b$2;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/b$2;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setRequest_id(Ljava/lang/String;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/network/b$2;->d:Lcom/czhj/volley/NetworkResponse;

    if-eqz v0, :cond_2

    iget-object v0, v0, Lcom/czhj/volley/NetworkResponse;->data:[B

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/b$2;->d:Lcom/czhj/volley/NetworkResponse;

    iget-object v0, v0, Lcom/czhj/volley/NetworkResponse;->data:[B

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setResponse(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/b$2;->d:Lcom/czhj/volley/NetworkResponse;

    iget v0, v0, Lcom/czhj/volley/NetworkResponse;->statusCode:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setHttp_code(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/b$2;->d:Lcom/czhj/volley/NetworkResponse;

    iget-wide v0, v0, Lcom/czhj/volley/NetworkResponse;->networkTimeMs:J

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setTime_spend(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/b$2;->d:Lcom/czhj/volley/NetworkResponse;

    iget-object v0, v0, Lcom/czhj/volley/NetworkResponse;->headers:Ljava/util/Map;

    const-string v1, "Content-Type"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setContent_type(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/b$2;->d:Lcom/czhj/volley/NetworkResponse;

    iget-object v0, v0, Lcom/czhj/volley/NetworkResponse;->headers:Ljava/util/Map;

    const-string v1, "Content-Length"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setContent_length(Ljava/lang/String;)V

    :cond_2
    return-void
.end method
