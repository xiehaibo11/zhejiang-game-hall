.class public final Lcom/kwad/sdk/core/b/a/fw;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/network/k;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/network/k;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "request_prepare_cost"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apj:J

    const-string v0, "request_add_params_cost"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apk:J

    const-string v0, "request_create_cost"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apl:J

    const-string v0, "keep_alive"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/network/k;->apm:I

    const-string v0, "dns_start"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apn:J

    const-string v0, "dns_cost"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apo:J

    const-string v0, "connect_establish_start"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->app:J

    const-string v0, "connect_establish_cost"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apq:J

    const-string v0, "request_start"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apr:J

    const-string v0, "request_cost"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->aps:J

    const-string v0, "request_size"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apt:J

    const-string v0, "response_start"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apu:J

    const-string v0, "response_cost"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apv:J

    const-string v0, "response_parse_cost"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apw:J

    const-string v0, "response_size"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apx:J

    const-string v0, "waiting_response_cost"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apy:J

    const-string v0, "total_cost"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apz:J

    const-string v0, "proxy_used"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/network/k;->apA:I

    const-string v0, "request_id"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/network/k;->apB:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/network/k;->apB:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/network/k;->apB:Ljava/lang/String;

    :cond_1
    const-string v0, "has_data_v2"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/network/k;->apC:I

    const-string v0, "result"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/network/k;->result:I

    const-string v0, "response_done_cost"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apD:J

    const-string v0, "host_ip"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/network/k;->apE:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/network/k;->apE:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/network/k;->apE:Ljava/lang/String;

    :cond_2
    const-string v0, "ip_type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/network/k;->apF:I

    const-string v0, "recommend_ping_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/network/k;->apG:I

    const-string v0, "backup_ping_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/network/k;->apH:I

    const-string v0, "other_ping_time"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/network/k;->apI:I

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/network/k;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apj:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apj:J

    const-string v4, "request_prepare_cost"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apk:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_2

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apk:J

    const-string v4, "request_add_params_cost"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apl:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_3

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apl:J

    const-string v4, "request_create_cost"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apm:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apm:I

    const-string v1, "keep_alive"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apn:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_5

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apn:J

    const-string v4, "dns_start"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_5
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apo:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_6

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apo:J

    const-string v4, "dns_cost"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_6
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->app:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_7

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->app:J

    const-string v4, "connect_establish_start"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_7
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apq:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_8

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apq:J

    const-string v4, "connect_establish_cost"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_8
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apr:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_9

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apr:J

    const-string v4, "request_start"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_9
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->aps:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_a

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->aps:J

    const-string v4, "request_cost"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_a
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apt:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_b

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apt:J

    const-string v4, "request_size"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_b
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apu:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_c

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apu:J

    const-string v4, "response_start"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_c
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apv:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_d

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apv:J

    const-string v4, "response_cost"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_d
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apw:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_e

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apw:J

    const-string v4, "response_parse_cost"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_e
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apx:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_f

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apx:J

    const-string v4, "response_size"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_f
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apy:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_10

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apy:J

    const-string v4, "waiting_response_cost"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_10
    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apz:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_11

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apz:J

    const-string v4, "total_cost"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_11
    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apA:I

    if-eqz v0, :cond_12

    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apA:I

    const-string v1, "proxy_used"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_12
    iget-object v0, p0, Lcom/kwad/sdk/core/network/k;->apB:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_13

    iget-object v0, p0, Lcom/kwad/sdk/core/network/k;->apB:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_13

    iget-object v0, p0, Lcom/kwad/sdk/core/network/k;->apB:Ljava/lang/String;

    const-string v4, "request_id"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_13
    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apC:I

    if-eqz v0, :cond_14

    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apC:I

    const-string v4, "has_data_v2"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_14
    iget v0, p0, Lcom/kwad/sdk/core/network/k;->result:I

    if-eqz v0, :cond_15

    iget v0, p0, Lcom/kwad/sdk/core/network/k;->result:I

    const-string v4, "result"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_15
    iget-wide v4, p0, Lcom/kwad/sdk/core/network/k;->apD:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_16

    iget-wide v2, p0, Lcom/kwad/sdk/core/network/k;->apD:J

    const-string v0, "response_done_cost"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_16
    iget-object v0, p0, Lcom/kwad/sdk/core/network/k;->apE:Ljava/lang/String;

    if-eqz v0, :cond_17

    iget-object v0, p0, Lcom/kwad/sdk/core/network/k;->apE:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_17

    iget-object v0, p0, Lcom/kwad/sdk/core/network/k;->apE:Ljava/lang/String;

    const-string v1, "host_ip"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_17
    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apF:I

    if-eqz v0, :cond_18

    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apF:I

    const-string v1, "ip_type"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_18
    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apG:I

    if-eqz v0, :cond_19

    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apG:I

    const-string v1, "recommend_ping_time"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_19
    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apH:I

    if-eqz v0, :cond_1a

    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apH:I

    const-string v1, "backup_ping_time"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1a
    iget v0, p0, Lcom/kwad/sdk/core/network/k;->apI:I

    if-eqz v0, :cond_1b

    iget p0, p0, Lcom/kwad/sdk/core/network/k;->apI:I

    const-string v0, "other_ping_time"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1b
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/network/k;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/fw;->a(Lcom/kwad/sdk/core/network/k;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/network/k;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/fw;->b(Lcom/kwad/sdk/core/network/k;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
