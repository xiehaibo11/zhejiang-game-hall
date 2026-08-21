.class public Lcom/kwad/components/core/response/model/AdResultData;
.super Lcom/kwad/sdk/core/network/BaseResultData;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# static fields
.field private static final TAG:Ljava/lang/String; = "AdResultData"

.field private static final serialVersionUID:J = -0xb5d74d495b48f24L


# instance fields
.field private mAdTemplateList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation
.end field

.field protected mOriginalJson:Ljava/lang/String;

.field private mRequestAdSceneMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Lcom/kwad/sdk/internal/api/SceneImpl;",
            ">;"
        }
    .end annotation
.end field

.field public pageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

.field public pcursor:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/BaseResultData;-><init>()V

    new-instance v0, Lcom/kwad/sdk/core/response/model/PageInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/PageInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/response/model/AdResultData;->pageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/response/model/AdResultData;->mAdTemplateList:Ljava/util/List;

    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/core/network/BaseResultData;Lcom/kwad/sdk/internal/api/SceneImpl;Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/network/BaseResultData;",
            "Lcom/kwad/sdk/internal/api/SceneImpl;",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0, p2}, Lcom/kwad/components/core/response/model/AdResultData;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    invoke-virtual {p1}, Lcom/kwad/sdk/core/network/BaseResultData;->baseToJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/network/BaseResultData;->parseJson(Lorg/json/JSONObject;)V

    if-eqz p3, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1, p3}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    :cond_0
    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/BaseResultData;-><init>()V

    new-instance v0, Lcom/kwad/sdk/core/response/model/PageInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/PageInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/response/model/AdResultData;->pageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/response/model/AdResultData;->mAdTemplateList:Ljava/util/List;

    if-eqz p1, :cond_0

    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    iput-object v0, p0, Lcom/kwad/components/core/response/model/AdResultData;->mRequestAdSceneMap:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public constructor <init>(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/internal/api/SceneImpl;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/BaseResultData;-><init>()V

    new-instance v0, Lcom/kwad/sdk/core/response/model/PageInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/PageInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/response/model/AdResultData;->pageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/response/model/AdResultData;->mAdTemplateList:Ljava/util/List;

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/response/model/AdResultData;->setRequestAdSceneList(Ljava/util/List;)V

    return-void
.end method

.method public static createFromResponseJson(Ljava/lang/String;Lcom/kwad/sdk/internal/api/SceneImpl;)Lcom/kwad/components/core/response/model/AdResultData;
    .locals 2

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance v1, Lcom/kwad/components/core/response/model/AdResultData;

    invoke-direct {v1, p1}, Lcom/kwad/components/core/response/model/AdResultData;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/response/model/AdResultData;->parseJson(Lorg/json/JSONObject;)V

    iput-object p0, v1, Lcom/kwad/components/core/response/model/AdResultData;->mOriginalJson:Ljava/lang/String;

    return-object v1
.end method


# virtual methods
.method public clone()Lcom/kwad/components/core/response/model/AdResultData;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/response/model/AdResultData;

    invoke-direct {v0}, Lcom/kwad/components/core/response/model/AdResultData;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->toJson()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/response/model/AdResultData;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-object v0
.end method

.method public bridge synthetic clone()Ljava/lang/Object;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->clone()Lcom/kwad/components/core/response/model/AdResultData;

    move-result-object v0

    return-object v0
.end method

.method public getAdScene(J)Lcom/kwad/sdk/internal/api/SceneImpl;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/response/model/AdResultData;->mRequestAdSceneMap:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/internal/api/SceneImpl;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-nez v0, :cond_1

    new-instance v0, Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {v0, p1, p2}, Lcom/kwad/sdk/internal/api/SceneImpl;-><init>(J)V

    :cond_1
    return-object v0
.end method

.method public getAdTemplateList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/core/response/model/AdResultData;->mAdTemplateList:Ljava/util/List;

    return-object v0
.end method

.method public getDefaultAdScene()Lcom/kwad/sdk/internal/api/SceneImpl;
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getPosId()J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdScene(J)Lcom/kwad/sdk/internal/api/SceneImpl;

    move-result-object v0

    return-object v0
.end method

.method public getFirstAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0

    :cond_1
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getPosId()J
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getProceedTemplateList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_0

    const-wide/16 v0, 0x0

    return-wide v0

    :cond_0
    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    return-wide v0
.end method

.method public getProceedTemplateList()Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v1

    if-nez v1, :cond_0

    return-object v0

    :cond_0
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_1

    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method public getResponseJson()Ljava/lang/String;
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/response/model/AdResultData;->mOriginalJson:Ljava/lang/String;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-super {p0}, Lcom/kwad/sdk/core/network/BaseResultData;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/response/model/AdResultData;->pcursor:Ljava/lang/String;

    const-string v2, "pcursor"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/core/response/model/AdResultData;->pageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    const-string v2, "pageInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/t;->I(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/a/d;->cQ(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "impAdInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdResultDataEmpty()Z
    .locals 5

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    const/4 v2, 0x1

    const-string v3, "AdResultData"

    if-eqz v1, :cond_0

    const-string v0, "adTemplateList is empty"

    :goto_0
    invoke-static {v3, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v4, "adTemplateList size = "

    invoke-direct {v1, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_1

    const-string v0, "adInfoList is empty"

    goto :goto_0

    :cond_1
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdInfo;

    if-nez v0, :cond_2

    const-string v0, "adInfo is null"

    goto :goto_0

    :cond_2
    return v1
.end method

.method public isBidding()Z
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getProceedTemplateList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return v2

    :cond_0
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cv(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result v0

    if-lez v0, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    return v2
.end method

.method public isDataEmpty()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public parseJson(Lorg/json/JSONObject;)V
    .locals 6

    const-string v0, "json bug"

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/network/BaseResultData;->parseJson(Lorg/json/JSONObject;)V

    if-nez p1, :cond_0

    return-void

    :cond_0
    :try_start_0
    const-string v1, "pcursor"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/components/core/response/model/AdResultData;->pcursor:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    :try_start_1
    const-string v1, "pageInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-static {v1}, Lcom/kwad/sdk/core/a/d;->getResponseData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/response/model/AdResultData;->pageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/response/model/PageInfo;->parseJson(Lorg/json/JSONObject;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    const-string v1, "impAdInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    invoke-static {p1}, Lcom/kwad/sdk/core/a/d;->getResponseData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    if-nez v1, :cond_3

    :try_start_3
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result p1

    if-lez p1, :cond_4

    const/4 p1, 0x0

    :goto_1
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge p1, v2, :cond_4

    invoke-virtual {v1, p1}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v2

    if-eqz v2, :cond_2

    new-instance v3, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v3}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    invoke-virtual {v3, v2}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V

    iget-wide v4, p0, Lcom/kwad/components/core/response/model/AdResultData;->llsid:J

    iput-wide v4, v3, Lcom/kwad/sdk/core/response/model/AdTemplate;->llsid:J

    iget-object v2, p0, Lcom/kwad/components/core/response/model/AdResultData;->extra:Ljava/lang/String;

    iput-object v2, v3, Lcom/kwad/sdk/core/response/model/AdTemplate;->extra:Ljava/lang/String;

    iget-wide v4, v3, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-virtual {p0, v4, v5}, Lcom/kwad/components/core/response/model/AdResultData;->getAdScene(J)Lcom/kwad/sdk/internal/api/SceneImpl;

    move-result-object v2

    iput-object v2, v3, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    iget-object v2, p0, Lcom/kwad/components/core/response/model/AdResultData;->pageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    iput-object v2, v3, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    iget-object v2, p0, Lcom/kwad/components/core/response/model/AdResultData;->mAdTemplateList:Ljava/util/List;

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_1
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    :cond_2
    add-int/lit8 p1, p1, 0x1

    goto :goto_1

    :catch_1
    move-exception p1

    :try_start_4
    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    :cond_3
    return-void

    :catch_2
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    return-void
.end method

.method public setAdTemplateList(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;)V"
        }
    .end annotation

    iput-object p1, p0, Lcom/kwad/components/core/response/model/AdResultData;->mAdTemplateList:Ljava/util/List;

    return-void
.end method

.method public setRequestAdSceneList(Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/internal/api/SceneImpl;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    new-instance v0, Ljava/util/HashMap;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    iput-object v0, p0, Lcom/kwad/components/core/response/model/AdResultData;->mRequestAdSceneMap:Ljava/util/Map;

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/internal/api/SceneImpl;

    iget-object v1, p0, Lcom/kwad/components/core/response/model/AdResultData;->mRequestAdSceneMap:Ljava/util/Map;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method

.method public toJson()Lorg/json/JSONObject;
    .locals 3

    invoke-super {p0}, Lcom/kwad/sdk/core/network/BaseResultData;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/response/model/AdResultData;->pcursor:Ljava/lang/String;

    const-string v2, "pcursor"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/core/response/model/AdResultData;->pageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    const-string v2, "pageInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v1

    const-string v2, "impAdInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    return-object v0
.end method
