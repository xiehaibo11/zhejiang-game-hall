.class public abstract Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;
.super Lcom/kwad/components/offline/api/core/network/model/BaseOfflineCompoResultData;


# static fields
.field private static final CODE_RESULT_OK:I = 0x1

.field private static final serialVersionUID:J = 0x67975cdfb7e0ba78L


# instance fields
.field public cookie:Ljava/lang/String;

.field public errorMsg:Ljava/lang/String;

.field public extra:Ljava/lang/String;

.field public hasAd:Z

.field public llsid:J

.field private mBaseResultData:Lcom/kwad/sdk/core/network/BaseResultData;

.field private mKeepOriginResponse:Z

.field private mNotifyFailOnResultError:Z

.field public originResponseData:Lorg/json/JSONObject;

.field public result:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/offline/api/core/network/model/BaseOfflineCompoResultData;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mNotifyFailOnResultError:Z

    new-instance v0, Lcom/kwad/sdk/core/network/EmptyResultData;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/EmptyResultData;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mBaseResultData:Lcom/kwad/sdk/core/network/BaseResultData;

    return-void
.end method


# virtual methods
.method public hasData()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->hasAd:Z

    return v0
.end method

.method public isDataEmpty()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public isResultOk()Z
    .locals 2

    iget v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->result:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public notifyFailOnResultError()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mNotifyFailOnResultError:Z

    return v0
.end method

.method public parseJson(Lorg/json/JSONObject;)V
    .locals 6

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mBaseResultData:Lcom/kwad/sdk/core/network/BaseResultData;

    if-nez v0, :cond_1

    new-instance v0, Lcom/kwad/sdk/core/network/EmptyResultData;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/EmptyResultData;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mBaseResultData:Lcom/kwad/sdk/core/network/BaseResultData;

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mBaseResultData:Lcom/kwad/sdk/core/network/BaseResultData;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/network/BaseResultData;->parseJson(Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mBaseResultData:Lcom/kwad/sdk/core/network/BaseResultData;

    iget-wide v0, v0, Lcom/kwad/sdk/core/network/BaseResultData;->llsid:J

    iput-wide v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->llsid:J

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mBaseResultData:Lcom/kwad/sdk/core/network/BaseResultData;

    iget v0, v0, Lcom/kwad/sdk/core/network/BaseResultData;->result:I

    iput v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->result:I

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mBaseResultData:Lcom/kwad/sdk/core/network/BaseResultData;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/network/BaseResultData;->hasAd:Z

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->hasAd:Z

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mBaseResultData:Lcom/kwad/sdk/core/network/BaseResultData;

    iget-object v0, v0, Lcom/kwad/sdk/core/network/BaseResultData;->errorMsg:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->errorMsg:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mBaseResultData:Lcom/kwad/sdk/core/network/BaseResultData;

    iget-object v0, v0, Lcom/kwad/sdk/core/network/BaseResultData;->extra:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->extra:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mBaseResultData:Lcom/kwad/sdk/core/network/BaseResultData;

    iget-object v0, v0, Lcom/kwad/sdk/core/network/BaseResultData;->cookie:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->cookie:Ljava/lang/String;

    iget-boolean v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mKeepOriginResponse:Z

    if-eqz v0, :cond_4

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->originResponseData:Lorg/json/JSONObject;

    invoke-virtual {p1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v0

    :catch_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v2, 0x0

    :try_start_0
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    goto :goto_1

    :catch_1
    move-object v3, v2

    :goto_1
    instance-of v4, v3, Ljava/lang/String;

    if-eqz v4, :cond_2

    move-object v4, v3

    check-cast v4, Ljava/lang/String;

    invoke-static {v4}, Lcom/kwad/sdk/core/a/d;->getResponseData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_2

    :try_start_1
    new-instance v5, Lorg/json/JSONTokener;

    invoke-direct {v5, v4}, Lorg/json/JSONTokener;-><init>(Ljava/lang/String;)V

    invoke-virtual {v5}, Lorg/json/JSONTokener;->nextValue()Ljava/lang/Object;

    move-result-object v2
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_2

    :catch_2
    :cond_2
    if-eqz v2, :cond_3

    :try_start_2
    iget-object v3, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->originResponseData:Lorg/json/JSONObject;

    invoke-virtual {v3, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_3
    iget-object v2, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->originResponseData:Lorg/json/JSONObject;

    invoke-virtual {v2, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :cond_4
    return-void
.end method

.method public setKeepOriginResponse(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mKeepOriginResponse:Z

    return-void
.end method

.method public setNotifyFailOnResultError(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mNotifyFailOnResultError:Z

    return-void
.end method

.method public toJson()Lorg/json/JSONObject;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->mBaseResultData:Lcom/kwad/sdk/core/network/BaseResultData;

    if-nez v0, :cond_0

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/BaseResultData;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    :goto_0
    return-object v0
.end method
