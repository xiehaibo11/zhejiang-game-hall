.class public Lcom/kuaishou/weapon/p0/ck;
.super Ljava/lang/Object;


# instance fields
.field private a:Landroid/content/Context;

.field private b:I

.field private c:I


# direct methods
.method public constructor <init>(Landroid/content/Context;II)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    iput p2, p0, Lcom/kuaishou/weapon/p0/ck;->b:I

    iput p3, p0, Lcom/kuaishou/weapon/p0/ck;->c:I

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Lcom/kuaishou/weapon/p0/cl;

    sget-object v2, Lcom/kuaishou/weapon/p0/cj;->j:Ljava/lang/String;

    invoke-direct {v1, p1, v2}, Lcom/kuaishou/weapon/p0/cl;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-virtual {v1, p1}, Lcom/kuaishou/weapon/p0/cl;->a(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object p1

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/kuaishou/weapon/p0/ck;->a()Lorg/json/JSONObject;

    move-result-object v1

    if-nez v1, :cond_1

    return-object v0

    :cond_1
    const-string v2, "module_section"

    invoke-virtual {p1, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    return-object v0
.end method

.method public a()Lorg/json/JSONObject;
    .locals 29

    move-object/from16 v0, p0

    const-string v1, "85"

    const-string v2, "64"

    const-string v3, "63"

    const-string v4, "62"

    const-string v5, "91"

    const-string v6, "46"

    const-string v7, "45"

    const-string v8, ""

    const-string v9, "plc001_scc_e"

    const-string v10, "40"

    const-string v11, "38"

    const-string v12, "37"

    const-string v13, "23"

    const-string v14, "48"

    const-string v15, "47"

    move-object/from16 v16, v8

    const-string v8, "6"

    move-object/from16 v17, v9

    const-string v9, "41"

    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v18

    move-object/from16 v20, v1

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    move-object/from16 v21, v2

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    move-object/from16 v22, v3

    const-string v3, "re_po_rt"

    invoke-static {v2, v3}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v2

    const-string v3, "a1_p_s_p_s"

    invoke-virtual {v2, v3}, Lcom/kuaishou/weapon/p0/h;->e(Ljava/lang/String;)Z

    move-result v3

    move-object/from16 v23, v4

    const-string v4, "a1_p_s_p_s_c_b"

    invoke-virtual {v2, v4}, Lcom/kuaishou/weapon/p0/h;->e(Ljava/lang/String;)Z

    move-result v4

    move-object/from16 v24, v5

    new-instance v5, Lcom/kuaishou/weapon/p0/ai;

    move-object/from16 v25, v6

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-direct {v5, v6}, Lcom/kuaishou/weapon/p0/ai;-><init>(Landroid/content/Context;)V

    const-string v6, "0"

    move-object/from16 v26, v7

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ai;->d()I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "1"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ai;->a()I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "2"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ai;->c()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "3"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ai;->f()I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "24"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ai;->e()I

    move-result v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "35"

    invoke-static {}, Lcom/kuaishou/weapon/p0/ab;->b()Z

    move-result v6

    if-eqz v6, :cond_0

    const/4 v6, 0x1

    goto :goto_0

    :cond_0
    const/4 v6, 0x0

    :goto_0
    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "36"

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-static {v6}, Lcom/kuaishou/weapon/p0/ab;->a(Landroid/content/Context;)Z

    move-result v6

    if-eqz v6, :cond_1

    const/4 v6, 0x1

    goto :goto_1

    :cond_1
    const/4 v6, 0x0

    :goto_1
    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    iget-object v5, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-static {v5}, Lcom/kuaishou/weapon/p0/ah;->a(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v5

    if-eqz v5, :cond_2

    const-string v6, "4"

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    new-instance v5, Lcom/kuaishou/weapon/p0/z;

    invoke-direct {v5}, Lcom/kuaishou/weapon/p0/z;-><init>()V

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/z;->a(Landroid/content/Context;)Lorg/json/JSONArray;

    move-result-object v6

    const-string v7, "49"

    invoke-virtual {v1, v7, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "146"

    move-object/from16 v27, v10

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/z;->e()Ljava/util/Set;

    move-result-object v10

    invoke-virtual {v1, v7, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "154"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/z;->a()I

    move-result v10

    invoke-virtual {v1, v7, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v7, "168"

    invoke-static {v6}, Lcom/kuaishou/weapon/p0/dj;->b(Lorg/json/JSONArray;)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v1, v7, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "169"

    invoke-static {v6}, Lcom/kuaishou/weapon/p0/dj;->a(Lorg/json/JSONArray;)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v1, v7, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "185"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/z;->d()Lorg/json/JSONObject;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "191"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/z;->c()Ljava/util/Set;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/z;->b()Ljava/util/Set;

    move-result-object v6

    if-eqz v6, :cond_3

    const-string v6, "161"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/z;->b()Ljava/util/Set;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v5, "22"

    invoke-static {}, Lcom/kuaishou/weapon/p0/ab;->a()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/ac;

    invoke-direct {v5}, Lcom/kuaishou/weapon/p0/ac;-><init>()V

    const-string v6, "7"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ac;->a()Z

    move-result v7

    if-eqz v7, :cond_4

    const/4 v7, 0x1

    goto :goto_2

    :cond_4
    const/4 v7, 0x0

    :goto_2
    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/ac;->a(Landroid/content/Context;)Z

    move-result v6

    const-string v7, "8"

    if-eqz v6, :cond_5

    const/4 v10, 0x1

    goto :goto_3

    :cond_5
    const/4 v10, 0x0

    :goto_3
    invoke-virtual {v1, v7, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    if-eqz v6, :cond_6

    const-string v6, "61"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/ac;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_6
    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/ac;->f(Landroid/content/Context;)Z

    move-result v6

    const-string v7, "181"

    if-eqz v6, :cond_7

    const/4 v6, 0x1

    goto :goto_4

    :cond_7
    const/4 v6, 0x0

    :goto_4
    invoke-virtual {v1, v7, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "9"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/ac;->d(Landroid/content/Context;)Lorg/json/JSONArray;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "10"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/ac;->e(Landroid/content/Context;)I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "11"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/ac;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/ae;

    invoke-direct {v5}, Lcom/kuaishou/weapon/p0/ae;-><init>()V

    const-string v6, "26"

    const-string v7, "cpuinfo"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/ae;->a(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_8

    const/4 v7, 0x1

    goto :goto_5

    :cond_8
    const/4 v7, 0x0

    :goto_5
    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "27"

    const-string v7, "meminfo"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/ae;->a(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_9

    const/4 v7, 0x1

    goto :goto_6

    :cond_9
    const/4 v7, 0x0

    :goto_6
    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "28"

    const-string v7, "/proc/cpuinfo"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/ae;->b(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_a

    const/4 v7, 0x1

    goto :goto_7

    :cond_a
    const/4 v7, 0x0

    :goto_7
    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "29"

    const-string v7, "/proc/meminfo"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/ae;->b(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_b

    const/4 v7, 0x1

    goto :goto_8

    :cond_b
    const/4 v7, 0x0

    :goto_8
    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "96"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ae;->a()Lorg/json/JSONObject;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "134"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ae;->b()Lorg/json/JSONObject;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/an;

    invoke-direct {v5}, Lcom/kuaishou/weapon/p0/an;-><init>()V

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/an;->b()Ljava/util/Set;

    move-result-object v6

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/an;->c()Ljava/util/Set;

    move-result-object v7
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const-string v10, "30"

    move-object/from16 v28, v11

    if-eqz v7, :cond_c

    const/4 v11, 0x1

    :try_start_1
    invoke-virtual {v1, v10, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v10, "32"

    new-instance v11, Lorg/json/JSONArray;

    invoke-direct {v11, v7}, Lorg/json/JSONArray;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v1, v10, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_9

    :cond_c
    const/4 v11, 0x0

    invoke-virtual {v1, v10, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :goto_9
    const-string v10, "31"

    if-eqz v6, :cond_d

    const/4 v11, 0x1

    :try_start_2
    invoke-virtual {v1, v10, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v10, "33"

    new-instance v11, Lorg/json/JSONArray;

    invoke-direct {v11, v6}, Lorg/json/JSONArray;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v1, v10, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_a

    :cond_d
    const/4 v11, 0x0

    invoke-virtual {v1, v10, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :goto_a
    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/an;->a()Ljava/util/Set;

    move-result-object v10

    if-eqz v10, :cond_11

    const-string v11, "34"

    invoke-virtual {v1, v11, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    if-nez v6, :cond_e

    if-eqz v7, :cond_11

    :cond_e
    new-instance v10, Ljava/util/HashSet;

    invoke-direct {v10}, Ljava/util/HashSet;-><init>()V

    if-eqz v6, :cond_f

    invoke-interface {v10, v6}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    :cond_f
    if-eqz v7, :cond_10

    invoke-interface {v10, v7}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    :cond_10
    const-string v6, "13"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v11, 0xd

    invoke-virtual {v5, v7, v11, v10}, Lcom/kuaishou/weapon/p0/an;->a(Landroid/content/Context;ILjava/util/Set;)I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "14"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v11, 0xe

    invoke-virtual {v5, v7, v11, v10}, Lcom/kuaishou/weapon/p0/an;->a(Landroid/content/Context;ILjava/util/Set;)I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "15"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v11, 0xf

    invoke-virtual {v5, v7, v11, v10}, Lcom/kuaishou/weapon/p0/an;->a(Landroid/content/Context;ILjava/util/Set;)I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "16"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v11, 0x10

    invoke-virtual {v5, v7, v11, v10}, Lcom/kuaishou/weapon/p0/an;->a(Landroid/content/Context;ILjava/util/Set;)I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "17"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v11, 0x11

    invoke-virtual {v5, v7, v11, v10}, Lcom/kuaishou/weapon/p0/an;->a(Landroid/content/Context;ILjava/util/Set;)I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "18"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v11, 0x12

    invoke-virtual {v5, v7, v11, v10}, Lcom/kuaishou/weapon/p0/an;->a(Landroid/content/Context;ILjava/util/Set;)I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "19"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v11, 0x13

    invoke-virtual {v5, v7, v11, v10}, Lcom/kuaishou/weapon/p0/an;->a(Landroid/content/Context;ILjava/util/Set;)I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "20"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v11, 0x14

    invoke-virtual {v5, v7, v11, v10}, Lcom/kuaishou/weapon/p0/an;->a(Landroid/content/Context;ILjava/util/Set;)I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "21"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v11, 0x15

    invoke-virtual {v5, v7, v11, v10}, Lcom/kuaishou/weapon/p0/an;->a(Landroid/content/Context;ILjava/util/Set;)I

    move-result v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    invoke-virtual {v5, v10}, Lcom/kuaishou/weapon/p0/an;->b(Ljava/util/Set;)Lorg/json/JSONObject;

    move-result-object v5

    const-string v6, "130"

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_11
    new-instance v5, Lcom/kuaishou/weapon/p0/ao;

    invoke-direct {v5}, Lcom/kuaishou/weapon/p0/ao;-><init>()V

    const-string v6, "65"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ao;->d()Z

    move-result v7

    if-eqz v7, :cond_12

    const/4 v7, 0x1

    goto :goto_b

    :cond_12
    const/4 v7, 0x0

    :goto_b
    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ao;->b()Z

    move-result v6

    const-string v7, "66"

    if-eqz v6, :cond_13

    const/4 v10, 0x1

    goto :goto_c

    :cond_13
    const/4 v10, 0x0

    :goto_c
    invoke-virtual {v1, v7, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    if-eqz v6, :cond_15

    const-string v6, "67"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ao;->a()Z

    move-result v7

    if-eqz v7, :cond_14

    const/4 v7, 0x1

    goto :goto_d

    :cond_14
    const/4 v7, 0x0

    :goto_d
    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_15
    const-string v6, "68"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ao;->f()Z

    move-result v7

    if-eqz v7, :cond_16

    const/4 v7, 0x1

    goto :goto_e

    :cond_16
    const/4 v7, 0x0

    :goto_e
    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "69"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ao;->e()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "101"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ao;->c()Z

    move-result v7

    if-eqz v7, :cond_17

    const/4 v7, 0x1

    goto :goto_f

    :cond_17
    const/4 v7, 0x0

    :goto_f
    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "102"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ao;->g()Z

    move-result v5

    if-eqz v5, :cond_18

    const/4 v5, 0x1

    goto :goto_10

    :cond_18
    const/4 v5, 0x0

    :goto_10
    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/af;

    invoke-direct {v5}, Lcom/kuaishou/weapon/p0/af;-><init>()V

    const-string v6, "99"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/af;->a()I

    move-result v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/ad;

    invoke-direct {v5}, Lcom/kuaishou/weapon/p0/ad;-><init>()V

    const-string v6, "103"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ad;->a()Z

    move-result v5

    if-eqz v5, :cond_19

    const/4 v5, 0x1

    goto :goto_11

    :cond_19
    const/4 v5, 0x0

    :goto_11
    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    const-string v6, "03007"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-static {v7}, Lcom/kuaishou/weapon/p0/bu;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "03014"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-static {v7}, Lcom/kuaishou/weapon/p0/bg;->g(Landroid/content/Context;)Z

    move-result v7

    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v6, "03020"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-static {v7}, Lcom/kuaishou/weapon/p0/bu;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "03030"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-static {v7}, Lcom/kuaishou/weapon/p0/bf;->d(Landroid/content/Context;)I

    move-result v7

    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v6, "51"

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/an;

    invoke-direct {v5}, Lcom/kuaishou/weapon/p0/an;-><init>()V

    const-string v6, "107"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/an;->d()Lorg/json/JSONObject;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "155"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/an;->e()Lorg/json/JSONObject;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "170"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/an;->g()Lorg/json/JSONObject;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "190"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/an;->f()Lorg/json/JSONObject;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/ag;

    invoke-direct {v5}, Lcom/kuaishou/weapon/p0/ag;-><init>()V

    const-string v6, "131"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ag;->a()Lorg/json/JSONObject;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "145"

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/ag;->a(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "132"

    invoke-static {}, Lcom/kuaishou/weapon/p0/dk;->a()Lorg/json/JSONObject;

    move-result-object v6

    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/ai;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-direct {v5, v6}, Lcom/kuaishou/weapon/p0/ai;-><init>(Landroid/content/Context;)V

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/ai;->g()Lorg/json/JSONObject;

    move-result-object v5

    const-string v6, "133"

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "plc001_r_rcl_xp"

    const/4 v6, 0x1

    invoke-virtual {v2, v5, v6}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v5

    if-ne v5, v6, :cond_1a

    iget-object v5, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-static {v5}, Lcom/kuaishou/weapon/p0/dl;->c(Landroid/content/Context;)I

    move-result v5

    const-string v6, "139"

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    iget-object v5, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-static {v5}, Lcom/kuaishou/weapon/p0/dl;->d(Landroid/content/Context;)I

    move-result v5

    const-string v6, "140"

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "147"

    invoke-static {}, Lcom/kuaishou/weapon/p0/dl;->a()I

    move-result v6

    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/di;->b()Ljava/lang/String;

    move-result-object v5

    const-string v6, "148"

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "149"

    invoke-static {}, Lcom/kuaishou/weapon/p0/di;->c()Ljava/util/Set;

    move-result-object v6

    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "151"

    invoke-static {}, Lcom/kuaishou/weapon/p0/dk;->b()I

    move-result v6

    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_1a
    const-string v5, "plc001_r_rcl_vl"

    const/4 v6, 0x0

    invoke-virtual {v2, v5, v6}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v5

    const/4 v6, 0x1

    if-ne v5, v6, :cond_1f

    if-nez v3, :cond_1b

    if-eqz v4, :cond_1d

    :cond_1b
    const-string v5, "25"

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-static {v6}, Lcom/kuaishou/weapon/p0/al;->a(Landroid/content/Context;)Z

    move-result v6

    if-eqz v6, :cond_1c

    const/4 v6, 0x1

    goto :goto_12

    :cond_1c
    const/4 v6, 0x0

    :goto_12
    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_1d
    const-string v5, "128"

    invoke-static {}, Lcom/kuaishou/weapon/p0/ad;->b()Z

    move-result v6

    if-eqz v6, :cond_1e

    const/4 v6, 0x1

    goto :goto_13

    :cond_1e
    const/4 v6, 0x0

    :goto_13
    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_1f
    sget-boolean v5, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v5, :cond_2a

    new-instance v5, Lcom/kuaishou/weapon/p0/as;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v7, 0x64

    invoke-direct {v5, v6, v7}, Lcom/kuaishou/weapon/p0/as;-><init>(Landroid/content/Context;I)V

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v8, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/as;->a()Lorg/json/JSONObject;

    move-result-object v6

    invoke-virtual {v5, v6, v9}, Lcom/kuaishou/weapon/p0/as;->a(Lorg/json/JSONObject;Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v6

    if-eqz v6, :cond_20

    invoke-virtual {v6}, Lorg/json/JSONArray;->length()I

    move-result v8

    if-lez v8, :cond_20

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/as;->a()Lorg/json/JSONObject;

    move-result-object v8

    invoke-virtual {v5, v8, v9}, Lcom/kuaishou/weapon/p0/as;->c(Lorg/json/JSONObject;Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v8

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/as;->a()Lorg/json/JSONObject;

    move-result-object v10

    invoke-virtual {v5, v10, v9}, Lcom/kuaishou/weapon/p0/as;->b(Lorg/json/JSONObject;Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v10

    const-string v11, "42"

    invoke-virtual {v1, v11, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v11, "43"

    invoke-virtual {v1, v11, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v5, v6, v8}, Lcom/kuaishou/weapon/p0/as;->a(Lorg/json/JSONArray;Lorg/json/JSONArray;)Lorg/json/JSONArray;

    move-result-object v6

    invoke-virtual {v5, v6, v10}, Lcom/kuaishou/weapon/p0/as;->a(Lorg/json/JSONArray;Lorg/json/JSONArray;)Lorg/json/JSONArray;

    move-result-object v6

    invoke-virtual {v1, v9, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_20
    invoke-virtual {v5, v15}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v15, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v5, v14}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v14, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v5, v13}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v13, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v5, v12}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v12, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v6, v28

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v6, v27

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/as;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v6, v26

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/as;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v6, v25

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/as;->e(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v6, v24

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v6, v23

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/as;->c(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v6, v22

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/as;->c(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v6, v21

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/as;->c(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v6, v20

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/as;->d(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "50"

    const-string v8, "50"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "70"

    const-string v8, "70"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->c(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "39"

    const-string v8, "39"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "52"

    const-string v8, "52"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "53"

    const-string v8, "53"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "54"

    const-string v8, "54"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "55"

    const-string v8, "55"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "73"

    const-string v8, "73"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "74"

    const-string v8, "74"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "104"

    const-string v8, "104"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "plc001_r_rcl_dv"

    const/4 v8, 0x1

    invoke-virtual {v2, v6, v8}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v6

    if-ne v6, v8, :cond_21

    sget v6, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v8, 0x17

    if-ge v6, v8, :cond_21

    new-instance v6, Lcom/kuaishou/weapon/p0/ar;

    iget-object v8, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-direct {v6, v8}, Lcom/kuaishou/weapon/p0/ar;-><init>(Landroid/content/Context;)V

    const-string v8, "57"

    invoke-virtual {v6, v8}, Lcom/kuaishou/weapon/p0/ar;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_21

    const-string v9, "57"

    invoke-virtual {v1, v9, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v8, "56"

    const-string v9, "56"

    invoke-virtual {v6, v9}, Lcom/kuaishou/weapon/p0/ar;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v8, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_21
    const-string v6, "77"

    const-string v8, "77"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "78"

    const-string v8, "78"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "79"

    const-string v8, "79"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "84"

    const-string v8, "84"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "80"

    const-string v8, "80"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "81"

    const-string v8, "81"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "82"

    const-string v8, "82"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "83"

    const-string v8, "83"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "87"

    const-string v8, "87"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "89"

    const-string v8, "89"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "90"

    const-string v8, "90"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->d(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "75"

    const-string v8, "75"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "88"

    const-string v8, "88"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "92"

    const-string v8, "92"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "93"

    const-string v8, "93"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "94"

    const-string v8, "94"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "95"

    const-string v8, "95"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "98"

    const-string v8, "98"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "100"

    const-string v8, "100"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "105"

    const-string v8, "105"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/as;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "plc001_r_rcl_li"

    const/4 v6, 0x1

    invoke-virtual {v2, v5, v6}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v5

    if-ne v5, v6, :cond_22

    new-instance v5, Lcom/kuaishou/weapon/p0/aq;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/4 v8, 0x0

    invoke-direct {v5, v6, v8}, Lcom/kuaishou/weapon/p0/aq;-><init>(Landroid/content/Context;I)V

    const-string v6, "108"

    const-string v8, "108"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "109"

    const-string v8, "109"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "111"

    const-string v8, "111"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_22
    const-string v5, "plc001_r_rcl_em"

    const/4 v6, 0x1

    invoke-virtual {v2, v5, v6}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v5

    if-ne v5, v6, :cond_23

    new-instance v5, Lcom/kuaishou/weapon/p0/aq;

    iget-object v8, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-direct {v5, v8, v6}, Lcom/kuaishou/weapon/p0/aq;-><init>(Landroid/content/Context;I)V

    const-string v6, "112"

    const-string v8, "112"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->b(Ljava/lang/String;)Ljava/util/Set;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "113"

    const-string v8, "113"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "114"

    const-string v8, "114"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "115"

    const-string v8, "115"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "116"

    const-string v8, "116"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "117"

    const-string v8, "117"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "120"

    const-string v8, "120"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/aq;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/4 v8, 0x4

    invoke-direct {v5, v6, v8}, Lcom/kuaishou/weapon/p0/aq;-><init>(Landroid/content/Context;I)V

    const-string v6, "124"

    const-string v8, "124"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "125"

    const-string v8, "125"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "126"

    const-string v8, "126"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "127"

    const-string v8, "127"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/aq;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_23
    const-string v5, "plc001_r_rcl_vp"

    const/4 v6, 0x0

    invoke-virtual {v2, v5, v6}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v5

    const/4 v6, 0x1

    if-ne v5, v6, :cond_24

    new-instance v5, Lcom/kuaishou/weapon/p0/av;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-direct {v5, v6, v7}, Lcom/kuaishou/weapon/p0/av;-><init>(Landroid/content/Context;I)V

    const-string v6, "97"

    const-string v8, "97"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/av;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "118"

    const-string v8, "118"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/av;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "119"

    const-string v8, "119"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/av;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "135"

    const-string v8, "135"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/av;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "174"

    const-string v8, "174"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/av;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/av;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v8, 0xc8

    invoke-direct {v5, v6, v8}, Lcom/kuaishou/weapon/p0/av;-><init>(Landroid/content/Context;I)V

    const-string v6, "173"

    const-string v8, "173"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/av;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "182"

    const-string v8, "182"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/av;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_24
    const-string v5, "plc001_r_rcl_rcd"

    const/4 v6, 0x1

    invoke-virtual {v2, v5, v6}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v5

    if-ne v5, v6, :cond_25

    new-instance v5, Lcom/kuaishou/weapon/p0/bd;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/4 v8, 0x4

    invoke-direct {v5, v6, v8}, Lcom/kuaishou/weapon/p0/bd;-><init>(Landroid/content/Context;I)V

    const-string v6, "129"

    const-string v8, "129"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/bd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/bd;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/4 v8, 0x1

    invoke-direct {v5, v6, v8}, Lcom/kuaishou/weapon/p0/bd;-><init>(Landroid/content/Context;I)V

    const-string v6, "121"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/bd;->a()Lorg/json/JSONObject;

    move-result-object v8

    const-string v9, "121"

    invoke-virtual {v5, v8, v9}, Lcom/kuaishou/weapon/p0/bd;->a(Lorg/json/JSONObject;Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/bd;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/4 v8, 0x2

    invoke-direct {v5, v6, v8}, Lcom/kuaishou/weapon/p0/bd;-><init>(Landroid/content/Context;I)V

    const-string v6, "137"

    const-string v8, "137"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/bd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "138"

    const-string v8, "138"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/bd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "141"

    const-string v8, "141"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/bd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v1, v6, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "142"

    const-string v8, "142"

    invoke-virtual {v5, v8}, Lcom/kuaishou/weapon/p0/bd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/be;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/4 v8, 0x3

    invoke-direct {v5, v6, v8}, Lcom/kuaishou/weapon/p0/be;-><init>(Landroid/content/Context;I)V

    const-string v6, "150"

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/be;->b(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v6

    const-string v8, "150"

    invoke-virtual {v1, v8, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    if-eqz v6, :cond_25

    const-string v8, "188"

    invoke-virtual {v5, v6}, Lcom/kuaishou/weapon/p0/be;->a(Lorg/json/JSONArray;)Lorg/json/JSONObject;

    move-result-object v5

    invoke-virtual {v1, v8, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_25
    const-string v5, "plc001_r_rcl_re"

    const/4 v6, 0x1

    invoke-virtual {v2, v5, v6}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v5

    if-ne v5, v6, :cond_26

    new-instance v5, Lcom/kuaishou/weapon/p0/az;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-direct {v5, v6, v7}, Lcom/kuaishou/weapon/p0/az;-><init>(Landroid/content/Context;I)V

    const-string v6, "152"

    const-string v7, "152"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/az;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "153"

    const-string v7, "153"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/az;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "156"

    const-string v7, "156"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/az;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "157"

    const-string v7, "157"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/az;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "163"

    const-string v7, "163"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/az;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "171"

    const-string v7, "171"

    const/4 v8, 0x1

    invoke-virtual {v5, v7, v8}, Lcom/kuaishou/weapon/p0/az;->a(Ljava/lang/String;Z)Lorg/json/JSONObject;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "172"

    const-string v7, "172"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/az;->b(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/az;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v7, 0x1f4

    invoke-direct {v5, v6, v7}, Lcom/kuaishou/weapon/p0/az;-><init>(Landroid/content/Context;I)V

    const-string v6, "177"

    const-string v7, "177"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/az;->d(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_26
    if-nez v3, :cond_27

    if-eqz v4, :cond_28

    :cond_27
    const-string v5, "plc001_r_rcl_hk"

    const/4 v6, 0x0

    invoke-virtual {v2, v5, v6}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v5

    const/4 v6, 0x1

    if-ne v5, v6, :cond_28

    new-instance v5, Lcom/kuaishou/weapon/p0/az;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v7, 0x12c

    invoke-direct {v5, v6, v7}, Lcom/kuaishou/weapon/p0/az;-><init>(Landroid/content/Context;I)V

    const-string v6, "158"

    const-string v7, "158"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/az;->b(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_28
    const-string v5, "plc001_r_rcl_ud"

    const/4 v11, 0x0

    invoke-virtual {v2, v5, v11}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v5

    const/4 v6, 0x1

    if-ne v5, v6, :cond_29

    new-instance v5, Lcom/kuaishou/weapon/p0/bc;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-direct {v5, v6}, Lcom/kuaishou/weapon/p0/bc;-><init>(Landroid/content/Context;)V

    const-string v6, "162"

    const-string v7, "162"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/bc;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "160"

    invoke-virtual {v5}, Lcom/kuaishou/weapon/p0/bc;->a()Lorg/json/JSONObject;

    move-result-object v7

    const-string v8, "160"

    invoke-virtual {v5, v7, v8}, Lcom/kuaishou/weapon/p0/bc;->a(Lorg/json/JSONObject;Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v5, Lcom/kuaishou/weapon/p0/az;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v7, 0x190

    invoke-direct {v5, v6, v7}, Lcom/kuaishou/weapon/p0/az;-><init>(Landroid/content/Context;I)V

    const-string v6, "164"

    const-string v7, "164"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/az;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "165"

    const-string v7, "165"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/az;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "166"

    const-string v7, "166"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/az;->c(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "167"

    const-string v7, "167"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/az;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_29
    const-string v5, "plc001_r_rcl_sc"

    const/4 v6, 0x1

    invoke-virtual {v2, v5, v6}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v5

    if-ne v5, v6, :cond_2b

    new-instance v5, Lcom/kuaishou/weapon/p0/ax;

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    const/16 v7, 0x258

    invoke-direct {v5, v6, v7}, Lcom/kuaishou/weapon/p0/ax;-><init>(Landroid/content/Context;I)V

    const-string v6, "179"

    const-string v7, "179"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/ax;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "186"

    const-string v7, "186"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/ax;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "189"

    const-string v7, "189"

    invoke-virtual {v5, v7}, Lcom/kuaishou/weapon/p0/ax;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_14

    :cond_2a
    const/4 v11, 0x0

    :cond_2b
    :goto_14
    const-string v5, "58"

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-static {v6}, Lcom/kuaishou/weapon/p0/ae;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "60"

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-static {v6}, Lcom/kuaishou/weapon/p0/ab;->b(Landroid/content/Context;)Z

    move-result v6

    if-eqz v6, :cond_2c

    const/4 v6, 0x1

    goto :goto_15

    :cond_2c
    move v6, v11

    :goto_15
    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "11000"

    sget-boolean v6, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v6, :cond_2d

    const/4 v6, 0x1

    goto :goto_16

    :cond_2d
    move v6, v11

    :goto_16
    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "11002"

    sget-object v6, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "plc001_v"

    const-string v6, "0.0.0"

    invoke-virtual {v2, v5, v6}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "11008"

    invoke-virtual {v1, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "11009"

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-virtual {v6}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/kuaishou/weapon/p0/br;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :try_start_3
    const-string v5, "11301"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v6

    invoke-virtual {v6}, Lcom/kwad/sdk/f/b;->Fz()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "11302"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v6

    invoke-virtual {v6}, Lcom/kwad/sdk/f/b;->getSdkVersion()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "11303"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v6

    invoke-virtual {v6}, Lcom/kwad/sdk/f/b;->getAppId()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :catchall_0
    move-object/from16 v7, v16

    move-object/from16 v6, v17

    const/4 v5, 0x1

    :try_start_4
    invoke-virtual {v2, v6, v7, v5}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_2e

    const-string v9, "183"

    invoke-virtual {v1, v9, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v2, v6, v7}, Lcom/kuaishou/weapon/p0/h;->c(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2e
    const-string v2, "187"

    iget-object v6, v0, Lcom/kuaishou/weapon/p0/ck;->a:Landroid/content/Context;

    invoke-static {v6}, Lcom/kuaishou/weapon/p0/ak;->a(Landroid/content/Context;)Z

    move-result v6

    if-eqz v6, :cond_2f

    move v6, v5

    goto :goto_17

    :cond_2f
    move v6, v11

    :goto_17
    invoke-virtual {v1, v2, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "11006"

    if-eqz v3, :cond_30

    move v3, v5

    goto :goto_18

    :cond_30
    move v3, v11

    :goto_18
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "11029"

    if-eqz v4, :cond_31

    move v7, v5

    goto :goto_19

    :cond_31
    move v7, v11

    :goto_19
    invoke-virtual {v1, v2, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "11028"

    sget-object v3, Lcom/kuaishou/weapon/p0/WeaponHI;->sKSSdkver:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "20000"

    iget v3, v0, Lcom/kuaishou/weapon/p0/ck;->b:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "20001"

    iget v3, v0, Lcom/kuaishou/weapon/p0/ck;->c:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :try_start_5
    const-string v2, "02078"

    const-string v3, "W_S_V"

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/jni/A;->getE(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "02079"

    const-string v3, "W_S_S_V"

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/jni/A;->getE(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :catchall_1
    :try_start_6
    const-string v2, "11007"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long v3, v3, v18

    invoke-virtual {v1, v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v2, "11017"

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    return-object v1

    :catchall_2
    const/4 v1, 0x0

    return-object v1
.end method
