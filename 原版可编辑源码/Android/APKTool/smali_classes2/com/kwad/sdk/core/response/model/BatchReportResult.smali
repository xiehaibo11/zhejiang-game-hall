.class public Lcom/kwad/sdk/core/response/model/BatchReportResult;
.super Lcom/kwad/sdk/core/network/BaseResultData;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# instance fields
.field private interval:J


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/BaseResultData;-><init>()V

    return-void
.end method


# virtual methods
.method public getErrorMsg()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/BatchReportResult;->errorMsg:Ljava/lang/String;

    return-object v0
.end method

.method public getInterval()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/BatchReportResult;->interval:J

    return-wide v0
.end method

.method public getResult()J
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/response/model/BatchReportResult;->result:I

    int-to-long v0, v0

    return-wide v0
.end method

.method public parseJson(Lorg/json/JSONObject;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/network/BaseResultData;->parseJson(Lorg/json/JSONObject;)V

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "interval"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/BatchReportResult;->interval:J

    return-void
.end method

.method public toJson()Lorg/json/JSONObject;
    .locals 4

    invoke-super {p0}, Lcom/kwad/sdk/core/network/BaseResultData;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    iget-wide v1, p0, Lcom/kwad/sdk/core/response/model/BatchReportResult;->interval:J

    const-string v3, "interval"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    return-object v0
.end method
