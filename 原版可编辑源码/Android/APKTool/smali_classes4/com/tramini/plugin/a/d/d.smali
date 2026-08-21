.class public final Lcom/tramini/plugin/a/d/d;
.super Lcom/tramini/plugin/a/d/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 26
    invoke-direct {p0}, Lcom/tramini/plugin/a/d/a;-><init>()V

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

    .line 88
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method protected final b()Ljava/lang/String;
    .locals 1

    .line 35
    invoke-static {}, Lcom/tramini/plugin/a/a;->a()Lcom/tramini/plugin/a/a;

    invoke-static {}, Lcom/tramini/plugin/a/a;->b()Ljava/lang/String;

    move-result-object v0

    return-object v0
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

    .line 40
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Content-Type"

    const-string v2, "application/json;charset=utf-8"

    .line 41
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method protected final d()[B
    .locals 2

    .line 79
    :try_start_0
    invoke-virtual {p0}, Lcom/tramini/plugin/a/d/d;->f()Ljava/lang/String;

    move-result-object v0

    const-string v1, "utf-8"

    invoke-virtual {v0, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 83
    :catch_0
    invoke-virtual {p0}, Lcom/tramini/plugin/a/d/d;->f()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    return-object v0
.end method

.method protected final e()Lorg/json/JSONObject;
    .locals 5

    const-string v0, "1"

    .line 46
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 47
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tramini/plugin/a/a/c;->b()Landroid/content/Context;

    move-result-object v2

    :try_start_0
    const-string v3, "platform"

    .line 49
    invoke-virtual {v1, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "os_vn"

    .line 50
    invoke-static {}, Lcom/tramini/plugin/a/g/e;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "os_vc"

    .line 51
    invoke-static {}, Lcom/tramini/plugin/a/g/e;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "package_name"

    .line 52
    invoke-static {v2}, Lcom/tramini/plugin/a/g/e;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "app_vn"

    .line 53
    invoke-static {v2}, Lcom/tramini/plugin/a/g/e;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "app_vc"

    .line 54
    invoke-static {v2}, Lcom/tramini/plugin/a/g/e;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "sdk_ver"

    const-string v4, "1.0.4"

    .line 55
    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "android_id"

    .line 56
    invoke-static {v2}, Lcom/tramini/plugin/a/g/e;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "is_proxy"

    .line 57
    invoke-static {v2}, Lcom/tramini/plugin/a/g/h;->a(Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "0"

    :goto_0
    invoke-virtual {v1, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "ds_pl"

    const-string v2, "3"

    .line 61
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-object v1
.end method

.method public final g()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method
