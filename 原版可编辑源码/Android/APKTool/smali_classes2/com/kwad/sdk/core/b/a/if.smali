.class public final Lcom/kwad/sdk/core/b/a/if;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "event"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->event:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->event:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->event:Ljava/lang/String;

    :cond_1
    const-string v0, "status"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->status:I

    const-string v0, "url"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->url:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->url:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->url:Ljava/lang/String;

    :cond_2
    const-string v0, "scene_id"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->sceneId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->sceneId:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->sceneId:Ljava/lang/String;

    :cond_3
    const-string v0, "duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->durationMs:J

    const-string v0, "time_type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->timeType:I

    const-string v0, "error_msg"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->errorMsg:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->errorMsg:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_4

    iput-object v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->errorMsg:Ljava/lang/String;

    :cond_4
    return-void
.end method

.method private static b(Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->event:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->event:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->event:Ljava/lang/String;

    const-string v2, "event"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->status:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->status:I

    const-string v2, "status"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->url:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->url:Ljava/lang/String;

    const-string v2, "url"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->sceneId:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->sceneId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->sceneId:Ljava/lang/String;

    const-string v2, "scene_id"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->durationMs:J

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-eqz v0, :cond_5

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->durationMs:J

    const-string v0, "duration_ms"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_5
    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->timeType:I

    if-eqz v0, :cond_6

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->timeType:I

    const-string v2, "time_type"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->errorMsg:Ljava/lang/String;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->errorMsg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->errorMsg:Ljava/lang/String;

    const-string v0, "error_msg"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/if;->a(Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/if;->b(Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
