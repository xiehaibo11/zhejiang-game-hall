.class public Lorg/json/XMLTokener;
.super Lorg/json/JSONTokener;
.source "XMLTokener.java"


# static fields
.field public static final entity:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Character;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 42
    new-instance v0, Ljava/util/HashMap;

    const/16 v1, 0x8

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    sput-object v0, Lorg/json/XMLTokener;->entity:Ljava/util/HashMap;

    .line 43
    sget-object v0, Lorg/json/XMLTokener;->entity:Ljava/util/HashMap;

    sget-object v1, Lorg/json/XML;->AMP:Ljava/lang/Character;

    const-string v2, "amp"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 44
    sget-object v0, Lorg/json/XMLTokener;->entity:Ljava/util/HashMap;

    sget-object v1, Lorg/json/XML;->APOS:Ljava/lang/Character;

    const-string v2, "apos"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 45
    sget-object v0, Lorg/json/XMLTokener;->entity:Ljava/util/HashMap;

    sget-object v1, Lorg/json/XML;->GT:Ljava/lang/Character;

    const-string v2, "gt"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 46
    sget-object v0, Lorg/json/XMLTokener;->entity:Ljava/util/HashMap;

    sget-object v1, Lorg/json/XML;->LT:Ljava/lang/Character;

    const-string v2, "lt"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 47
    sget-object v0, Lorg/json/XMLTokener;->entity:Ljava/util/HashMap;

    sget-object v1, Lorg/json/XML;->QUOT:Ljava/lang/Character;

    const-string v2, "quot"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 48
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 0
    .param p1, "s"    # Ljava/lang/String;

    .line 55
    invoke-direct {p0, p1}, Lorg/json/JSONTokener;-><init>(Ljava/lang/String;)V

    .line 56
    return-void
.end method


# virtual methods
.method public nextCDATA()Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 66
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 68
    .local v0, "sb":Ljava/lang/StringBuilder;
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v1

    .line 69
    .local v1, "c":C
    invoke-virtual {p0}, Lorg/json/JSONTokener;->end()Z

    move-result v2

    if-nez v2, :cond_1

    .line 72
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 73
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v2

    add-int/lit8 v2, v2, -0x3

    .line 74
    .local v2, "i":I
    if-ltz v2, :cond_0

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->charAt(I)C

    move-result v3

    const/16 v4, 0x5d

    if-ne v3, v4, :cond_0

    add-int/lit8 v3, v2, 0x1

    .line 75
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->charAt(I)C

    move-result v3

    if-ne v3, v4, :cond_0

    add-int/lit8 v3, v2, 0x2

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->charAt(I)C

    move-result v3

    const/16 v4, 0x3e

    if-ne v3, v4, :cond_0

    .line 76
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->setLength(I)V

    .line 77
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 70
    .end local v2    # "i":I
    :cond_1
    const-string v2, "Unclosed CDATA"

    invoke-virtual {p0, v2}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v2

    throw v2
.end method

.method public nextContent()Ljava/lang/Object;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 96
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v0

    .line 97
    .local v0, "c":C
    invoke-static {v0}, Ljava/lang/Character;->isWhitespace(C)Z

    move-result v1

    if-nez v1, :cond_5

    .line 98
    if-nez v0, :cond_0

    .line 99
    const/4 v1, 0x0

    return-object v1

    .line 101
    :cond_0
    const/16 v1, 0x3c

    if-ne v0, v1, :cond_1

    .line 102
    sget-object v1, Lorg/json/XML;->LT:Ljava/lang/Character;

    return-object v1

    .line 104
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    .line 106
    .local v2, "sb":Ljava/lang/StringBuilder;
    :goto_1
    if-eq v0, v1, :cond_4

    if-nez v0, :cond_2

    goto :goto_3

    .line 110
    :cond_2
    const/16 v3, 0x26

    if-ne v0, v3, :cond_3

    .line 111
    invoke-virtual {p0, v0}, Lorg/json/XMLTokener;->nextEntity(C)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 113
    :cond_3
    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 115
    :goto_2
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v0

    goto :goto_1

    .line 107
    :cond_4
    :goto_3
    invoke-virtual {p0}, Lorg/json/JSONTokener;->back()V

    .line 108
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 97
    .end local v2    # "sb":Ljava/lang/StringBuilder;
    :cond_5
    goto :goto_0
.end method

