.class public final Lcom/kwad/sdk/collector/a/b;
.super Lcom/kwad/sdk/core/network/d;


# direct methods
.method public constructor <init>(Ljava/util/Collection;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Collection<",
            "Lcom/kwad/sdk/collector/model/e;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/d;-><init>()V

    invoke-static {p1}, Lcom/kwad/sdk/collector/a/b;->a(Ljava/util/Collection;)Lorg/json/JSONArray;

    move-result-object p1

    const-string v0, "collectData"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/collector/a/b;->putBody(Ljava/lang/String;Lorg/json/JSONArray;)V

    const-string p1, "collectType"

    const/4 v0, 0x1

    invoke-virtual {p0, p1, v0}, Lcom/kwad/sdk/collector/a/b;->putBody(Ljava/lang/String;I)V

    const-string p1, "sdkVersion"

    const-string v0, "3.3.42"

    invoke-virtual {p0, p1, v0}, Lcom/kwad/sdk/collector/a/b;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "sdkVersionCode"

    const v0, 0x2e4c58

    invoke-virtual {p0, p1, v0}, Lcom/kwad/sdk/collector/a/b;->putBody(Ljava/lang/String;I)V

    return-void
.end method

.method private static a(Ljava/util/Collection;)Lorg/json/JSONArray;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Collection<",
            "Lcom/kwad/sdk/collector/model/e;",
            ">;)",
            "Lorg/json/JSONArray;"
        }
    .end annotation

    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    invoke-interface {p0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/collector/model/e;

    invoke-interface {v1}, Lcom/kwad/sdk/collector/model/e;->yL()Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    :cond_1
    return-object v0
.end method


# virtual methods
.method public final getUrl()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/h;->xj()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
