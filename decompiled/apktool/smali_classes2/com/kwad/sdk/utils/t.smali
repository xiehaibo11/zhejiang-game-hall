.class public final Lcom/kwad/sdk/utils/t;
.super Ljava/lang/Object;


# direct methods
.method public static I(Ljava/util/List;)Lorg/json/JSONArray;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/util/List<",
            "TT;>;)",
            "Lorg/json/JSONArray;"
        }
    .end annotation

    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    if-eqz p0, :cond_5

    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_2

    :cond_0
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    instance-of v2, v1, Lorg/json/JSONObject;

    if-eqz v2, :cond_2

    :goto_1
    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    :cond_2
    instance-of v2, v1, Lcom/kwad/sdk/core/b;

    if-eqz v2, :cond_3

    check-cast v1, Lcom/kwad/sdk/core/b;

    invoke-interface {v1}, Lcom/kwad/sdk/core/b;->toJson()Lorg/json/JSONObject;

    move-result-object v1

    goto :goto_1

    :cond_3
    instance-of v2, v1, Ljava/lang/String;

    if-eqz v2, :cond_4

    goto :goto_1

    :cond_4
    new-instance p0, Ljava/lang/IllegalArgumentException;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "<T> now suppprt type: "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_5
    :goto_2
    return-object v0
.end method

.method public static a(Ljava/lang/String;Lcom/kwad/sdk/core/c;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T::",
            "Lcom/kwad/sdk/core/b;",
            ">(",
            "Ljava/lang/String;",
            "Lcom/kwad/sdk/core/c<",
            "TT;>;)",
            "Ljava/util/List<",
            "TT;>;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p0}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    const/4 p0, 0x0

    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge p0, v2, :cond_1

    invoke-virtual {v1, p0}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v2

    invoke-interface {p1}, Lcom/kwad/sdk/core/c;->yV()Lcom/kwad/sdk/core/b;

    move-result-object v3

    invoke-interface {v3, v2}, Lcom/kwad/sdk/core/b;->parseJson(Lorg/json/JSONObject;)V

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 p0, p0, 0x1

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_1
    return-object v0
.end method

.method public static a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    :cond_0
    if-nez p2, :cond_1

    return-void

    :cond_1
    :try_start_0
    invoke-interface {p2}, Lcom/kwad/sdk/core/b;->toJson()Lorg/json/JSONObject;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public static fw(Ljava/lang/String;)Ljava/util/List;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "TT;>;"
        }
    .end annotation

    invoke-static {p0}, Lcom/kwad/sdk/utils/u;->fw(Ljava/lang/String;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method public static h(Lorg/json/JSONArray;)Ljava/util/List;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lorg/json/JSONArray;",
            ")",
            "Ljava/util/List<",
            "TT;>;"
        }
    .end annotation

    invoke-static {p0}, Lcom/kwad/sdk/utils/u;->h(Lorg/json/JSONArray;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method public static merge(Lorg/json/JSONObject;Lorg/json/JSONObject;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/u;->merge(Lorg/json/JSONObject;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static parseJSON2MapString(Ljava/lang/String;)Ljava/util/Map;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    invoke-static {p0}, Lcom/kwad/sdk/utils/u;->parseJSON2MapString(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p0

    return-object p0
.end method

.method public static parseMap2JSON(Ljava/util/Map;)Lorg/json/JSONObject;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lorg/json/JSONObject;"
        }
    .end annotation

    invoke-static {p0}, Lcom/kwad/sdk/utils/u;->parseMap2JSON(Ljava/util/Map;)Lorg/json/JSONObject;

    move-result-object p0

    return-object p0
.end method

.method public static putValue(Lorg/json/JSONArray;Lorg/json/JSONObject;)V
    .locals 0

    invoke-virtual {p0, p1}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    return-void
.end method

.method public static putValue(Lorg/json/JSONObject;Ljava/lang/String;B)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;B)V

    return-void
.end method

.method public static putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-static {p0, p1, p2, p3}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    return-void
.end method

.method public static putValue(Lorg/json/JSONObject;Ljava/lang/String;F)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;F)V

    return-void
.end method

.method public static putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    return-void
.end method

.method public static putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-static {p0, p1, p2, p3}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    return-void
.end method

.method public static putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lorg/json/JSONObject;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "*>;)V"
        }
    .end annotation

    if-nez p0, :cond_0

    return-void

    :cond_0
    if-nez p2, :cond_1

    return-void

    :cond_1
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    const/4 v1, 0x0

    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    const/4 v2, 0x1

    :catch_0
    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_5

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    instance-of v4, v3, Lcom/kwad/sdk/core/b;

    if-eqz v4, :cond_2

    check-cast v3, Lcom/kwad/sdk/core/b;

    invoke-interface {v3}, Lcom/kwad/sdk/core/b;->toJson()Lorg/json/JSONObject;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONArray;Lorg/json/JSONObject;)V

    :goto_1
    move v1, v2

    goto :goto_0

    :cond_2
    instance-of v4, v3, Ljava/lang/String;

    if-nez v4, :cond_4

    instance-of v4, v3, Ljava/lang/Integer;

    if-nez v4, :cond_4

    instance-of v4, v3, Ljava/lang/Long;

    if-nez v4, :cond_4

    instance-of v4, v3, Lorg/json/JSONObject;

    if-nez v4, :cond_4

    instance-of v4, v3, Lorg/json/JSONArray;

    if-nez v4, :cond_4

    instance-of v4, v3, Ljava/lang/Double;

    if-nez v4, :cond_4

    instance-of v4, v3, Ljava/lang/Boolean;

    if-eqz v4, :cond_3

    goto :goto_2

    :cond_3
    instance-of v4, v3, Ljava/lang/Float;

    if-eqz v4, :cond_5

    :try_start_0
    check-cast v3, Ljava/lang/Float;

    invoke-virtual {v3}, Ljava/lang/Float;->floatValue()F

    move-result v3

    float-to-double v3, v3

    invoke-virtual {v0, v3, v4}, Lorg/json/JSONArray;->put(D)Lorg/json/JSONArray;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :cond_4
    :goto_2
    invoke-virtual {v0, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_1

    :cond_5
    if-eqz v1, :cond_6

    invoke-static {p0, p1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;)V

    :cond_6
    return-void
.end method

.method public static putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;)V

    return-void
.end method

.method public static putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V
    .locals 0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    return-void
.end method

.method public static toJsonArray(Ljava/util/List;)Lorg/json/JSONArray;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lorg/json/JSONArray;"
        }
    .end annotation

    invoke-static {p0}, Lcom/kwad/sdk/utils/u;->toJsonArray(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object p0

    return-object p0
.end method
