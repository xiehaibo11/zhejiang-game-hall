.class public final Lcom/kwad/sdk/core/b/a/ck;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "style"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->style:I

    const-string v0, "maxTimeOut"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->maxTimeOut:J

    const-string v0, "typeLandscape"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->typeLandscape:J

    const-string v0, "typePortrait"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->typePortrait:J

    const-string v0, "cardUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardUrl:Ljava/lang/String;

    :cond_1
    const-string v0, "cardData"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardData:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardData:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardData:Ljava/lang/String;

    :cond_2
    const-string v0, "cardShowTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardShowTime:J

    const-string v0, "cardType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardType:I

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 5

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->style:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->style:I

    const-string v1, "style"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->maxTimeOut:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_2

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->maxTimeOut:J

    const-string v4, "maxTimeOut"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->typeLandscape:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_3

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->typeLandscape:J

    const-string v4, "typeLandscape"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_3
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->typePortrait:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_4

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->typePortrait:J

    const-string v4, "typePortrait"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_4
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardUrl:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardUrl:Ljava/lang/String;

    const-string v4, "cardUrl"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardData:Ljava/lang/String;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardData:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardData:Ljava/lang/String;

    const-string v1, "cardData"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardShowTime:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_7

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardShowTime:J

    const-string v2, "cardShowTime"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_7
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardType:I

    if-eqz v0, :cond_8

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardType:I

    const-string v0, "cardType"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_8
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ck;->a(Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ck;->b(Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
