.class Lcom/sigmob/sdk/nativead/a$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/sigmob/sdk/nativead/a;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/a;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a$3;->c:Lcom/sigmob/sdk/nativead/a;

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/a$3;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/nativead/a$3;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 1

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a$3;->c:Lcom/sigmob/sdk/nativead/a;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/a;->c(Lcom/sigmob/sdk/nativead/a;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setAdtype(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a$3;->c:Lcom/sigmob/sdk/nativead/a;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/a;->c(Lcom/sigmob/sdk/nativead/a;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLoad_id()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setLoad_id(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a$3;->c:Lcom/sigmob/sdk/nativead/a;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/a;->c(Lcom/sigmob/sdk/nativead/a;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setRequest_id(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a$3;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setReason(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a$3;->b:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setContent(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a$3;->c:Lcom/sigmob/sdk/nativead/a;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/a;->c(Lcom/sigmob/sdk/nativead/a;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVid()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setVid(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
