.class public final Lcom/tkay/core/common/h/n;
.super Lcom/tkay/core/common/h/a;


# instance fields
.field a:Lcom/tkay/core/common/f/n;

.field b:Z


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/n;)V
    .locals 1

    .line 33
    invoke-direct {p0}, Lcom/tkay/core/common/h/a;-><init>()V

    const/4 v0, 0x1

    .line 30
    iput-boolean v0, p0, Lcom/tkay/core/common/h/n;->b:Z

    .line 34
    iput-object p1, p0, Lcom/tkay/core/common/h/n;->a:Lcom/tkay/core/common/f/n;

    return-void
.end method


# virtual methods
.method protected final a()I
    .locals 1

    .line 48
    iget-object v0, p0, Lcom/tkay/core/common/h/n;->a:Lcom/tkay/core/common/f/n;

    iget v0, v0, Lcom/tkay/core/common/f/n;->b:I

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

    .line 53
    iget-object v0, p0, Lcom/tkay/core/common/h/n;->a:Lcom/tkay/core/common/f/n;

    iget-object v0, v0, Lcom/tkay/core/common/f/n;->d:Ljava/lang/String;

    return-object v0
.end method

.method protected final b(Lcom/tkay/core/api/AdError;)V
    .locals 0

    return-void
.end method

.method protected final c()Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 58
    iget-object v0, p0, Lcom/tkay/core/common/h/n;->a:Lcom/tkay/core/common/f/n;

    iget-object v0, v0, Lcom/tkay/core/common/f/n;->c:Ljava/lang/String;

    .line 59
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    .line 61
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 62
    invoke-virtual {v2}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v0

    .line 63
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 64
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 65
    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    :cond_0
    return-object v1
.end method

.method protected final d()[B
    .locals 6

    .line 76
    iget-object v0, p0, Lcom/tkay/core/common/h/n;->a:Lcom/tkay/core/common/f/n;

    iget-object v0, v0, Lcom/tkay/core/common/f/n;->c:Ljava/lang/String;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/h/n;->a:Lcom/tkay/core/common/f/n;

    iget-object v0, v0, Lcom/tkay/core/common/f/n;->c:Ljava/lang/String;

    const-string v3, "gzip"

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    const/4 v3, 0x0

    .line 80
    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    iget-object v5, p0, Lcom/tkay/core/common/h/n;->a:Lcom/tkay/core/common/f/n;

    iget-object v5, v5, Lcom/tkay/core/common/f/n;->e:Ljava/lang/String;

    invoke-direct {v4, v5}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 82
    :try_start_1
    iget-boolean v3, p0, Lcom/tkay/core/common/h/n;->b:Z

    if-eqz v3, :cond_1

    const-string v3, "ofl"

    .line 83
    invoke-virtual {v4, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception v1

    move-object v3, v4

    goto :goto_1

    :catch_1
    move-exception v1

    .line 87
    :goto_1
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    move-object v4, v3

    :cond_1
    :goto_2
    if-eqz v0, :cond_3

    if-eqz v4, :cond_2

    .line 91
    invoke-virtual {v4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/h/n;->c(Ljava/lang/String;)[B

    move-result-object v0

    return-object v0

    :cond_2
    new-array v0, v2, [B

    return-object v0

    :cond_3
    if-eqz v4, :cond_4

    .line 94
    invoke-virtual {v4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    return-object v0

    :cond_4
    new-array v0, v2, [B

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

.method protected final o()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final p()V
    .locals 1

    const/4 v0, 0x0

    .line 38
    iput-boolean v0, p0, Lcom/tkay/core/common/h/n;->b:Z

    return-void
.end method

.method public final q()Lcom/tkay/core/common/f/n;
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/tkay/core/common/h/n;->a:Lcom/tkay/core/common/f/n;

    return-object v0
.end method
