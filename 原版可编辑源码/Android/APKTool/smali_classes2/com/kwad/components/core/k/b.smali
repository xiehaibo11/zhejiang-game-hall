.class public final Lcom/kwad/components/core/k/b;
.super Ljava/lang/Object;


# direct methods
.method public static ae(Landroid/content/Context;)Z
    .locals 6

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    const-string v1, "ksadsdk_local_ad_force_active"

    invoke-virtual {p0, v1, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    new-instance v0, Lcom/kwad/components/core/k/a;

    invoke-direct {v0}, Lcom/kwad/components/core/k/a;-><init>()V

    const-string v1, "ksadsdk_local_ad_force_active_data"

    invoke-interface {p0, v1}, Landroid/content/SharedPreferences;->contains(Ljava/lang/String;)Z

    move-result v2

    const-string v3, "LocalAdForceActiveHelper"

    if-eqz v2, :cond_2

    const/4 v2, 0x0

    invoke-interface {p0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v4}, Lcom/kwad/components/core/k/a;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    invoke-static {v2}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zD()I

    move-result v2

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zE()I

    move-result v4

    invoke-virtual {v0, v2, v4}, Lcom/kwad/components/core/k/a;->h(II)Z

    move-result v2

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "addCount contains success: "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    const-string v2, "addCount not contains"

    invoke-static {v3, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/kwad/components/core/k/a;->oc()V

    const/4 v2, 0x1

    :goto_1
    if-eqz v2, :cond_3

    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-virtual {v0}, Lcom/kwad/components/core/k/a;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p0, v1, v0}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_3
    return v2
.end method
