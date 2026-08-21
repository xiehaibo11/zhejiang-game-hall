.class public final Lcom/tkay/basead/g/a;
.super Lcom/tkay/core/common/h/a;


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/lang/String;

.field c:Ljava/lang/String;

.field d:I

.field e:I

.field f:Ljava/lang/String;

.field g:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/i;)V
    .locals 1

    .line 42
    invoke-direct {p0}, Lcom/tkay/core/common/h/a;-><init>()V

    .line 44
    iget-object v0, p1, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/basead/g/a;->a:Ljava/lang/String;

    .line 45
    iget-object v0, p1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/basead/g/a;->b:Ljava/lang/String;

    .line 46
    iget-object v0, p1, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/basead/g/a;->c:Ljava/lang/String;

    .line 47
    iget v0, p1, Lcom/tkay/core/common/f/i;->h:I

    iput v0, p0, Lcom/tkay/basead/g/a;->d:I

    .line 48
    iget v0, p1, Lcom/tkay/core/common/f/i;->i:I

    iput v0, p0, Lcom/tkay/basead/g/a;->e:I

    .line 49
    iget-object v0, p1, Lcom/tkay/core/common/f/i;->k:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/basead/g/a;->f:Ljava/lang/String;

    .line 50
    iget-object p1, p1, Lcom/tkay/core/common/f/i;->l:Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/basead/g/a;->g:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method protected final a()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method protected final a(Ljava/lang/String;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Object;"
        }
    .end annotation

    return-object p1
.end method

.method protected final a(ILjava/lang/Object;)V
    .locals 5

    const-string v0, "4001"

    const-string v1, "Return Empty Ad."

    const-string v2, ""

    if-nez p2, :cond_0

    const/16 p2, -0x2711

    .line 168
    invoke-static {v0, v2, v2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-virtual {p0, p1, p2, v1, v0}, Lcom/tkay/basead/g/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    return-void

    .line 173
    :cond_0
    :try_start_0
    new-instance v3, Lorg/json/JSONObject;

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v4, "data"

    .line 174
    invoke-virtual {v3, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    const/16 v3, -0x2712

    .line 175
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v2, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v4

    invoke-virtual {p0, p1, v3, v1, v4}, Lcom/tkay/basead/g/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 182
    :cond_1
    invoke-super {p0, p1, p2}, Lcom/tkay/core/common/h/a;->a(ILjava/lang/Object;)V

    return-void

    :catchall_0
    const v3, -0x1869f

    if-eqz p2, :cond_2

    .line 179
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_2
    const-string p2, "Adx Service Error."

    :goto_0
    invoke-static {v0, v2, p2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p2

    invoke-virtual {p0, p1, v3, v1, p2}, Lcom/tkay/basead/g/a;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V

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

    .line 60
    iget-object v0, p0, Lcom/tkay/basead/g/a;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 61
    iget-object v0, p0, Lcom/tkay/basead/g/a;->g:Ljava/lang/String;

    return-object v0

    .line 64
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    invoke-static {}, Lcom/tkay/core/common/i;->f()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected final b(Lcom/tkay/core/api/AdError;)V
    .locals 0

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

    .line 69
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Content-Encoding"

    const-string v2, "gzip"

    .line 70
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Content-Type"

    const-string v2, "application/json;charset=utf-8"

    .line 71
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method protected final d()[B
    .locals 2

    .line 78
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/basead/g/a;->g()Ljava/lang/String;

    move-result-object v0

    const-string v1, "utf-8"

    invoke-virtual {v0, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 82
    :catch_0
    invoke-virtual {p0}, Lcom/tkay/basead/g/a;->g()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    return-object v0
.end method

.method protected final e()Lorg/json/JSONObject;
    .locals 4

    .line 87
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->e()Lorg/json/JSONObject;

    move-result-object v0

    :try_start_0
    const-string v1, "app_id"

    .line 89
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "pl_id"

    .line 90
    iget-object v2, p0, Lcom/tkay/basead/g/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "session_id"

    .line 91
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/g/a;->c:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/b/m;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "t_g_id"

    .line 92
    iget v2, p0, Lcom/tkay/basead/g/a;->d:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "gro_id"

    .line 93
    iget v2, p0, Lcom/tkay/basead/g/a;->e:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 96
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->x()Ljava/lang/String;

    move-result-object v1

    .line 97
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "sy_id"

    .line 98
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 101
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->y()Ljava/lang/String;

    move-result-object v1

    .line 102
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, "bk_id"

    if-nez v2, :cond_1

    .line 103
    :try_start_1
    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 105
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->j(Ljava/lang/String;)V

    .line 106
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 110
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v1

    if-eqz v1, :cond_2

    const-string v1, "deny"

    .line 111
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/d;->o(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 115
    :cond_2
    iget-object v1, p0, Lcom/tkay/basead/g/a;->c:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/core/common/h/c;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_3

    const-string v2, "customs"

    .line 117
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_3
    return-object v0
.end method

.method protected final f()Lorg/json/JSONObject;
    .locals 3

    .line 127
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->f()Lorg/json/JSONObject;

    move-result-object v0

    .line 130
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "btts"

    .line 131
    invoke-static {}, Lcom/tkay/core/common/l/d;->g()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-object v0
.end method

.method protected final g()Ljava/lang/String;
    .locals 4

    .line 144
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 145
    invoke-virtual {p0}, Lcom/tkay/basead/g/a;->e()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 146
    invoke-virtual {p0}, Lcom/tkay/basead/g/a;->f()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "p"

    .line 148
    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "p2"

    .line 149
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 150
    iget-object v1, p0, Lcom/tkay/basead/g/a;->b:Ljava/lang/String;

    const-string v2, "request_id"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 151
    iget-object v1, p0, Lcom/tkay/basead/g/a;->a:Ljava/lang/String;

    const-string v2, "bid_id"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 154
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    .line 156
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected final h()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final i()Landroid/content/Context;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final j()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final k()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

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

    const/4 v0, 0x2

    return v0
.end method
