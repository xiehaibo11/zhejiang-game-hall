.class public Lcom/tkay/core/common/h/d;
.super Lcom/tkay/core/common/h/a;


# static fields
.field public static final a:Ljava/lang/String; = "custom"

.field private static final e:Ljava/lang/String;


# instance fields
.field b:J

.field c:J

.field d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 32
    const-class v0, Lcom/tkay/core/common/h/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/h/d;->e:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 44
    invoke-direct {p0}, Lcom/tkay/core/common/h/a;-><init>()V

    .line 45
    iput-object p2, p0, Lcom/tkay/core/common/h/d;->f:Ljava/lang/String;

    .line 46
    iput-object p3, p0, Lcom/tkay/core/common/h/d;->g:Ljava/lang/String;

    .line 47
    iput-object p1, p0, Lcom/tkay/core/common/h/d;->h:Landroid/content/Context;

    .line 48
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->l()Ljava/util/Map;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/h/d;->d:Ljava/util/Map;

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

    .line 199
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    .line 201
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 202
    iget-object v1, p0, Lcom/tkay/core/common/h/d;->d:Ljava/util/Map;

    if-eqz v1, :cond_0

    const-string v1, "custom"

    .line 203
    new-instance v2, Lorg/json/JSONObject;

    iget-object v3, p0, Lcom/tkay/core/common/h/d;->d:Ljava/util/Map;

    invoke-direct {v2, v3}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 205
    :cond_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const/4 v1, 0x0

    .line 209
    iget-wide v2, p0, Lcom/tkay/core/common/h/d;->b:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v6

    iget-wide v8, p0, Lcom/tkay/core/common/h/d;->c:J

    sub-long/2addr v6, v8

    const-string v0, "app"

    invoke-static/range {v0 .. v7}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;JJJ)V

    return-object p1
.end method

.method public final a(ILcom/tkay/core/common/h/k;)V
    .locals 2

    .line 53
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/h/d;->b:J

    .line 54
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/h/d;->c:J

    .line 55
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

    .line 65
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    invoke-static {}, Lcom/tkay/core/common/i;->b()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected final b(Lcom/tkay/core/api/AdError;)V
    .locals 7

    .line 220
    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getPlatformMSG()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0}, Lcom/tkay/core/common/h/d;->b()Ljava/lang/String;

    move-result-object v3

    const-string v0, "app"

    const-string v4, ""

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

    .line 70
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Accept-Encoding"

    const-string v2, "gzip"

    .line 71
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Content-Type"

    const-string v2, "application/json;charset=utf-8"

    .line 72
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method protected final d()[B
    .locals 2

    .line 79
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/h/d;->g()Ljava/lang/String;

    move-result-object v0

    const-string v1, "utf-8"

    invoke-virtual {v0, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 83
    :catch_0
    invoke-virtual {p0}, Lcom/tkay/core/common/h/d;->g()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    return-object v0
.end method

.method protected final e()Lorg/json/JSONObject;
    .locals 4

    .line 120
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->e()Lorg/json/JSONObject;

    move-result-object v0

    :try_start_0
    const-string v1, "app_id"

    .line 122
    iget-object v2, p0, Lcom/tkay/core/common/h/d;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "nw_ver"

    .line 123
    invoke-static {}, Lcom/tkay/core/common/l/d;->h()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 126
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->x()Ljava/lang/String;

    move-result-object v1

    .line 127
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "sy_id"

    .line 128
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 131
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->y()Ljava/lang/String;

    move-result-object v1

    .line 132
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, "bk_id"

    if-nez v2, :cond_1

    .line 133
    :try_start_1
    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 135
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->j(Ljava/lang/String;)V

    .line 136
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 149
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/h/c;->b()Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_2

    const-string v2, "custom"

    .line 151
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 157
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v1

    if-eqz v1, :cond_3

    const-string v1, "deny"

    .line 158
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/d;->o(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v1, "rc"

    .line 161
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->G()Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_4

    move v2, v3

    goto :goto_1

    :cond_4
    const/4 v2, 0x2

    :goto_1
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 164
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->u()Z

    move-result v1

    if-eqz v1, :cond_5

    const-string v1, "is_test"

    .line 165
    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_5
    const-string v1, "al_it_apil"

    .line 169
    invoke-static {}, Lcom/tkay/core/common/n;->a()Lcom/tkay/core/common/n;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/n;->c()Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "pil_offset"

    .line 170
    invoke-static {}, Lcom/tkay/core/common/n;->a()Lcom/tkay/core/common/n;

    invoke-static {}, Lcom/tkay/core/common/n;->b()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    return-object v0
.end method

.method protected final f()Lorg/json/JSONObject;
    .locals 3

    .line 182
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->f()Lorg/json/JSONObject;

    move-result-object v0

    .line 185
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "btts"

    .line 186
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

    .line 93
    iget-object v0, p0, Lcom/tkay/core/common/h/d;->f:Ljava/lang/String;

    return-object v0
.end method

.method protected final i()Landroid/content/Context;
    .locals 1

    .line 98
    iget-object v0, p0, Lcom/tkay/core/common/h/d;->h:Landroid/content/Context;

    return-object v0
.end method

.method protected final j()Ljava/lang/String;
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/tkay/core/common/h/d;->g:Ljava/lang/String;

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

.method protected m()I
    .locals 1

    const/16 v0, 0xb

    return v0
.end method

.method protected final n()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method
