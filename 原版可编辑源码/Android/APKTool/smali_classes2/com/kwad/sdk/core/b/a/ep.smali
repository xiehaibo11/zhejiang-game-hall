.class public final Lcom/kwad/sdk/core/b/a/ep;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    const-string v1, "interactionInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->cycleAggregateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->cycleAggregateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;

    const-string v0, "cycleAggregateInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;->parseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 2

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    const-string v1, "interactionInfo"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->cycleAggregateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;

    const-string v0, "cycleAggregateInfo"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ep;->a(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ep;->b(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
