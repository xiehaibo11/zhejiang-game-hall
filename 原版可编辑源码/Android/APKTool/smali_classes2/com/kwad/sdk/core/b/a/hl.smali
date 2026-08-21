.class public final Lcom/kwad/sdk/core/b/a/hl;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/internal/api/SceneImpl;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/internal/api/SceneImpl;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/scene/URLPackage;

    invoke-direct {v0}, Lcom/kwad/sdk/core/scene/URLPackage;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

    const-string v1, "urlPackage"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/scene/URLPackage;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "posId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->posId:J

    const-string v0, "entryScene"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->entryScene:J

    const-string v0, "adNum"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adNum:I

    const-string v0, "action"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->action:I

    const-string v0, "width"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->width:I

    const-string v0, "height"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->height:I

    const-string v0, "adStyle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adStyle:I

    const-string v0, "screenOrientation"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->screenOrientation:I

    new-instance v0, Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;

    invoke-direct {v0}, Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->nativeAdExtraData:Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->nativeAdExtraData:Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;

    const-string v1, "nativeAdExtraData"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "backUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->backUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->backUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->backUrl:Ljava/lang/String;

    :cond_1
    const-string v0, "bidResponse"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponse:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponse:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponse:Ljava/lang/String;

    :cond_2
    const-string v0, "bidResponseV2"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponseV2:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponseV2:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponseV2:Ljava/lang/String;

    :cond_3
    return-void
.end method

.method private static b(Lcom/kwad/sdk/internal/api/SceneImpl;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 5

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

    const-string v1, "urlPackage"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-wide v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->posId:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->posId:J

    const-string v4, "posId"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1
    iget-wide v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->entryScene:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_2

    iget-wide v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->entryScene:J

    const-string v2, "entryScene"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2
    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adNum:I

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adNum:I

    const-string v1, "adNum"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->action:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->action:I

    const-string v1, "action"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->width:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->width:I

    const-string v1, "width"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_5
    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->height:I

    if-eqz v0, :cond_6

    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->height:I

    const-string v1, "height"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_6
    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adStyle:I

    if-eqz v0, :cond_7

    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adStyle:I

    const-string v1, "adStyle"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_7
    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->screenOrientation:I

    if-eqz v0, :cond_8

    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->screenOrientation:I

    const-string v1, "screenOrientation"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_8
    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->nativeAdExtraData:Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;

    const-string v1, "nativeAdExtraData"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->backUrl:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->backUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_9

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->backUrl:Ljava/lang/String;

    const-string v2, "backUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponse:Ljava/lang/String;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponse:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponse:Ljava/lang/String;

    const-string v2, "bidResponse"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponseV2:Ljava/lang/String;

    if-eqz v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponseV2:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_b

    iget-object p0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponseV2:Ljava/lang/String;

    const-string v0, "bidResponseV2"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/hl;->a(Lcom/kwad/sdk/internal/api/SceneImpl;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/hl;->b(Lcom/kwad/sdk/internal/api/SceneImpl;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
