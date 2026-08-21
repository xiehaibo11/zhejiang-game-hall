.class public final Lcom/alipay/apmobilesecuritysdk/d/c;
.super Ljava/lang/Object;
.source "SourceFile"


# direct methods
.method public static a(Landroid/content/Context;)Ljava/util/Map;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    invoke-static {p0}, Lcom/alipay/apmobilesecuritysdk/face/APSecuritySdk;->getInstance(Landroid/content/Context;)Lcom/alipay/apmobilesecuritysdk/face/APSecuritySdk;

    move-result-object v0

    invoke-static {v0}, Lcom/alipay/sdk/m/a0/b;->a(Lcom/alipay/sdk/m/a0/f;)Lcom/alipay/sdk/m/a0/b;

    move-result-object v0

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-static {p0}, Lcom/alipay/apmobilesecuritysdk/e/e;->a(Landroid/content/Context;)Lcom/alipay/apmobilesecuritysdk/e/f;

    move-result-object v2

    invoke-virtual {v0, p0}, Lcom/alipay/sdk/m/a0/b;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, p0}, Lcom/alipay/sdk/m/a0/b;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    if-eqz v2, :cond_1

    invoke-static {v3}, Lcom/alipay/sdk/m/z/a;->a(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_0

    invoke-virtual {v2}, Lcom/alipay/apmobilesecuritysdk/e/f;->b()Ljava/lang/String;

    move-result-object v3

    :cond_0
    invoke-static {v4}, Lcom/alipay/sdk/m/z/a;->a(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_1

    invoke-virtual {v2}, Lcom/alipay/apmobilesecuritysdk/e/f;->e()Ljava/lang/String;

    move-result-object v4

    :cond_1
    new-instance v2, Lcom/alipay/apmobilesecuritysdk/e/f;

    const-string v6, ""

    const-string v8, ""

    const-string v9, ""

    move-object v5, v2

    move-object v7, v3

    move-object v10, v4

    invoke-direct/range {v5 .. v10}, Lcom/alipay/apmobilesecuritysdk/e/f;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p0, :cond_2

    :try_start_0
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v6, "imei"

    :try_start_1
    invoke-virtual {v2}, Lcom/alipay/apmobilesecuritysdk/e/f;->a()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    const-string v6, "imsi"

    :try_start_2
    invoke-virtual {v2}, Lcom/alipay/apmobilesecuritysdk/e/f;->b()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    const-string v6, "mac"

    :try_start_3
    invoke-virtual {v2}, Lcom/alipay/apmobilesecuritysdk/e/f;->c()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    const-string v6, "bluetoothmac"

    :try_start_4
    invoke-virtual {v2}, Lcom/alipay/apmobilesecuritysdk/e/f;->d()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    const-string v6, "gsi"

    :try_start_5
    invoke-virtual {v2}, Lcom/alipay/apmobilesecuritysdk/e/f;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v6, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v5}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v5, "device_feature_file_name"

    const-string v6, "device_feature_file_key"

    invoke-static {v5, v6, v2}, Lcom/alipay/apmobilesecuritysdk/f/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const-string v5, "device_feature_prefs_name"

    const-string v6, "device_feature_prefs_key"

    invoke-static {p0, v5, v6, v2}, Lcom/alipay/apmobilesecuritysdk/f/a;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    invoke-static {v2}, Lcom/alipay/apmobilesecuritysdk/c/a;->a(Ljava/lang/Throwable;)V

    :cond_2
    :goto_0
    const-string v2, ""

    const-string v5, "AD1"

    invoke-interface {v1, v5, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v5, "AD2"

    invoke-interface {v1, v5, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p0}, Lcom/alipay/sdk/m/a0/b;->h(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    const-string v5, "AD3"

    invoke-interface {v1, v5, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p0}, Lcom/alipay/sdk/m/a0/b;->j(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    const-string v5, "AD5"

    invoke-interface {v1, v5, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p0}, Lcom/alipay/sdk/m/a0/b;->k(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    const-string v5, "AD6"

    invoke-interface {v1, v5, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p0}, Lcom/alipay/sdk/m/a0/b;->l(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    const-string v5, "AD7"

    invoke-interface {v1, v5, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v0, p0}, Lcom/alipay/sdk/m/a0/b;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    const-string v5, "AD9"

    invoke-interface {v1, v5, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "AD10"

    invoke-interface {v1, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->d()Ljava/lang/String;

    move-result-object v3

    const-string v4, "AD11"

    invoke-interface {v1, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v0}, Lcom/alipay/sdk/m/a0/b;->a()Ljava/lang/String;

    move-result-object v3

    const-string v4, "AD12"

    invoke-interface {v1, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->e()Ljava/lang/String;

    move-result-object v3

    const-string v4, "AD13"

    invoke-interface {v1, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->g()Ljava/lang/String;

    move-result-object v3

    const-string v4, "AD14"

    invoke-interface {v1, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->h()Ljava/lang/String;

    move-result-object v3

    const-string v4, "AD15"

    invoke-interface {v1, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->i()Ljava/lang/String;

    move-result-object v3

    const-string v4, "AD16"

    invoke-interface {v1, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "AD17"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p0}, Lcom/alipay/sdk/m/a0/b;->m(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "AD19"

    invoke-interface {v1, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->j()Ljava/lang/String;

    move-result-object v3

    const-string v4, "AD20"

    invoke-interface {v1, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "AD22"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p0}, Lcom/alipay/sdk/m/a0/b;->n(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "AD23"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p0}, Lcom/alipay/sdk/m/a0/b;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/alipay/sdk/m/z/a;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "AD24"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v0, p0}, Lcom/alipay/sdk/m/a0/b;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "AD26"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->o()Ljava/lang/String;

    move-result-object v2

    const-string v3, "AD27"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->q()Ljava/lang/String;

    move-result-object v2

    const-string v3, "AD28"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->s()Ljava/lang/String;

    move-result-object v2

    const-string v3, "AD29"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->p()Ljava/lang/String;

    move-result-object v2

    const-string v3, "AD30"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->r()Ljava/lang/String;

    move-result-object v2

    const-string v3, "AD31"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->m()Ljava/lang/String;

    move-result-object v2

    const-string v3, "AD32"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->n()Ljava/lang/String;

    move-result-object v2

    const-string v3, "AD33"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p0}, Lcom/alipay/sdk/m/a0/b;->o(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "AD34"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p0}, Lcom/alipay/sdk/m/a0/b;->p(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "AD35"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v0, p0}, Lcom/alipay/sdk/m/a0/b;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "AD36"

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->l()Ljava/lang/String;

    move-result-object v0

    const-string v2, "AD37"

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->k()Ljava/lang/String;

    move-result-object v0

    const-string v2, "AD38"

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p0}, Lcom/alipay/sdk/m/a0/b;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "AD39"

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p0}, Lcom/alipay/sdk/m/a0/b;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "AD40"

    invoke-interface {v1, v0, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->b()Ljava/lang/String;

    move-result-object p0

    const-string v0, "AD41"

    invoke-interface {v1, v0, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/m/a0/b;->c()Ljava/lang/String;

    move-result-object p0

    const-string v0, "AD42"

    invoke-interface {v1, v0, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v1
.end method
