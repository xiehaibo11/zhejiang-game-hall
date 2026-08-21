.class public final Lcom/kwad/sdk/core/b/a/dd;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "status"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->status:I

    const-string v0, "load_status"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->loadStatus:I

    const-string v0, "ad_num"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->adNum:I

    const-string v0, "type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->type:I

    const-string v0, "load_data_duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->loadDataDuration:J

    const-string v0, "resource_load_duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->resourceLoadDuration:J

    const-string v0, "material_type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->materialType:I

    const-string v0, "material_url"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->materialUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->materialUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->materialUrl:Ljava/lang/String;

    :cond_1
    const-string v0, "render_duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->renderDuration:J

    const-string v0, "render_type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->renderType:I

    const-string v0, "expected_render_type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->expectedRenderType:I

    const-string v0, "convert_duartion_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->convertDuration:J

    const-string v0, "error_code"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->errorCode:I

    const-string v0, "error_msg"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->errorMsg:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->errorMsg:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->errorMsg:Ljava/lang/String;

    :cond_2
    const-string v0, "ext_msg"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->extMsg:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->extMsg:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->extMsg:Ljava/lang/String;

    :cond_3
    const-string v0, "ab_params"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->abParams:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->abParams:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_4

    iput-object v2, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->abParams:Ljava/lang/String;

    :cond_4
    return-void
.end method

.method private static b(Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->status:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->status:I

    const-string v1, "status"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->loadStatus:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->loadStatus:I

    const-string v1, "load_status"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->adNum:I

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->adNum:I

    const-string v1, "ad_num"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3
    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->type:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->type:I

    const-string v1, "type"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget-wide v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->loadDataDuration:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_5

    iget-wide v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->loadDataDuration:J

    const-string v4, "load_data_duration_ms"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_5
    iget-wide v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->resourceLoadDuration:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_6

    iget-wide v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->resourceLoadDuration:J

    const-string v4, "resource_load_duration_ms"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_6
    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->materialType:I

    if-eqz v0, :cond_7

    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->materialType:I

    const-string v1, "material_type"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_7
    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->materialUrl:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->materialUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_8

    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->materialUrl:Ljava/lang/String;

    const-string v4, "material_url"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    iget-wide v4, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->renderDuration:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_9

    iget-wide v4, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->renderDuration:J

    const-string v0, "render_duration_ms"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_9
    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->renderType:I

    if-eqz v0, :cond_a

    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->renderType:I

    const-string v4, "render_type"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_a
    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->expectedRenderType:I

    if-eqz v0, :cond_b

    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->expectedRenderType:I

    const-string v4, "expected_render_type"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_b
    iget-wide v4, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->convertDuration:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_c

    iget-wide v2, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->convertDuration:J

    const-string v0, "convert_duartion_ms"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_c
    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->errorCode:I

    if-eqz v0, :cond_d

    iget v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->errorCode:I

    const-string v2, "error_code"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_d
    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->errorMsg:Ljava/lang/String;

    if-eqz v0, :cond_e

    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->errorMsg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_e

    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->errorMsg:Ljava/lang/String;

    const-string v2, "error_msg"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_e
    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->extMsg:Ljava/lang/String;

    if-eqz v0, :cond_f

    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->extMsg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_f

    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->extMsg:Ljava/lang/String;

    const-string v2, "ext_msg"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_f
    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->abParams:Ljava/lang/String;

    if-eqz v0, :cond_10

    iget-object v0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->abParams:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_10

    iget-object p0, p0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->abParams:Ljava/lang/String;

    const-string v0, "ab_params"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_10
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/dd;->a(Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/dd;->b(Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