.method public nextEntity(C)Ljava/lang/Object;
    .locals 5
    .param p1, "ampersand"    # C
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 128
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 130
    .local v0, "sb":Ljava/lang/StringBuilder;
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v1

    .line 131
    .local v1, "c":C
    invoke-static {v1}, Ljava/lang/Character;->isLetterOrDigit(C)Z

    move-result v2

    if-nez v2, :cond_3

    const/16 v2, 0x23

    if-ne v1, v2, :cond_0

    goto :goto_2

    .line 133
    :cond_0
    const/16 v2, 0x3b

    if-ne v1, v2, :cond_2

    .line 134
    nop

    .line 139
    .end local v1    # "c":C
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 140
    .local v1, "string":Ljava/lang/String;
    sget-object v2, Lorg/json/XMLTokener;->entity:Ljava/util/HashMap;

    invoke-virtual {v2, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    .line 141
    .local v2, "object":Ljava/lang/Object;
    if-eqz v2, :cond_1

    move-object v3, v2

    goto :goto_1

    :cond_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ";"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    :goto_1
    return-object v3

    .line 136
    .end local v2    # "object":Ljava/lang/Object;
    .local v1, "c":C
    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Missing \';\' in XML entity: &"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v2

    throw v2

    .line 132
    :cond_3
    :goto_2
    invoke-static {v1}, Ljava/lang/Character;->toLowerCase(C)C

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 138
    .end local v1    # "c":C
    goto :goto_0
.end method

.method public nextMeta()Ljava/lang/Object;
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 158
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v0

    .line 159
    .local v0, "c":C
    invoke-static {v0}, Ljava/lang/Character;->isWhitespace(C)Z

    move-result v1

    if-nez v1, :cond_8

    .line 160
    if-eqz v0, :cond_7

    const/16 v1, 0x27

    if-eq v0, v1, :cond_4

    const/16 v2, 0x2f

    if-eq v0, v2, :cond_3

    const/16 v3, 0x21

    if-eq v0, v3, :cond_2

    const/16 v4, 0x22

    if-eq v0, v4, :cond_4

    packed-switch v0, :pswitch_data_0

    .line 189
    :goto_1
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v0

    .line 190
    invoke-static {v0}, Ljava/lang/Character;->isWhitespace(C)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 191
    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    return-object v1

    .line 193
    :cond_0
    if-eqz v0, :cond_1

    if-eq v0, v1, :cond_1

    if-eq v0, v2, :cond_1

    if-eq v0, v3, :cond_1

    if-eq v0, v4, :cond_1

    packed-switch v0, :pswitch_data_1

    .line 204
    goto :goto_1

    .line 203
    :cond_1
    :pswitch_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->back()V

    .line 204
    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    return-object v1

    .line 174
    :pswitch_1
    sget-object v1, Lorg/json/XML;->QUEST:Ljava/lang/Character;

    return-object v1

    .line 166
    :pswitch_2
    sget-object v1, Lorg/json/XML;->GT:Ljava/lang/Character;

    return-object v1

    .line 170
    :pswitch_3
    sget-object v1, Lorg/json/XML;->EQ:Ljava/lang/Character;

    return-object v1

    .line 164
    :pswitch_4
    sget-object v1, Lorg/json/XML;->LT:Ljava/lang/Character;

    return-object v1

    .line 172
    :cond_2
    sget-object v1, Lorg/json/XML;->BANG:Ljava/lang/Character;

    return-object v1

    .line 168
    :cond_3
    sget-object v1, Lorg/json/XML;->SLASH:Ljava/lang/Character;

    return-object v1

    .line 177
    :cond_4
    move v1, v0

    .line 179
    .local v1, "q":C
    :cond_5
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v0

    .line 180
    if-eqz v0, :cond_6

    .line 183
    if-ne v0, v1, :cond_5

    .line 184
    sget-object v2, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    return-object v2

    .line 181
    :cond_6
    const-string v2, "Unterminated string"

    invoke-virtual {p0, v2}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v2

    throw v2

    .line 162
    .end local v1    # "q":C
    :cond_7
    const-string v1, "Misshaped meta tag"

    invoke-virtual {p0, v1}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v1

    throw v1

    .line 159
    :cond_8
    goto :goto_0

    nop

    :pswitch_data_0
    .packed-switch 0x3c
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x3c
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method

.method public nextToken()Ljava/lang/Object;
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 224
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v0

    .line 225
    .local v0, "c":C
    invoke-static {v0}, Ljava/lang/Character;->isWhitespace(C)Z

    move-result v1

    if-nez v1, :cond_b

    .line 226
    if-eqz v0, :cond_a

    const/16 v1, 0x27

    if-eq v0, v1, :cond_6

    const/16 v2, 0x2f

    if-eq v0, v2, :cond_5

    const/16 v3, 0x21

    if-eq v0, v3, :cond_4

    const/16 v4, 0x22

    if-eq v0, v4, :cond_6

    packed-switch v0, :pswitch_data_0

    .line 266
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    .line 268
    .local v5, "sb":Ljava/lang/StringBuilder;
    :goto_1
    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 269
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v0

    .line 270
    invoke-static {v0}, Ljava/lang/Character;->isWhitespace(C)Z

    move-result v6

    if-eqz v6, :cond_0

    .line 271
    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 273
    :cond_0
    if-eqz v0, :cond_3

    if-eq v0, v1, :cond_2

    if-eq v0, v2, :cond_1

    const/16 v6, 0x5b

    if-eq v0, v6, :cond_1

    const/16 v6, 0x5d

    if-eq v0, v6, :cond_1

    if-eq v0, v3, :cond_1

    if-eq v0, v4, :cond_2

    packed-switch v0, :pswitch_data_1

    .line 288
    goto :goto_1

    .line 283
    :cond_1
    :pswitch_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->back()V

    .line 284
    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 288
    :cond_2
    :pswitch_1
    const-string v1, "Bad character in a name"

    invoke-virtual {p0, v1}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v1

    throw v1

    .line 275
    :cond_3
    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 240
    .end local v5    # "sb":Ljava/lang/StringBuilder;
    :pswitch_2
    sget-object v1, Lorg/json/XML;->QUEST:Ljava/lang/Character;

    return-object v1

    .line 232
    :pswitch_3
    sget-object v1, Lorg/json/XML;->GT:Ljava/lang/Character;

    return-object v1

    .line 236
    :pswitch_4
    sget-object v1, Lorg/json/XML;->EQ:Ljava/lang/Character;

    return-object v1

    .line 230
    :pswitch_5
    const-string v1, "Misplaced \'<\'"

    invoke-virtual {p0, v1}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v1

    throw v1

    .line 238
    :cond_4
    sget-object v1, Lorg/json/XML;->BANG:Ljava/lang/Character;

    return-object v1

    .line 234
    :cond_5
    sget-object v1, Lorg/json/XML;->SLASH:Ljava/lang/Character;

    return-object v1

    .line 246
    :cond_6
    move v1, v0

    .line 247
    .local v1, "q":C
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    .line 249
    .local v2, "sb":Ljava/lang/StringBuilder;
    :goto_2
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v0

    .line 250
    if-eqz v0, :cond_9

    .line 253
    if-ne v0, v1, :cond_7

    .line 254
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 256
    :cond_7
    const/16 v3, 0x26

    if-ne v0, v3, :cond_8

    .line 257
    invoke-virtual {p0, v0}, Lorg/json/XMLTokener;->nextEntity(C)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 259
    :cond_8
    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 251
    :cond_9
    const-string v3, "Unterminated string"

    invoke-virtual {p0, v3}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v3

    throw v3

    .line 228
    .end local v1    # "q":C
    .end local v2    # "sb":Ljava/lang/StringBuilder;
    :cond_a
    const-string v1, "Misshaped element"

    invoke-virtual {p0, v1}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v1

    throw v1

    .line 225
    :cond_b
    goto/16 :goto_0

    nop

    :pswitch_data_0
    .packed-switch 0x3c
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x3c
        :pswitch_1
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method

.method public skipPast(Ljava/lang/String;)Z
    .locals 9
    .param p1, "to"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 306
    const/4 v0, 0x0

    .line 307
    .local v0, "offset":I
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v1

    .line 308
    .local v1, "length":I
    new-array v2, v1, [C

    .line 315
    .local v2, "circle":[C
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    const/4 v4, 0x0

    if-ge v3, v1, :cond_1

    .line 316
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v5

    .line 317
    .local v5, "c":C
    if-nez v5, :cond_0

    .line 318
    return v4

    .line 320
    :cond_0
    aput-char v5, v2, v3

    .line 315
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 326
    .end local v5    # "c":C
    :cond_1
    :goto_1
    move v5, v0

    .line 327
    .local v5, "j":I
    const/4 v6, 0x1

    .line 331
    .local v6, "b":Z
    const/4 v3, 0x0

    :goto_2
    if-ge v3, v1, :cond_4

    .line 332
    aget-char v7, v2, v5

    invoke-virtual {p1, v3}, Ljava/lang/String;->charAt(I)C

    move-result v8

    if-eq v7, v8, :cond_2

    .line 333
    const/4 v6, 0x0

    .line 334
    goto :goto_3

    .line 336
    :cond_2
    add-int/lit8 v5, v5, 0x1

    .line 337
    if-lt v5, v1, :cond_3

    .line 338
    sub-int/2addr v5, v1

    .line 331
    :cond_3
    add-int/lit8 v3, v3, 0x1

    goto :goto_2

    .line 344
    :cond_4
    :goto_3
    if-eqz v6, :cond_5

    .line 345
    const/4 v4, 0x1

    return v4

    .line 350
    :cond_5
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v7

    .line 351
    .local v7, "c":C
    if-nez v7, :cond_6

    .line 352
    return v4

    .line 358
    :cond_6
    aput-char v7, v2, v0

    .line 359
    add-int/lit8 v0, v0, 0x1

    .line 360
    if-lt v0, v1, :cond_7

    .line 361
    sub-int/2addr v0, v1

    goto :goto_1

    .line 360
    :cond_7
    goto :goto_1
.end method
