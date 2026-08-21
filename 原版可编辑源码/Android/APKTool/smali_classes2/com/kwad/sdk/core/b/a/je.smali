.class public final Lcom/kwad/sdk/core/b/a/je;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;Lorg/json/JSONObject;)V
    .locals 4

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "videoUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->videoUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->videoUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->videoUrl:Ljava/lang/String;

    :cond_1
    const-string v0, "manifest"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->manifest:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->manifest:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->manifest:Ljava/lang/String;

    :cond_2
    const-string v0, "firstFrame"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->firstFrame:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->firstFrame:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->firstFrame:Ljava/lang/String;

    :cond_3
    const-string v0, "duration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->duration:J

    const-string v0, "size"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->size:I

    const-string v0, "width"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->width:I

    const-string v0, "height"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->height:I

    const-string v0, "leftRatio"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->leftRatio:D

    const-string v0, "topRatio"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->topRatio:D

    new-instance v0, Ljava/lang/Double;

    const-string v1, "1.0f"

    invoke-direct {v0, v1}, Ljava/lang/Double;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v2

    const-string v0, "widthRatio"

    invoke-virtual {p1, v0, v2, v3}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v2

    iput-wide v2, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->widthRatio:D

    new-instance v0, Ljava/lang/Double;

    invoke-direct {v0, v1}, Ljava/lang/Double;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v0

    const-string v2, "heightRatio"

    invoke-virtual {p1, v2, v0, v1}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->heightRatio:D

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 5

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->videoUrl:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->videoUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->videoUrl:Ljava/lang/String;

    const-string v2, "videoUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->manifest:Ljava/lang/String;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->manifest:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->manifest:Ljava/lang/String;

    const-string v2, "manifest"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->firstFrame:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->firstFrame:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->firstFrame:Ljava/lang/String;

    const-string v1, "firstFrame"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->duration:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_4

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->duration:J

    const-string v2, "duration"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_4
    iget v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->size:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->size:I

    const-string v1, "size"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_5
    iget v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->width:I

    if-eqz v0, :cond_6

    iget v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->width:I

    const-string v1, "width"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_6
    iget v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->height:I

    if-eqz v0, :cond_7

    iget v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->height:I

    const-string v1, "height"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_7
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->leftRatio:D

    const-wide/16 v2, 0x0

    cmpl-double v0, v0, v2

    if-eqz v0, :cond_8

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->leftRatio:D

    const-string v4, "leftRatio"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    :cond_8
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->topRatio:D

    cmpl-double v0, v0, v2

    if-eqz v0, :cond_9

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->topRatio:D

    const-string v2, "topRatio"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    :cond_9
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->widthRatio:D

    const-string v2, "widthRatio"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;->heightRatio:D

    const-string p0, "heightRatio"

    invoke-static {p1, p0, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/je;->a(Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/je;->b(Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
