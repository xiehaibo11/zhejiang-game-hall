.class public Lcom/tkay/expressad/foundation/h/c;
.super Ljava/lang/Object;


# static fields
.field private static final y:Ljava/lang/String; = "portrait"

.field private static final z:Ljava/lang/String; = "landscape"


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

.field public w:Ljava/lang/String;

.field public x:Lorg/json/JSONObject;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 4

    .line 54
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "android"

    .line 55
    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->c:Ljava/lang/String;

    .line 56
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->b()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->a:Ljava/lang/String;

    .line 57
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->c()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->b:Ljava/lang/String;

    .line 58
    invoke-static {p1}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->d:Ljava/lang/String;

    .line 59
    invoke-static {}, Lcom/tkay/core/common/l/d;->f()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->f:Ljava/lang/String;

    .line 60
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->a()I

    move-result v0

    .line 61
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/foundation/h/c;->g:Ljava/lang/String;

    .line 62
    invoke-static {p1, v0}, Lcom/tkay/expressad/foundation/h/k;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->h:Ljava/lang/String;

    .line 63
    invoke-static {}, Lcom/tkay/core/common/l/d;->i()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->i:Ljava/lang/String;

    .line 64
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->f()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->j:Ljava/lang/String;

    .line 65
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->k:Ljava/lang/String;

    .line 66
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->l:Ljava/lang/String;

    .line 67
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->m:Ljava/lang/String;

    .line 68
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/t;->c(Landroid/content/Context;)F

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->r:Ljava/lang/String;

    .line 69
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->i()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->s:Ljava/lang/String;

    .line 70
    invoke-static {}, Lcom/tkay/core/common/l/d;->b()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/h/c;->u:Ljava/lang/String;

    .line 71
    invoke-static {}, Lcom/tkay/core/common/p;->a()Lcom/tkay/core/common/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/p;->c()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/foundation/h/c;->v:I

    .line 72
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p1

    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    const-string p1, "landscape"

    .line 73
    iput-object p1, p0, Lcom/tkay/expressad/foundation/h/c;->n:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p1, "portrait"

    .line 75
    iput-object p1, p0, Lcom/tkay/expressad/foundation/h/c;->n:Ljava/lang/String;

    .line 78
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object p1

    if-eqz p1, :cond_1

    const-string v1, "at_device1|||at_device12|||at_device3"

    .line 82
    invoke-interface {p1, v1}, Lcom/tkay/core/api/IExHandler;->fillCDataParam(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    goto :goto_1

    :cond_1
    const-string p1, "|||"

    :goto_1
    const-string v1, "\\|\\|\\|"

    .line 86
    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 89
    array-length v1, p1

    const-string v2, ""

    if-lez v1, :cond_2

    const/4 v1, 0x0

    aget-object v1, p1, v1

    goto :goto_2

    :cond_2
    move-object v1, v2

    :goto_2
    iput-object v1, p0, Lcom/tkay/expressad/foundation/h/c;->e:Ljava/lang/String;

    .line 90
    array-length v1, p1

    const/4 v3, 0x1

    if-le v1, v3, :cond_3

    aget-object v1, p1, v3

    goto :goto_3

    :cond_3
    move-object v1, v2

    :goto_3
    iput-object v1, p0, Lcom/tkay/expressad/foundation/h/c;->w:Ljava/lang/String;

    .line 91
    array-length v1, p1

    if-le v1, v0, :cond_4

    aget-object v2, p1, v0

    :cond_4
    iput-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->q:Ljava/lang/String;

    .line 95
    :cond_5
    sget-object p1, Lcom/tkay/expressad/foundation/g/a;->co:Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/expressad/foundation/h/c;->o:Ljava/lang/String;

    .line 96
    sget-object p1, Lcom/tkay/expressad/foundation/g/a;->cp:Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/expressad/foundation/h/c;->p:Ljava/lang/String;

    .line 97
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->e()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/foundation/h/c;->t:Ljava/lang/String;

    .line 99
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/h/c;->b()Lorg/json/JSONObject;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/foundation/h/c;->x:Lorg/json/JSONObject;

    return-void
.end method

.method private b()Lorg/json/JSONObject;
    .locals 4

    .line 103
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "cid"

    .line 106
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->i()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "dmt"

    .line 107
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->f()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "dmf"

    .line 108
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->g()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "ct"

    .line 109
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->h()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "aW1laQ=="

    .line 118
    invoke-static {v1}, Lcom/tkay/core/common/l/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "bWFj"

    .line 123
    invoke-static {v1}, Lcom/tkay/core/common/l/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->w:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "oaid"

    .line 136
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->q:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "android_id"

    .line 144
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-object v0
.end method


# virtual methods
.method public a()Lorg/json/JSONObject;
    .locals 5

    .line 157
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "device"

    .line 161
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "system_version"

    .line 162
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "network_type"

    .line 163
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->g:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "network_type_str"

    .line 164
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->h:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "device_ua"

    .line 165
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->i:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 166
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->K()Lcom/tkay/core/common/f/al;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v2, "has_wx"

    .line 168
    invoke-virtual {v1}, Lcom/tkay/core/common/f/al;->a()I

    move-result v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "integrated_wx"

    .line 169
    invoke-virtual {v1}, Lcom/tkay/core/common/f/al;->b()I

    move-result v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "opensdk_ver"

    .line 170
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Lcom/tkay/core/common/f/al;->c()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "wx_api_ver"

    .line 171
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Lcom/tkay/core/common/f/al;->d()I

    move-result v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    const-string v1, "brand"

    .line 176
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->u:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "plantform"

    .line 178
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "ZGV2aWNlX2ltZWk="

    .line 180
    invoke-static {v1}, Lcom/tkay/core/common/l/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "android_id"

    .line 184
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "google_ad_id"

    .line 188
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "oaid"

    .line 189
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->q:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "appkey"

    .line 191
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->j:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "appId"

    .line 192
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->k:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "screen_width"

    .line 193
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->l:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "screen_height"

    .line 194
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->m:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "orientation"

    .line 195
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->n:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "scale"

    .line 196
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->r:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "b"

    .line 197
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->o:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "c"

    .line 198
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->p:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "web_env"

    .line 199
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->s:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "f"

    .line 200
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->t:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "misk_spt"

    .line 201
    iget v2, p0, Lcom/tkay/expressad/foundation/h/c;->v:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "dvi"

    .line 202
    iget-object v2, p0, Lcom/tkay/expressad/foundation/h/c;->x:Lorg/json/JSONObject;

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/j;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 207
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method
