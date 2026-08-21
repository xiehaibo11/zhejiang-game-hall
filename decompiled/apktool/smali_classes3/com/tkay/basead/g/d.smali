.class public final Lcom/tkay/basead/g/d;
.super Lcom/tkay/core/common/h/a;


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/lang/String;

.field c:Ljava/lang/String;

.field d:I

.field e:I

.field f:I

.field g:I

.field h:[Ljava/lang/String;

.field i:I

.field j:I

.field k:Ljava/lang/String;

.field l:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/i;II[Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 51
    invoke-direct {p0}, Lcom/tkay/core/common/h/a;-><init>()V

    const-string v0, "OnlineOfferLoader"

    .line 162
    iput-object v0, p0, Lcom/tkay/basead/g/d;->l:Ljava/lang/String;

    .line 53
    iget-object v0, p1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/basead/g/d;->a:Ljava/lang/String;

    .line 54
    iget-object v0, p1, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/basead/g/d;->b:Ljava/lang/String;

    .line 55
    iget-object v0, p1, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/basead/g/d;->c:Ljava/lang/String;

    .line 56
    iget v0, p1, Lcom/tkay/core/common/f/i;->e:I

    iput v0, p0, Lcom/tkay/basead/g/d;->i:I

    .line 57
    iput p2, p0, Lcom/tkay/basead/g/d;->f:I

    .line 58
    iput p3, p0, Lcom/tkay/basead/g/d;->g:I

    .line 59
    iput-object p4, p0, Lcom/tkay/basead/g/d;->h:[Ljava/lang/String;

    .line 61
    iget p2, p1, Lcom/tkay/core/common/f/i;->h:I

    iput p2, p0, Lcom/tkay/basead/g/d;->d:I

    .line 62
    iget p2, p1, Lcom/tkay/core/common/f/i;->i:I

    iput p2, p0, Lcom/tkay/basead/g/d;->e:I

    .line 64
    iget p1, p1, Lcom/tkay/core/common/f/i;->j:I

    iput p1, p0, Lcom/tkay/basead/g/d;->j:I

    .line 66
    iput-object p5, p0, Lcom/tkay/basead/g/d;->k:Ljava/lang/String;

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

    const-string v1, ""

    if-nez p2, :cond_0

    const/16 p2, -0x2711

    .line 224
    invoke-static {v0, v1, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    const-string v1, "Return Empty Ad."

    invoke-virtual {p0, p1, p2, v1, v0}, Lcom/tkay/basead/g/d;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    return-void

    .line 228
    :cond_0
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v3, "data"

    .line 229
    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/16 v2, -0x2712

    .line 230
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v1, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v4

    invoke-virtual {p0, p1, v2, v3, v4}, Lcom/tkay/basead/g/d;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 237
    :cond_1
    invoke-super {p0, p1, p2}, Lcom/tkay/core/common/h/a;->a(ILjava/lang/Object;)V

    return-void

    :catchall_0
    move-exception v2

    const v3, -0x1869f

    if-eqz p2, :cond_2

    .line 234
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    :cond_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    :goto_0
    if-eqz p2, :cond_3

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    :cond_3
    const-string p2, "Online Api Service Error."

    :goto_1
    invoke-static {v0, v1, p2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p2

    invoke-virtual {p0, p1, v3, v2, p2}, Lcom/tkay/basead/g/d;->a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V

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

    .line 76
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    invoke-static {}, Lcom/tkay/core/common/i;->h()Ljava/lang/String;

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

    .line 81
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Content-Encoding"

    const-string v2, "gzip"

    .line 82
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Content-Type"

    const-string v2, "application/json;charset=utf-8"

    .line 83
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method protected final d()[B
    .locals 2

    .line 90
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/basead/g/d;->g()Ljava/lang/String;

    move-result-object v0

    const-string v1, "utf-8"

    invoke-virtual {v0, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 94
    :catch_0
    invoke-virtual {p0}, Lcom/tkay/basead/g/d;->g()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    return-object v0
.end method

.method protected final e()Lorg/json/JSONObject;
    .locals 4

    .line 99
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->e()Lorg/json/JSONObject;

    move-result-object v0

    :try_start_0
    const-string v1, "app_id"

    .line 101
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "pl_id"

    .line 102
    iget-object v2, p0, Lcom/tkay/basead/g/d;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "session_id"

    .line 103
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/g/d;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/b/m;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "t_g_id"

    .line 104
    iget v2, p0, Lcom/tkay/basead/g/d;->d:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "gro_id"

    .line 105
    iget v2, p0, Lcom/tkay/basead/g/d;->e:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 108
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->x()Ljava/lang/String;

    move-result-object v1

    .line 109
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "sy_id"

    .line 110
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 113
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->y()Ljava/lang/String;

    move-result-object v1

    .line 114
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, "bk_id"

    if-nez v2, :cond_1

    .line 115
    :try_start_1
    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 117
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->j(Ljava/lang/String;)V

    .line 118
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 122
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v1

    if-eqz v1, :cond_2

    const-string v1, "deny"

    .line 123
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/d;->o(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    const-string v1, "al_it_apil"

    .line 127
    invoke-static {}, Lcom/tkay/core/common/n;->a()Lcom/tkay/core/common/n;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/n;->c()Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 130
    iget-object v1, p0, Lcom/tkay/basead/g/d;->b:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/core/common/h/c;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_3

    const-string v2, "customs"

    .line 132
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 136
    :cond_3
    invoke-static {v0}, Lcom/tkay/core/common/h/c;->a(Lorg/json/JSONObject;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    return-object v0
.end method

.method protected final f()Lorg/json/JSONObject;
    .locals 3

    .line 146
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->f()Lorg/json/JSONObject;

    move-result-object v0

    .line 149
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "btts"

    .line 150
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
    .locals 8

    .line 166
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 167
    invoke-virtual {p0}, Lcom/tkay/basead/g/d;->e()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 168
    invoke-virtual {p0}, Lcom/tkay/basead/g/d;->f()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "p"

    .line 170
    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "p2"

    .line 171
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 172
    iget-object v1, p0, Lcom/tkay/basead/g/d;->a:Ljava/lang/String;

    const-string v2, "request_id"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 173
    iget-object v1, p0, Lcom/tkay/basead/g/d;->c:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "ad_source_id"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 174
    iget v1, p0, Lcom/tkay/basead/g/d;->i:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "ad_num"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 175
    iget-object v1, p0, Lcom/tkay/basead/g/d;->h:[Ljava/lang/String;

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    array-length v1, v1

    if-lez v1, :cond_1

    .line 176
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 177
    iget-object v3, p0, Lcom/tkay/basead/g/d;->h:[Ljava/lang/String;

    array-length v4, v3

    move v5, v2

    :goto_0
    if-ge v5, v4, :cond_0

    aget-object v6, v3, v5

    .line 178
    invoke-virtual {v1, v6}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_0
    const-string v3, "exclude_offers"

    .line 180
    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 184
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->k()Lorg/json/JSONArray;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 185
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->k()Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v3, "ex_pkg"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 188
    :cond_2
    iget v1, p0, Lcom/tkay/basead/g/d;->f:I

    if-lez v1, :cond_3

    iget v3, p0, Lcom/tkay/basead/g/d;->g:I

    if-lez v3, :cond_3

    .line 189
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "ad_width"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 190
    iget v1, p0, Lcom/tkay/basead/g/d;->g:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v3, "ad_height"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 194
    :cond_3
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    .line 197
    :try_start_0
    iget v0, p0, Lcom/tkay/basead/g/d;->j:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const/4 v3, -0x1

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v4

    const/4 v5, 0x3

    const/4 v6, 0x2

    const/4 v7, 0x1

    packed-switch v4, :pswitch_data_0

    goto :goto_1

    :pswitch_0
    const-string v2, "4"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    move v2, v7

    goto :goto_2

    :pswitch_1
    const-string v2, "3"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    move v2, v6

    goto :goto_2

    :pswitch_2
    const-string v4, "2"

    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    goto :goto_2

    :pswitch_3
    const-string v2, "1"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    move v2, v5

    goto :goto_2

    :cond_4
    :goto_1
    move v2, v3

    :goto_2
    if-eqz v2, :cond_5

    if-eq v2, v7, :cond_5

    if-eq v2, v6, :cond_5

    if-eq v2, v5, :cond_5

    goto :goto_3

    :cond_5
    const-string v0, "adp_accept_type"

    .line 204
    new-instance v2, Lorg/json/JSONArray;

    const-string v3, "[1]"

    invoke-direct {v2, v3}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 212
    :catchall_0
    :goto_3
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :pswitch_data_0
    .packed-switch 0x31
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
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
