.class Lcom/sigmob/sdk/base/common/z$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:J


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/z$6;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/z$6;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/base/common/z$6;->c:Ljava/lang/String;

    iput-object p4, p0, Lcom/sigmob/sdk/base/common/z$6;->d:Ljava/lang/String;

    iput-object p5, p0, Lcom/sigmob/sdk/base/common/z$6;->e:Ljava/lang/String;

    iput-wide p6, p0, Lcom/sigmob/sdk/base/common/z$6;->f:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 4

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/z$6;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/z$6;->b:Ljava/lang/String;

    if-eqz v0, :cond_0

    const-string v1, "click"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    move-object v0, p1

    check-cast v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$6;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_scene_id()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setScene_id(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$6;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_scene_desc()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setScene_desc(Ljava/lang/String;)V

    :cond_0
    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/z$6;->c:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setIs_deeplink(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/z$6;->d:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setFinal_url(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/z$6;->e:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setCoordinate(Ljava/lang/String;)V

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-wide v2, p0, Lcom/sigmob/sdk/base/common/z$6;->f:J

    long-to-float v2, v2

    const/high16 v3, 0x447a0000    # 1000.0f

    div-float/2addr v2, v3

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    aput-object v2, v0, v1

    const-string v1, "%.2f"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setVtime(Ljava/lang/String;)V

    :cond_1
    return-void
.end method
