.class public final Lcom/tkay/basead/g/f;
.super Lcom/tkay/core/common/h/a;


# instance fields
.field a:Ljava/lang/String;

.field b:Lorg/json/JSONObject;

.field c:I

.field d:Ljava/lang/String;

.field e:Lcom/tkay/core/common/f/z;

.field f:Ljava/util/Map;
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
.method public constructor <init>(ILcom/tkay/core/common/f/z;Ljava/lang/String;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Lcom/tkay/core/common/f/z;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 43
    invoke-direct {p0}, Lcom/tkay/core/common/h/a;-><init>()V

    .line 44
    iput p1, p0, Lcom/tkay/basead/g/f;->c:I

    .line 45
    iput-object p2, p0, Lcom/tkay/basead/g/f;->e:Lcom/tkay/core/common/f/z;

    .line 46
    iput-object p4, p0, Lcom/tkay/basead/g/f;->f:Ljava/util/Map;

    .line 47
    iput-object p3, p0, Lcom/tkay/basead/g/f;->d:Ljava/lang/String;

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

    const/4 p1, 0x0

    return-object p1
.end method

.method protected final a(Lcom/tkay/core/api/AdError;)V
    .locals 19

    move-object/from16 v0, p0

    .line 156
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 157
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/g/f;->c()Ljava/util/Map;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 160
    :try_start_0
    invoke-interface {v2}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 161
    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v1, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 168
    :catch_0
    :cond_0
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v9

    .line 169
    iget-object v1, v0, Lcom/tkay/basead/g/f;->b:Lorg/json/JSONObject;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    :cond_1
    const-string v1, ""

    :goto_1
    move-object v10, v1

    .line 170
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/g/f;->b()Ljava/lang/String;

    move-result-object v8

    const/16 v1, 0x3e8

    .line 172
    invoke-static {v1}, Lcom/tkay/core/common/f/n;->a(I)Ljava/lang/String;

    move-result-object v11

    .line 174
    invoke-static {}, Lcom/tkay/core/common/u;->a()Lcom/tkay/core/common/u;

    move-result-object v6

    const/4 v7, 0x1

    invoke-virtual/range {v6 .. v11}, Lcom/tkay/core/common/u;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 175
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object v13

    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/api/AdError;->getPlatformMSG()Ljava/lang/String;

    move-result-object v14

    iget-object v15, v0, Lcom/tkay/basead/g/f;->a:Ljava/lang/String;

    const-string v12, "tk"

    const-string v16, ""

    const-string v17, "1"

    const-string v18, ""

    invoke-static/range {v12 .. v18}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method protected final a(I)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method protected final b()Ljava/lang/String;
    .locals 4

    .line 69
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/g/f;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 70
    new-instance v0, Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/tkay/basead/g/f;->d:Ljava/lang/String;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/basead/g/f;->b:Lorg/json/JSONObject;

    .line 72
    iget-object v0, p0, Lcom/tkay/basead/g/f;->f:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    .line 74
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 75
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 76
    iget-object v3, p0, Lcom/tkay/basead/g/f;->b:Lorg/json/JSONObject;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v3, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 81
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 83
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    invoke-static {}, Lcom/tkay/core/common/i;->g()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/g/f;->a:Ljava/lang/String;

    return-object v0
.end method

.method protected final b(Lcom/tkay/core/api/AdError;)V
    .locals 0

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 2

    .line 52
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 55
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/g/f;->b:Lorg/json/JSONObject;

    const-string v1, "scenario"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 57
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

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

    .line 90
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Content-Encoding"

    const-string v2, "gzip"

    .line 91
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Content-Type"

    const-string v2, "application/json;charset=utf-8"

    .line 92
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 94
    iget-object v1, p0, Lcom/tkay/basead/g/f;->e:Lcom/tkay/core/common/f/z;

    if-eqz v1, :cond_0

    .line 95
    invoke-virtual {v1}, Lcom/tkay/core/common/f/z;->k()Lcom/tkay/core/common/f/j;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 97
    iget v2, p0, Lcom/tkay/basead/g/f;->c:I

    invoke-static {v2, v1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/j;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 98
    invoke-static {}, Lcom/tkay/core/common/l/d;->i()Ljava/lang/String;

    move-result-object v1

    .line 99
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "User-Agent"

    .line 100
    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-object v0
.end method

.method protected final d()[B
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/tkay/basead/g/f;->b:Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/basead/g/f;->c(Ljava/lang/String;)[B

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
