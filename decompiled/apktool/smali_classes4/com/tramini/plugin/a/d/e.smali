.class public final Lcom/tramini/plugin/a/d/e;
.super Lcom/tramini/plugin/a/d/a;


# static fields
.field public static final o:I = 0x2711


# instance fields
.field private p:Landroid/content/Context;

.field private q:Ljava/lang/String;

.field private r:Lorg/json/JSONObject;

.field private s:Lorg/json/JSONObject;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Lorg/json/JSONObject;Lorg/json/JSONObject;)V
    .locals 0

    .line 43
    invoke-direct {p0}, Lcom/tramini/plugin/a/d/a;-><init>()V

    .line 44
    iput-object p1, p0, Lcom/tramini/plugin/a/d/e;->p:Landroid/content/Context;

    .line 45
    iput-object p2, p0, Lcom/tramini/plugin/a/d/e;->q:Ljava/lang/String;

    .line 47
    iput-object p3, p0, Lcom/tramini/plugin/a/d/e;->r:Lorg/json/JSONObject;

    .line 48
    iput-object p4, p0, Lcom/tramini/plugin/a/d/e;->s:Lorg/json/JSONObject;

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

    .line 128
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method protected final b()Ljava/lang/String;
    .locals 2

    .line 59
    iget-object v0, p0, Lcom/tramini/plugin/a/d/e;->p:Landroid/content/Context;

    invoke-static {v0}, Lcom/tramini/plugin/b/b;->a(Landroid/content/Context;)Lcom/tramini/plugin/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tramini/plugin/b/b;->b()Lcom/tramini/plugin/b/a;

    move-result-object v0

    .line 60
    invoke-virtual {v0}, Lcom/tramini/plugin/b/a;->e()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    .line 61
    iget-object v1, p0, Lcom/tramini/plugin/a/d/e;->q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tramini/plugin/a/c/c;

    .line 63
    invoke-static {}, Lcom/tramini/plugin/a/a;->a()Lcom/tramini/plugin/a/a;

    invoke-static {}, Lcom/tramini/plugin/a/a;->c()Ljava/lang/String;

    move-result-object v1

    if-eqz v0, :cond_0

    .line 1025
    iget-object v1, v0, Lcom/tramini/plugin/a/c/c;->a:Ljava/lang/String;

    :cond_0
    return-object v1
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
    invoke-virtual {p0}, Lcom/tramini/plugin/a/d/e;->f()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tramini/plugin/a/d/e;->b(Ljava/lang/String;)[B

    move-result-object v0

    return-object v0
.end method

.method protected final e()Lorg/json/JSONObject;
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/tramini/plugin/a/d/e;->r:Lorg/json/JSONObject;

    if-nez v0, :cond_0

    .line 86
    invoke-super {p0}, Lcom/tramini/plugin/a/d/a;->e()Lorg/json/JSONObject;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method protected final f()Ljava/lang/String;
    .locals 5

    .line 93
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 94
    invoke-virtual {p0}, Lcom/tramini/plugin/a/d/e;->e()Lorg/json/JSONObject;

    move-result-object v1

    :try_start_0
    const-string v2, "ds_pl"

    const-string v3, "3"

    .line 97
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 103
    :catchall_0
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tramini/plugin/a/g/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 105
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    .line 106
    iget-object v3, p0, Lcom/tramini/plugin/a/d/e;->s:Lorg/json/JSONObject;

    invoke-virtual {v2, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 108
    invoke-virtual {v2}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tramini/plugin/a/g/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 109
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "d_version=1.0&dt="

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "&cm="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/tramini/plugin/a/g/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    :try_start_1
    const-string v4, "cm"

    .line 112
    invoke-virtual {v0, v4, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "dt"

    .line 113
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "d_version"

    const-string v2, "1.0"

    .line 114
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "d_sign"

    .line 115
    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "pl_c"

    const-string v2, "4"

    .line 116
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 118
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 121
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final g()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
