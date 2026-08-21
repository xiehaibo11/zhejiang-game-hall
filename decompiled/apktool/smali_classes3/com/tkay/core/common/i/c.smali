.class public final Lcom/tkay/core/common/i/c;
.super Lcom/tkay/core/common/h/a;


# instance fields
.field a:Z

.field private b:Landroid/content/Context;

.field private c:I

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Lcom/tkay/core/common/f/d;

.field private h:Lcom/tkay/core/c/d;


# direct methods
.method public constructor <init>(Landroid/content/Context;ILjava/lang/String;Lcom/tkay/core/common/f/d;Lcom/tkay/core/c/d;)V
    .locals 1

    .line 47
    invoke-direct {p0}, Lcom/tkay/core/common/h/a;-><init>()V

    const/4 v0, 0x0

    .line 42
    iput-boolean v0, p0, Lcom/tkay/core/common/i/c;->a:Z

    .line 49
    iput-object p1, p0, Lcom/tkay/core/common/i/c;->b:Landroid/content/Context;

    .line 50
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/i/c;->d:Ljava/lang/String;

    .line 51
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/i/c;->e:Ljava/lang/String;

    .line 52
    iput p2, p0, Lcom/tkay/core/common/i/c;->c:I

    .line 53
    iput-object p4, p0, Lcom/tkay/core/common/i/c;->g:Lcom/tkay/core/common/f/d;

    .line 54
    iput-object p5, p0, Lcom/tkay/core/common/i/c;->h:Lcom/tkay/core/c/d;

    .line 55
    iput-object p3, p0, Lcom/tkay/core/common/i/c;->f:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/i/c;)Lcom/tkay/core/common/h/k;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/core/common/i/c;->m:Lcom/tkay/core/common/h/k;

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

    .line 179
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    return-object p1
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

    .line 66
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    invoke-static {}, Lcom/tkay/core/common/i;->i()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected final b(Lcom/tkay/core/api/AdError;)V
    .locals 3

    :try_start_0
    const-string v0, "9990"

    .line 190
    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getCode()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 191
    iget-boolean v0, p0, Lcom/tkay/core/common/i/c;->a:Z

    if-eqz v0, :cond_0

    .line 192
    iget-object v0, p0, Lcom/tkay/core/common/i/c;->g:Lcom/tkay/core/common/f/d;

    iget-object v1, p0, Lcom/tkay/core/common/i/c;->h:Lcom/tkay/core/c/d;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getPlatformMSG()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, v1, v2, p1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/c/d;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    const/4 p1, 0x1

    .line 196
    iput-boolean p1, p0, Lcom/tkay/core/common/i/c;->a:Z

    .line 197
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    new-instance v0, Lcom/tkay/core/common/i/c$1;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/i/c$1;-><init>(Lcom/tkay/core/common/i/c;)V

    const-wide/16 v1, 0x1388

    invoke-virtual {p1, v0, v1, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;J)V

    return-void

    .line 204
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/common/i/c;->g:Lcom/tkay/core/common/f/d;

    iget-object v1, p0, Lcom/tkay/core/common/i/c;->h:Lcom/tkay/core/c/d;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getPlatformMSG()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, v1, v2, p1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/c/d;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
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

    .line 72
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Content-Encoding"

    const-string v2, "gzip"

    .line 73
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Content-Type"

    const-string v2, "application/json;charset=utf-8"

    .line 74
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method protected final d()[B
    .locals 1

    .line 80
    invoke-virtual {p0}, Lcom/tkay/core/common/i/c;->g()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/i/c;->c(Ljava/lang/String;)[B

    move-result-object v0

    return-object v0
.end method

.method protected final e()Lorg/json/JSONObject;
    .locals 6

    .line 115
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->e()Lorg/json/JSONObject;

    move-result-object v0

    .line 116
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->f()Lorg/json/JSONObject;

    move-result-object v1

    :try_start_0
    const-string v2, "app_id"

    .line 119
    iget-object v3, p0, Lcom/tkay/core/common/i/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 120
    invoke-virtual {v1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v2

    .line 121
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 122
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 123
    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 126
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->l()Ljava/util/Map;

    move-result-object v1
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v1, :cond_3

    .line 128
    :try_start_1
    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v2

    if-lez v2, :cond_3

    if-eqz v1, :cond_3

    .line 130
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 131
    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_1
    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 132
    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    if-eqz v5, :cond_1

    .line 134
    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    :cond_2
    const-string v1, "custom"

    .line 137
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catch_0
    :catchall_0
    :cond_3
    return-object v0
.end method

.method protected final g()Ljava/lang/String;
    .locals 4

    .line 153
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 154
    invoke-virtual {p0}, Lcom/tkay/core/common/i/c;->e()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 156
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/core/common/i/c;->e:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "api_ver=1.0&common="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "&data="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/core/common/i/c;->f:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "&ss_a="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/tkay/core/common/i/c;->c:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/f;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    :try_start_0
    const-string v3, "common"

    .line 162
    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "ss_a"

    .line 163
    iget v3, p0, Lcom/tkay/core/common/i/c;->c:I

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 164
    iget-object v3, p0, Lcom/tkay/core/common/i/c;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "api_ver"

    const-string v3, "1.0"

    .line 165
    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "sign"

    .line 166
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 168
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 171
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected final h()Ljava/lang/String;
    .locals 1

    .line 95
    iget-object v0, p0, Lcom/tkay/core/common/i/c;->d:Ljava/lang/String;

    return-object v0
.end method

.method protected final i()Landroid/content/Context;
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/tkay/core/common/i/c;->b:Landroid/content/Context;

    return-object v0
.end method

.method protected final j()Ljava/lang/String;
    .locals 1

    .line 105
    iget-object v0, p0, Lcom/tkay/core/common/i/c;->e:Ljava/lang/String;

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
