.class public Lcom/tkay/core/common/h/l;
.super Lcom/tkay/core/common/h/a;


# static fields
.field public static final a:Ljava/lang/String; = "sdk_custom"

.field private static final d:Ljava/lang/String;


# instance fields
.field b:J

.field c:J

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Landroid/content/Context;

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private p:Lorg/json/JSONObject;

.field private q:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 34
    const-class v0, Lcom/tkay/core/common/h/l;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/h/l;->d:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 54
    invoke-direct {p0}, Lcom/tkay/core/common/h/a;-><init>()V

    .line 55
    iput-object p2, p0, Lcom/tkay/core/common/h/l;->i:Ljava/lang/String;

    .line 56
    iput-object p3, p0, Lcom/tkay/core/common/h/l;->j:Ljava/lang/String;

    .line 57
    iput-object p1, p0, Lcom/tkay/core/common/h/l;->h:Landroid/content/Context;

    .line 58
    iput-object p4, p0, Lcom/tkay/core/common/h/l;->g:Ljava/lang/String;

    .line 59
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/h/l;->e:Ljava/lang/String;

    .line 60
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1, p4}, Lcom/tkay/core/common/b/m;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/h/l;->f:Ljava/lang/String;

    .line 61
    iput-object p5, p0, Lcom/tkay/core/common/h/l;->k:Ljava/lang/String;

    .line 62
    iput-object p6, p0, Lcom/tkay/core/common/h/l;->l:Ljava/util/Map;

    .line 63
    iput-object p7, p0, Lcom/tkay/core/common/h/l;->q:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method protected final a()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method protected final a(Ljava/lang/String;)Ljava/lang/Object;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Object;"
        }
    .end annotation

    .line 215
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    .line 217
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 218
    iget-object v1, p0, Lcom/tkay/core/common/h/l;->l:Ljava/util/Map;

    if-eqz v1, :cond_0

    const-string v1, "sdk_custom"

    .line 219
    new-instance v2, Lorg/json/JSONObject;

    iget-object v3, p0, Lcom/tkay/core/common/h/l;->l:Ljava/util/Map;

    invoke-direct {v2, v3}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 221
    :cond_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 225
    :catch_0
    iget-object v1, p0, Lcom/tkay/core/common/h/l;->g:Ljava/lang/String;

    iget-wide v2, p0, Lcom/tkay/core/common/h/l;->b:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v6

    iget-wide v8, p0, Lcom/tkay/core/common/h/l;->c:J

    sub-long/2addr v6, v8

    const-string v0, "placement"

    invoke-static/range {v0 .. v7}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;JJJ)V

    return-object p1
.end method

.method public final a(ILcom/tkay/core/common/h/k;)V
    .locals 2

    .line 68
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/h/l;->b:J

    .line 69
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/h/l;->c:J

    .line 70
    invoke-super {p0, p1, p2}, Lcom/tkay/core/common/h/a;->a(ILcom/tkay/core/common/h/k;)V

    return-void
.end method

.method protected final a(Lcom/tkay/core/api/AdError;)V
    .locals 0

    return-void
.end method

