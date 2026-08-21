.class Lcom/sigmob/sdk/base/common/z$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/common/g;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/czhj/volley/NetworkResponse;Lcom/sigmob/sdk/base/common/z$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/sigmob/sdk/base/common/g;

.field final synthetic c:Lcom/czhj/volley/NetworkResponse;

.field final synthetic d:Lcom/sigmob/sdk/base/common/z$a;


# direct methods
.method constructor <init>(Ljava/lang/String;Lcom/sigmob/sdk/base/common/g;Lcom/czhj/volley/NetworkResponse;Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/z$4;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/z$4;->b:Lcom/sigmob/sdk/base/common/g;

    iput-object p3, p0, Lcom/sigmob/sdk/base/common/z$4;->c:Lcom/czhj/volley/NetworkResponse;

    iput-object p4, p0, Lcom/sigmob/sdk/base/common/z$4;->d:Lcom/sigmob/sdk/base/common/z$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 5

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_3

    move-object v0, p1

    check-cast v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    const-string v1, "13"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setAc_type(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$4;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setUrl(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$4;->b:Lcom/sigmob/sdk/base/common/g;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/g;->f()Ljava/lang/Long;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "1"

    goto :goto_0

    :cond_0
    const-string v1, "0"

    :goto_0
    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setRetry(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$4;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/g;->n()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setCategory(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$4;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/g;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setRequest_id(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$4;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/g;->h()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$4;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/g;->h()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setTimestamp(Ljava/lang/String;)V

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$4;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/g;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setSource(Ljava/lang/String;)V

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/z$4;->c:Lcom/czhj/volley/NetworkResponse;

    if-eqz v2, :cond_3

    iget-object v2, v2, Lcom/czhj/volley/NetworkResponse;->data:[B

    if-eqz v2, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$4;->c:Lcom/czhj/volley/NetworkResponse;

    iget-object v1, v1, Lcom/czhj/volley/NetworkResponse;->data:[B

    const/4 v2, 0x2

    invoke-static {v1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    :cond_2
    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setResponse(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$4;->c:Lcom/czhj/volley/NetworkResponse;

    iget v1, v1, Lcom/czhj/volley/NetworkResponse;->statusCode:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setHttp_code(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$4;->c:Lcom/czhj/volley/NetworkResponse;

    iget-wide v1, v1, Lcom/czhj/volley/NetworkResponse;->networkTimeMs:J

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setTime_spend(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$4;->c:Lcom/czhj/volley/NetworkResponse;

    iget-object v1, v1, Lcom/czhj/volley/NetworkResponse;->headers:Ljava/util/Map;

    const-string v2, "Content-Type"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setContent_type(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$4;->c:Lcom/czhj/volley/NetworkResponse;

    iget-object v1, v1, Lcom/czhj/volley/NetworkResponse;->headers:Ljava/util/Map;

    const-string v2, "Content-Length"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setContent_length(Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/z$4;->d:Lcom/sigmob/sdk/base/common/z$a;

    if-eqz v0, :cond_4

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/base/common/z$a;->a(Ljava/lang/Object;)V

    :cond_4
    return-void
.end method
