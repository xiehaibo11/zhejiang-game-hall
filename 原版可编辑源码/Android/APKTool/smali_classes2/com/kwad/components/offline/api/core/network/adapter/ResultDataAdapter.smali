.class public Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;
.super Lcom/kwad/sdk/core/network/BaseResultData;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;",
        ">",
        "Lcom/kwad/sdk/core/network/BaseResultData;"
    }
.end annotation


# static fields
.field private static final serialVersionUID:J = -0x600c386074f9c748L


# instance fields
.field private final mOfflineCompoResultData:Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)V"
        }
    .end annotation

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/BaseResultData;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;->mOfflineCompoResultData:Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;

    return-void
.end method


# virtual methods
.method public getOfflineCompoResultData()Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TT;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;->mOfflineCompoResultData:Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;

    return-object v0
.end method

.method public hasData()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;->mOfflineCompoResultData:Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;

    invoke-virtual {v0}, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->hasData()Z

    move-result v0

    return v0
.end method

.method public isDataEmpty()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;->mOfflineCompoResultData:Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;

    invoke-virtual {v0}, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->isDataEmpty()Z

    move-result v0

    return v0
.end method

.method public isResultOk()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;->mOfflineCompoResultData:Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;

    invoke-virtual {v0}, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->isResultOk()Z

    move-result v0

    return v0
.end method

.method public notifyFailOnResultError()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;->mOfflineCompoResultData:Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;

    invoke-virtual {v0}, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->notifyFailOnResultError()Z

    move-result v0

    return v0
.end method

.method public parseJson(Lorg/json/JSONObject;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/network/BaseResultData;->parseJson(Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;->mOfflineCompoResultData:Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;

    invoke-virtual {v0, p1}, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->parseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method public toJson()Lorg/json/JSONObject;
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/core/network/BaseResultData;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/offline/api/core/network/adapter/ResultDataAdapter;->mOfflineCompoResultData:Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;

    invoke-virtual {v1}, Lcom/kwad/components/offline/api/core/network/model/CommonOfflineCompoResultData;->toJson()Lorg/json/JSONObject;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/t;->merge(Lorg/json/JSONObject;Lorg/json/JSONObject;)V

    return-object v0
.end method
