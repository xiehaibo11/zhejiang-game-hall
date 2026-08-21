.class public final Lcom/tkay/core/common/h/b;
.super Lcom/tkay/core/common/h/a;


# instance fields
.field a:Landroid/content/Context;

.field b:I

.field c:Ljava/lang/String;

.field d:Ljava/lang/String;

.field e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field f:I

.field g:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;ILjava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "I",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 49
    invoke-direct {p0}, Lcom/tkay/core/common/h/a;-><init>()V

    const/4 v0, 0x0

    .line 46
    iput-boolean v0, p0, Lcom/tkay/core/common/h/b;->g:Z

    .line 50
    iput-object p1, p0, Lcom/tkay/core/common/h/b;->a:Landroid/content/Context;

    .line 51
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/h/b;->c:Ljava/lang/String;

    .line 52
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/h/b;->d:Ljava/lang/String;

    .line 53
    iput-object p3, p0, Lcom/tkay/core/common/h/b;->e:Ljava/util/List;

    .line 54
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p1

    iput p1, p0, Lcom/tkay/core/common/h/b;->b:I

    .line 55
    iput p2, p0, Lcom/tkay/core/common/h/b;->f:I

    return-void
.end method

.method private static b(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    :try_start_0
    const-string v0, "utf-8"

    .line 228
    invoke-static {p0, v0}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const/4 p0, 0x0

    return-object p0
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

    .line 196
    iget p1, p0, Lcom/tkay/core/common/h/b;->b:I

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    return-object p1
.end method

.method public final a(ILcom/tkay/core/common/h/k;)V
    .locals 1

    .line 76
    invoke-virtual {p0}, Lcom/tkay/core/common/h/b;->b()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    if-eqz p2, :cond_0

    .line 78
    iget v0, p0, Lcom/tkay/core/common/h/b;->b:I

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-interface {p2, p1, v0}, Lcom/tkay/core/common/h/k;->onLoadFinish(ILjava/lang/Object;)V

    :cond_0
    return-void

    .line 82
    :cond_1
    invoke-super {p0, p1, p2}, Lcom/tkay/core/common/h/a;->a(ILcom/tkay/core/common/h/k;)V

    return-void
.end method

.method protected final a(Lcom/tkay/core/api/AdError;)V
    .locals 10

    .line 201
    iget-boolean p1, p0, Lcom/tkay/core/common/h/b;->g:Z

    if-eqz p1, :cond_1

    .line 203
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    .line 204
    invoke-virtual {p0}, Lcom/tkay/core/common/h/b;->c()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 207
    :try_start_0
    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 208
    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {p1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 215
    :catch_0
    :cond_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v7

    .line 216
    invoke-virtual {p0}, Lcom/tkay/core/common/h/b;->g()Ljava/lang/String;

    move-result-object v8

    .line 217
    invoke-virtual {p0}, Lcom/tkay/core/common/h/b;->b()Ljava/lang/String;

    move-result-object v6

    const/16 p1, 0x3e9

    .line 219
    invoke-static {p1}, Lcom/tkay/core/common/f/n;->a(I)Ljava/lang/String;

    move-result-object v9

    .line 221
    invoke-static {}, Lcom/tkay/core/common/u;->a()Lcom/tkay/core/common/u;

    move-result-object v4

    const/4 v5, 0x1

    invoke-virtual/range {v4 .. v9}, Lcom/tkay/core/common/u;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method protected final a(I)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method protected final b()Ljava/lang/String;
    .locals 1

    .line 71
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    invoke-static {}, Lcom/tkay/core/common/i;->k()Ljava/lang/String;

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

    .line 87
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Content-Encoding"

    const-string v2, "gzip"

    .line 88
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Content-Type"

    const-string v2, "application/json;charset=utf-8"

    .line 89
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method protected final d()[B
    .locals 1

    .line 95
    invoke-virtual {p0}, Lcom/tkay/core/common/h/b;->g()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/h/b;->c(Ljava/lang/String;)[B

    move-result-object v0

    return-object v0
.end method

.method protected final e()Lorg/json/JSONObject;
    .locals 6

    .line 130
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->e()Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_5

    :try_start_0
    const-string v1, "app_id"

    .line 133
    iget-object v2, p0, Lcom/tkay/core/common/h/b;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "nw_ver"

    .line 134
    invoke-static {}, Lcom/tkay/core/common/l/d;->h()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 136
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->l()Ljava/util/Map;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v1, :cond_2

    .line 138
    :try_start_1
    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v2

    if-lez v2, :cond_2

    if-eqz v1, :cond_2

    .line 140
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 141
    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_0
    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 142
    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    if-eqz v5, :cond_0

    .line 144
    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_1
    const-string v1, "custom"

    .line 147
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 154
    :catchall_0
    :cond_2
    :try_start_2
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 155
    iget-object v2, p0, Lcom/tkay/core/common/h/b;->e:Ljava/util/List;

    if-eqz v2, :cond_4

    iget-object v2, p0, Lcom/tkay/core/common/h/b;->e:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_4

    .line 156
    iget-object v2, p0, Lcom/tkay/core/common/h/b;->e:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_3
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 157
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    .line 158
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 159
    invoke-virtual {v1, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_1

    :cond_4
    const-string v2, "data"

    .line 163
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    :cond_5
    return-object v0
.end method

.method protected final f()Lorg/json/JSONObject;
    .locals 3

    .line 181
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->f()Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_0
    const-string v1, "tcp_tk_da_type"

    .line 184
    iget v2, p0, Lcom/tkay/core/common/h/b;->f:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-object v0
.end method

.method protected final h()Ljava/lang/String;
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/tkay/core/common/h/b;->c:Ljava/lang/String;

    return-object v0
.end method

.method protected final i()Landroid/content/Context;
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/tkay/core/common/h/b;->a:Landroid/content/Context;

    return-object v0
.end method

.method protected final j()Ljava/lang/String;
    .locals 1

    .line 120
    iget-object v0, p0, Lcom/tkay/core/common/h/b;->d:Ljava/lang/String;

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

    const/4 v0, 0x4

    return v0
.end method

.method protected final o()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final p()V
    .locals 1

    const/4 v0, 0x1

    .line 59
    iput-boolean v0, p0, Lcom/tkay/core/common/h/b;->g:Z

    return-void
.end method
