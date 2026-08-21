.class public final Lcom/kwad/components/core/p/a/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# instance fields
.field public PN:Lcom/kwad/sdk/internal/api/SceneImpl;

.field public PO:J

.field public PP:J

.field public sdkExtraData:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V
    .locals 4

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/components/core/p/a/b;->PO:J

    iput-wide v0, p0, Lcom/kwad/components/core/p/a/b;->PP:J

    invoke-static {}, Lcom/kwad/sdk/utils/bf;->getPosId()J

    move-result-wide v2

    cmp-long p1, v2, v0

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-static {}, Lcom/kwad/sdk/utils/bf;->getPosId()J

    move-result-wide v2

    invoke-virtual {p1, v2, v3}, Lcom/kwad/sdk/internal/api/SceneImpl;->setPosId(J)V

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/utils/bf;->Ka()J

    move-result-wide v2

    cmp-long p1, v2, v0

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-static {}, Lcom/kwad/sdk/utils/bf;->Ka()J

    move-result-wide v0

    long-to-int v0, v0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->setAdNum(I)V

    :cond_1
    return-void
.end method


# virtual methods
.method public final av(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getRewardCallbackExtraData()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    goto :goto_0

    :cond_1
    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1

    :cond_2
    :goto_0
    return-object v1
.end method

.method public final pJ()Lcom/kwad/sdk/internal/api/a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    iget-object v0, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->mKsAdLabel:Lcom/kwad/sdk/internal/api/a;

    return-object v0
.end method

.method public final parseJson(Lorg/json/JSONObject;)V
    .locals 0

    return-void
.end method

.method public final toJson()Lorg/json/JSONObject;
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    iget-wide v1, p0, Lcom/kwad/components/core/p/a/b;->PO:J

    const-string v3, "pageScene"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-wide v1, p0, Lcom/kwad/components/core/p/a/b;->PP:J

    const-string v3, "subPageScene"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/b;->sdkExtraData:Ljava/lang/String;

    const-string v2, "sdkExtraData"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "extraData"

    invoke-virtual {p0, v1}, Lcom/kwad/components/core/p/a/b;->av(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-object v0
.end method
