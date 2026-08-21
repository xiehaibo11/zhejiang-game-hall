.class public final Lcom/kwad/sdk/core/b/a/ht;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "endTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;->endTime:J

    const-string v0, "soldStock"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;->soldStock:I

    const-string v0, "originalStock"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;->originalStock:I

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 4

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;->endTime:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;->endTime:J

    const-string v2, "endTime"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;->soldStock:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;->soldStock:I

    const-string v1, "soldStock"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;->originalStock:I

    if-eqz v0, :cond_3

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;->originalStock:I

    const-string v0, "originalStock"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ht;->a(Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ht;->b(Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
