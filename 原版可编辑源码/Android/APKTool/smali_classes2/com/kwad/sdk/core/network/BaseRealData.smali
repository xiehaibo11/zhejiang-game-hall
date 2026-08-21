.class public abstract Lcom/kwad/sdk/core/network/BaseRealData;
.super Lcom/kwad/sdk/core/network/BaseResultData;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/BaseResultData;-><init>()V

    return-void
.end method


# virtual methods
.method protected abstract parseData(Lorg/json/JSONObject;)V
.end method

.method public parseJson(Lorg/json/JSONObject;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/network/BaseResultData;->parseJson(Lorg/json/JSONObject;)V

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    const-string v1, "data"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/a/d;->getResponseData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v1}, Lcom/kwad/sdk/core/network/BaseRealData;->parseData(Lorg/json/JSONObject;)V

    goto :goto_0

    :cond_1
    iput v0, p0, Lcom/kwad/sdk/core/network/BaseRealData;->result:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    iput v0, p0, Lcom/kwad/sdk/core/network/BaseRealData;->result:I

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/network/BaseRealData;->errorMsg:Ljava/lang/String;

    :goto_0
    return-void
.end method
