.class public Lcom/kuaishou/weapon/p0/cm;
.super Ljava/lang/Object;


# instance fields
.field private a:Landroid/content/Context;

.field private b:I


# direct methods
.method public constructor <init>(Landroid/content/Context;I)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    iput p2, p0, Lcom/kuaishou/weapon/p0/cm;->b:I

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

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v1, p1}, Lcom/kuaishou/weapon/p0/cl;->a(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object p1

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/kuaishou/weapon/p0/cm;->a()Lorg/json/JSONObject;

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
    .locals 25

    move-object/from16 v0, p0

    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    iget-object v4, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    const-string v5, "re_po_rt"

    invoke-static {v4, v5}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v4

    const-string v5, "a1_p_s_p_s"

    invoke-virtual {v4, v5}, Lcom/kuaishou/weapon/p0/h;->e(Ljava/lang/String;)Z

    move-result v5

    const-string v6, "a1_p_s_p_s_c_b"

    invoke-virtual {v4, v6}, Lcom/kuaishou/weapon/p0/h;->e(Ljava/lang/String;)Z

    move-result v6

    const-string v7, "plc001_b_bcl_ie"

    const/4 v8, 0x1

    invoke-virtual {v4, v7, v8}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v7
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    const/4 v9, 0x0

    const-string v10, "RISK"

    if-ne v7, v8, :cond_5

    if-nez v5, :cond_0

    if-eqz v6, :cond_5

    :cond_0
    :try_start_1
    iget-object v7, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v7}, Lcom/kuaishou/weapon/p0/bg;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_1

    invoke-virtual {v7, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v11

    if-nez v11, :cond_1

    const-string v11, "01001"

    invoke-virtual {v3, v11, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    iget-object v7, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v7}, Lcom/kuaishou/weapon/p0/bg;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_2

    invoke-virtual {v7, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v11

    if-nez v11, :cond_2

    const-string v11, "01003"

    invoke-virtual {v3, v11, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    iget-object v7, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v7, v9}, Lcom/kuaishou/weapon/p0/bg;->b(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_3

    invoke-virtual {v7, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v11

    if-nez v11, :cond_3

    const-string v11, "01019"

    invoke-virtual {v3, v11, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    iget-object v7, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v7, v8}, Lcom/kuaishou/weapon/p0/bg;->b(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_4

    invoke-virtual {v7, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v11

    if-nez v11, :cond_4

    const-string v11, "01004"

    invoke-virtual {v3, v11, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_4
    iget-object v7, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v7}, Lcom/kuaishou/weapon/p0/bg;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_5

    invoke-virtual {v7, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v11

    if-nez v11, :cond_5

    const-string v11, "01007"

    invoke-virtual {v3, v11, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_5
    const-string v7, "plc001_b_bcl_is"

    invoke-virtual {v4, v7, v9}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v7

    if-ne v7, v8, :cond_7

    if-nez v5, :cond_6

    if-eqz v6, :cond_7

    :cond_6
    new-instance v7, Lcom/kuaishou/weapon/p0/bf;

    invoke-direct {v7}, Lcom/kuaishou/weapon/p0/bf;-><init>()V

    const-string v11, "plc001_b_pry_gsl"

    invoke-virtual {v4, v11, v8}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v11

    if-ne v11, v8, :cond_7

    const-string v11, "10020"

    iget-object v12, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v7, v12}, Lcom/kuaishou/weapon/p0/bf;->f(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v7

    invoke-virtual {v3, v11, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_7
    const-string v7, "plc001_b_bcl_ic"

    invoke-virtual {v4, v7, v8}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v7

    if-ne v7, v8, :cond_9

    if-nez v5, :cond_8

    if-eqz v6, :cond_9

    :cond_8
    iget-object v7, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v7}, Lcom/kuaishou/weapon/p0/bg;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    const-string v11, "01011"

    invoke-virtual {v3, v11, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_9
    const-string v7, "plc001_b_bcl_btm"

    invoke-virtual {v4, v7, v8}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v7

    if-ne v7, v8, :cond_b

    if-nez v5, :cond_a

    if-eqz v6, :cond_b

    :cond_a
    iget-object v7, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v7}, Lcom/kuaishou/weapon/p0/bg;->p(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_b

    invoke-virtual {v7, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v11

    if-nez v11, :cond_b

    const-string v11, "01016"

    invoke-virtual {v3, v11, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_b
    const-string v7, "plc001_b_bcl_d"

    invoke-virtual {v4, v7, v8}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v7
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_4

    const-string v11, ""

    if-ne v7, v8, :cond_3e

    if-nez v5, :cond_c

    if-eqz v6, :cond_e

    :cond_c
    :try_start_2
    iget-object v7, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v7}, Lcom/kuaishou/weapon/p0/bg;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-nez v12, :cond_d

    invoke-virtual {v7, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v12

    if-nez v12, :cond_d

    const-string v12, "01013"

    invoke-virtual {v3, v12, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_d
    const-string v7, "02042"

    iget-object v12, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v12}, Lcom/kuaishou/weapon/p0/bg;->v(Landroid/content/Context;)I

    move-result v12

    invoke-virtual {v3, v7, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_e
    const-string v7, "02054"

    iget-object v12, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v12}, Lcom/kuaishou/weapon/p0/bg;->z(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v3, v7, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    sget-boolean v7, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_4

    const-string v12, "02014"

    const-string v13, "02013"

    const-string v14, "02012"

    const-string v15, "02011"

    const-string v9, "02010"

    const-string v8, "02009"

    move-wide/from16 v16, v1

    const-string v1, "02008"

    const-string v2, "02007"

    move-object/from16 v18, v10

    const-string v10, "02006"

    move/from16 v19, v6

    const-string v6, "02005"

    move/from16 v20, v5

    const-string v5, "02004"

    move-object/from16 v21, v4

    const-string v4, "02003"

    move-object/from16 v22, v11

    const-string v11, "02002"

    move-object/from16 v23, v12

    const-string v12, "02001"

    if-eqz v7, :cond_2d

    :try_start_3
    const-string v7, "02019"

    move-object/from16 v24, v13

    iget-object v13, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v13}, Lcom/kuaishou/weapon/p0/bk;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v3, v7, v13}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "02021"

    iget-object v13, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v13}, Lcom/kuaishou/weapon/p0/bk;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v3, v7, v13}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "02022"

    iget-object v13, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v13}, Lcom/kuaishou/weapon/p0/bk;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v3, v7, v13}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "02030"

    iget-object v13, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v13}, Lcom/kuaishou/weapon/p0/bk;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v3, v7, v13}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v7, Lcom/kuaishou/weapon/p0/cd;

    iget-object v13, v0, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-direct {v7, v13}, Lcom/kuaishou/weapon/p0/cd;-><init>(Landroid/content/Context;)V

    const-string v13, "01014"

    const-string v0, "01014"

    invoke-virtual {v7, v0}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_f

    const-string v0, "01014"

    invoke-virtual {v7, v0}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_f
    move-object/from16 v0, v22

    :goto_0
    invoke-virtual {v3, v13, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v7, v12}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_10

    invoke-virtual {v7, v12}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    :cond_10
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->a()Ljava/lang/String;

    move-result-object v0

    :goto_1
    invoke-virtual {v3, v12, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v7, v11}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_11

    invoke-virtual {v7, v11}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_2

    :cond_11
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->b()Ljava/lang/String;

    move-result-object v0

    :goto_2
    invoke-virtual {v3, v11, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v7, v4}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_12

    invoke-virtual {v7, v4}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_3

    :cond_12
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->c()Ljava/lang/String;

    move-result-object v0

    :goto_3
    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v7, v5}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_13

    invoke-virtual {v7, v5}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_4

    :cond_13
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->d()Ljava/lang/String;

    move-result-object v0

    :goto_4
    invoke-virtual {v3, v5, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v7, v6}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_14

    invoke-virtual {v7, v6}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_5

    :cond_14
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->e()Ljava/lang/String;

    move-result-object v0

    :goto_5
    invoke-virtual {v3, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v7, v10}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_15

    invoke-virtual {v7, v10}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_6

    :cond_15
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->f()Ljava/lang/String;

    move-result-object v0

    :goto_6
    invoke-virtual {v3, v10, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v7, v2}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_16

    invoke-virtual {v7, v2}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    :cond_16
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->g()Ljava/lang/String;

    move-result-object v0

    :goto_7
    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_17

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_8

    :cond_17
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->h()Ljava/lang/String;

    move-result-object v0

    :goto_8
    invoke-virtual {v3, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v7, v8}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_18

    invoke-virtual {v7, v8}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_9

    :cond_18
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->i()Ljava/lang/String;

    move-result-object v0

    :goto_9
    invoke-virtual {v3, v8, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v7, v9}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_19

    invoke-virtual {v7, v9}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_a

    :cond_19
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->j()Ljava/lang/String;

    move-result-object v0

    :goto_a
    invoke-virtual {v3, v9, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v7, v15}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1a

    invoke-virtual {v7, v15}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_b

    :cond_1a
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->k()Ljava/lang/String;

    move-result-object v0

    :goto_b
    invoke-virtual {v3, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v7, v14}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1b

    invoke-virtual {v7, v14}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_c

    :cond_1b
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->l()Ljava/lang/String;

    move-result-object v0

    :goto_c
    invoke-virtual {v3, v14, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v0, v24

    invoke-virtual {v7, v0}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1c

    invoke-virtual {v7, v0}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_d

    :cond_1c
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->m()Ljava/lang/String;

    move-result-object v1

    :goto_d
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v13, v23

    invoke-virtual {v7, v13}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1d

    invoke-virtual {v7, v13}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_e

    :cond_1d
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->n()Ljava/lang/String;

    move-result-object v0

    :goto_e
    invoke-virtual {v3, v13, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02015"

    const-string v1, "02015"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1e

    const-string v1, "02015"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_f

    :cond_1e
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->p()Ljava/lang/String;

    move-result-object v1

    :goto_f
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02016"

    const-string v1, "02016"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1f

    const-string v1, "02016"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_10

    :cond_1f
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->q()Ljava/lang/String;

    move-result-object v1

    :goto_10
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02017"

    const-string v1, "02017"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_20

    const-string v1, "02017"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_11

    :cond_20
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->r()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    :goto_11
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02018"

    const-string v1, "02018"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_21

    const-string v1, "02018"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_12

    :cond_21
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->s()Ljava/lang/String;

    move-result-object v1

    :goto_12
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02020"

    const-string v1, "02020"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_22

    const-string v1, "02020"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_13

    :cond_22
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->u()Ljava/lang/String;

    move-result-object v1

    :goto_13
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02023"

    const-string v1, "02023"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_23

    const-string v1, "02023"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_14

    :cond_23
    move-object/from16 v1, v22

    :goto_14
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02031"

    const-string v1, "02031"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_24

    const-string v1, "02031"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_15

    :cond_24
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->y()Ljava/lang/String;

    move-result-object v1

    :goto_15
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02032"

    const-string v1, "02032"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_25

    const-string v1, "02032"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_16

    :cond_25
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->o()Ljava/lang/String;

    move-result-object v1

    :goto_16
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02033"

    const-string v1, "02033"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_26

    const-string v1, "02033"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_17

    :cond_26
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->x()Ljava/lang/String;

    move-result-object v1

    :goto_17
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02034"

    const-string v1, "02034"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_27

    const-string v1, "02034"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_18

    :cond_27
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->z()Ljava/lang/String;

    move-result-object v1

    :goto_18
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02035"

    const-string v1, "02035"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_28

    const-string v1, "02035"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_19

    :cond_28
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->A()Ljava/lang/String;

    move-result-object v1

    :goto_19
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02036"

    const-string v1, "02036"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_29

    const-string v1, "02036"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_1a

    :cond_29
    move-object/from16 v1, v22

    :goto_1a
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02037"

    const-string v1, "02037"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_2a

    const-string v1, "02037"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_1b

    :cond_2a
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->w()Ljava/lang/String;

    move-result-object v1

    :goto_1b
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02038"

    const-string v1, "02038"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_2b

    const-string v1, "02038"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_1c

    :cond_2b
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->v()Ljava/lang/String;

    move-result-object v1

    :goto_1c
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02045"

    const-string v1, "02045"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_2c

    const-string v1, "02045"

    invoke-virtual {v7, v1}, Lcom/kuaishou/weapon/p0/cd;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_1d

    :cond_2c
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->B()Ljava/lang/String;

    move-result-object v1

    :goto_1d
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_1e

    :catchall_0
    move-object/from16 v1, p0

    goto/16 :goto_35

    :catch_0
    :goto_1e
    move-object/from16 v1, p0

    goto/16 :goto_1f

    :cond_2d
    move-object v0, v13

    move-object/from16 v13, v23

    :try_start_4
    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->a()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v12, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->b()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v11, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->c()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v4, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->d()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->e()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v6, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->f()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v10, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->g()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->h()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->i()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v8, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->j()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v9, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v15, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->l()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v14, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->m()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->n()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v13, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02015"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->p()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02016"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->q()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02017"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->r()I

    move-result v1

    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "02018"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->s()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02019"
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    move-object/from16 v1, p0

    :try_start_5
    iget-object v2, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bk;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02020"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->u()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02021"

    iget-object v2, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bk;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02022"

    iget-object v2, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bk;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02030"

    iget-object v2, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bk;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02031"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->y()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02032"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02033"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->x()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02034"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->z()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02035"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->A()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02037"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->w()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02038"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->v()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02045"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->B()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :goto_1f
    const-string v0, "02067"

    iget-object v2, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getPackageResourcePath()Ljava/lang/String;

    move-result-object v2

    const-string v4, "/data/app/"

    move-object/from16 v5, v22

    invoke-virtual {v2, v4, v5}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    const-string v4, "/base.apk"

    invoke-virtual {v2, v4, v5}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02039"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bg;->h()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02040"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bg;->i()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02041"

    iget-object v2, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->u(Landroid/content/Context;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "02044"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->t()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02046"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->C()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "persist.service.adb.enable"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2e

    const-string v2, "03058"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2e
    const-string v0, "sys.resettype"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2f

    const-string v2, "03057"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2f
    const-string v0, "ro.boot.bootreason"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_30

    const-string v2, "03056"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_30
    const-string v0, "ro.runtime.firstboot"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_31

    const-string v2, "03055"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_31
    const-string v0, "init.svc.atcmdserver"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_32

    const-string v2, "03054"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_32
    const-string v0, "ro.build.date.utc"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_33

    const-string v2, "03061"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_33
    const-string v0, "ro.bootimage.build.date.utc"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_34

    const-string v2, "03062"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_34
    const-string v0, "ro.build.date.YmdHM"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_35

    const-string v2, "03063"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_35
    const-string v0, "dhcp.ipv6.wlan0.dns1"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_36

    const-string v2, "03067"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_36
    const-string v0, "dhcp.ipv6.wlan0.dns2"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_37

    const-string v2, "03068"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_37
    const-string v0, "dhcp.wlan0.dns1"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_38

    const-string v2, "03069"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_38
    const-string v0, "dhcp.wlan0.dns2"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_39

    const-string v2, "03070"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_39
    const-string v0, "net.change"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3a

    const-string v2, "03071"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3a
    const-string v0, "net.dns1"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3b

    const-string v2, "03072"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3b
    const-string v0, "net.dns2"

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3c

    const-string v2, "03073"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3c
    const-string v0, "plc001_t_d"

    const-wide/16 v6, -0x1

    move-object/from16 v2, v21

    invoke-virtual {v2, v0, v6, v7}, Lcom/kuaishou/weapon/p0/h;->a(Ljava/lang/String;J)J

    move-result-wide v6

    const-wide/16 v8, -0x1

    cmp-long v0, v6, v8

    if-eqz v0, :cond_3d

    const-string v0, "03074"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    add-long/2addr v6, v8

    invoke-virtual {v3, v0, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_5

    :cond_3d
    :try_start_6
    iget-object v0, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v4, "screen_brightness_mode"

    invoke-static {v0, v4}, Landroid/provider/Settings$System;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;)I

    move-result v0

    const-string v4, "03064"

    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    iget-object v0, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v4, "accelerometer_rotation"

    invoke-static {v0, v4}, Landroid/provider/Settings$System;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;)I

    move-result v0

    const-string v4, "03065"

    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    :catchall_1
    :try_start_7
    const-string v0, "03081"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->L()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "03053"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bg;->A(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "03052"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bk;->i(Landroid/content/Context;)I

    move-result v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "03050"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bk;->h(Landroid/content/Context;)I

    move-result v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "03049"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bk;->g(Landroid/content/Context;)I

    move-result v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "02027"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->H()J

    move-result-wide v6

    invoke-virtual {v3, v0, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "02028"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->D()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02029"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->E()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02057"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->F()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02058"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->G()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_20

    :cond_3e
    move-wide/from16 v16, v1

    move-object v2, v4

    move/from16 v20, v5

    move/from16 v19, v6

    move-object/from16 v18, v10

    move-object v5, v11

    move-object v1, v0

    :goto_20
    const-string v0, "plc001_b_bcl_r"

    const/4 v4, 0x1

    invoke-virtual {v2, v0, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v4, :cond_48

    const-string v0, "03001"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bn;->a()J

    move-result-wide v6

    invoke-virtual {v3, v0, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "03002"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bn;->b()J

    move-result-wide v6

    invoke-virtual {v3, v0, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "03001"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bn;->a()J

    move-result-wide v6

    invoke-virtual {v3, v0, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "03043"

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v6

    invoke-virtual {v3, v0, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "03044"

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v6

    invoke-virtual {v3, v0, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "03045"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v8

    sub-long/2addr v6, v8

    invoke-virtual {v3, v0, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    new-instance v0, Lcom/kuaishou/weapon/p0/bx;

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-direct {v0, v4}, Lcom/kuaishou/weapon/p0/bx;-><init>(Landroid/content/Context;)V

    sget-boolean v4, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v4, :cond_47

    const-string v4, "03004"

    const-string v6, "03004"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_3f

    const-string v6, "03004"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    goto :goto_21

    :cond_3f
    move-object v6, v5

    :goto_21
    invoke-virtual {v3, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "03036"

    const-string v6, "03036"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->b(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v6

    if-eqz v6, :cond_40

    const-string v6, "03036"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->b(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v6

    goto :goto_22

    :cond_40
    move-object v6, v5

    :goto_22
    invoke-virtual {v3, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "03039"

    const-string v6, "03039"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_41

    const-string v6, "03039"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    goto :goto_23

    :cond_41
    move-object v6, v5

    :goto_23
    invoke-virtual {v3, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "03040"

    const-string v6, "03040"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_42

    const-string v6, "03040"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    goto :goto_24

    :cond_42
    move-object v6, v5

    :goto_24
    invoke-virtual {v3, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "03041"

    const-string v6, "03041"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_43

    const-string v6, "03041"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    goto :goto_25

    :cond_43
    move-object v6, v5

    :goto_25
    invoke-virtual {v3, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "03042"

    const-string v6, "03042"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_44

    const-string v6, "03042"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    goto :goto_26

    :cond_44
    move-object v6, v5

    :goto_26
    invoke-virtual {v3, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "03079"

    const-string v6, "03079"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_45

    const-string v6, "03079"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    goto :goto_27

    :cond_45
    const/4 v6, 0x0

    :goto_27
    invoke-virtual {v3, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "03080"

    const-string v6, "03080"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_46

    const-string v6, "03080"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bx;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_28

    :cond_46
    const/4 v0, 0x0

    :goto_28
    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_47
    const-string v0, "03007"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bu;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "03008"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bu;->c(Landroid/content/Context;)I

    move-result v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "03011"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/am;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "03012"

    invoke-static {}, Lcom/kuaishou/weapon/p0/am;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "03014"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bg;->g(Landroid/content/Context;)Z

    move-result v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v0, "03034"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bg;->h(Landroid/content/Context;)Z

    move-result v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v0, "03020"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bu;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "03037"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->I()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "03038"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->J()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "03077"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bk;->K()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_5

    :try_start_8
    new-instance v0, Lcom/kuaishou/weapon/p0/bf;

    invoke-direct {v0}, Lcom/kuaishou/weapon/p0/bf;-><init>()V

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v0, v4}, Lcom/kuaishou/weapon/p0/bf;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    const-string v6, "03006"

    invoke-virtual {v3, v6, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "03010"

    iget-object v6, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bf;->b(Landroid/content/Context;)Z

    move-result v6

    invoke-virtual {v3, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v4, "03033"

    iget-object v6, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bf;->c(Landroid/content/Context;)Z

    move-result v6

    invoke-virtual {v3, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v4, "03013"

    invoke-virtual {v0}, Lcom/kuaishou/weapon/p0/bf;->a()Z

    move-result v6

    invoke-virtual {v3, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v4, "03021"

    iget-object v6, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bf;->e(Landroid/content/Context;)Z

    move-result v6

    invoke-virtual {v3, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v4, "03030"

    iget-object v6, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v6}, Lcom/kuaishou/weapon/p0/bf;->d(Landroid/content/Context;)I

    move-result v6

    invoke-virtual {v3, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v4, "10031"

    invoke-virtual {v0}, Lcom/kuaishou/weapon/p0/bf;->b()I

    move-result v0

    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_1
    .catchall {:try_start_8 .. :try_end_8} :catchall_5

    :catch_1
    :cond_48
    :try_start_9
    const-string v0, "plc001_b_bcl_tc"

    const/4 v4, 0x1

    invoke-virtual {v2, v0, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v4, :cond_4b

    const-string v0, "03019"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bg;->k(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    iget-object v0, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->l(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_49

    const-string v4, "03046"

    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_49
    iget-object v0, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->m(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4a

    const-string v4, "03047"

    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_4a
    const-string v0, "03018"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bg;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_4b
    const-string v0, "plc001_b_bcl_il"

    const/4 v4, 0x1

    invoke-virtual {v2, v0, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v4, :cond_4e

    const-string v0, "02059"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bl;->a(Landroid/content/Context;)I

    move-result v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "02060"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bl;->a()Lorg/json/JSONObject;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02061"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bl;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02062"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bl;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    sget-boolean v0, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v0, :cond_4d

    new-instance v0, Lcom/kuaishou/weapon/p0/bz;

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-direct {v0, v4}, Lcom/kuaishou/weapon/p0/bz;-><init>(Landroid/content/Context;)V

    const-string v4, "08001"

    const-string v6, "08001"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bz;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_4c

    const-string v6, "08001"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/bz;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_29

    :cond_4c
    move-object v0, v5

    :goto_29
    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_4d
    invoke-static {}, Lcom/kuaishou/weapon/p0/bl;->d()Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_4e

    invoke-virtual {v0}, Lorg/json/JSONObject;->length()I

    move-result v4

    if-lez v4, :cond_4e

    const-string v4, "10050"

    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_4e
    const-string v0, "plc001_b_bcl_rp"

    const/4 v4, 0x1

    invoke-virtual {v2, v0, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v4, :cond_50

    if-nez v20, :cond_4f

    if-eqz v19, :cond_50

    :cond_4f
    const-string v0, "03029"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bg;->j(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_50
    const-string v0, "plc001_b_bcl_c"

    const/4 v4, 0x1

    invoke-virtual {v2, v0, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v4, :cond_56

    sget-boolean v0, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_5

    const-string v4, "04004"

    const-string v6, "04003"

    const-string v7, "04002"

    const-string v8, "04001"

    if-eqz v0, :cond_55

    :try_start_a
    new-instance v0, Lcom/kuaishou/weapon/p0/by;

    iget-object v9, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-direct {v0, v9}, Lcom/kuaishou/weapon/p0/by;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, v8}, Lcom/kuaishou/weapon/p0/by;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    if-eqz v9, :cond_51

    invoke-virtual {v0, v8}, Lcom/kuaishou/weapon/p0/by;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    goto :goto_2a

    :cond_51
    move-object v9, v5

    :goto_2a
    invoke-virtual {v3, v8, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v0, v7}, Lcom/kuaishou/weapon/p0/by;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    if-eqz v8, :cond_52

    invoke-virtual {v0, v7}, Lcom/kuaishou/weapon/p0/by;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    goto :goto_2b

    :cond_52
    move-object v8, v5

    :goto_2b
    invoke-virtual {v3, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/by;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    if-eqz v7, :cond_53

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/by;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    goto :goto_2c

    :cond_53
    move-object v7, v5

    :goto_2c
    invoke-virtual {v3, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v0, v4}, Lcom/kuaishou/weapon/p0/by;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_54

    invoke-virtual {v0, v4}, Lcom/kuaishou/weapon/p0/by;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_2d

    :cond_54
    move-object v0, v5

    :goto_2d
    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_5

    goto :goto_2e

    :cond_55
    :try_start_b
    invoke-static {}, Lcom/kuaishou/weapon/p0/bj;->b()Lcom/kuaishou/weapon/p0/bi;

    move-result-object v0

    invoke-static {}, Lcom/kuaishou/weapon/p0/bj;->a()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v3, v8, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v0}, Lcom/kuaishou/weapon/p0/bi;->b()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v3, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v0}, Lcom/kuaishou/weapon/p0/bi;->c()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v0}, Lcom/kuaishou/weapon/p0/bi;->a()I

    move-result v0

    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_2
    .catchall {:try_start_b .. :try_end_b} :catchall_5

    :catch_2
    :cond_56
    :goto_2e
    :try_start_c
    const-string v0, "plc001_b_bcl_w"

    const/4 v4, 0x0

    invoke-virtual {v2, v0, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v0

    const/4 v4, 0x1

    if-ne v0, v4, :cond_5a

    if-nez v20, :cond_57

    if-eqz v19, :cond_5a

    :cond_57
    invoke-static {}, Lcom/kuaishou/weapon/p0/bg;->e()Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_58

    const-string v4, "06014"

    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_58
    sget-boolean v0, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v0, :cond_5a

    new-instance v0, Lcom/kuaishou/weapon/p0/ce;

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-direct {v0, v4}, Lcom/kuaishou/weapon/p0/ce;-><init>(Landroid/content/Context;)V

    const-string v4, "06015"

    const-string v6, "06015"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/ce;->b(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v6

    if-eqz v6, :cond_59

    const-string v6, "06015"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/ce;->b(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    goto :goto_2f

    :cond_59
    move-object v0, v5

    :goto_2f
    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_5a
    if-nez v20, :cond_5b

    if-eqz v19, :cond_5e

    :cond_5b
    invoke-static {}, Lcom/kuaishou/weapon/p0/bg;->g()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_5d

    move-object/from16 v4, v18

    invoke-virtual {v0, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_5d

    :cond_5c
    const-string v4, "07005"

    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_30

    :cond_5d
    if-nez v0, :cond_5c

    const-string v0, "07005"

    invoke-virtual {v3, v0, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_5e
    :goto_30
    const-string v0, "plc001_b_bcl_n"

    const/4 v4, 0x0

    invoke-virtual {v2, v0, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v0

    const/4 v6, 0x1

    if-ne v0, v6, :cond_61

    if-nez v20, :cond_5f

    if-eqz v19, :cond_61

    :cond_5f
    sget-boolean v0, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v0, :cond_60

    new-instance v0, Lcom/kuaishou/weapon/p0/cb;

    iget-object v6, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-direct {v0, v6}, Lcom/kuaishou/weapon/p0/cb;-><init>(Landroid/content/Context;)V

    const-string v6, "07007"

    const-string v7, "07007"

    invoke-virtual {v0, v7}, Lcom/kuaishou/weapon/p0/cb;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_60
    iget-object v0, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bq;->a(Landroid/content/Context;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_61

    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v6

    if-lez v6, :cond_61

    const-string v6, "03035"

    invoke-virtual {v3, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_5

    :cond_61
    if-nez v20, :cond_62

    if-eqz v19, :cond_65

    :cond_62
    :try_start_d
    invoke-static {}, Lcom/kuaishou/weapon/p0/bg;->a()D

    move-result-wide v6

    const-wide/16 v8, 0x0

    cmpl-double v0, v6, v8

    if-lez v0, :cond_63

    const-string v0, "09002"

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v6, v7}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v0, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_63
    invoke-static {}, Lcom/kuaishou/weapon/p0/bg;->b()D

    move-result-wide v6

    const-wide/16 v8, 0x0

    cmpl-double v0, v6, v8

    if-lez v0, :cond_64

    const-string v0, "09003"

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v6, v7}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v0, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_64
    const-string v0, "09001"

    invoke-static {}, Lcom/kuaishou/weapon/p0/bg;->c()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v0, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_3
    .catchall {:try_start_d .. :try_end_d} :catchall_5

    :catch_3
    :cond_65
    :try_start_e
    const-string v0, "plc001_b_bcl_a"

    const/4 v6, 0x1

    invoke-virtual {v2, v0, v6}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v6, :cond_67

    if-nez v20, :cond_66

    if-eqz v19, :cond_67

    :cond_66
    new-instance v0, Lcom/kuaishou/weapon/p0/w;

    iget-object v6, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-direct {v0, v6}, Lcom/kuaishou/weapon/p0/w;-><init>(Landroid/content/Context;)V

    const-string v6, "10002"

    const/4 v7, 0x1

    invoke-virtual {v0, v7}, Lcom/kuaishou/weapon/p0/w;->a(I)Lorg/json/JSONArray;

    move-result-object v0

    invoke-virtual {v3, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_67
    const-string v0, "plc001_b_bcl_s"

    const/4 v6, 0x1

    invoke-virtual {v2, v0, v6}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v6, :cond_68

    sget-boolean v0, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v0, :cond_68

    new-instance v0, Lcom/kuaishou/weapon/p0/cc;

    iget-object v6, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-direct {v0, v6}, Lcom/kuaishou/weapon/p0/cc;-><init>(Landroid/content/Context;)V

    const-string v6, "05001"

    invoke-virtual {v0, v6}, Lcom/kuaishou/weapon/p0/cc;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_5

    :try_start_f
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_68

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v6

    const/16 v7, 0xa

    if-le v6, v7, :cond_68

    new-instance v6, Lorg/json/JSONArray;

    invoke-direct {v6, v0}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    const-string v0, "05001"

    invoke-virtual {v3, v0, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_f
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_4
    .catchall {:try_start_f .. :try_end_f} :catchall_5

    :catch_4
    :cond_68
    :try_start_10
    sget-boolean v0, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v0, :cond_6a

    new-instance v0, Lcom/kuaishou/weapon/p0/ca;

    iget-object v6, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-direct {v0, v6}, Lcom/kuaishou/weapon/p0/ca;-><init>(Landroid/content/Context;)V

    const-string v6, "13001"

    const-string v7, "13001"

    invoke-virtual {v0, v7}, Lcom/kuaishou/weapon/p0/ca;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    if-eqz v7, :cond_69

    const-string v5, "13001"

    invoke-virtual {v0, v5}, Lcom/kuaishou/weapon/p0/ca;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    goto :goto_31

    :cond_69
    move-object v11, v5

    :goto_31
    invoke-virtual {v3, v6, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_6a
    const-string v0, "11000"

    sget-boolean v5, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v5, :cond_6b

    const/4 v5, 0x1

    goto :goto_32

    :cond_6b
    move v5, v4

    :goto_32
    invoke-virtual {v3, v0, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11002"

    sget-object v5, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    invoke-virtual {v3, v0, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11003"

    sget v5, Lcom/kuaishou/weapon/p0/bh;->v:I

    invoke-virtual {v3, v0, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11004"

    sget v5, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSoCount:I

    invoke-virtual {v3, v0, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11006"

    if-eqz v20, :cond_6c

    const/4 v5, 0x1

    goto :goto_33

    :cond_6c
    move v5, v4

    :goto_33
    invoke-virtual {v3, v0, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11029"

    if-eqz v19, :cond_6d

    const/4 v9, 0x1

    goto :goto_34

    :cond_6d
    move v9, v4

    :goto_34
    invoke-virtual {v3, v0, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "plc001_v"

    const-string v4, "0.0.0"

    invoke-virtual {v2, v0, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v4, "11008"

    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11009"

    iget-object v4, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/br;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_5

    :try_start_11
    iget-object v0, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/bg;->y(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_6e

    const-string v4, "01026"

    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_6e
    const-string v0, "plc001_b_bcl_u"

    const/4 v4, 0x1

    invoke-virtual {v2, v0, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v0
    :try_end_11
    .catch Ljava/lang/Exception; {:try_start_11 .. :try_end_11} :catch_5
    .catchall {:try_start_11 .. :try_end_11} :catchall_5

    if-ne v0, v4, :cond_70

    :try_start_12
    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/f/b;->Fp()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6f

    const-string v2, "11102"

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_6f
    const-string v0, "11104"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fw()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11105"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getDeviceId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11106"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getIccId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11107"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fo()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11108"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fr()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11109"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fs()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11110"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Ft()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11111"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getIp()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11112"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getLocation()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11113"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getOaid()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11114"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fq()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11115"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fv()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11116"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fu()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11202"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fp()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11203"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fy()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11204"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fw()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11205"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getDeviceId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11206"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getIccId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11207"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fo()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11208"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fr()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11209"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fs()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11210"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Ft()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11211"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getIp()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11212"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getLocation()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11213"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getOaid()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11214"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fq()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11215"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fv()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11216"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fu()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11301"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fz()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11302"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getSdkVersion()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11303"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getAppId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_12
    .catchall {:try_start_12 .. :try_end_12} :catchall_2

    :catch_5
    :catchall_2
    :cond_70
    :try_start_13
    const-string v0, "02078"

    const-string v2, "W_S_V"

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/jni/A;->getE(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "02079"

    const-string v2, "W_S_S_V"

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/jni/A;->getE(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-le v0, v2, :cond_71

    const-string v0, "02069"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Landroid/os/Build$VERSION;->SECURITY_PATCH:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_71
    iget-object v0, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v2, "Phenotype_boot_count"

    invoke-static {v0, v2}, Landroid/provider/Settings$Global;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_72

    const-string v2, "03085"

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_72
    iget-object v0, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v2, "boot_count"

    invoke-static {v0, v2}, Landroid/provider/Settings$Global;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_73

    const-string v2, "03086"

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_73
    iget-object v0, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v2, "power_on_times"

    invoke-static {v0, v2}, Landroid/provider/Settings$System;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_74

    const-string v2, "03091"

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_74
    iget-object v0, v1, Lcom/kuaishou/weapon/p0/cm;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v2, "first_boot_flag"

    invoke-static {v0, v2}, Landroid/provider/Settings$System;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_75

    const-string v2, "03104"

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_13
    .catchall {:try_start_13 .. :try_end_13} :catchall_3

    :catchall_3
    :cond_75
    :try_start_14
    const-string v0, "11007"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long v4, v4, v16

    invoke-virtual {v3, v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "11017"

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_5

    return-object v3

    :catchall_4
    move-object v1, v0

    :catchall_5
    :goto_35
    const/4 v0, 0x0

    return-object v0
.end method
