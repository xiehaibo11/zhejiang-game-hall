.class public final Lcom/kwad/sdk/core/b/a/ia;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;Lorg/json/JSONObject;)V
    .locals 6

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "status"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->status:I

    const-string v0, "type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->type:I

    const-string v0, "preload_id"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->preloadId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->preloadId:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->preloadId:Ljava/lang/String;

    :cond_1
    const-string v0, "error_code"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->errorCode:I

    const-string v0, "error_msg"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->errorMsg:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->errorMsg:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->errorMsg:Ljava/lang/String;

    :cond_2
    const-string v0, "check_status"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->checkStatus:I

    const-string v0, "load_data_duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->loadDataTime:J

    const-string v0, "before_load_data_duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->beforeLoadDataTime:J

    const-string v0, "check_data_duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->checkDataTime:J

    const-string v0, "load_and_check_data_duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->loadAndCheckDataTime:J

    const-string v0, "duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->costTime:J

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->ids:Ljava/util/List;

    const-string v0, "ids"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    move v3, v1

    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_3

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->ids:Ljava/util/List;

    invoke-virtual {v0, v3}, Lorg/json/JSONArray;->opt(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-interface {v4, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_3
    const-string v0, "count"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->count:I

    const-string v0, "validity_period_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    iput-wide v3, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->cacheValidTime:J

    const-string v0, "size"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    iput-wide v3, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->size:J

    const-string v0, "url"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->url:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->url:Ljava/lang/String;

    sget-object v3, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v3, :cond_4

    iput-object v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->url:Ljava/lang/String;

    :cond_4
    const-string v0, "creative_id"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    iput-wide v3, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->creativeId:J

    const-string v0, "material_type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->materialType:I

    const-string v0, "total_count"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->totalCount:I

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->creativeIds:Ljava/util/List;

    const-string v0, "creative_ids"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_5

    move v3, v1

    :goto_1
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_5

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->creativeIds:Ljava/util/List;

    invoke-virtual {v0, v3}, Lorg/json/JSONArray;->opt(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-interface {v4, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_5
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->preloadIds:Ljava/util/List;

    const-string v0, "preload_ids"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_6

    move v3, v1

    :goto_2
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_6

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->preloadIds:Ljava/util/List;

    invoke-virtual {v0, v3}, Lorg/json/JSONArray;->opt(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-interface {v4, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_2

    :cond_6
    const-string v0, "pos_Id"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    iput-wide v3, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->posId:J

    const-string v0, "view_source"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->viewSource:I

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->elementTypes:Ljava/util/List;

    const-string v0, "element_types"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_7

    :goto_3
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge v1, v3, :cond_7

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->elementTypes:Ljava/util/List;

    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->opt(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_3

    :cond_7
    const-string v0, "interactive_style"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->interactiveStyle:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->interactiveStyle:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_8

    iput-object v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->interactiveStyle:Ljava/lang/String;

    :cond_8
    const-string v0, "interactivity_default_style"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->interactivityDefaultStyle:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->interactivityDefaultStyle:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_9

    iput-object v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->interactivityDefaultStyle:Ljava/lang/String;

    :cond_9
    const-string v0, "show_end_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->showEndTime:J

    const-string v0, "is_rotate_compose_timeout"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->isRotateComposeTimeout:Z

    const-string v0, "tk_default_timeout"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->tkDefaultTimeout:J

    const-string v0, "so_source"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->soSource:I

    const-string v0, "so_load_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->soLoadTime:J

    const-string v0, "offline_source"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->offlineSource:I

    const-string v0, "offline_load_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->offlineLoadTime:J

    const-string v0, "tk_file_load_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->tkFileLoadTime:J

    const-string v0, "tk_init_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->tkInitTime:J

    const-string v0, "tk_render_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->tkRenderTime:J

    const-string v0, "native_load_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->nativeLoadTime:J

    const-string v0, "is_web_timeout"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->isWebTimeout:Z

    const-string v0, "web_load_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->webLoadTime:J

    return-void
.end method

.method private static b(Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->status:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->status:I

    const-string v1, "status"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->type:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->type:I

    const-string v1, "type"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->preloadId:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->preloadId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->preloadId:Ljava/lang/String;

    const-string v2, "preload_id"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->errorCode:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->errorCode:I

    const-string v2, "error_code"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->errorMsg:Ljava/lang/String;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->errorMsg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->errorMsg:Ljava/lang/String;

    const-string v2, "error_msg"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->checkStatus:I

    if-eqz v0, :cond_6

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->checkStatus:I

    const-string v2, "check_status"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_6
    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->loadDataTime:J

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-eqz v0, :cond_7

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->loadDataTime:J

    const-string v0, "load_data_duration_ms"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_7
    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->beforeLoadDataTime:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_8

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->beforeLoadDataTime:J

    const-string v0, "before_load_data_duration_ms"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_8
    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->checkDataTime:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_9

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->checkDataTime:J

    const-string v0, "check_data_duration_ms"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_9
    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->loadAndCheckDataTime:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_a

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->loadAndCheckDataTime:J

    const-string v0, "load_and_check_data_duration_ms"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_a
    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->costTime:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_b

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->costTime:J

    const-string v0, "duration_ms"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_b
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->ids:Ljava/util/List;

    const-string v2, "ids"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->count:I

    if-eqz v0, :cond_c

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->count:I

    const-string v2, "count"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_c
    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->cacheValidTime:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_d

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->cacheValidTime:J

    const-string v0, "validity_period_ms"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_d
    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->size:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_e

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->size:J

    const-string v0, "size"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_e
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->url:Ljava/lang/String;

    if-eqz v0, :cond_f

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_f

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->url:Ljava/lang/String;

    const-string v2, "url"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_f
    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->creativeId:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_10

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->creativeId:J

    const-string v0, "creative_id"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_10
    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->materialType:I

    if-eqz v0, :cond_11

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->materialType:I

    const-string v2, "material_type"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_11
    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->totalCount:I

    if-eqz v0, :cond_12

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->totalCount:I

    const-string v2, "total_count"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_12
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->creativeIds:Ljava/util/List;

    const-string v2, "creative_ids"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->preloadIds:Ljava/util/List;

    const-string v2, "preload_ids"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->posId:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_13

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->posId:J

    const-string v0, "pos_Id"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_13
    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->viewSource:I

    if-eqz v0, :cond_14

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->viewSource:I

    const-string v2, "view_source"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_14
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->elementTypes:Ljava/util/List;

    const-string v2, "element_types"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->interactiveStyle:Ljava/lang/String;

    if-eqz v0, :cond_15

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->interactiveStyle:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_15

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->interactiveStyle:Ljava/lang/String;

    const-string v2, "interactive_style"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_15
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->interactivityDefaultStyle:Ljava/lang/String;

    if-eqz v0, :cond_16

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->interactivityDefaultStyle:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_16

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->interactivityDefaultStyle:Ljava/lang/String;

    const-string v1, "interactivity_default_style"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_16
    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->showEndTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_17

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->showEndTime:J

    const-string v2, "show_end_time"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_17
    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->isRotateComposeTimeout:Z

    if-eqz v0, :cond_18

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->isRotateComposeTimeout:Z

    const-string v1, "is_rotate_compose_timeout"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_18
    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->tkDefaultTimeout:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_19

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->tkDefaultTimeout:J

    const-string v2, "tk_default_timeout"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_19
    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->soSource:I

    if-eqz v0, :cond_1a

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->soSource:I

    const-string v1, "so_source"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1a
    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->soLoadTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_1b

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->soLoadTime:J

    const-string v2, "so_load_time"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1b
    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->offlineSource:I

    if-eqz v0, :cond_1c

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->offlineSource:I

    const-string v1, "offline_source"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1c
    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->offlineLoadTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_1d

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->offlineLoadTime:J

    const-string v2, "offline_load_time"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1d
    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->tkFileLoadTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_1e

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->tkFileLoadTime:J

    const-string v2, "tk_file_load_time"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1e
    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->tkInitTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_1f

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->tkInitTime:J

    const-string v2, "tk_init_time"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1f
    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->tkRenderTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_20

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->tkRenderTime:J

    const-string v2, "tk_render_time"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_20
    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->nativeLoadTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_21

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->nativeLoadTime:J

    const-string v2, "native_load_time"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_21
    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->isWebTimeout:Z

    if-eqz v0, :cond_22

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->isWebTimeout:Z

    const-string v1, "is_web_timeout"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_22
    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->webLoadTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_23

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->webLoadTime:J

    const-string p0, "web_load_time"

    invoke-static {p1, p0, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_23
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ia;->a(Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ia;->b(Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