.method protected final a(I)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method protected final b()Ljava/lang/String;
    .locals 1

    .line 80
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    invoke-static {}, Lcom/tkay/core/common/i;->c()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected final b(Lcom/tkay/core/api/AdError;)V
    .locals 7

    .line 238
    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getPlatformMSG()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0}, Lcom/tkay/core/common/h/l;->b()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/core/common/h/l;->g:Ljava/lang/String;

    const-string v0, "placement"

    const-string v5, ""

    const-string v6, ""

    invoke-static/range {v0 .. v6}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method protected final c()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 85
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Accept-Encoding"

    const-string v2, "gzip"

    .line 86
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Content-Type"

    const-string v2, "application/json;charset=utf-8"

    .line 87
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method protected final d()[B
    .locals 2

    .line 94
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/h/l;->g()Ljava/lang/String;

    move-result-object v0

    const-string v1, "utf-8"

    invoke-virtual {v0, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 98
    :catch_0
    invoke-virtual {p0}, Lcom/tkay/core/common/h/l;->g()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    return-object v0
.end method

.method protected final e()Lorg/json/JSONObject;
    .locals 4

    .line 133
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->e()Lorg/json/JSONObject;

    move-result-object v0

    :try_start_0
    const-string v1, "app_id"

    .line 135
    iget-object v2, p0, Lcom/tkay/core/common/h/l;->i:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "pl_id"

    .line 136
    iget-object v2, p0, Lcom/tkay/core/common/h/l;->g:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "session_id"

    .line 137
    iget-object v2, p0, Lcom/tkay/core/common/h/l;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "nw_ver"

    .line 138
    invoke-static {}, Lcom/tkay/core/common/l/d;->h()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "exclude_myofferid"

    .line 139
    invoke-static {}, Lcom/tkay/core/common/s;->a()Lcom/tkay/core/common/s;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/h/l;->h:Landroid/content/Context;

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/s;->a(Landroid/content/Context;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 142
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->k()Lorg/json/JSONArray;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "ecpoffer"

    .line 143
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->k()Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 147
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->x()Ljava/lang/String;

    move-result-object v1

    .line 148
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "sy_id"

    .line 149
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 152
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->y()Ljava/lang/String;

    move-result-object v1

    .line 153
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, "bk_id"

    if-nez v2, :cond_2

    .line 154
    :try_start_1
    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 156
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->j(Ljava/lang/String;)V

    .line 157
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 160
    :goto_0
    iget-object v1, p0, Lcom/tkay/core/common/h/l;->l:Ljava/util/Map;

    invoke-static {v1}, Lcom/tkay/core/common/h/c;->a(Ljava/util/Map;)Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_3

    const-string v2, "custom"

    .line 162
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 167
    :cond_3
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v1

    if-eqz v1, :cond_4

    const-string v1, "deny"

    .line 168
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/d;->o(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 172
    :cond_4
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->u()Z

    move-result v1

    if-eqz v1, :cond_5

    .line 173
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->v()Lcom/tkay/core/api/ATDebuggerConfig;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/api/ATDebuggerConfig;->fillRequestParam(Lorg/json/JSONObject;)V

    :cond_5
    const-string v1, "al_it_apil"

    .line 177
    invoke-static {}, Lcom/tkay/core/common/n;->a()Lcom/tkay/core/common/n;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/n;->c()Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 180
    iget-object v1, p0, Lcom/tkay/core/common/h/l;->q:Ljava/util/Map;

    if-eqz v1, :cond_6

    .line 182
    iget-object v1, p0, Lcom/tkay/core/common/h/l;->q:Ljava/util/Map;

    const-string v2, "cp_placement_id"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_6

    const-string v2, "cp_pl_id"

    .line 184
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_6
    return-object v0
.end method

.method protected final f()Lorg/json/JSONObject;
    .locals 3

    .line 197
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->f()Lorg/json/JSONObject;

    move-result-object v0

    .line 200
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "btts"

    .line 201
    invoke-static {}, Lcom/tkay/core/common/l/d;->g()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-object v0
.end method

.method protected final h()Ljava/lang/String;
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/tkay/core/common/h/l;->i:Ljava/lang/String;

    return-object v0
.end method

.method protected final i()Landroid/content/Context;
    .locals 1

    .line 118
    iget-object v0, p0, Lcom/tkay/core/common/h/l;->h:Landroid/content/Context;

    return-object v0
.end method

.method protected final j()Ljava/lang/String;
    .locals 1

    .line 123
    iget-object v0, p0, Lcom/tkay/core/common/h/l;->j:Ljava/lang/String;

    return-object v0
.end method

.method protected final k()Ljava/lang/String;
    .locals 1

    const-string v0, "1.0"

    return-object v0
.end method

.method protected final l()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final m()I
    .locals 1

    const/16 v0, 0xf

    return v0
.end method

.method protected final n()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method
