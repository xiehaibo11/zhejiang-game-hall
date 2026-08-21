.class public final Lcom/kwad/sdk/core/b/a/hi;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/commercial/model/SDKInitMsg;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/commercial/model/SDKInitMsg;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "init_launch_interval_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->launchIntervalTime:J

    const-string v0, "init_total_duration_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->totalDurationTime:J

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "0"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "init_status"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->initStatus:I

    const-string v0, "error_reason"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->errorReason:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->errorReason:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_1

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->errorReason:Ljava/lang/String;

    :cond_1
    const-string v0, "init_count"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->initCount:I

    const-string v0, "init_process"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->initProcess:I

    const-string v0, "init_thread"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->initThread:I

    const-string v0, "init_dynamic_sdk"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->intDynamicSDK:I

    const-string v0, "init_build_number"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->intBuildNumber:I

    return-void
.end method

.method private static b(Lcom/kwad/sdk/commercial/model/SDKInitMsg;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 5

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-wide v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->launchIntervalTime:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->launchIntervalTime:J

    const-string v4, "init_launch_interval_time"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1
    iget-wide v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->totalDurationTime:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_2

    iget-wide v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->totalDurationTime:J

    const-string v2, "init_total_duration_time"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2
    iget v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->initStatus:I

    const-string v1, "init_status"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->errorReason:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->errorReason:Ljava/lang/String;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->errorReason:Ljava/lang/String;

    const-string v1, "error_reason"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->initCount:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->initCount:I

    const-string v1, "init_count"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->initProcess:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->initProcess:I

    const-string v1, "init_process"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_5
    iget v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->initThread:I

    if-eqz v0, :cond_6

    iget v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->initThread:I

    const-string v1, "init_thread"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_6
    iget v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->intDynamicSDK:I

    if-eqz v0, :cond_7

    iget v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->intDynamicSDK:I

    const-string v1, "init_dynamic_sdk"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_7
    iget v0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->intBuildNumber:I

    if-eqz v0, :cond_8

    iget p0, p0, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->intBuildNumber:I

    const-string v0, "init_build_number"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_8
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/commercial/model/SDKInitMsg;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/hi;->a(Lcom/kwad/sdk/commercial/model/SDKInitMsg;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/commercial/model/SDKInitMsg;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/hi;->b(Lcom/kwad/sdk/commercial/model/SDKInitMsg;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
