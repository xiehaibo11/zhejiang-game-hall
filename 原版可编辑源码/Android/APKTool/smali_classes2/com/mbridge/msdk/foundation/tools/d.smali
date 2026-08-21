.class public final Lcom/mbridge/msdk/foundation/tools/d;
.super Ljava/lang/Object;
.source "DomainDeviceInfo.java"


# instance fields
.field public a:Ljava/lang/String;

.field public b:Ljava/lang/String;

.field public c:Ljava/lang/String;

.field public d:Ljava/lang/String;

.field public e:Ljava/lang/String;

.field public f:Ljava/lang/String;

.field public g:Ljava/lang/String;

.field public h:Ljava/lang/String;

.field public i:Ljava/lang/String;

.field public j:Ljava/lang/String;

.field public k:Ljava/lang/String;

.field public l:Ljava/lang/String;

.field public m:Ljava/lang/String;

.field public n:Ljava/lang/String;

.field public o:Ljava/lang/String;

.field public p:Ljava/lang/String;

.field public q:Ljava/lang/String;

.field public r:Ljava/lang/String;

.field public s:Ljava/lang/String;

.field public t:Ljava/lang/String;

.field public u:Ljava/lang/String;

.field public v:I

.field public w:Lorg/json/JSONObject;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 56
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "android"

    .line 57
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->c:Ljava/lang/String;

    .line 58
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->y()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->a:Ljava/lang/String;

    .line 59
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->C()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->b:Ljava/lang/String;

    .line 60
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->d:Ljava/lang/String;

    .line 61
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->e:Ljava/lang/String;

    .line 62
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->E()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->f:Ljava/lang/String;

    .line 63
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v0

    .line 64
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/foundation/tools/d;->g:Ljava/lang/String;

    .line 65
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->h:Ljava/lang/String;

    .line 66
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->C(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->i:Ljava/lang/String;

    .line 67
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->j:Ljava/lang/String;

    .line 68
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->k:Ljava/lang/String;

    .line 69
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->h(Landroid/content/Context;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->l:Ljava/lang/String;

    .line 70
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Landroid/content/Context;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->m:Ljava/lang/String;

    .line 71
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->d(Landroid/content/Context;)F

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->q:Ljava/lang/String;

    .line 72
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->o()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->s:Ljava/lang/String;

    .line 73
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->z()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->u:Ljava/lang/String;

    .line 74
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->e()I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->v:I

    .line 75
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iget v0, v0, Landroid/content/res/Configuration;->orientation:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    const-string v0, "landscape"

    .line 76
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->n:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string v0, "portrait"

    .line 78
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->n:Ljava/lang/String;

    .line 80
    :goto_0
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->r:Ljava/lang/String;

    .line 81
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->o:Ljava/lang/String;

    .line 82
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->p:Ljava/lang/String;

    .line 83
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->J()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/d;->t:Ljava/lang/String;

    const/4 v0, 0x1

    .line 85
    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/foundation/tools/d;->a(Landroid/content/Context;Z)Lorg/json/JSONObject;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/tools/d;->w:Lorg/json/JSONObject;

    return-void
.end method

.method private a(Landroid/content/Context;Z)Lorg/json/JSONObject;
    .locals 6

    const-string v0, ""

    .line 89
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 91
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v2

    const-string v3, "authority_general_data"

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v2, "cid"

    .line 92
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->a()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "dmt"

    .line 93
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->L()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "dmf"

    .line 94
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->K()I

    move-result v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "ct"

    .line 95
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->s()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 97
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-eqz v0, :cond_6

    if-nez p1, :cond_1

    goto/16 :goto_0

    .line 101
    :cond_1
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->Z()I

    move-result v2

    const/4 v3, 0x1

    if-ne v2, v3, :cond_4

    .line 102
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    const-string v4, "authority_imei_mac"

    if-eqz v2, :cond_2

    .line 103
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v2

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    const-string v2, "imei"

    .line 104
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v2, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 107
    :cond_2
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_3

    .line 108
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v2

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    const-string v2, "mac"

    .line 109
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v2, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 112
    :cond_3
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_4

    if-eqz p2, :cond_4

    .line 113
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p2

    invoke-virtual {p2, v4}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_4

    const-string p2, "imsi"

    .line 114
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, p2, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 118
    :cond_4
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->G()I

    move-result p2

    if-ne p2, v3, :cond_5

    .line 119
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_5

    .line 120
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p2

    const-string v2, "authority_device_id"

    invoke-virtual {p2, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_5

    const-string p2, "oaid"

    .line 121
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, p2, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 126
    :cond_5
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->aa()I

    move-result p2

    if-ne p2, v3, :cond_7

    .line 127
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_7

    .line 128
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p2

    const-string v0, "authority_android_id"

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_7

    const-string p2, "android_id"

    .line 129
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :cond_6
    :goto_0
    return-object v1

    :catch_0
    move-exception p1

    .line 134
    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "DomainDeviceInfo"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    :goto_1
    return-object v1
.end method


# virtual methods
.method public final a()Lorg/json/JSONObject;
    .locals 5

    .line 140
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 143
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v2, "authority_general_data"

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, ""

    if-eqz v1, :cond_0

    :try_start_1
    const-string v1, "device"

    .line 144
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "system_version"

    .line 145
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "network_type"

    .line 146
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->g:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "network_type_str"

    .line 147
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->h:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "device_ua"

    .line 148
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->i:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "has_wx"

    .line 149
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/v;->r(Landroid/content/Context;)I

    move-result v3

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "integrated_wx"

    .line 150
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->v()I

    move-result v3

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "opensdk_ver"

    .line 151
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->w()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "wx_api_ver"

    .line 152
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->m()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/v;->g(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "emu"

    .line 153
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->u()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "brand"

    .line 154
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    const-string v1, "plantform"

    .line 156
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 157
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v3, "authority_imei_mac"

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "device_imei"

    .line 158
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 161
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v3, "authority_android_id"

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v1, "android_id"

    .line 162
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 165
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v3, "authority_device_id"

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    const-string v1, "google_ad_id"

    .line 166
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "oaid"

    .line 167
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->r:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v1, "appkey"

    .line 169
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->j:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "appId"

    .line 170
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->k:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "screen_width"

    .line 171
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->l:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "screen_height"

    .line 172
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->m:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "orientation"

    .line 173
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->n:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "scale"

    .line 174
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->q:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "b"

    .line 175
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->o:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "c"

    .line 176
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->p:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "web_env"

    .line 177
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->s:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "f"

    .line 178
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->t:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "misk_spt"

    .line 179
    iget v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->v:I

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 180
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->P()I

    move-result v1

    if-eqz v1, :cond_4

    const-string v1, "tun"

    .line 181
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->P()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_4
    const-string v1, "dvi"

    .line 183
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/d;->w:Lorg/json/JSONObject;

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 184
    sget-object v1, Lcom/mbridge/msdk/foundation/same/net/g/d;->h:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->f()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 185
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->h()Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, "dev_source"

    const-string v2, "2"

    .line 186
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 189
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_5
    :goto_0
    return-object v0
.end method
