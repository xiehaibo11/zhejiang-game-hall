.class public Lorg/json/CookieList;
.super Ljava/lang/Object;
.source "CookieList.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static toJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 4
    .param p0, "string"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 50
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 51
    .local v0, "jo":Lorg/json/JSONObject;
    new-instance v1, Lorg/json/JSONTokener;

    invoke-direct {v1, p0}, Lorg/json/JSONTokener;-><init>(Ljava/lang/String;)V

    .line 52
    .local v1, "x":Lorg/json/JSONTokener;
    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONTokener;->more()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 53
    const/16 v2, 0x3d

    invoke-virtual {v1, v2}, Lorg/json/JSONTokener;->nextTo(C)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lorg/json/Cookie;->unescape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 54
    .local v3, "name":Ljava/lang/String;
    invoke-virtual {v1, v2}, Lorg/json/JSONTokener;->next(C)C

    .line 55
    const/16 v2, 0x3b

    invoke-virtual {v1, v2}, Lorg/json/JSONTokener;->nextTo(C)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lorg/json/Cookie;->unescape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 56
    invoke-virtual {v1}, Lorg/json/JSONTokener;->next()C

    .line 57
    .end local v3    # "name":Ljava/lang/String;
    goto :goto_0

    .line 58
    :cond_0
    return-object v0
.end method

.method public static toString(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 5
    .param p0, "jo"    # Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 71
    const/4 v0, 0x0

    .line 72
    .local v0, "b":Z
    invoke-virtual {p0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 74
    .local v1, "keys":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    .line 75
    .local v2, "sb":Ljava/lang/StringBuilder;
    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    .line 76
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 77
    .local v3, "string":Ljava/lang/String;
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 78
    if-eqz v0, :cond_1

    .line 79
    const/16 v4, 0x3b

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 81
    :cond_1
    invoke-static {v3}, Lorg/json/Cookie;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 82
    const-string v4, "="

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 83
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lorg/json/Cookie;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 84
    const/4 v0, 0x1

    goto :goto_0

    .line 87
    .end local v3    # "string":Ljava/lang/String;
    :cond_2
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    return-object v3
.end method
