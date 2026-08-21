.class public final Lcom/mbridge/msdk/foundation/tools/r;
.super Ljava/lang/Object;
.source "PermMappingUtil.java"


# direct methods
.method public static a(Lorg/json/JSONArray;)Lorg/json/JSONArray;
    .locals 3

    .line 9
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    const/4 v1, 0x0

    .line 11
    :goto_0
    :try_start_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 12
    invoke-virtual {p0, v1}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 1023
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/p;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 14
    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catch_0
    move-exception p0

    .line 17
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    return-object v0
.end method
