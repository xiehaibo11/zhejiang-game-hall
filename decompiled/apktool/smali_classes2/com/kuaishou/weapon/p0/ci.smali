.class public Lcom/kuaishou/weapon/p0/ci;
.super Ljava/lang/Object;


# instance fields
.field private a:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

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

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, p1}, Lcom/kuaishou/weapon/p0/cl;->a(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object p1

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/kuaishou/weapon/p0/ci;->a()Lorg/json/JSONObject;

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
    .locals 28

    move-object/from16 v0, p0

    const-string v1, "16102"

    const-string v2, "6"

    const-string v3, "52"

    const-string v4, "5"

    const-string v5, "51"

    const-string v6, "4"

    const-string v7, "48"

    const-string v8, "57"

    const-string v9, "3"

    const-string v10, "46"

    const-string v11, "95"

    const-string v12, "56"

    const-string v13, "2"

    const-string v14, "1"

    const-string v15, "53"

    move-object/from16 v16, v1

    const-string v1, "45"

    move-object/from16 v17, v11

    const-string v11, "0"

    move-object/from16 v18, v8

    const-string v8, "re_po_rt"

    const/16 v19, 0x0

    move-object/from16 v20, v12

    :try_start_0
    new-instance v12, Lorg/json/JSONObject;

    invoke-direct {v12}, Lorg/json/JSONObject;-><init>()V

    move-object/from16 v21, v15

    iget-object v15, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-static {v15, v8}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v15

    move-object/from16 v22, v8

    const-string v8, "a1_p_s_p_s"

    invoke-virtual {v15, v8}, Lcom/kuaishou/weapon/p0/h;->e(Ljava/lang/String;)Z

    move-result v8

    move/from16 v23, v8

    const-string v8, "a1_p_s_p_s_c_b"

    invoke-virtual {v15, v8}, Lcom/kuaishou/weapon/p0/h;->e(Ljava/lang/String;)Z

    move-result v8

    move/from16 v24, v8

    const-string v8, "plc002_pp_s"

    move-object/from16 v25, v3

    const/4 v3, 0x1

    invoke-virtual {v15, v8, v3}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v8

    if-ne v8, v3, :cond_13

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v26

    const-string v8, "plc002_pp_pcl_cp"

    invoke-virtual {v15, v8, v3}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v8

    if-ne v8, v3, :cond_0

    sget-boolean v8, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v8, :cond_0

    new-instance v8, Lcom/kuaishou/weapon/p0/ap;

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-direct {v8, v3}, Lcom/kuaishou/weapon/p0/ap;-><init>(Landroid/content/Context;)V

    invoke-virtual {v8, v11}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v11, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v8, v14}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v14, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v8, v13}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v13, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v8, v9}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v9, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v8, v6}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v6, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v8, v4}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v8, v2}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "7"

    const-string v3, "7"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "8"

    const-string v3, "8"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "9"

    const-string v3, "9"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "10"

    const-string v3, "10"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "11"

    const-string v3, "11"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "12"

    const-string v3, "12"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "13"

    const-string v3, "13"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "14"

    const-string v3, "14"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "15"

    const-string v3, "15"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "16"

    const-string v3, "16"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "17"

    const-string v3, "17"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "18"

    const-string v3, "18"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "19"

    const-string v3, "19"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "20"

    const-string v3, "20"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "21"

    const-string v3, "21"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "22"

    const-string v3, "22"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "23"

    const-string v3, "23"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "24"

    const-string v3, "24"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "25"

    const-string v3, "25"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "26"

    const-string v3, "26"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "27"

    const-string v3, "27"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "28"

    const-string v3, "28"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "29"

    const-string v3, "29"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "30"

    const-string v3, "30"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "31"

    const-string v3, "31"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "32"

    const-string v3, "32"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "33"

    const-string v3, "33"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "34"

    const-string v3, "34"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "35"

    const-string v3, "35"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "36"

    const-string v3, "36"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "37"

    const-string v3, "37"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "38"

    const-string v3, "38"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "39"

    const-string v3, "39"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "40"

    const-string v3, "40"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "41"

    const-string v3, "41"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "42"

    const-string v3, "42"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "43"

    const-string v3, "43"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "44"

    const-string v3, "44"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "101"

    const-string v3, "101"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "102"

    const-string v3, "102"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "105"

    const-string v3, "105"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "106"

    const-string v3, "106"

    invoke-virtual {v8, v3}, Lcom/kuaishou/weapon/p0/ap;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/dl;->b(Landroid/content/Context;)Ljava/util/Set;

    move-result-object v2

    const-string v3, "49"

    invoke-virtual {v12, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/dl;->a(Landroid/content/Context;)Ljava/util/Set;

    move-result-object v2

    const-string v3, "50"

    invoke-virtual {v12, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    const-string v2, "plc002_pp_pcl_gc"

    const/4 v3, 0x1

    invoke-virtual {v15, v2, v3}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v2

    const/16 v4, 0xc8

    const/4 v6, 0x0

    if-ne v2, v3, :cond_3

    sget-boolean v2, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v2, :cond_3

    new-instance v2, Lcom/kuaishou/weapon/p0/at;

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-direct {v2, v3}, Lcom/kuaishou/weapon/p0/at;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2, v1}, Lcom/kuaishou/weapon/p0/at;->d(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v3

    invoke-virtual {v12, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v2}, Lcom/kuaishou/weapon/p0/at;->a()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "93"

    const/4 v3, 0x1

    invoke-virtual {v12, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_0

    :cond_1
    const/4 v3, 0x1

    :goto_0
    invoke-virtual {v2}, Lcom/kuaishou/weapon/p0/at;->b()Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v1, "94"

    invoke-virtual {v12, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_2
    invoke-virtual {v2, v10}, Lcom/kuaishou/weapon/p0/at;->d(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {v12, v10, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v2, v7}, Lcom/kuaishou/weapon/p0/at;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v12, v7, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v2, v5}, Lcom/kuaishou/weapon/p0/at;->b(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {v12, v5, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    iget-object v1, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    move-object/from16 v3, v25

    invoke-virtual {v2, v1, v3, v6}, Lcom/kuaishou/weapon/p0/at;->a(Landroid/content/Context;Ljava/lang/String;I)Ljava/util/Set;

    move-result-object v1

    invoke-virtual {v12, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "55"

    const-string v3, "55"

    invoke-virtual {v2, v3}, Lcom/kuaishou/weapon/p0/at;->c(Ljava/lang/String;)Ljava/util/Set;

    move-result-object v3

    invoke-virtual {v12, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "66"

    const-string v3, "66"

    invoke-virtual {v2, v3}, Lcom/kuaishou/weapon/p0/at;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "67"

    invoke-static {}, Lcom/kuaishou/weapon/p0/di;->d()I

    move-result v3

    invoke-virtual {v12, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "78"

    const-string v3, "78"

    invoke-virtual {v2, v3}, Lcom/kuaishou/weapon/p0/at;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "79"

    const-string v3, "79"

    invoke-virtual {v2, v3}, Lcom/kuaishou/weapon/p0/at;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v1, Lcom/kuaishou/weapon/p0/ay;

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-direct {v1, v2, v4}, Lcom/kuaishou/weapon/p0/ay;-><init>(Landroid/content/Context;I)V

    const-string v2, "70"

    const-string v3, "70"

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/ay;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "71"

    const-string v3, "71"

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/ay;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "72"

    const-string v3, "72"

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/ay;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "73"

    const-string v3, "73"

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/ay;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "74"

    const-string v3, "74"

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/ay;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v12, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v1, "plc002_pp_pcl_pds"

    const/4 v2, 0x1

    invoke-virtual {v15, v1, v2}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v2, :cond_6

    new-instance v1, Lcom/kuaishou/weapon/p0/aw;

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-direct {v1, v3}, Lcom/kuaishou/weapon/p0/aw;-><init>(Landroid/content/Context;)V

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    move-object/from16 v5, v21

    invoke-virtual {v1, v3, v5, v2}, Lcom/kuaishou/weapon/p0/aw;->a(Landroid/content/Context;Ljava/lang/String;I)Ljava/util/Set;

    move-result-object v3

    invoke-virtual {v12, v5, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v2, v20

    invoke-virtual {v1, v2}, Lcom/kuaishou/weapon/p0/aw;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v2, v18

    invoke-virtual {v1, v2}, Lcom/kuaishou/weapon/p0/aw;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v12, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    if-nez v23, :cond_4

    if-eqz v24, :cond_5

    :cond_4
    new-instance v1, Lcom/kuaishou/weapon/p0/aj;

    invoke-direct {v1}, Lcom/kuaishou/weapon/p0/aj;-><init>()V

    const-string v2, "47"

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/aj;->a(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "59"

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/aj;->d(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "60"

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/aj;->c(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "61"

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/aj;->b(Landroid/content/Context;)I

    move-result v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "62"

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/aj;->e(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "65"

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/aj;->f(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "69"

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/aj;->g(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "75"

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/aj;->h(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "80"

    invoke-static {}, Lcom/kuaishou/weapon/p0/aj;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "85"

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/aj;->i(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "87"

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/aj;->j(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "91"

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/aj;->k(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "92"

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/aj;->l(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v12, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_5
    const-string v1, "64"

    invoke-static {}, Lcom/kuaishou/weapon/p0/di;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_6
    const-string v1, "plc002_pp_pcl_pam"

    const/4 v2, 0x1

    invoke-virtual {v15, v1, v2}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v2, :cond_a

    new-instance v1, Lcom/kuaishou/weapon/p0/cr;

    invoke-direct {v1}, Lcom/kuaishou/weapon/p0/cr;-><init>()V

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/cr;->a()Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "98"

    invoke-virtual {v12, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "107"

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/cr;->b()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v12, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/am;->d()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    const-string v2, "77"

    invoke-virtual {v12, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_7
    const-string v1, "104"

    invoke-static {}, Lcom/kuaishou/weapon/p0/am;->c()I

    move-result v2

    invoke-virtual {v12, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "109"

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/dl;->e(Landroid/content/Context;)I

    move-result v2

    invoke-virtual {v12, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    new-instance v1, Lcom/kuaishou/weapon/p0/ai;

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/kuaishou/weapon/p0/ai;-><init>(Landroid/content/Context;)V

    const-string v2, "82"

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/ai;->h()I

    move-result v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/ai;->i()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_8

    const-string v3, "83"

    invoke-virtual {v12, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_8
    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/ai;->j()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_9

    const-string v3, "84"

    invoke-virtual {v12, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_9
    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/ai;->k()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_a

    const-string v2, "86"

    invoke-virtual {v12, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_a
    const-string v1, "plc002_pp_pcl_pke"

    const/4 v2, 0x1

    invoke-virtual {v15, v1, v2}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v2, :cond_c

    new-instance v1, Lcom/kuaishou/weapon/p0/au;

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/kuaishou/weapon/p0/au;-><init>(Landroid/content/Context;)V

    move-object/from16 v2, v17

    invoke-virtual {v1, v2}, Lcom/kuaishou/weapon/p0/au;->b(Ljava/lang/String;)Ljava/util/List;

    move-result-object v3

    invoke-virtual {v12, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "96"

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/au;->a()Z

    move-result v1

    if-eqz v1, :cond_b

    const/4 v1, 0x1

    goto :goto_1

    :cond_b
    move v1, v6

    :goto_1
    invoke-virtual {v12, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "97"

    invoke-static {}, Lcom/kuaishou/weapon/p0/di;->e()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v12, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    :try_start_1
    const-string v1, "11301"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fz()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "11302"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getSdkVersion()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "11303"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getAppId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_c
    :try_start_2
    iget-object v1, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    move-object/from16 v2, v22

    invoke-static {v1, v2}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v1

    const-string v2, "plc001_b_bcl_s"
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    const/4 v3, 0x1

    :try_start_3
    invoke-virtual {v1, v2, v3}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-ne v1, v3, :cond_f

    :try_start_4
    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v1

    new-instance v2, Lcom/kuaishou/weapon/p0/ba;

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    const/16 v5, 0x64

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    iget-object v7, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-static {v7}, Lcom/kuaishou/weapon/p0/ba;->a(Landroid/content/Context;)Z

    move-result v7

    invoke-direct {v2, v3, v5, v1, v7}, Lcom/kuaishou/weapon/p0/ba;-><init>(Landroid/content/Context;ILjava/lang/String;Z)V

    invoke-virtual {v2}, Lcom/kuaishou/weapon/p0/ba;->c()Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_d

    invoke-virtual {v1}, Lorg/json/JSONObject;->length()I

    move-result v2

    const/16 v3, 0xa

    if-le v2, v3, :cond_d

    const-string v2, "16002"

    invoke-virtual {v12, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const/4 v5, 0x1

    goto :goto_2

    :cond_d
    new-instance v1, Lcom/kuaishou/weapon/p0/ba;

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    const-string v3, ""
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    const/4 v5, 0x1

    :try_start_5
    invoke-direct {v1, v2, v4, v3, v5}, Lcom/kuaishou/weapon/p0/ba;-><init>(Landroid/content/Context;ILjava/lang/String;Z)V

    move-object/from16 v2, v16

    invoke-virtual {v1, v2}, Lcom/kuaishou/weapon/p0/ba;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v12, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :goto_2
    if-nez v23, :cond_e

    if-eqz v24, :cond_10

    :cond_e
    iget-object v1, v0, Lcom/kuaishou/weapon/p0/ci;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/kuaishou/weapon/p0/bf;->g(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_10

    invoke-virtual {v1}, Lorg/json/JSONObject;->length()I

    move-result v2

    if-lez v2, :cond_10

    const-string v2, "16116"

    invoke-virtual {v12, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    goto :goto_3

    :catchall_1
    :cond_f
    move v5, v3

    goto :goto_3

    :catchall_2
    const/4 v5, 0x1

    :catchall_3
    :cond_10
    :goto_3
    :try_start_6
    const-string v1, "11006"

    if-eqz v23, :cond_11

    move v3, v5

    goto :goto_4

    :cond_11
    move v3, v6

    :goto_4
    invoke-virtual {v12, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "11029"

    if-eqz v24, :cond_12

    move v3, v5

    goto :goto_5

    :cond_12
    move v3, v6

    :goto_5
    invoke-virtual {v12, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "11002"

    sget-object v2, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    invoke-virtual {v12, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "11007"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long v2, v2, v26

    invoke-virtual {v12, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    invoke-virtual {v12}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    const-string v2, "11017"

    invoke-virtual {v12, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    return-object v12

    :catchall_4
    :cond_13
    return-object v19
.end method
