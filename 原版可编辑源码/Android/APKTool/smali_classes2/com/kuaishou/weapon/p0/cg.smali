.class public Lcom/kuaishou/weapon/p0/cg;
.super Ljava/lang/Object;


# instance fields
.field private a:Landroid/content/Context;

.field private b:I


# direct methods
.method public constructor <init>(Landroid/content/Context;I)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/cg;->a:Landroid/content/Context;

    iput p2, p0, Lcom/kuaishou/weapon/p0/cg;->b:I

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

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/cg;->a:Landroid/content/Context;

    invoke-virtual {v1, p1}, Lcom/kuaishou/weapon/p0/cl;->a(Landroid/content/Context;)Lorg/json/JSONObject;

    move-result-object p1

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/kuaishou/weapon/p0/cg;->a()Lorg/json/JSONObject;

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
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    iget-object v2, p0, Lcom/kuaishou/weapon/p0/cg;->a:Landroid/content/Context;

    const-string v3, "re_po_rt"

    invoke-static {v2, v3}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v2

    const-string v3, "plc001_act_s"

    const/4 v4, 0x1

    invoke-virtual {v2, v3, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-ne v2, v4, :cond_0

    :try_start_1
    new-instance v2, Lcom/kuaishou/weapon/p0/x;

    invoke-direct {v2}, Lcom/kuaishou/weapon/p0/x;-><init>()V

    iget-object v3, p0, Lcom/kuaishou/weapon/p0/cg;->a:Landroid/content/Context;

    invoke-virtual {v2, v3}, Lcom/kuaishou/weapon/p0/x;->a(Landroid/content/Context;)Lorg/json/JSONArray;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-lez v3, :cond_0

    const-string v3, "10000"

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    const-string v0, "11203"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fy()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "11301"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->Fz()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11302"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getSdkVersion()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "11303"

    invoke-static {}, Lcom/kwad/sdk/f/b;->FA()Lcom/kwad/sdk/f/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/f/b;->getAppId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/bg;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    return-object v1

    :catchall_1
    :cond_0
    return-object v0
.end method
