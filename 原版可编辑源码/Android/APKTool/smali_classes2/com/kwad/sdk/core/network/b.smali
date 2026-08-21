.class public abstract Lcom/kwad/sdk/core/network/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/network/g;


# instance fields
.field public final mBodyParams:Lorg/json/JSONObject;

.field private final mHeader:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method protected constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/network/b;->mHeader:Ljava/util/Map;

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/b;->onCreate()V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/b;->buildBaseHeader()V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/b;->buildBaseBody()V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/b;->encryptDisable()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "x-ksad-ignore-decrypt"

    const-string v1, "true"

    invoke-virtual {p0, v0, v1}, Lcom/kwad/sdk/core/network/b;->addHeader(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/network/e;->Be()Lcom/kwad/sdk/core/network/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/e;->Bf()Ljava/lang/String;

    move-result-object v0

    const-string v1, "cookie"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/network/b;->addHeader(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/b;->getHeader()Ljava/util/Map;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/a/d;->e(Ljava/util/Map;)V

    invoke-static {}, Lcom/kwad/sdk/core/network/q;->getUserAgent()Ljava/lang/String;

    move-result-object v0

    const-string v1, "User-Agent"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/network/b;->addHeader(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/network/q;->Bj()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BrowserUa"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/network/b;->addHeader(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/network/q;->Bi()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SystemUa"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/network/b;->addHeader(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public addHeader(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mHeader:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    :goto_0
    return-void
.end method

.method protected abstract buildBaseBody()V
.end method

.method protected abstract buildBaseHeader()V
.end method

.method public encryptDisable()Z
    .locals 1

    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    const/4 v0, 0x0

    return v0
.end method

.method public getBody()Lorg/json/JSONObject;
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/b;->encryptDisable()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    return-object v0

    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getSDKVersion()Ljava/lang/String;

    move-result-object v2

    const-string v3, "version"

    invoke-static {v0, v3, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/utils/bf;->getAppId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const-string v3, "appId"

    if-nez v2, :cond_1

    invoke-static {}, Lcom/kwad/sdk/utils/bf;->getAppId()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_1
    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getAppId()Ljava/lang/String;

    move-result-object v1

    :goto_0
    invoke-static {v0, v3, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/b;->getBodyParamsString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/a/d;->cQ(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "message"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/b;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/b;->getHeader()Ljava/util/Map;

    move-result-object v2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v2, v3}, Lcom/kwad/sdk/core/a/d;->a(Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    return-object v0
.end method

.method public getBodyMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method protected getBodyParamsString()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getHeader()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mHeader:Ljava/util/Map;

    return-object v0
.end method

.method protected getRequestHost()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/h;->wZ()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getScene()Lcom/kwad/sdk/internal/api/SceneImpl;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public abstract getUrl()Ljava/lang/String;
.end method

.method protected onCreate()V
    .locals 0

    return-void
.end method

.method public putBody(Ljava/lang/String;B)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;B)V

    return-void
.end method

.method public putBody(Ljava/lang/String;D)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2, p3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    return-void
.end method

.method public putBody(Ljava/lang/String;F)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;F)V

    return-void
.end method

.method public putBody(Ljava/lang/String;I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    return-void
.end method

.method public putBody(Ljava/lang/String;J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2, p3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    return-void
.end method

.method public putBody(Ljava/lang/String;Lcom/kwad/sdk/core/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-void
.end method

.method public putBody(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public putBody(Ljava/lang/String;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "+",
            "Lcom/kwad/sdk/core/b;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    return-void
.end method

.method public putBody(Ljava/lang/String;Lorg/json/JSONArray;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;)V

    return-void
.end method

.method public putBody(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public putBody(Ljava/lang/String;Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b;->mBodyParams:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    return-void
.end method
