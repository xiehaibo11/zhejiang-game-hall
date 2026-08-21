.class public final Lcom/kwad/components/ad/reward/i;
.super Lcom/kwad/sdk/core/network/d;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/d;-><init>()V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bD(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "callbackUrlInfo"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/components/ad/reward/i;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/components/core/p/a/b;

    iget-object v1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/p/a/b;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    invoke-virtual {v0}, Lcom/kwad/components/core/p/a/b;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONArray;Lorg/json/JSONObject;)V

    const-string v0, "impInfo"

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/reward/i;->putBody(Ljava/lang/String;Lorg/json/JSONArray;)V

    :try_start_0
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bE(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "serverExt"

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/reward/i;->putBody(Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    return-void
.end method


# virtual methods
.method public final getUrl()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/h;->xg()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
