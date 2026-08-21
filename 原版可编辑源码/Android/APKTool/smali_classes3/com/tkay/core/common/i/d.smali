.class public final Lcom/tkay/core/common/i/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/g/c;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(JJLcom/tkay/core/common/f/d;Lcom/tkay/core/api/TYBaseAdAdapter;)Ljava/lang/String;
    .locals 0

    .line 33
    invoke-static/range {p0 .. p5}, Lcom/tkay/core/common/i/d;->b(JJLcom/tkay/core/common/f/d;Lcom/tkay/core/api/TYBaseAdAdapter;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static b(JJLcom/tkay/core/common/f/d;Lcom/tkay/core/api/TYBaseAdAdapter;)Ljava/lang/String;
    .locals 5

    const-string v0, ""

    .line 108
    :try_start_0
    invoke-virtual {p5}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 110
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    .line 111
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_0
    move-object v1, v0

    .line 118
    :goto_0
    :try_start_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "pl_id"

    .line 119
    invoke-virtual {p4}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "req_id"

    .line 120
    invoke-virtual {p4}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "show_id"

    .line 121
    invoke-virtual {p4}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "unit_id"

    .line 122
    invoke-virtual {p4}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "nw_firm_id"

    .line 123
    invoke-virtual {p4}, Lcom/tkay/core/common/f/d;->H()I

    move-result v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "scenario_id"

    .line 1402
    iget-object v4, p4, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    .line 124
    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "rv_start_ts"

    .line 125
    invoke-virtual {v2, v3, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v3, "r_callback_ts"

    .line 126
    invoke-virtual {v2, v3, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v3, "rv_play_dur"

    sub-long/2addr p2, p0

    .line 127
    invoke-virtual {v2, v3, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string p0, "tp_bid_id"

    .line 128
    invoke-virtual {p4}, Lcom/tkay/core/common/f/d;->e()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "extra_info"

    .line 129
    invoke-virtual {v2, p0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "user_id"

    .line 130
    invoke-virtual {p5}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUserId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "extra_data"

    .line 131
    invoke-virtual {p5}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUserCustomData()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "curr_ts"

    .line 132
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    invoke-virtual {v2, p0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string p0, "ilrd"

    .line 135
    invoke-static {p4, p5}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/i;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 137
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-object p0

    :catchall_1
    return-object v0
.end method


# virtual methods
.method public final a(JJLcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/d;)V
    .locals 10

    .line 36
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v9, Lcom/tkay/core/common/i/d$1;

    move-object v1, v9

    move-object v2, p0

    move-object v3, p5

    move-wide v4, p3

    move-object/from16 v6, p6

    move-wide v7, p1

    invoke-direct/range {v1 .. v8}, Lcom/tkay/core/common/i/d$1;-><init>(Lcom/tkay/core/common/i/d;Lcom/tkay/core/api/TYBaseAdAdapter;JLcom/tkay/core/common/f/d;J)V

    invoke-virtual {v0, v9}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
