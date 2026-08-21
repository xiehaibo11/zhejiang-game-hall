.class public final Lcom/kwad/sdk/core/b/a/ba;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "photoId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->photoId:J

    const-string v0, "sdkExtraData"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->sdkExtraData:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->sdkExtraData:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->sdkExtraData:Ljava/lang/String;

    :cond_1
    const-string v0, "title"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->title:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->title:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->title:Ljava/lang/String;

    :cond_2
    const-string v0, "shareUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->shareUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->shareUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->shareUrl:Ljava/lang/String;

    :cond_3
    new-instance v0, Ljava/lang/Integer;

    const-string v1, "1"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "waterMarkPosition"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->waterMarkPosition:I

    const-string v0, "recoExt"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->recoExt:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->recoExt:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->recoExt:Ljava/lang/String;

    :cond_4
    const-string v0, "likeCount"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->likeCount:J

    const-string v0, "commentCount"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->commentCount:J

    const-string v0, "viewCount"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->viewCount:J

    const-string v0, "createTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->createTime:J

    const-string v0, "videoDesc"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->videoDesc:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->videoDesc:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->videoDesc:Ljava/lang/String;

    :cond_5
    const-string v0, "playTimes"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->playTimes:J

    const-string v0, "videoUrlCacheTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->videoUrlCacheTime:J

    const-string v0, "contentSourceType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->contentSourceType:I

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->photoId:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->photoId:J

    const-string v4, "photoId"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->sdkExtraData:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->sdkExtraData:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->sdkExtraData:Ljava/lang/String;

    const-string v4, "sdkExtraData"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->title:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->title:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->title:Ljava/lang/String;

    const-string v4, "title"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->shareUrl:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->shareUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->shareUrl:Ljava/lang/String;

    const-string v4, "shareUrl"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->waterMarkPosition:I

    const-string v4, "waterMarkPosition"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->recoExt:Ljava/lang/String;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->recoExt:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->recoExt:Ljava/lang/String;

    const-string v4, "recoExt"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    iget-wide v4, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->likeCount:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_6

    iget-wide v4, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->likeCount:J

    const-string v0, "likeCount"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_6
    iget-wide v4, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->commentCount:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_7

    iget-wide v4, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->commentCount:J

    const-string v0, "commentCount"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_7
    iget-wide v4, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->viewCount:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_8

    iget-wide v4, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->viewCount:J

    const-string v0, "viewCount"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_8
    iget-wide v4, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->createTime:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_9

    iget-wide v4, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->createTime:J

    const-string v0, "createTime"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_9
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->videoDesc:Ljava/lang/String;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->videoDesc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->videoDesc:Ljava/lang/String;

    const-string v1, "videoDesc"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->playTimes:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_b

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->playTimes:J

    const-string v4, "playTimes"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_b
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->videoUrlCacheTime:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_c

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->videoUrlCacheTime:J

    const-string v2, "videoUrlCacheTime"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_c
    iget v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->contentSourceType:I

    if-eqz v0, :cond_d

    iget p0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;->contentSourceType:I

    const-string v0, "contentSourceType"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_d
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ba;->a(Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ba;->b(Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
