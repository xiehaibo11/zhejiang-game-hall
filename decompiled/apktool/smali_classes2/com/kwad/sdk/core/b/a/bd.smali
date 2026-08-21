.class public final Lcom/kwad/sdk/core/b/a/bd;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "blockDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->blockDuration:J

    new-instance v0, Ljava/lang/Long;

    const-string v1, "1000"

    invoke-direct {v0, v1}, Ljava/lang/Long;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    const-string v2, "blockTimeThreshold"

    invoke-virtual {p1, v2, v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->blockTimeThreshold:J

    new-instance v0, Ljava/lang/Long;

    const-string v1, "100"

    invoke-direct {v0, v1}, Ljava/lang/Long;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    const-string v2, "blockLoopInterval"

    invoke-virtual {p1, v2, v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->blockLoopInterval:J

    const-string v0, "calcBlockOverhead"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->calcBlockOverhead:J

    const-string v0, "currentActivity"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->currentActivity:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->currentActivity:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->currentActivity:Ljava/lang/String;

    :cond_1
    const-string v0, "processName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->processName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->processName:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->processName:Ljava/lang/String;

    :cond_2
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->stackTraceSample:Ljava/util/List;

    const-string v0, "stackTraceSample"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    if-eqz p1, :cond_3

    const/4 v0, 0x0

    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-ge v0, v1, :cond_3

    new-instance v1, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;

    invoke-direct {v1}, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;-><init>()V

    invoke-virtual {p1, v0}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->parseJson(Lorg/json/JSONObject;)V

    iget-object v2, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->stackTraceSample:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_3
    return-void
.end method

.method private static b(Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 5

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->blockDuration:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->blockDuration:J

    const-string v4, "blockDuration"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1
    iget-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->blockTimeThreshold:J

    const-string v4, "blockTimeThreshold"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->blockLoopInterval:J

    const-string v4, "blockLoopInterval"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->calcBlockOverhead:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_2

    iget-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->calcBlockOverhead:J

    const-string v2, "calcBlockOverhead"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->currentActivity:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->currentActivity:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->currentActivity:Ljava/lang/String;

    const-string v2, "currentActivity"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->processName:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->processName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->processName:Ljava/lang/String;

    const-string v1, "processName"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-object p0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->stackTraceSample:Ljava/util/List;

    const-string v0, "stackTraceSample"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/bd;->a(Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/bd;->b(Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
