.class public final Lcom/kwad/components/ad/a/b;
.super Lcom/kwad/sdk/core/network/b;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/b;-><init>()V

    const-string v0, "adxId"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/components/ad/a/b;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p1, Lorg/json/JSONArray;

    invoke-direct {p1, p2}, Lorg/json/JSONArray;-><init>(Ljava/util/Collection;)V

    const-string p2, "materialIds"

    invoke-virtual {p0, p2, p1}, Lcom/kwad/components/ad/a/b;->putBody(Ljava/lang/String;Lorg/json/JSONArray;)V

    return-void
.end method


# virtual methods
.method public final buildBaseBody()V
    .locals 2

    const-string v0, "protocolVersion"

    const-string v1, "2.0"

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/a/b;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "SDKVersion"

    const-string v1, "3.3.42"

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/a/b;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "SDKVersionCode"

    const v1, 0x2e4c58

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/a/b;->putBody(Ljava/lang/String;I)V

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getApiVersion()Ljava/lang/String;

    move-result-object v0

    const-string v1, "sdkApiVersion"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/components/ad/a/b;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getApiVersionCode()I

    move-result v0

    const-string v1, "sdkApiVersionCode"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/components/ad/a/b;->putBody(Ljava/lang/String;I)V

    const-string v0, "sdkType"

    const/4 v1, 0x1

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/a/b;->putBody(Ljava/lang/String;I)V

    return-void
.end method

.method public final buildBaseHeader()V
    .locals 0

    return-void
.end method

.method public final getUrl()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/h;->xd()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
