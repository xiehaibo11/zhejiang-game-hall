.class public final Lcom/kwad/sdk/core/b/a/ac;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/Integer;

    const-string v1, "30"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v2, "skipShowTime"

    invoke-virtual {p1, v2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->skipShowTime:I

    new-instance v0, Ljava/lang/Integer;

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "rewardTime"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->rewardTime:I

    const-string v0, "showLandingPage"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->showLandingPage:I

    const-string v0, "rewardVideoEndCardSwitch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->rewardVideoEndCardSwitch:Z

    const-string v0, "recommendAggregateSwitch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->recommendAggregateSwitch:Z

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->callBackStrategyInfo:Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->callBackStrategyInfo:Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;

    const-string v0, "callBackStrategyInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->parseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 2

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->skipShowTime:I

    const-string v1, "skipShowTime"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->rewardTime:I

    const-string v1, "rewardTime"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->showLandingPage:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->showLandingPage:I

    const-string v1, "showLandingPage"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->rewardVideoEndCardSwitch:Z

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->rewardVideoEndCardSwitch:Z

    const-string v1, "rewardVideoEndCardSwitch"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_2
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->recommendAggregateSwitch:Z

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->recommendAggregateSwitch:Z

    const-string v1, "recommendAggregateSwitch"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_3
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->callBackStrategyInfo:Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;

    const-string v0, "callBackStrategyInfo"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ac;->a(Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ac;->b(Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
