.class public final Lcom/kwad/components/core/p/d;
.super Lcom/kwad/sdk/core/network/d;


# instance fields
.field public PD:J


# direct methods
.method public constructor <init>(ILcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/d;-><init>()V

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bD(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    :try_start_0
    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->bE(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    :try_start_1
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "serverExt"

    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v2, v3}, Lcom/kwad/components/core/p/d;->putBody(Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_0
    move-exception v1

    :try_start_2
    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    if-eqz v0, :cond_1

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v0, "checkType"

    invoke-static {v1, v0, p1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    const-string p1, "callbackUrlInfo"

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/kwad/components/core/p/d;->putBody(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_1
    :goto_1
    new-instance p1, Lcom/kwad/components/core/p/a/b;

    iget-object p2, p2, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {p1, p2}, Lcom/kwad/components/core/p/a/b;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    new-instance p2, Lorg/json/JSONArray;

    invoke-direct {p2}, Lorg/json/JSONArray;-><init>()V

    invoke-virtual {p1}, Lcom/kwad/components/core/p/a/b;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONArray;Lorg/json/JSONObject;)V

    const-string p1, "impInfo"

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/core/p/d;->putBody(Ljava/lang/String;Lorg/json/JSONArray;)V

    return-void
.end method


# virtual methods
.method public final getUrl()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/h;->xk()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
