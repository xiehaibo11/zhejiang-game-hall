.class public final Lcom/tramini/plugin/a/e/c;
.super Lcom/tramini/plugin/a/e/f;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Lcom/tramini/plugin/a/e/f;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lorg/json/JSONArray;)Lcom/tramini/plugin/a/c/a;
    .locals 11

    if-eqz p0, :cond_6

    .line 48
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 50
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ","

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 54
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 55
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/tramini/plugin/a/e/c;->a(Ljava/lang/Class;Ljava/util/List;)V

    .line 56
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    new-array v2, v1, [Ljava/lang/reflect/Field;

    .line 57
    invoke-interface {v0, v2}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    if-eqz v1, :cond_6

    const/4 v0, 0x0

    move v3, v0

    :goto_0
    if-ge v3, v1, :cond_6

    .line 60
    aget-object v4, v2, v3

    const/4 v5, 0x1

    .line 61
    invoke-virtual {v4, v5}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 62
    invoke-virtual {v4, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_4

    .line 63
    instance-of v5, v4, Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v5, :cond_4

    :try_start_1
    const-string v5, ""

    .line 66
    new-instance v6, Lorg/json/JSONObject;

    invoke-direct {v6}, Lorg/json/JSONObject;-><init>()V

    move v7, v0

    .line 67
    :goto_1
    invoke-virtual {p4}, Lorg/json/JSONArray;->length()I

    move-result v8

    if-ge v7, v8, :cond_2

    .line 68
    invoke-virtual {p4, v7}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v8

    .line 69
    invoke-virtual {p3, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    const-string v10, "all"

    .line 70
    invoke-static {v9, v10}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v10

    if-eqz v10, :cond_0

    move-object v5, v8

    goto :goto_2

    .line 74
    :cond_0
    move-object v10, v4

    check-cast v10, Lorg/json/JSONObject;

    invoke-static {v9, v10}, Lcom/tramini/plugin/a/e/c;->a(Ljava/lang/String;Lorg/json/JSONObject;)Ljava/lang/String;

    move-result-object v9

    .line 75
    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-nez v10, :cond_1

    .line 76
    invoke-virtual {v6, v8, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    :goto_2
    add-int/lit8 v7, v7, 0x1

    goto :goto_1

    .line 89
    :cond_2
    invoke-virtual {v6}, Lorg/json/JSONObject;->length()I

    move-result v7

    if-eqz v7, :cond_5

    .line 90
    new-instance v7, Lcom/tramini/plugin/a/c/a;

    invoke-direct {v7}, Lcom/tramini/plugin/a/c/a;-><init>()V

    .line 91
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_3

    .line 92
    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v6, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 94
    :cond_3
    iput-object v6, v7, Lcom/tramini/plugin/a/c/a;->a:Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object v7

    :cond_4
    if-eqz v4, :cond_5

    .line 112
    :try_start_2
    invoke-virtual {v4}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p1, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_5

    .line 113
    invoke-static {v4, p1, p2, p3, p4}, Lcom/tramini/plugin/a/e/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lorg/json/JSONArray;)Lcom/tramini/plugin/a/c/a;

    move-result-object v4
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    if-eqz v4, :cond_5

    return-object v4

    :catchall_0
    :cond_5
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :catchall_1
    move-exception p0

    .line 122
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_6
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Lorg/json/JSONObject;Lcom/tramini/plugin/a/c/c;Ljava/lang/String;)Lcom/tramini/plugin/a/c/a;
    .locals 2

    const-string v0, "pre"

    .line 27
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "in_na"

    .line 35
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, p2}, Lcom/tramini/plugin/a/e/c;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    .line 37
    iget-object p1, p1, Lcom/tramini/plugin/a/c/c;->e:Lorg/json/JSONArray;

    const-string v1, ""

    invoke-static {p2, v1, v0, p0, p1}, Lcom/tramini/plugin/a/e/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lorg/json/JSONArray;)Lcom/tramini/plugin/a/c/a;

    move-result-object p0

    return-object p0
.end method

.method private static a(Ljava/lang/String;Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 3

    :try_start_0
    const-string v0, ":"

    .line 130
    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    const/4 v0, 0x0

    .line 132
    :goto_0
    array-length v1, p0

    if-ge v0, v1, :cond_1

    add-int/lit8 v1, v0, 0x1

    .line 133
    array-length v2, p0

    if-ne v1, v2, :cond_0

    .line 134
    aget-object p0, p0, v0

    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 136
    :cond_0
    aget-object v0, p0, v0

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move v0, v1

    goto :goto_0

    :catchall_0
    :cond_1
    const-string p0, ""

    return-object p0
.end method
