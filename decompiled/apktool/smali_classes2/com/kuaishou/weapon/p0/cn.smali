.class public Lcom/kuaishou/weapon/p0/cn;
.super Ljava/lang/Object;


# instance fields
.field private a:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    return-void
.end method

.method private a()Lorg/json/JSONObject;
    .locals 8

    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget-object v1, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    const-string v2, "re_po_rt"

    invoke-static {v1, v2}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v1

    const-string v2, "a1_p_s_p_s"

    invoke-virtual {v1, v2}, Lcom/kuaishou/weapon/p0/h;->e(Ljava/lang/String;)Z

    move-result v2

    const-string v3, "a1_p_s_p_s_c_b"

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/h;->e(Ljava/lang/String;)Z

    move-result v3

    new-instance v4, Lcom/kuaishou/weapon/p0/ai;

    iget-object v5, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-direct {v4, v5}, Lcom/kuaishou/weapon/p0/ai;-><init>(Landroid/content/Context;)V

    const-string v5, "0"

    invoke-virtual {v4}, Lcom/kuaishou/weapon/p0/ai;->d()I

    move-result v6

    invoke-virtual {v0, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "1"

    invoke-virtual {v4}, Lcom/kuaishou/weapon/p0/ai;->a()I

    move-result v6

    invoke-virtual {v0, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "2"

    invoke-virtual {v4}, Lcom/kuaishou/weapon/p0/ai;->c()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "3"

    invoke-virtual {v4}, Lcom/kuaishou/weapon/p0/ai;->f()I

    move-result v6

    invoke-virtual {v0, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "24"

    invoke-virtual {v4}, Lcom/kuaishou/weapon/p0/ai;->e()I

    move-result v4

    invoke-virtual {v0, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v4, "35"

    invoke-static {}, Lcom/kuaishou/weapon/p0/ab;->b()Z

    move-result v5

    const/4 v6, 0x1

    const/4 v7, 0x0

    if-eqz v5, :cond_0

    move v5, v6

    goto :goto_0

    :cond_0
    move v5, v7

    :goto_0
    invoke-virtual {v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v4, "36"

    iget-object v5, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-static {v5}, Lcom/kuaishou/weapon/p0/ab;->a(Landroid/content/Context;)Z

    move-result v5

    if-eqz v5, :cond_1

    move v5, v6

    goto :goto_1

    :cond_1
    move v5, v7

    :goto_1
    invoke-virtual {v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    iget-object v4, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/ah;->a(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v4

    if-eqz v4, :cond_2

    const-string v5, "4"

    invoke-virtual {v0, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    const-string v4, "plc001_r_rcl_vl"

    invoke-virtual {v1, v4, v7}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v6, :cond_5

    if-nez v2, :cond_3

    if-eqz v3, :cond_5

    :cond_3
    const-string v1, "25"

    iget-object v2, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/al;->a(Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_4

    move v2, v6

    goto :goto_2

    :cond_4
    move v2, v7

    :goto_2
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_5
    new-instance v1, Lcom/kuaishou/weapon/p0/ac;

    invoke-direct {v1}, Lcom/kuaishou/weapon/p0/ac;-><init>()V

    const-string v2, "7"

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/ac;->a()Z

    move-result v3

    if-eqz v3, :cond_6

    move v3, v6

    goto :goto_3

    :cond_6
    move v3, v7

    :goto_3
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-virtual {v1, v2}, Lcom/kuaishou/weapon/p0/ac;->a(Landroid/content/Context;)Z

    move-result v2

    const-string v3, "8"

    if-eqz v2, :cond_7

    move v4, v6

    goto :goto_4

    :cond_7
    move v4, v7

    :goto_4
    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    if-eqz v2, :cond_8

    const-string v2, "61"

    iget-object v3, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/ac;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_8
    const-string v2, "10"

    iget-object v3, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/ac;->e(Landroid/content/Context;)I

    move-result v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "11"

    iget-object v3, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/ac;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v1, Lcom/kuaishou/weapon/p0/ae;

    invoke-direct {v1}, Lcom/kuaishou/weapon/p0/ae;-><init>()V

    const-string v2, "26"

    const-string v3, "cpuinfo"

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/ae;->a(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_9

    move v3, v6

    goto :goto_5

    :cond_9
    move v3, v7

    :goto_5
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "27"

    const-string v3, "meminfo"

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/ae;->a(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_a

    move v1, v6

    goto :goto_6

    :cond_a
    move v1, v7

    :goto_6
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    new-instance v1, Lcom/kuaishou/weapon/p0/ao;

    invoke-direct {v1}, Lcom/kuaishou/weapon/p0/ao;-><init>()V

    const-string v2, "65"

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/ao;->d()Z

    move-result v3

    if-eqz v3, :cond_b

    move v3, v6

    goto :goto_7

    :cond_b
    move v3, v7

    :goto_7
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/ao;->b()Z

    move-result v2

    const-string v3, "66"

    if-eqz v2, :cond_c

    move v4, v6

    goto :goto_8

    :cond_c
    move v4, v7

    :goto_8
    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    if-eqz v2, :cond_e

    const-string v2, "67"

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/ao;->a()Z

    move-result v3

    if-eqz v3, :cond_d

    move v3, v6

    goto :goto_9

    :cond_d
    move v3, v7

    :goto_9
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_e
    const-string v2, "68"

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/ao;->f()Z

    move-result v3

    if-eqz v3, :cond_f

    move v3, v6

    goto :goto_a

    :cond_f
    move v3, v7

    :goto_a
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "69"

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/ao;->e()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "101"

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/ao;->c()Z

    move-result v3

    if-eqz v3, :cond_10

    move v3, v6

    goto :goto_b

    :cond_10
    move v3, v7

    :goto_b
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "102"

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/ao;->g()Z

    move-result v1

    if-eqz v1, :cond_11

    move v1, v6

    goto :goto_c

    :cond_11
    move v1, v7

    :goto_c
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    new-instance v1, Lcom/kuaishou/weapon/p0/af;

    invoke-direct {v1}, Lcom/kuaishou/weapon/p0/af;-><init>()V

    const-string v2, "99"

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/af;->a()I

    move-result v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "03007"

    iget-object v3, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/bu;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "03014"

    iget-object v3, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/bg;->g(Landroid/content/Context;)Z

    move-result v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v2, "03020"

    iget-object v3, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/bu;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "03030"

    iget-object v3, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/bf;->d(Landroid/content/Context;)I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "51"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v1, Lcom/kuaishou/weapon/p0/an;

    invoke-direct {v1}, Lcom/kuaishou/weapon/p0/an;-><init>()V

    const-string v2, "107"

    invoke-virtual {v1}, Lcom/kuaishou/weapon/p0/an;->d()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "60"

    iget-object v2, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/ab;->b(Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_12

    goto :goto_d

    :cond_12
    move v6, v7

    :goto_d
    invoke-virtual {v0, v1, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string v1, "11028"

    sget-object v2, Lcom/kuaishou/weapon/p0/WeaponHI;->sKSSdkver:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    const-string v1, "11301"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fz()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "11302"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getSdkVersion()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "11303"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getAppId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "11002"

    sget-object v2, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catch_0
    :catchall_0
    return-object v0

    :catchall_1
    const/4 v0, 0x0

    return-object v0
.end method


# virtual methods
.method public a(Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Lcom/kuaishou/weapon/p0/cl;

    sget-object v2, Lcom/kuaishou/weapon/p0/cj;->j:Ljava/lang/String;

    invoke-direct {v1, p1, v2}, Lcom/kuaishou/weapon/p0/cl;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v2, Lcom/kuaishou/weapon/p0/ct;->a:Ljava/lang/String;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/dl;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/kuaishou/weapon/p0/cn;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    return-object v0

    :cond_0
    iget-object v4, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-virtual {v1, v4}, Lcom/kuaishou/weapon/p0/cl;->a(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object v1

    if-nez v1, :cond_1

    return-object v0

    :cond_1
    sget-object v4, Lcom/kuaishou/weapon/p0/ct;->h:Ljava/lang/String;

    iget-object v5, p0, Lcom/kuaishou/weapon/p0/cn;->a:Landroid/content/Context;

    invoke-static {v5}, Lcom/kuaishou/weapon/p0/cu;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "?"

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {}, Lcom/kuaishou/weapon/p0/ct;->a()Z

    move-result v5

    if-eqz v5, :cond_2

    sget-object v5, Lcom/kuaishou/weapon/p0/ct;->a:Ljava/lang/String;

    const-string v6, "api"

    invoke-virtual {v5, v6}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_2

    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "/api"

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    :cond_2
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    const-string v6, "ip"

    invoke-virtual {v5, v6, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "host"

    invoke-virtual {v5, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "path"

    invoke-virtual {v5, v2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    sget-object v2, Lcom/kuaishou/weapon/p0/WeaponHI;->cookieData:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    const/16 v4, 0xa

    if-le v3, v4, :cond_3

    const-string v3, "cookie"

    invoke-virtual {v5, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v2, "head"

    invoke-virtual {v5, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "sdk="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "parame"

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    sget-object v1, Lcom/kuaishou/weapon/p0/cj;->h:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_4

    invoke-direct {p0}, Lcom/kuaishou/weapon/p0/cn;->a()Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_4

    const-string v1, "sjd"

    invoke-virtual {v5, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_4
    invoke-virtual {v5}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    return-object v0
.end method

.method public b(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    invoke-static {p1}, Lcom/kuaishou/weapon/p0/dl;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/net/InetAddress;->getByName(Ljava/lang/String;)Ljava/net/InetAddress;

    move-result-object p1

    invoke-virtual {p1}, Ljava/net/InetAddress;->getHostAddress()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/net/UnknownHostException; {:try_start_0 .. :try_end_0} :catch_1

    :try_start_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "."

    invoke-virtual {p1, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_1
    .catch Ljava/net/UnknownHostException; {:try_start_1 .. :try_end_1} :catch_0

    if-nez v1, :cond_1

    goto :goto_0

    :cond_1
    return-object p1

    :cond_2
    :goto_0
    return-object v0

    :catch_0
    move-object v0, p1

    :catch_1
    return-object v0
.end method
