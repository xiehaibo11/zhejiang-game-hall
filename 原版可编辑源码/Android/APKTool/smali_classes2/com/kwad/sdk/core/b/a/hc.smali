.class public final Lcom/kwad/sdk/core/b/a/hc;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "templateId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->templateId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->templateId:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->templateId:Ljava/lang/String;

    :cond_1
    new-instance v0, Ljava/lang/Integer;

    const-string v1, "15"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "showTime"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->showTime:I

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "10"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "duration"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->duration:I

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "5"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "rewardTime"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->rewardTime:I

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "3"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "intervalShow"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->intervalShow:I

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "2"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "dayMaxLimit"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->dayMaxLimit:I

    const-string v0, "style"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->style:I

    const-string v0, "successfulMsg"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->successfulMsg:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->successfulMsg:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->successfulMsg:Ljava/lang/String;

    :cond_2
    const-string v0, "errorMsg"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->errorMsg:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->errorMsg:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->errorMsg:Ljava/lang/String;

    :cond_3
    new-instance v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$StyleInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$StyleInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->styleInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$StyleInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->styleInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$StyleInfo;

    const-string v0, "styleInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$StyleInfo;->parseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->templateId:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->templateId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->templateId:Ljava/lang/String;

    const-string v2, "templateId"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->showTime:I

    const-string v2, "showTime"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->duration:I

    const-string v2, "duration"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->rewardTime:I

    const-string v2, "rewardTime"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->intervalShow:I

    const-string v2, "intervalShow"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->dayMaxLimit:I

    const-string v2, "dayMaxLimit"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->style:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->style:I

    const-string v2, "style"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->successfulMsg:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->successfulMsg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->successfulMsg:Ljava/lang/String;

    const-string v2, "successfulMsg"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->errorMsg:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->errorMsg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->errorMsg:Ljava/lang/String;

    const-string v1, "errorMsg"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->styleInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$StyleInfo;

    const-string v0, "styleInfo"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/hc;->a(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/hc;->b(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
