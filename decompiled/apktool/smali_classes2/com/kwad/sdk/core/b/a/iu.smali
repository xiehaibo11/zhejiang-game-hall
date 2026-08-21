.class public final Lcom/kwad/sdk/core/b/a/iu;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/threads/b;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/threads/b;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "pool_name"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/threads/b;->avg:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/threads/b;->avg:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_1

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/sdk/core/threads/b;->avg:Ljava/lang/String;

    :cond_1
    const-string v0, "core_pool_size"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/threads/b;->avh:I

    const-string v0, "max_pool_size"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/threads/b;->avi:I

    const-string v0, "current_pool_size"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/threads/b;->avj:I

    const-string v0, "active_count"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/threads/b;->avk:I

    const-string v0, "task_wait_avg_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/threads/b;->avl:J

    const-string v0, "task_succ_count"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/threads/b;->avm:J

    const-string v0, "interval_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/threads/b;->interval:J

    const-string v0, "queue_size"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/threads/b;->avn:I

    const-string v0, "pass_timestamp"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/threads/b;->avo:J

    const-string v0, "func_ratio_count"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/threads/b;->avp:I

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/threads/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 5

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/threads/b;->avg:Ljava/lang/String;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/threads/b;->avg:Ljava/lang/String;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/threads/b;->avg:Ljava/lang/String;

    const-string v1, "pool_name"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget v0, p0, Lcom/kwad/sdk/core/threads/b;->avh:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/sdk/core/threads/b;->avh:I

    const-string v1, "core_pool_size"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget v0, p0, Lcom/kwad/sdk/core/threads/b;->avi:I

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/kwad/sdk/core/threads/b;->avi:I

    const-string v1, "max_pool_size"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/core/threads/b;->avj:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/sdk/core/threads/b;->avj:I

    const-string v1, "current_pool_size"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget v0, p0, Lcom/kwad/sdk/core/threads/b;->avk:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/kwad/sdk/core/threads/b;->avk:I

    const-string v1, "active_count"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_5
    iget-wide v0, p0, Lcom/kwad/sdk/core/threads/b;->avl:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_6

    iget-wide v0, p0, Lcom/kwad/sdk/core/threads/b;->avl:J

    const-string v4, "task_wait_avg_ms"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_6
    iget-wide v0, p0, Lcom/kwad/sdk/core/threads/b;->avm:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_7

    iget-wide v0, p0, Lcom/kwad/sdk/core/threads/b;->avm:J

    const-string v4, "task_succ_count"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_7
    iget-wide v0, p0, Lcom/kwad/sdk/core/threads/b;->interval:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_8

    iget-wide v0, p0, Lcom/kwad/sdk/core/threads/b;->interval:J

    const-string v4, "interval_ms"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_8
    iget v0, p0, Lcom/kwad/sdk/core/threads/b;->avn:I

    if-eqz v0, :cond_9

    iget v0, p0, Lcom/kwad/sdk/core/threads/b;->avn:I

    const-string v1, "queue_size"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_9
    iget-wide v0, p0, Lcom/kwad/sdk/core/threads/b;->avo:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_a

    iget-wide v0, p0, Lcom/kwad/sdk/core/threads/b;->avo:J

    const-string v2, "pass_timestamp"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_a
    iget v0, p0, Lcom/kwad/sdk/core/threads/b;->avp:I

    if-eqz v0, :cond_b

    iget p0, p0, Lcom/kwad/sdk/core/threads/b;->avp:I

    const-string v0, "func_ratio_count"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_b
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/threads/b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/iu;->a(Lcom/kwad/sdk/core/threads/b;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/threads/b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/iu;->b(Lcom/kwad/sdk/core/threads/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
