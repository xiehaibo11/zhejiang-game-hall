.class public Lorg/json/XML;
.super Ljava/lang/Object;
.source "XML.java"


# static fields
.field public static final AMP:Ljava/lang/Character;

.field public static final APOS:Ljava/lang/Character;

.field public static final BANG:Ljava/lang/Character;

.field public static final EQ:Ljava/lang/Character;

.field public static final GT:Ljava/lang/Character;

.field public static final LT:Ljava/lang/Character;

.field public static final QUEST:Ljava/lang/Character;

.field public static final QUOT:Ljava/lang/Character;

.field public static final SLASH:Ljava/lang/Character;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 38
    const/16 v0, 0x26

    invoke-static {v0}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v0

    sput-object v0, Lorg/json/XML;->AMP:Ljava/lang/Character;

    .line 41
    const/16 v0, 0x27

    invoke-static {v0}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v0

    sput-object v0, Lorg/json/XML;->APOS:Ljava/lang/Character;

    .line 44
    const/16 v0, 0x21

    invoke-static {v0}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v0

    sput-object v0, Lorg/json/XML;->BANG:Ljava/lang/Character;

    .line 47
    const/16 v0, 0x3d

    invoke-static {v0}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v0

    sput-object v0, Lorg/json/XML;->EQ:Ljava/lang/Character;

    .line 50
    const/16 v0, 0x3e

    invoke-static {v0}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v0

    sput-object v0, Lorg/json/XML;->GT:Ljava/lang/Character;

    .line 53
    const/16 v0, 0x3c

    invoke-static {v0}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v0

    sput-object v0, Lorg/json/XML;->LT:Ljava/lang/Character;

    .line 56
    const/16 v0, 0x3f

    invoke-static {v0}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v0

    sput-object v0, Lorg/json/XML;->QUEST:Ljava/lang/Character;

    .line 59
    const/16 v0, 0x22

    invoke-static {v0}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v0

    sput-object v0, Lorg/json/XML;->QUOT:Ljava/lang/Character;

    .line 62
    const/16 v0, 0x2f

    invoke-static {v0}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v0

    sput-object v0, Lorg/json/XML;->SLASH:Ljava/lang/Character;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static escape(Ljava/lang/String;)Ljava/lang/String;
    .locals 5
    .param p0, "string"    # Ljava/lang/String;

    .line 76
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(I)V

    .line 77
    .local v0, "sb":Ljava/lang/StringBuilder;
    const/4 v1, 0x0

    .local v1, "i":I
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v2

    .local v2, "length":I
    :goto_0
    if-ge v1, v2, :cond_5

    .line 78
    invoke-virtual {p0, v1}, Ljava/lang/String;->charAt(I)C

    move-result v3

    .line 79
    .local v3, "c":C
    const/16 v4, 0x22

    if-eq v3, v4, :cond_4

    const/16 v4, 0x3c

    if-eq v3, v4, :cond_3

    const/16 v4, 0x3e

    if-eq v3, v4, :cond_2

    const/16 v4, 0x26

    if-eq v3, v4, :cond_1

    const/16 v4, 0x27

    if-eq v3, v4, :cond_0

    .line 96
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 93
    :cond_0
    const-string v4, "&apos;"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 94
    goto :goto_1

    .line 81
    :cond_1
    const-string v4, "&amp;"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 82
    goto :goto_1

    .line 87
    :cond_2
    const-string v4, "&gt;"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 88
    goto :goto_1

    .line 84
    :cond_3
    const-string v4, "&lt;"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 85
    goto :goto_1

    .line 90
    :cond_4
    const-string v4, "&quot;"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 91
    nop

    .line 77
    .end local v3    # "c":C
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 99
    .end local v1    # "i":I
    .end local v2    # "length":I
    :cond_5
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public static noSpace(Ljava/lang/String;)V
    .locals 5
    .param p0, "string"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 109
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    .line 110
    .local v0, "length":I
    if-eqz v0, :cond_2

    .line 113
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    if-ge v1, v0, :cond_1

    .line 114
    invoke-virtual {p0, v1}, Ljava/lang/String;->charAt(I)C

    move-result v2

    invoke-static {v2}, Ljava/lang/Character;->isWhitespace(C)Z

    move-result v2

    if-nez v2, :cond_0

    .line 113
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 115
    :cond_0
    new-instance v2, Lorg/json/JSONException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\'"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\' contains a space character."

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v2

    .line 119
    :cond_1
    return-void

    .line 111
    .end local v1    # "i":I
    :cond_2
    new-instance v1, Lorg/json/JSONException;

    const-string v2, "Empty string."

    invoke-direct {v1, v2}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v1
