.class public final Lcom/kwad/sdk/core/b/a/bh;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/Integer;

    const-string v1, "5000"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "impressionCheckMs"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->impressionCheckMs:I

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "2000"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "callBackAdvanceMs"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->callBackAdvanceMs:I

    const-string v0, "serverCheckSwitch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->serverCheckSwitch:Z

    const-string v0, "rewardAdvanceSwitch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->rewardAdvanceSwitch:Z

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 2

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->impressionCheckMs:I

    const-string v1, "impressionCheckMs"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->callBackAdvanceMs:I

    const-string v1, "callBackAdvanceMs"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->serverCheckSwitch:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->serverCheckSwitch:Z

    const-string v1, "serverCheckSwitch"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_1
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->rewardAdvanceSwitch:Z

    if-eqz v0, :cond_2

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->rewardAdvanceSwitch:Z

    const-string v0, "rewardAdvanceSwitch"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_2
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/bh;->a(Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/bh;->b(Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
