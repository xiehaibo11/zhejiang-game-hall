.class public final Lcom/kwad/sdk/core/b/a/ix;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "endTimestamp"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAC:J

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "1"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "repeatCount"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->repeatCount:I

    const-string v0, "runIdle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAD:Z

    const-string v0, "stackTraceDetail"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAE:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAE:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_1

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAE:Ljava/lang/String;

    :cond_1
    const-string v0, "startTimestamp"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAF:J

    return-void
.end method

.method private static b(Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 5

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAC:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAC:J

    const-string v4, "endTimestamp"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1
    iget v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->repeatCount:I

    const-string v1, "repeatCount"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-boolean v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAD:Z

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAD:Z

    const-string v1, "runIdle"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAE:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAE:Ljava/lang/String;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAE:Ljava/lang/String;

    const-string v1, "stackTraceDetail"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAF:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_4

    iget-wide v0, p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAF:J

    const-string p0, "startTimestamp"

    invoke-static {p1, p0, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_4
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ix;->a(Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ix;->b(Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
