.class public Lorg/json/JSONML;
.super Ljava/lang/Object;
.source "JSONML.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static parse(Lorg/json/XMLTokener;ZLorg/json/JSONArray;)Ljava/lang/Object;
    .locals 9
    .param p0, "x"    # Lorg/json/XMLTokener;
    .param p1, "arrayForm"    # Z
    .param p2, "ja"    # Lorg/json/JSONArray;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 56
    const/4 v0, 0x0

    .line 58
    .local v0, "closeTag":Ljava/lang/String;
    const/4 v1, 0x0

    .line 59
    .local v1, "newja":Lorg/json/JSONArray;
    const/4 v2, 0x0

    .line 61
    .local v2, "newjo":Lorg/json/JSONObject;
    const/4 v3, 0x0

    .line 70
    .local v3, "tagName":Ljava/lang/String;
    :cond_0
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->more()Z

    move-result v4

    if-eqz v4, :cond_23

    .line 73
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextContent()Ljava/lang/Object;

    move-result-object v4

    .line 74
    .local v4, "token":Ljava/lang/Object;
    sget-object v5, Lorg/json/XML;->LT:Ljava/lang/Character;

    if-ne v4, v5, :cond_21

    .line 75
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v4

    .line 76
    instance-of v5, v4, Ljava/lang/Character;

    const-string v6, "\'."

    const-string v7, "Misshaped tag"

    if-eqz v5, :cond_e

    .line 77
    sget-object v5, Lorg/json/XML;->SLASH:Ljava/lang/Character;

    if-ne v4, v5, :cond_3

    .line 81
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v4

    .line 82
    instance-of v5, v4, Ljava/lang/String;

    if-eqz v5, :cond_2

    .line 87
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v5

    sget-object v6, Lorg/json/XML;->GT:Ljava/lang/Character;

    if-ne v5, v6, :cond_1

    .line 90
    return-object v4

    .line 88
    :cond_1
    const-string v5, "Misshaped close tag"

    invoke-virtual {p0, v5}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v5

    throw v5

    .line 83
    :cond_2
    new-instance v5, Lorg/json/JSONException;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "Expected a closing name instead of \'"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {v5, v6}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v5

    .line 91
    :cond_3
    sget-object v5, Lorg/json/XML;->BANG:Ljava/lang/Character;

    if-ne v4, v5, :cond_c

    .line 95
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v5

    .line 96
    .local v5, "c":C
    const/16 v6, 0x2d

    if-ne v5, v6, :cond_5

    .line 97
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v7

    if-ne v7, v6, :cond_4

    .line 98
    const-string v6, "-->"

    invoke-virtual {p0, v6}, Lorg/json/XMLTokener;->skipPast(Ljava/lang/String;)Z

    goto :goto_0

    .line 100
    :cond_4
    invoke-virtual {p0}, Lorg/json/JSONTokener;->back()V

    goto :goto_0

    .line 102
    :cond_5
    const/16 v6, 0x5b

    if-ne v5, v6, :cond_7

    .line 103
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v4

    .line 104
    const-string v7, "CDATA"

    invoke-virtual {v4, v7}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_6

    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v7

    if-ne v7, v6, :cond_6

    .line 105
    if-eqz p2, :cond_0

    .line 106
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextCDATA()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p2, v6}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto/16 :goto_0

    .line 109
    :cond_6
    const-string v6, "Expected \'CDATA[\'"

    invoke-virtual {p0, v6}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v6

    throw v6

    .line 112
    :cond_7
    const/4 v6, 0x1

    .line 114
    .local v6, "i":I
    :cond_8
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextMeta()Ljava/lang/Object;

    move-result-object v4

    .line 115
    if-eqz v4, :cond_b

    .line 117
    sget-object v7, Lorg/json/XML;->LT:Ljava/lang/Character;

    if-ne v4, v7, :cond_9

    .line 118
    add-int/lit8 v6, v6, 0x1

    goto :goto_1

    .line 119
    :cond_9
    sget-object v7, Lorg/json/XML;->GT:Ljava/lang/Character;

    if-ne v4, v7, :cond_a

    .line 120
    add-int/lit8 v6, v6, -0x1

    .line 122
    :cond_a
    :goto_1
    if-gtz v6, :cond_8

    goto/16 :goto_0

    .line 116
    :cond_b
    const-string v7, "Missing \'>\' after \'<!\'."

    invoke-virtual {p0, v7}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v7

    throw v7

    .line 124
    .end local v5    # "c":C
    .end local v6    # "i":I
    :cond_c
    sget-object v5, Lorg/json/XML;->QUEST:Ljava/lang/Character;

    if-ne v4, v5, :cond_d

    .line 128
    const-string v5, "?>"

    invoke-virtual {p0, v5}, Lorg/json/XMLTokener;->skipPast(Ljava/lang/String;)Z

    goto/16 :goto_0

    .line 130
    :cond_d
    invoke-virtual {p0, v7}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v5

    throw v5

    .line 136
    :cond_e
    instance-of v5, v4, Ljava/lang/String;

    if-eqz v5, :cond_20

    .line 139
    move-object v3, v4

    check-cast v3, Ljava/lang/String;

    .line 140
    new-instance v5, Lorg/json/JSONArray;

    invoke-direct {v5}, Lorg/json/JSONArray;-><init>()V

    move-object v1, v5

    .line 141
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    move-object v2, v5

    .line 142
    const-string v5, "tagName"

    if-eqz p1, :cond_f

    .line 143
    invoke-virtual {v1, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 144
    if-eqz p2, :cond_10

    .line 145
    invoke-virtual {p2, v1}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_2

    .line 148
    :cond_f
    invoke-virtual {v2, v5, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 149
    if-eqz p2, :cond_10

    .line 150
    invoke-virtual {p2, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 153
    :cond_10
    :goto_2
    const/4 v4, 0x0

    .line 155
    :goto_3
    if-nez v4, :cond_11

    .line 156
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v4

    .line 158
    :cond_11
    if-eqz v4, :cond_1f

    .line 161
    instance-of v6, v4, Ljava/lang/String;

    if-nez v6, :cond_1a

    .line 162
    nop

    .line 183
    if-eqz p1, :cond_12

    invoke-virtual {v2}, Lorg/json/JSONObject;->length()I

    move-result v5

    if-lez v5, :cond_12

    .line 184
    invoke-virtual {v1, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 189
    :cond_12
    sget-object v5, Lorg/json/XML;->SLASH:Ljava/lang/Character;

    if-ne v4, v5, :cond_15

    .line 190
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v5

    sget-object v6, Lorg/json/XML;->GT:Ljava/lang/Character;

    if-ne v5, v6, :cond_14

    .line 193
    if-nez p2, :cond_0

    .line 194
    if-eqz p1, :cond_13

    .line 195
    return-object v1

    .line 197
    :cond_13
    return-object v2

    .line 191
    :cond_14
    invoke-virtual {p0, v7}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v5

    throw v5

    .line 204
    :cond_15
    sget-object v5, Lorg/json/XML;->GT:Ljava/lang/Character;

    if-ne v4, v5, :cond_19

    .line 207
    invoke-static {p0, p1, v1}, Lorg/json/JSONML;->parse(Lorg/json/XMLTokener;ZLorg/json/JSONArray;)Ljava/lang/Object;

    move-result-object v5

    move-object v0, v5

    check-cast v0, Ljava/lang/String;

    .line 208
    if-eqz v0, :cond_0

    .line 209
    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_18

    .line 213
    const/4 v3, 0x0

    .line 214
    if-nez p1, :cond_16

    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-lez v5, :cond_16

    .line 215
    const-string v5, "childNodes"

    invoke-virtual {v2, v5, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 217
    :cond_16
    if-nez p2, :cond_0

    .line 218
    if-eqz p1, :cond_17

    .line 219
    return-object v1

    .line 221
    :cond_17
    return-object v2

    .line 210
    :cond_18
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Mismatched \'"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "\' and \'"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "\'"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v5}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v5

    throw v5

    .line 205
    :cond_19
    invoke-virtual {p0, v7}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v5

    throw v5

    .line 167
    :cond_1a
    move-object v6, v4

    check-cast v6, Ljava/lang/String;

    .line 168
    .local v6, "attribute":Ljava/lang/String;
    if-nez p1, :cond_1c

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_1b

    const-string v8, "childNode"

    invoke-virtual {v8, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_1b

    goto :goto_4

    .line 169
    :cond_1b
    const-string v5, "Reserved attribute."

    invoke-virtual {p0, v5}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v5

    throw v5

    .line 171
    :cond_1c
    :goto_4
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v4

    .line 172
    sget-object v8, Lorg/json/XML;->EQ:Ljava/lang/Character;

    if-ne v4, v8, :cond_1e

    .line 173
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v4

    .line 174
    instance-of v8, v4, Ljava/lang/String;

    if-eqz v8, :cond_1d

    .line 177
    move-object v8, v4

    check-cast v8, Ljava/lang/String;

    invoke-static {v8}, Lorg/json/XML;->stringToValue(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v8

    invoke-virtual {v2, v6, v8}, Lorg/json/JSONObject;->accumulate(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 178
    const/4 v4, 0x0

    goto/16 :goto_3

    .line 175
    :cond_1d
    const-string v5, "Missing value"

    invoke-virtual {p0, v5}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v5

    throw v5

    .line 180
    :cond_1e
    const-string v8, ""

    invoke-virtual {v2, v6, v8}, Lorg/json/JSONObject;->accumulate(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto/16 :goto_3

    .line 159
    .end local v6    # "attribute":Ljava/lang/String;
    :cond_1f
    invoke-virtual {p0, v7}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v5

    throw v5

    .line 137
    :cond_20
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Bad tagName \'"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v5}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v5

    throw v5

    .line 228
    :cond_21
    if-eqz p2, :cond_0

    .line 229
    instance-of v5, v4, Ljava/lang/String;

    if-eqz v5, :cond_22

    move-object v5, v4

    check-cast v5, Ljava/lang/String;

    .line 230
    invoke-static {v5}, Lorg/json/XML;->stringToValue(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v5

    goto :goto_5

    :cond_22
    move-object v5, v4

    .line 229
    :goto_5
    invoke-virtual {p2, v5}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto/16 :goto_0

    .line 71
    .end local v4    # "token":Ljava/lang/Object;
    :cond_23
    const-string v4, "Bad XML"

    invoke-virtual {p0, v4}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v4

    throw v4
.end method

.method public static toJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;
    .locals 1
    .param p0, "string"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 251
    new-instance v0, Lorg/json/XMLTokener;

    invoke-direct {v0, p0}, Lorg/json/XMLTokener;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lorg/json/JSONML;->toJSONArray(Lorg/json/XMLTokener;)Lorg/json/JSONArray;

    move-result-object v0

    return-object v0
.end method

.method public static toJSONArray(Lorg/json/XMLTokener;)Lorg/json/JSONArray;
    .locals 2
    .param p0, "x"    # Lorg/json/XMLTokener;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 268
    const/4 v0, 0x1

    const/4 v1, 0x0

    invoke-static {p0, v0, v1}, Lorg/json/JSONML;->parse(Lorg/json/XMLTokener;ZLorg/json/JSONArray;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lorg/json/JSONArray;

    return-object v0
.end method

.method public static toJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 1
    .param p0, "string"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 304
    new-instance v0, Lorg/json/XMLTokener;

    invoke-direct {v0, p0}, Lorg/json/XMLTokener;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lorg/json/JSONML;->toJSONObject(Lorg/json/XMLTokener;)Lorg/json/JSONObject;

    move-result-object v0

    return-object v0
.end method

.method public static toJSONObject(Lorg/json/XMLTokener;)Lorg/json/JSONObject;
    .locals 2
    .param p0, "x"    # Lorg/json/XMLTokener;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 286
    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-static {p0, v0, v1}, Lorg/json/JSONML;->parse(Lorg/json/XMLTokener;ZLorg/json/JSONArray;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lorg/json/JSONObject;

    return-object v0
.end method

.method public static toString(Lorg/json/JSONArray;)Ljava/lang/String;
    .locals 12
    .param p0, "ja"    # Lorg/json/JSONArray;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 321
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 327
    .local v0, "sb":Ljava/lang/StringBuilder;
    const/4 v1, 0x0

    invoke-virtual {p0, v1}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 328
    .local v1, "tagName":Ljava/lang/String;
    invoke-static {v1}, Lorg/json/XML;->noSpace(Ljava/lang/String;)V

    .line 329
    invoke-static {v1}, Lorg/json/XML;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 330
    const/16 v2, 0x3c

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 331
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 333
    const/4 v3, 0x1

    invoke-virtual {p0, v3}, Lorg/json/JSONArray;->opt(I)Ljava/lang/Object;

    move-result-object v4

    .line 334
    .local v4, "object":Ljava/lang/Object;
    instance-of v5, v4, Lorg/json/JSONObject;

    if-eqz v5, :cond_1

    .line 335
    const/4 v5, 0x2

    .line 336
    .local v5, "i":I
    move-object v6, v4

    check-cast v6, Lorg/json/JSONObject;

    .line 340
    .local v6, "jo":Lorg/json/JSONObject;
    invoke-virtual {v6}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v7

    .line 341
    .local v7, "keys":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    :cond_0
    :goto_0
    invoke-interface {v7}, Ljava/util/Iterator;->hasNext()Z

    move-result v8

    if-eqz v8, :cond_2

    .line 342
    invoke-interface {v7}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    .line 343
    .local v8, "key":Ljava/lang/String;
    invoke-static {v8}, Lorg/json/XML;->noSpace(Ljava/lang/String;)V

    .line 344
    invoke-virtual {v6, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 345
    .local v9, "value":Ljava/lang/String;
    if-eqz v9, :cond_0

    .line 346
    const/16 v10, 0x20

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 347
    invoke-static {v8}, Lorg/json/XML;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 348
    const/16 v10, 0x3d

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 349
    const/16 v10, 0x22

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 350
    invoke-static {v9}, Lorg/json/XML;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 351
    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 355
    .end local v5    # "i":I
    .end local v6    # "jo":Lorg/json/JSONObject;
    .end local v7    # "keys":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    .end local v8    # "key":Ljava/lang/String;
    .end local v9    # "value":Ljava/lang/String;
    :cond_1
    const/4 v5, 0x1

    .line 360
    .restart local v5    # "i":I
    :cond_2
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v6

    .line 361
    .local v6, "length":I
    const/16 v7, 0x2f

    const/16 v8, 0x3e

    if-lt v5, v6, :cond_3

    .line 362
    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 363
    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_3

    .line 365
    :cond_3
    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 367
    :goto_1
    invoke-virtual {p0, v5}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v4

    .line 368
    add-int/2addr v5, v3

    .line 369
    if-eqz v4, :cond_7

    .line 370
    instance-of v9, v4, Ljava/lang/String;

    if-eqz v9, :cond_4

    .line 371
    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Lorg/json/XML;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 372
    :cond_4
    instance-of v9, v4, Lorg/json/JSONObject;

    if-eqz v9, :cond_5

    .line 373
    move-object v9, v4

    check-cast v9, Lorg/json/JSONObject;

    invoke-static {v9}, Lorg/json/JSONML;->toString(Lorg/json/JSONObject;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 374
    :cond_5
    instance-of v9, v4, Lorg/json/JSONArray;

    if-eqz v9, :cond_6

    .line 375
    move-object v9, v4

    check-cast v9, Lorg/json/JSONArray;

    invoke-static {v9}, Lorg/json/JSONML;->toString(Lorg/json/JSONArray;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 377
    :cond_6
    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 380
    :cond_7
    :goto_2
    if-lt v5, v6, :cond_8

    .line 381
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 382
    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 383
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 384
    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 386
    :goto_3
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    return-object v2

    .line 380
    :cond_8
    goto :goto_1
.end method

.method public static toString(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 11
    .param p0, "jo"    # Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 399
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 411
    .local v0, "sb":Ljava/lang/StringBuilder;
    const-string v1, "tagName"

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 412
    .local v2, "tagName":Ljava/lang/String;
    if-nez v2, :cond_0

    .line 413
    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lorg/json/XML;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 415
    :cond_0
    invoke-static {v2}, Lorg/json/XML;->noSpace(Ljava/lang/String;)V

    .line 416
    invoke-static {v2}, Lorg/json/XML;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 417
    const/16 v3, 0x3c

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 418
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 422
    invoke-virtual {p0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v4

    .line 423
    .local v4, "keys":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    :cond_1
    :goto_0
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    const-string v6, "childNodes"

    if-eqz v5, :cond_2

    .line 424
    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    .line 425
    .local v5, "key":Ljava/lang/String;
    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_1

    invoke-virtual {v6, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_1

    .line 426
    invoke-static {v5}, Lorg/json/XML;->noSpace(Ljava/lang/String;)V

    .line 427
    invoke-virtual {p0, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 428
    .local v6, "value":Ljava/lang/String;
    if-eqz v6, :cond_1

    .line 429
    const/16 v7, 0x20

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 430
    invoke-static {v5}, Lorg/json/XML;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 431
    const/16 v7, 0x3d

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 432
    const/16 v7, 0x22

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 433
    invoke-static {v6}, Lorg/json/XML;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 434
    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 441
    .end local v5    # "key":Ljava/lang/String;
    .end local v6    # "value":Ljava/lang/String;
    :cond_2
    invoke-virtual {p0, v6}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    .line 442
    .local v1, "ja":Lorg/json/JSONArray;
    const/16 v5, 0x2f

    const/16 v6, 0x3e

    if-nez v1, :cond_3

    .line 443
    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 444
    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_3

    .line 446
    :cond_3
    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 447
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v7

    .line 448
    .local v7, "length":I
    const/4 v8, 0x0

    .local v8, "i":I
    :goto_1
    if-ge v8, v7, :cond_8

    .line 449
    invoke-virtual {v1, v8}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v9

    .line 450
    .local v9, "object":Ljava/lang/Object;
    if-eqz v9, :cond_7

    .line 451
    instance-of v10, v9, Ljava/lang/String;

    if-eqz v10, :cond_4

    .line 452
    invoke-virtual {v9}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v10}, Lorg/json/XML;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 453
    :cond_4
    instance-of v10, v9, Lorg/json/JSONObject;

    if-eqz v10, :cond_5

    .line 454
    move-object v10, v9

    check-cast v10, Lorg/json/JSONObject;

    invoke-static {v10}, Lorg/json/JSONML;->toString(Lorg/json/JSONObject;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 455
    :cond_5
    instance-of v10, v9, Lorg/json/JSONArray;

    if-eqz v10, :cond_6

    .line 456
    move-object v10, v9

    check-cast v10, Lorg/json/JSONArray;

    invoke-static {v10}, Lorg/json/JSONML;->toString(Lorg/json/JSONArray;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 458
    :cond_6
    invoke-virtual {v9}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 448
    :cond_7
    :goto_2
    add-int/lit8 v8, v8, 0x1

    goto :goto_1

    .line 462
    .end local v9    # "object":Ljava/lang/Object;
    :cond_8
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 463
    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 464
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 465
    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 467
    .end local v7    # "length":I
    .end local v8    # "i":I
    :goto_3
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    return-object v3
.end method
