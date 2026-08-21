.class Lcom/sigmob/sdk/base/common/z$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/common/g;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/czhj/volley/VolleyError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/volley/VolleyError;


# direct methods
.method constructor <init>(Lcom/czhj/volley/VolleyError;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/z$3;->a:Lcom/czhj/volley/VolleyError;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 2

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_1

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    const-string v0, "-1"

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setHttp_code(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/z$3;->a:Lcom/czhj/volley/VolleyError;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/czhj/volley/VolleyError;->getNetworkTimeMs()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, "0"

    :goto_0
    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setTime_spend(Ljava/lang/String;)V

    :cond_1
    return-void
.end method
