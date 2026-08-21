.class public final Lcom/mbridge/msdk/advanced/common/a;
.super Ljava/lang/Object;
.source "DeviceInfo.java"


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


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "android"

    .line 41
    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->c:Ljava/lang/String;

    .line 42
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->y()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->a:Ljava/lang/String;

    .line 43
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->C()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->b:Ljava/lang/String;

    .line 44
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->d:Ljava/lang/String;

    .line 45
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->e:Ljava/lang/String;

    .line 46
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->E()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->f:Ljava/lang/String;

    .line 47
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v0

    .line 48
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/advanced/common/a;->h:Ljava/lang/String;

    .line 49
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->i:Ljava/lang/String;

    .line 50
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->C(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->j:Ljava/lang/String;

    .line 51
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->k:Ljava/lang/String;

    .line 52
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->l:Ljava/lang/String;

    .line 53
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->h(Landroid/content/Context;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->m:Ljava/lang/String;

    .line 54
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Landroid/content/Context;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->n:Ljava/lang/String;

    .line 55
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->d(Landroid/content/Context;)F

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->p:Ljava/lang/String;

    .line 56
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iget v0, v0, Landroid/content/res/Configuration;->orientation:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    const-string v0, "landscape"

    .line 57
    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->o:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string v0, "portrait"

    .line 59
    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/a;->o:Ljava/lang/String;

    .line 61
    :goto_0
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/common/a;->g:Ljava/lang/String;

    .line 62
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->J()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/common/a;->q:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()Lorg/json/JSONObject;
    .locals 5

    const-string v0, ""

    .line 66
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 69
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v2

    const-string v3, "authority_general_data"

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v2, "device"

    .line 70
    iget-object v3, p0, Lcom/mbridge/msdk/advanced/common/a;->a:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "system_version"

    .line 71
    iget-object v3, p0, Lcom/mbridge/msdk/advanced/common/a;->b:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "network_type"

    .line 72
    iget-object v3, p0, Lcom/mbridge/msdk/advanced/common/a;->h:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "network_type_str"

    .line 73
    iget-object v3, p0, Lcom/mbridge/msdk/advanced/common/a;->i:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "device_ua"

    .line 74
    iget-object v3, p0, Lcom/mbridge/msdk/advanced/common/a;->j:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "has_wx"

    .line 75
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/v;->r(Landroid/content/Context;)I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "integrated_wx"

    .line 76
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->v()I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "opensdk_ver"

    .line 77
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->w()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "wx_api_ver"

    .line 78
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->m()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/v;->g(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "emu"

    .line 79
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->u()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    const-string v0, "plantform"

    .line 81
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/common/a;->c:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 82
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v2, "authority_imei_mac"

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "device_imei"

    .line 83
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/common/a;->d:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 86
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v2, "authority_android_id"

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "android_id"

    .line 87
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/common/a;->e:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 90
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v2, "authority_device_id"

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    const-string v0, "google_ad_id"

    .line 91
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/common/a;->f:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "oaid"

    .line 92
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/common/a;->g:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v0, "appkey"

    .line 94
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/common/a;->k:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "appId"

    .line 95
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/common/a;->l:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "screen_width"

    .line 96
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/common/a;->m:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "screen_height"

    .line 97
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/common/a;->n:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "orientation"

    .line 98
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/common/a;->o:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "scale"

    .line 99
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/common/a;->p:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 100
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->P()I

    move-result v0

    if-eqz v0, :cond_4

    const-string v0, "tun"

    .line 101
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->P()I

    move-result v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_4
    const-string v0, "f"

    .line 103
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/common/a;->q:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 105
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v1
.end method
