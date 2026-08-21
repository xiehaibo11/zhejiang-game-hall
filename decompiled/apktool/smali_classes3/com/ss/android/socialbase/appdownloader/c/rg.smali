.class public Lcom/ss/android/socialbase/appdownloader/c/rg;
.super Ljava/lang/Object;


# static fields
.field private static final rg:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/ss/android/socialbase/appdownloader/fw$rg;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 24
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg:Ljava/util/HashMap;

    return-void
.end method

.method private static df(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/fw$rg;
    .locals 3

    .line 243
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg:Ljava/util/HashMap;

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 245
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg:Ljava/util/HashMap;

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;

    if-eqz p0, :cond_1

    move-object v1, p0

    goto :goto_0

    .line 250
    :cond_0
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/fw;->df(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/fw$rg;

    move-result-object v0

    .line 251
    sget-object v2, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg:Ljava/util/HashMap;

    invoke-virtual {v2, p0, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    if-eqz v0, :cond_1

    move-object v1, v0

    :cond_1
    :goto_0
    return-object v1
.end method

.method private static df(Lorg/json/JSONArray;Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    if-nez p1, :cond_0

    goto :goto_1

    .line 231
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v1

    move v2, v0

    :goto_0
    if-ge v2, v1, :cond_2

    .line 233
    invoke-virtual {p0, v2}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    .line 234
    invoke-virtual {p1, v3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    return v0
.end method

.method public static df(Lorg/json/JSONObject;)Z
    .locals 6

    const/4 v0, 0x1

    if-nez p0, :cond_0

    return v0

    .line 62
    :cond_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const-string v2, "allow_os_api_range"

    .line 63
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const/4 v3, -0x1

    const-string v4, "min_os_api"

    .line 64
    invoke-virtual {p0, v4, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 65
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x0

    if-nez v3, :cond_3

    :try_start_0
    const-string p0, "[-,]"

    .line 67
    invoke-virtual {v2, p0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    move v2, v4

    .line 68
    :goto_0
    array-length v3, p0

    if-ge v2, v3, :cond_2

    .line 69
    aget-object v3, p0, v2

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    add-int/lit8 v5, v2, 0x1

    .line 70
    aget-object v5, p0, v5

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-lt v1, v3, :cond_1

    if-gt v1, v5, :cond_1

    return v0

    :cond_1
    add-int/lit8 v2, v2, 0x2

    goto :goto_0

    :catch_0
    move-exception p0

    .line 76
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    return v4

    :cond_3
    if-lez p0, :cond_5

    if-lt v1, p0, :cond_4

    goto :goto_1

    :cond_4
    move v0, v4

    :cond_5
    :goto_1
    return v0
.end method

.method public static q(Lorg/json/JSONObject;)Z
    .locals 2

    const/4 v0, 0x1

    if-nez p0, :cond_0

    return v0

    .line 92
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pp;->rg()Z

    move-result v1

    if-eqz v1, :cond_1

    return v0

    :cond_1
    const-string v1, "scy_mode"

    .line 95
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    if-eq p0, v0, :cond_2

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static rg(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/fw$rg;
    .locals 2

    .line 260
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    .line 264
    :cond_0
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 265
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/c/rg;->df(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/fw$rg;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_1

    return-object p0

    :catchall_0
    :cond_1
    return-object v1
.end method

.method public static rg(Lorg/json/JSONArray;)Z
    .locals 12

    const/4 v0, 0x1

    if-nez p0, :cond_0

    return v0

    .line 135
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-nez v1, :cond_1

    return v0

    :cond_1
    const/4 v0, 0x0

    move v2, v0

    move v3, v2

    :goto_0
    if-ge v2, v1, :cond_6

    .line 145
    invoke-virtual {p0, v2}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v4

    if-eqz v4, :cond_5

    const-string v5, "package_names"

    .line 147
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "version_allow"

    .line 148
    invoke-virtual {v4, v6}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v6

    const-string v7, "version_block"

    .line 149
    invoke-virtual {v4, v7}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v7

    const-string v8, "allow_version_range"

    .line 151
    invoke-virtual {v4, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 153
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_2

    return v0

    :cond_2
    const-string v8, ","

    .line 156
    invoke-virtual {v5, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    .line 157
    array-length v8, v5

    move v9, v0

    :goto_1
    if-ge v9, v8, :cond_5

    aget-object v10, v5, v9

    const-string v11, "market"

    .line 158
    invoke-virtual {v11, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_3

    .line 159
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rz()Ljava/lang/String;

    move-result-object v10

    .line 161
    :cond_3
    invoke-static {v10}, Lcom/ss/android/socialbase/appdownloader/c/rg;->df(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/fw$rg;

    move-result-object v10

    if-eqz v10, :cond_4

    .line 163
    invoke-static {v6, v7, v4, v10}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONArray;Lorg/json/JSONArray;Ljava/lang/String;Lcom/ss/android/socialbase/appdownloader/fw$rg;)Z

    move-result v3

    if-nez v3, :cond_4

    return v0

    :cond_4
    add-int/lit8 v9, v9, 0x1

    goto :goto_1

    :cond_5
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_6
    return v3
.end method

.method public static rg(Lorg/json/JSONArray;Ljava/lang/String;)Z
    .locals 5

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    .line 27
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    .line 30
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v1

    move v2, v0

    :goto_0
    if-ge v2, v1, :cond_2

    .line 32
    invoke-virtual {p0, v2}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v3

    if-eqz v3, :cond_1

    const-string v4, "type"

    .line 33
    invoke-virtual {v3, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 34
    invoke-static {v3}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONObject;)Z

    move-result v3

    if-eqz v3, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    return v0
.end method

.method private static rg(Lorg/json/JSONArray;Lorg/json/JSONArray;Ljava/lang/String;Lcom/ss/android/socialbase/appdownloader/fw$rg;)Z
    .locals 4

    .line 186
    invoke-virtual {p3}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->fw()Ljava/lang/String;

    move-result-object v0

    .line 187
    invoke-virtual {p3}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->c()I

    move-result p3

    .line 188
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 194
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-nez v1, :cond_1

    :try_start_0
    const-string p0, "[-,]"

    .line 196
    invoke-virtual {p2, p0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    move p1, v2

    .line 197
    :goto_0
    array-length p2, p0

    if-ge p1, p2, :cond_3

    .line 198
    aget-object p2, p0, p1

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    add-int/lit8 v0, p1, 0x1

    .line 199
    aget-object v0, p0, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-lt p3, p2, :cond_0

    if-gt p3, v0, :cond_0

    return v3

    :cond_0
    add-int/lit8 p1, p1, 0x2

    goto :goto_0

    :catch_0
    move-exception p0

    .line 205
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_1

    :cond_1
    if-eqz p0, :cond_2

    .line 207
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result p2

    if-lez p2, :cond_2

    .line 209
    invoke-static {p0, v0}, Lcom/ss/android/socialbase/appdownloader/c/rg;->df(Lorg/json/JSONArray;Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_3

    return v3

    :cond_2
    if-eqz p1, :cond_3

    .line 212
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result p0

    if-lez p0, :cond_3

    .line 214
    invoke-static {p1, v0}, Lcom/ss/android/socialbase/appdownloader/c/rg;->df(Lorg/json/JSONArray;Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_3

    return v3

    :cond_3
    :goto_1
    return v2
.end method

.method public static rg(Lorg/json/JSONObject;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    const-string v1, "device_requirements"

    .line 50
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    .line 51
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/c/rg;->df(Lorg/json/JSONObject;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-static {v1}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONArray;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/c/rg;->q(Lorg/json/JSONObject;)Z

    move-result p0

    if-eqz p0, :cond_1

    const/4 v0, 0x1

    :cond_1
    return v0
.end method

.method public static rg(Lorg/json/JSONObject;Landroid/content/Context;Ljava/lang/String;)Z
    .locals 4

    .line 282
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_1

    if-eqz p1, :cond_1

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "s"

    .line 285
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :try_start_0
    const-string v2, "az"

    .line 287
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, v0}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "ba"

    .line 288
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, v0}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 289
    const-class v0, Landroid/content/ContextWrapper;

    invoke-virtual {v0, v2}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    const/4 v2, 0x1

    .line 290
    invoke-virtual {v0, v2}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 291
    invoke-virtual {v0, p1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    .line 292
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0, p0}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object p0

    .line 293
    invoke-virtual {p0, v2}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 294
    invoke-virtual {p0, p1, p2}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v2

    :catch_0
    :cond_1
    :goto_0
    return v1
.end method
