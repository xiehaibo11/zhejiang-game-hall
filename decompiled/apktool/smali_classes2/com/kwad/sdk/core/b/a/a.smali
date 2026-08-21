.class public final Lcom/kwad/sdk/core/b/a/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/ABParams;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/ABParams;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "videoBlackAreaClick"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->videoBlackAreaClick:I

    const-string v0, "videoBlackAreaNewStyle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->videoBlackAreaNewStyle:I

    const-string v0, "drawActionBarTimes"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->drawActionBarTimes:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->drawActionBarTimes:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_1

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->drawActionBarTimes:Ljava/lang/String;

    :cond_1
    const-string v0, "showVideoAtH5"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->showVideoAtH5:I

    const-string v0, "playableStyle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/response/model/ABParams;->playableStyle:I

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/ABParams;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 2

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->videoBlackAreaClick:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->videoBlackAreaClick:I

    const-string v1, "videoBlackAreaClick"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->videoBlackAreaNewStyle:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->videoBlackAreaNewStyle:I

    const-string v1, "videoBlackAreaNewStyle"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->drawActionBarTimes:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->drawActionBarTimes:Ljava/lang/String;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->drawActionBarTimes:Ljava/lang/String;

    const-string v1, "drawActionBarTimes"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->showVideoAtH5:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->showVideoAtH5:I

    const-string v1, "showVideoAtH5"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget v0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->playableStyle:I

    if-eqz v0, :cond_5

    iget p0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->playableStyle:I

    const-string v0, "playableStyle"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_5
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/ABParams;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/a;->a(Lcom/kwad/sdk/core/response/model/ABParams;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/ABParams;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/a;->b(Lcom/kwad/sdk/core/response/model/ABParams;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
