.class public final Lcom/kwad/sdk/core/b/a/jl;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "category"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->category:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->category:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->category:Ljava/lang/String;

    :cond_1
    const-string v0, "tag"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->tag:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->tag:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->tag:Ljava/lang/String;

    :cond_2
    const-string v0, "msg"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->msg:Lorg/json/JSONObject;

    const-string v0, "extraParam"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->extraParam:Lorg/json/JSONObject;

    const-string v0, "event_id"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->eventId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->eventId:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->eventId:Ljava/lang/String;

    :cond_3
    const-string v0, "rate"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->rate:D

    const-string v0, "suffixRatio"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->suffixRatio:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->suffixRatio:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->suffixRatio:Ljava/lang/String;

    :cond_4
    return-void
.end method

.method private static b(Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->category:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->category:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->category:Ljava/lang/String;

    const-string v2, "category"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->tag:Ljava/lang/String;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->tag:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->tag:Ljava/lang/String;

    const-string v2, "tag"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->msg:Lorg/json/JSONObject;

    const-string v2, "msg"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->extraParam:Lorg/json/JSONObject;

    const-string v2, "extraParam"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->eventId:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->eventId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->eventId:Ljava/lang/String;

    const-string v2, "event_id"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-wide v2, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->rate:D

    const-wide/16 v4, 0x0

    cmpl-double v0, v2, v4

    if-eqz v0, :cond_4

    iget-wide v2, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->rate:D

    const-string v0, "rate"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    :cond_4
    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->suffixRatio:Ljava/lang/String;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->suffixRatio:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object p0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->suffixRatio:Ljava/lang/String;

    const-string v0, "suffixRatio"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/jl;->a(Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/jl;->b(Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