.end method

.method private static parse(Lorg/json/XMLTokener;Lorg/json/JSONObject;Ljava/lang/String;)Z
    .locals 10
    .param p0, "x"    # Lorg/json/XMLTokener;
    .param p1, "context"    # Lorg/json/JSONObject;
    .param p2, "name"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 133
    const/4 v0, 0x0

    .line 148
    .local v0, "jsonobject":Lorg/json/JSONObject;
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v1

    .line 152
    .local v1, "token":Ljava/lang/Object;
    sget-object v2, Lorg/json/XML;->BANG:Ljava/lang/Character;

    const-string v3, "content"

    const/4 v4, 0x0

    if-ne v1, v2, :cond_9

    .line 153
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v2

    .line 154
    .local v2, "c":C
    const/16 v5, 0x2d

    if-ne v2, v5, :cond_1

    .line 155
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v3

    if-ne v3, v5, :cond_0

    .line 156
    const-string v3, "-->"

    invoke-virtual {p0, v3}, Lorg/json/XMLTokener;->skipPast(Ljava/lang/String;)Z

    .line 157
    return v4

    .line 159
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->back()V

    goto :goto_0

    .line 160
    :cond_1
    const/16 v5, 0x5b

    if-ne v2, v5, :cond_4

    .line 161
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v1

    .line 162
    const-string v6, "CDATA"

    invoke-virtual {v6, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_3

    .line 163
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v6

    if-ne v6, v5, :cond_3

    .line 164
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextCDATA()Ljava/lang/String;

    move-result-object v5

    .line 165
    .local v5, "string":Ljava/lang/String;
    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v6

    if-lez v6, :cond_2

    .line 166
    invoke-virtual {p1, v3, v5}, Lorg/json/JSONObject;->accumulate(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 168
    :cond_2
    return v4

    .line 171
    .end local v5    # "string":Ljava/lang/String;
    :cond_3
    const-string v3, "Expected \'CDATA[\'"

    invoke-virtual {p0, v3}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v3

    throw v3

    .line 173
    :cond_4
    :goto_0
    const/4 v3, 0x1

    .line 175
    .local v3, "i":I
    :cond_5
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextMeta()Ljava/lang/Object;

    move-result-object v1

    .line 176
    if-eqz v1, :cond_8

    .line 178
    sget-object v5, Lorg/json/XML;->LT:Ljava/lang/Character;

    if-ne v1, v5, :cond_6

    .line 179
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 180
    :cond_6
    sget-object v5, Lorg/json/XML;->GT:Ljava/lang/Character;

    if-ne v1, v5, :cond_7

    .line 181
    add-int/lit8 v3, v3, -0x1

    .line 183
    :cond_7
    :goto_1
    if-gtz v3, :cond_5

    .line 184
    return v4

    .line 177
    :cond_8
    const-string v4, "Missing \'>\' after \'<!\'."

    invoke-virtual {p0, v4}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v4

    throw v4

    .line 185
    .end local v2    # "c":C
    .end local v3    # "i":I
    :cond_9
    sget-object v2, Lorg/json/XML;->QUEST:Ljava/lang/Character;

    if-ne v1, v2, :cond_a

    .line 189
    const-string v2, "?>"

    invoke-virtual {p0, v2}, Lorg/json/XMLTokener;->skipPast(Ljava/lang/String;)Z

    .line 190
    return v4

    .line 191
    :cond_a
    sget-object v2, Lorg/json/XML;->SLASH:Ljava/lang/Character;

    const/4 v5, 0x1

    if-ne v1, v2, :cond_e

    .line 195
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v1

    .line 196
    if-eqz p2, :cond_d

    .line 199
    invoke-virtual {v1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_c

    .line 202
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v2

    sget-object v3, Lorg/json/XML;->GT:Ljava/lang/Character;

    if-ne v2, v3, :cond_b

    .line 205
    return v5

    .line 203
    :cond_b
    const-string v2, "Misshaped close tag"

    invoke-virtual {p0, v2}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v2

    throw v2

    .line 200
    :cond_c
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Mismatched "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " and "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v2

    throw v2

    .line 197
    :cond_d
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Mismatched close tag "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v2

    throw v2

    .line 207
    :cond_e
    instance-of v2, v1, Ljava/lang/Character;

    const-string v6, "Misshaped tag"

    if-nez v2, :cond_1d

    .line 213
    move-object v2, v1

    check-cast v2, Ljava/lang/String;

    .line 214
    .local v2, "tagName":Ljava/lang/String;
    const/4 v1, 0x0

    .line 215
    new-instance v7, Lorg/json/JSONObject;

    invoke-direct {v7}, Lorg/json/JSONObject;-><init>()V

    move-object v0, v7

    .line 217
    :goto_2
    if-nez v1, :cond_f

    .line 218
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v1

    .line 223
    :cond_f
    instance-of v7, v1, Ljava/lang/String;

    const-string v8, ""

    if-eqz v7, :cond_12

    .line 224
    move-object v7, v1

    check-cast v7, Ljava/lang/String;

    .line 225
    .local v7, "string":Ljava/lang/String;
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v1

    .line 226
    sget-object v9, Lorg/json/XML;->EQ:Ljava/lang/Character;

    if-ne v1, v9, :cond_11

    .line 227
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v1

    .line 228
    instance-of v8, v1, Ljava/lang/String;

    if-eqz v8, :cond_10

    .line 231
    move-object v8, v1

    check-cast v8, Ljava/lang/String;

    .line 232
    invoke-static {v8}, Lorg/json/XML;->stringToValue(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v8

    .line 231
    invoke-virtual {v0, v7, v8}, Lorg/json/JSONObject;->accumulate(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 233
    const/4 v1, 0x0

    goto :goto_2

    .line 229
    :cond_10
    const-string v3, "Missing value"

    invoke-virtual {p0, v3}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v3

    throw v3

    .line 235
    :cond_11
    invoke-virtual {v0, v7, v8}, Lorg/json/JSONObject;->accumulate(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_2

    .line 240
    .end local v7    # "string":Ljava/lang/String;
    :cond_12
    sget-object v7, Lorg/json/XML;->SLASH:Ljava/lang/Character;

    if-ne v1, v7, :cond_15

    .line 241
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextToken()Ljava/lang/Object;

    move-result-object v3

    sget-object v5, Lorg/json/XML;->GT:Ljava/lang/Character;

    if-ne v3, v5, :cond_14

    .line 244
    invoke-virtual {v0}, Lorg/json/JSONObject;->length()I

    move-result v3

    if-lez v3, :cond_13

    .line 245
    invoke-virtual {p1, v2, v0}, Lorg/json/JSONObject;->accumulate(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_3

    .line 247
    :cond_13
    invoke-virtual {p1, v2, v8}, Lorg/json/JSONObject;->accumulate(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 249
    :goto_3
    return v4

    .line 242
    :cond_14
    invoke-virtual {p0, v6}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v3

    throw v3

    .line 253
    :cond_15
    sget-object v7, Lorg/json/XML;->GT:Ljava/lang/Character;

    if-ne v1, v7, :cond_1c

    .line 255
    :cond_16
    :goto_4
    invoke-virtual {p0}, Lorg/json/XMLTokener;->nextContent()Ljava/lang/Object;

    move-result-object v1

    .line 256
    if-nez v1, :cond_18

    .line 257
    if-nez v2, :cond_17

    .line 260
    return v4

    .line 258
    :cond_17
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Unclosed tag "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v3

    throw v3

    .line 261
    :cond_18
    instance-of v6, v1, Ljava/lang/String;

    if-eqz v6, :cond_19

    .line 262
    move-object v6, v1

    check-cast v6, Ljava/lang/String;

    .line 263
    .local v6, "string":Ljava/lang/String;
    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v7

    if-lez v7, :cond_16

    .line 264
    nop

    .line 265
    invoke-static {v6}, Lorg/json/XML;->stringToValue(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v7

    .line 264
    invoke-virtual {v0, v3, v7}, Lorg/json/JSONObject;->accumulate(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_4

    .line 270
    .end local v6    # "string":Ljava/lang/String;
    :cond_19
    sget-object v6, Lorg/json/XML;->LT:Ljava/lang/Character;

    if-ne v1, v6, :cond_16

    .line 271
    invoke-static {p0, v0, v2}, Lorg/json/XML;->parse(Lorg/json/XMLTokener;Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_16

    .line 272
    invoke-virtual {v0}, Lorg/json/JSONObject;->length()I

    move-result v6

    if-nez v6, :cond_1a

    .line 273
    invoke-virtual {p1, v2, v8}, Lorg/json/JSONObject;->accumulate(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_5

    .line 274
    :cond_1a
    invoke-virtual {v0}, Lorg/json/JSONObject;->length()I

    move-result v6

    if-ne v6, v5, :cond_1b

    .line 275
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v5

    if-eqz v5, :cond_1b

    .line 276
    nop

    .line 277
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    .line 276
    invoke-virtual {p1, v2, v3}, Lorg/json/JSONObject;->accumulate(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_5

    .line 279
    :cond_1b
    invoke-virtual {p1, v2, v0}, Lorg/json/JSONObject;->accumulate(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 281
    :goto_5
    return v4

    .line 286
    :cond_1c
    invoke-virtual {p0, v6}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v3

    throw v3

    .line 208
    .end local v2    # "tagName":Ljava/lang/String;
    :cond_1d
    invoke-virtual {p0, v6}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v2

    throw v2
.end method

.method public static stringToValue(Ljava/lang/String;)Ljava/lang/Object;
    .locals 3
    .param p0, "string"    # Ljava/lang/String;

    .line 303
    const-string v0, "true"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 304
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    return-object v0

    .line 306
    :cond_0
    const-string v0, "false"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 307
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    return-object v0

    .line 309
    :cond_1
    const-string v0, "null"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 310
    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    return-object v0

    .line 317
    :cond_2
    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0, v0}, Ljava/lang/String;->charAt(I)C

    move-result v0

    .line 318
    .local v0, "initial":C
    const/16 v1, 0x2d

    if-eq v0, v1, :cond_3

    const/16 v1, 0x30

    if-lt v0, v1, :cond_4

    const/16 v1, 0x39

    if-gt v0, v1, :cond_4

    .line 319
    :cond_3
    new-instance v1, Ljava/lang/Long;

    invoke-direct {v1, p0}, Ljava/lang/Long;-><init>(Ljava/lang/String;)V

    .line 320
    .local v1, "value":Ljava/lang/Long;
    invoke-virtual {v1}, Ljava/lang/Long;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v2, :cond_4

    .line 321
    return-object v1

    .line 332
    .end local v0    # "initial":C
    .end local v1    # "value":Ljava/lang/Long;
    :cond_4
    goto :goto_0

    .line 324
    :catch_0
    move-exception v0

    .line 326
    .local v0, "ignore":Ljava/lang/Exception;
    :try_start_1
    new-instance v1, Ljava/lang/Double;

    invoke-direct {v1, p0}, Ljava/lang/Double;-><init>(Ljava/lang/String;)V

    .line 327
    .local v1, "value":Ljava/lang/Double;
    invoke-virtual {v1}, Ljava/lang/Double;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    if-eqz v2, :cond_5

    .line 328
    return-object v1

    .line 331
    .end local v1    # "value":Ljava/lang/Double;
    :cond_5
    goto :goto_0

    .line 330
    :catch_1
    move-exception v1

    .line 333
    .end local v0    # "ignore":Ljava/lang/Exception;
    :goto_0
    return-object p0
.end method

.method public static toJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 3
    .param p0, "string"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 352
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 353
    .local v0, "jo":Lorg/json/JSONObject;
    new-instance v1, Lorg/json/XMLTokener;

    invoke-direct {v1, p0}, Lorg/json/XMLTokener;-><init>(Ljava/lang/String;)V

    .line 354
    .local v1, "x":Lorg/json/XMLTokener;
    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONTokener;->more()Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v2, "<"

    invoke-virtual {v1, v2}, Lorg/json/XMLTokener;->skipPast(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 355
    const/4 v2, 0x0

    invoke-static {v1, v0, v2}, Lorg/json/XML;->parse(Lorg/json/XMLTokener;Lorg/json/JSONObject;Ljava/lang/String;)Z

    goto :goto_0

    .line 357
    :cond_0
    return-object v0
.end method

.method public static toString(Ljava/lang/Object;)Ljava/lang/String;
    .locals 1
    .param p0, "object"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 368
    const/4 v0, 0x0

    invoke-static {p0, v0}, Lorg/json/XML;->toString(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static toString(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;
    .locals 14
    .param p0, "object"    # Ljava/lang/Object;
    .param p1, "tagName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 381
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 390
    .local v0, "sb":Ljava/lang/StringBuilder;
    instance-of v1, p0, Lorg/json/JSONObject;

    const-string v2, "/>"

    const-string v3, "</"

    if-eqz v1, :cond_c

    .line 394
    const/16 v1, 0x3c

    const/16 v4, 0x3e

    if-eqz p1, :cond_0

    .line 395
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 396
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 397
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 402
    :cond_0
    move-object v5, p0

    check-cast v5, Lorg/json/JSONObject;

    .line 403
    .local v5, "jo":Lorg/json/JSONObject;
    invoke-virtual {v5}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v6

    .line 404
    .local v6, "keys":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    :cond_1
    :goto_0
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_a

    .line 405
    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    .line 406
    .local v7, "key":Ljava/lang/String;
    invoke-virtual {v5, v7}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v8

    .line 407
    .local v8, "value":Ljava/lang/Object;
    if-nez v8, :cond_2

    .line 408
    const-string v8, ""

    .line 410
    :cond_2
    instance-of v9, v8, Ljava/lang/String;

    if-eqz v9, :cond_3

    move-object v9, v8

    check-cast v9, Ljava/lang/String;

    goto :goto_1

    :cond_3
    const/4 v9, 0x0

    .line 414
    .local v9, "string":Ljava/lang/String;
    :goto_1
    const-string v10, "content"

    invoke-virtual {v10, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_6

    .line 415
    instance-of v10, v8, Lorg/json/JSONArray;

    if-eqz v10, :cond_5

    .line 416
    move-object v10, v8

    check-cast v10, Lorg/json/JSONArray;

    .line 417
    .local v10, "ja":Lorg/json/JSONArray;
    invoke-virtual {v10}, Lorg/json/JSONArray;->length()I

    move-result v11

    .line 418
    .local v11, "length":I
    const/4 v12, 0x0

    .local v12, "i":I
    :goto_2
    if-ge v12, v11, :cond_1

    .line 419
    if-lez v12, :cond_4

    .line 420
    const/16 v13, 0xa

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 422
    :cond_4
    invoke-virtual {v10, v12}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v13

    invoke-virtual {v13}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Lorg/json/XML;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 418
    add-int/lit8 v12, v12, 0x1

    goto :goto_2

    .line 425
    .end local v10    # "ja":Lorg/json/JSONArray;
    .end local v11    # "length":I
    .end local v12    # "i":I
    :cond_5
    invoke-virtual {v8}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v10}, Lorg/json/XML;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 430
    :cond_6
    instance-of v10, v8, Lorg/json/JSONArray;

    if-eqz v10, :cond_8

    .line 431
    move-object v10, v8

    check-cast v10, Lorg/json/JSONArray;

    .line 432
    .restart local v10    # "ja":Lorg/json/JSONArray;
    invoke-virtual {v10}, Lorg/json/JSONArray;->length()I

    move-result v11

    .line 433
    .restart local v11    # "length":I
    const/4 v12, 0x0

    .restart local v12    # "i":I
    :goto_3
    if-ge v12, v11, :cond_1

    .line 434
    invoke-virtual {v10, v12}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v8

    .line 435
    instance-of v13, v8, Lorg/json/JSONArray;

    if-eqz v13, :cond_7

    .line 436
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 437
    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 438
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 439
    invoke-static {v8}, Lorg/json/XML;->toString(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 440
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 441
    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 442
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_4

    .line 444
    :cond_7
    invoke-static {v8, v7}, Lorg/json/XML;->toString(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 433
    :goto_4
    add-int/lit8 v12, v12, 0x1

    goto :goto_3

    .line 447
    .end local v10    # "ja":Lorg/json/JSONArray;
    .end local v11    # "length":I
    .end local v12    # "i":I
    :cond_8
    const-string v10, ""

    invoke-virtual {v10, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_9

    .line 448
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 449
    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 450
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto/16 :goto_0

    .line 455
    :cond_9
    invoke-static {v8, v7}, Lorg/json/XML;->toString(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto/16 :goto_0

    .line 458
    .end local v7    # "key":Ljava/lang/String;
    .end local v8    # "value":Ljava/lang/Object;
    .end local v9    # "string":Ljava/lang/String;
    :cond_a
    if-eqz p1, :cond_b

    .line 462
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 463
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 464
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 466
    :cond_b
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 472
    .end local v5    # "jo":Lorg/json/JSONObject;
    .end local v6    # "keys":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    :cond_c
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->isArray()Z

    move-result v1

    if-eqz v1, :cond_d

    .line 473
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p0}, Lorg/json/JSONArray;-><init>(Ljava/lang/Object;)V

    move-object p0, v1

    .line 475
    :cond_d
    nop

    instance-of v1, p0, Lorg/json/JSONArray;

    if-eqz v1, :cond_10

    .line 476
    move-object v1, p0

    check-cast v1, Lorg/json/JSONArray;

    .line 477
    .local v1, "ja":Lorg/json/JSONArray;
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    .line 478
    .local v2, "length":I
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_5
    if-ge v3, v2, :cond_f

    .line 479
    invoke-virtual {v1, v3}, Lorg/json/JSONArray;->opt(I)Ljava/lang/Object;

    move-result-object v4

    if-nez p1, :cond_e

    const-string v5, "array"

    goto :goto_6

    :cond_e
    move-object v5, p1

    :goto_6
    invoke-static {v4, v5}, Lorg/json/XML;->toString(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 478
    add-int/lit8 v3, v3, 0x1

    goto :goto_5

    .line 481
    :cond_f
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    return-object v4

    .line 483
    .end local v1    # "ja":Lorg/json/JSONArray;
    .end local v2    # "length":I
    .end local v3    # "i":I
    :cond_10
    if-nez p0, :cond_11

    const-string v1, "null"

    goto :goto_7

    :cond_11
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lorg/json/XML;->escape(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 484
    .local v1, "string":Ljava/lang/String;
    :goto_7
    if-nez p1, :cond_12

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_8

    .line 485
    :cond_12
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v4

    const-string v5, "<"

    if-nez v4, :cond_13

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_8

    :cond_13
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ">"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 484
    :goto_8
    return-object v2
.end method
