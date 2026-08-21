.class public final Lcom/tkay/expressad/splash/a/a;
.super Ljava/lang/Object;


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


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 4

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "android"

    .line 43
    iput-object v0, p0, Lcom/tkay/expressad/splash/a/a;->c:Ljava/lang/String;

    .line 44
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->b()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/a;->a:Ljava/lang/String;

    .line 45
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->c()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/a;->b:Ljava/lang/String;

    .line 46
    invoke-static {p1}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/a;->e:Ljava/lang/String;

    .line 47
    invoke-static {}, Lcom/tkay/core/common/l/d;->f()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/a;->f:Ljava/lang/String;

    .line 48
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->a()I

    move-result v0

    .line 49
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/splash/a/a;->h:Ljava/lang/String;

    .line 50
    invoke-static {p1, v0}, Lcom/tkay/expressad/foundation/h/k;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/a;->i:Ljava/lang/String;

    .line 51
    invoke-static {}, Lcom/tkay/core/common/l/d;->i()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/a;->j:Ljava/lang/String;

    .line 52
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->f()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/a;->k:Ljava/lang/String;

    .line 53
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/a;->l:Ljava/lang/String;

    .line 54
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/a;->m:Ljava/lang/String;

    .line 55
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/a;->n:Ljava/lang/String;

    .line 56
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/t;->c(Landroid/content/Context;)F

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/a/a;->p:Ljava/lang/String;

    .line 57
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p1

    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    const-string p1, "landscape"

    .line 58
    iput-object p1, p0, Lcom/tkay/expressad/splash/a/a;->o:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p1, "portrait"

    .line 60
    iput-object p1, p0, Lcom/tkay/expressad/splash/a/a;->o:Ljava/lang/String;

    .line 63
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object p1

    const-string v1, ""

    if-eqz p1, :cond_1

    const-string v2, "at_device1|||at_device2|||at_device3"

    .line 66
    invoke-interface {p1, v2}, Lcom/tkay/core/api/IExHandler;->fillCDataParam(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v2, "at_device1"

    .line 67
    invoke-virtual {p1, v2, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "at_device2"

    invoke-virtual {v2, v3, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "at_device3"

    invoke-virtual {v2, v3, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    goto :goto_1

    :cond_1
    move-object p1, v1

    .line 70
    :goto_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 71
    iput-object v1, p0, Lcom/tkay/expressad/splash/a/a;->d:Ljava/lang/String;

    .line 72
    iput-object v1, p0, Lcom/tkay/expressad/splash/a/a;->g:Ljava/lang/String;

    return-void

    :cond_2
    const-string v1, "\\|\\|\\|"

    .line 74
    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    const/4 v1, 0x0

    .line 76
    :try_start_0
    aget-object v1, p1, v1

    iput-object v1, p0, Lcom/tkay/expressad/splash/a/a;->d:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 82
    :catchall_0
    :try_start_1
    aget-object p1, p1, v0

    iput-object p1, p0, Lcom/tkay/expressad/splash/a/a;->g:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    return-void
.end method


# virtual methods
.method public final a()Lorg/json/JSONObject;
    .locals 5

    .line 91
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "device"

    .line 95
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "system_version"

    .line 96
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "network_type"

    .line 97
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->h:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "network_type_str"

    .line 98
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->i:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "device_ua"

    .line 99
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->j:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 101
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->K()Lcom/tkay/core/common/f/al;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v2, "has_wx"

    .line 103
    invoke-virtual {v1}, Lcom/tkay/core/common/f/al;->a()I

    move-result v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "integrated_wx"

    .line 104
    invoke-virtual {v1}, Lcom/tkay/core/common/f/al;->b()I

    move-result v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "opensdk_ver"

    .line 105
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Lcom/tkay/core/common/f/al;->c()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "wx_api_ver"

    .line 106
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Lcom/tkay/core/common/f/al;->d()I

    move-result v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    const-string v1, "plantform"

    .line 112
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "ZGV2aWNlX2ltZWk="

    .line 114
    invoke-static {v1}, Lcom/tkay/core/common/l/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "android_id"

    .line 118
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "google_ad_id"

    .line 122
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "oaid"

    .line 123
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->g:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "appkey"

    .line 125
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->k:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "appId"

    .line 126
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->l:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "screen_width"

    .line 127
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->m:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "screen_height"

    .line 128
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->n:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "orientation"

    .line 129
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->o:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "scale"

    .line 130
    iget-object v2, p0, Lcom/tkay/expressad/splash/a/a;->p:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 132
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method
