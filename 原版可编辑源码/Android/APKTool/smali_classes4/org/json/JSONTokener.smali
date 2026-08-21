.class public Lorg/json/JSONTokener;
.super Ljava/lang/Object;
.source "JSONTokener.java"


# instance fields
.field private character:J

.field private eof:Z

.field private index:J

.field private line:J

.field private previous:C

.field private reader:Ljava/io/Reader;

.field private usePrevious:Z


# direct methods
.method public constructor <init>(Ljava/io/InputStream;)V
    .locals 1
    .param p1, "inputStream"    # Ljava/io/InputStream;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 75
    new-instance v0, Ljava/io/InputStreamReader;

    invoke-direct {v0, p1}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-direct {p0, v0}, Lorg/json/JSONTokener;-><init>(Ljava/io/Reader;)V

    .line 76
    return-void
.end method

.method public constructor <init>(Ljava/io/Reader;)V
    .locals 2
    .param p1, "reader"    # Ljava/io/Reader;

    .line 57
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 58
    invoke-virtual {p1}, Ljava/io/Reader;->markSupported()Z

    move-result v0

    if-eqz v0, :cond_0

    move-object v0, p1

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/io/BufferedReader;

    invoke-direct {v0, p1}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    :goto_0
    iput-object v0, p0, Lorg/json/JSONTokener;->reader:Ljava/io/Reader;

    .line 61
    const/4 v0, 0x0

    iput-boolean v0, p0, Lorg/json/JSONTokener;->eof:Z

    .line 62
    iput-boolean v0, p0, Lorg/json/JSONTokener;->usePrevious:Z

    .line 63
    iput-char v0, p0, Lorg/json/JSONTokener;->previous:C

    .line 64
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lorg/json/JSONTokener;->index:J

    .line 65
    const-wide/16 v0, 0x1

    iput-wide v0, p0, Lorg/json/JSONTokener;->character:J

    .line 66
    iput-wide v0, p0, Lorg/json/JSONTokener;->line:J

    .line 67
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 1
    .param p1, "s"    # Ljava/lang/String;

    .line 85
    new-instance v0, Ljava/io/StringReader;

    invoke-direct {v0, p1}, Ljava/io/StringReader;-><init>(Ljava/lang/String;)V

    invoke-direct {p0, v0}, Lorg/json/JSONTokener;-><init>(Ljava/io/Reader;)V

    .line 86
    return-void
.end method

.method public static dehexchar(C)I
    .locals 1
    .param p0, "c"    # C

    .line 112
    const/16 v0, 0x30

    if-lt p0, v0, :cond_0

    const/16 v0, 0x39

    if-gt p0, v0, :cond_0

    .line 113
    add-int/lit8 v0, p0, -0x30

    return v0

    .line 115
    :cond_0
    const/16 v0, 0x41

    if-lt p0, v0, :cond_1

    const/16 v0, 0x46

    if-gt p0, v0, :cond_1

    .line 116
    add-int/lit8 v0, p0, -0x37

    return v0

    .line 118
    :cond_1
    const/16 v0, 0x61

    if-lt p0, v0, :cond_2

    const/16 v0, 0x66

    if-gt p0, v0, :cond_2

    .line 119
    add-int/lit8 v0, p0, -0x57

    return v0

    .line 121
    :cond_2
    const/4 v0, -0x1

    return v0
.end method


# virtual methods
.method public back()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 95
    iget-boolean v0, p0, Lorg/json/JSONTokener;->usePrevious:Z

    if-nez v0, :cond_0

    iget-wide v0, p0, Lorg/json/JSONTokener;->index:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    .line 98
    const-wide/16 v2, 0x1

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lorg/json/JSONTokener;->index:J

    .line 99
    iget-wide v0, p0, Lorg/json/JSONTokener;->character:J

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lorg/json/JSONTokener;->character:J

    .line 100
    const/4 v0, 0x1

    iput-boolean v0, p0, Lorg/json/JSONTokener;->usePrevious:Z

    .line 101
    const/4 v0, 0x0

    iput-boolean v0, p0, Lorg/json/JSONTokener;->eof:Z

    .line 102
    return-void

    .line 96
    :cond_0
    new-instance v0, Lorg/json/JSONException;

    const-string v1, "Stepping back two steps is not supported"

    invoke-direct {v0, v1}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public end()Z
    .locals 1

    .line 125
    iget-boolean v0, p0, Lorg/json/JSONTokener;->eof:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lorg/json/JSONTokener;->usePrevious:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public more()Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 135
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    .line 136
    invoke-virtual {p0}, Lorg/json/JSONTokener;->end()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 137
    const/4 v0, 0x0

    return v0

    .line 139
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->back()V

    .line 140
    const/4 v0, 0x1

    return v0
.end method

.method public next()C
    .locals 8
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 151
    iget-boolean v0, p0, Lorg/json/JSONTokener;->usePrevious:Z

    if-eqz v0, :cond_0

    .line 152
    const/4 v0, 0x0

    iput-boolean v0, p0, Lorg/json/JSONTokener;->usePrevious:Z

    .line 153
    iget-char v0, p0, Lorg/json/JSONTokener;->previous:C

    .local v0, "c":I
    goto :goto_0

    .line 156
    .end local v0    # "c":I
    :cond_0
    :try_start_0
    iget-object v0, p0, Lorg/json/JSONTokener;->reader:Ljava/io/Reader;

    invoke-virtual {v0}, Ljava/io/Reader;->read()I

    move-result v0
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 159
    .restart local v0    # "c":I
    nop

    .line 161
    if-gtz v0, :cond_1

    .line 162
    const/4 v1, 0x1

    iput-boolean v1, p0, Lorg/json/JSONTokener;->eof:Z

    .line 163
    const/4 v0, 0x0

    .line 166
    :cond_1
    :goto_0
    iget-wide v1, p0, Lorg/json/JSONTokener;->index:J

    const-wide/16 v3, 0x1

    add-long/2addr v1, v3

    iput-wide v1, p0, Lorg/json/JSONTokener;->index:J

    .line 167
    iget-char v1, p0, Lorg/json/JSONTokener;->previous:C

    const/16 v2, 0xd

    const-wide/16 v5, 0x0

    const/16 v7, 0xa

    if-ne v1, v2, :cond_3

    .line 168
    iget-wide v1, p0, Lorg/json/JSONTokener;->line:J

    add-long/2addr v1, v3

    iput-wide v1, p0, Lorg/json/JSONTokener;->line:J

    .line 169
    if-ne v0, v7, :cond_2

    move-wide v3, v5

    :cond_2
    iput-wide v3, p0, Lorg/json/JSONTokener;->character:J

    goto :goto_1

    .line 170
    :cond_3
    if-ne v0, v7, :cond_4

    .line 171
    iget-wide v1, p0, Lorg/json/JSONTokener;->line:J

    add-long/2addr v1, v3

    iput-wide v1, p0, Lorg/json/JSONTokener;->line:J

    .line 172
    iput-wide v5, p0, Lorg/json/JSONTokener;->character:J

    goto :goto_1

    .line 174
    :cond_4
    iget-wide v1, p0, Lorg/json/JSONTokener;->character:J

    add-long/2addr v1, v3

    iput-wide v1, p0, Lorg/json/JSONTokener;->character:J

    .line 176
    :goto_1
    int-to-char v1, v0

    iput-char v1, p0, Lorg/json/JSONTokener;->previous:C

    .line 177
    iget-char v1, p0, Lorg/json/JSONTokener;->previous:C

    return v1

    .line 157
    .end local v0    # "c":I
    :catch_0
    move-exception v0

    .line 158
    .local v0, "exception":Ljava/io/IOException;
    new-instance v1, Lorg/json/JSONException;

    invoke-direct {v1, v0}, Lorg/json/JSONException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public next(C)C
    .locals 3
    .param p1, "c"    # C
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 189
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v0

    .line 190
    .local v0, "n":C
    if-ne v0, p1, :cond_0

    .line 194
    return v0

    .line 191
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Expected \'"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, "\' and instead saw \'"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, "\'"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v1

    throw v1
.end method

.method public next(I)Ljava/lang/String;
    .locals 3
    .param p1, "n"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 208
    if-nez p1, :cond_0

    .line 209
    const-string v0, ""

    return-object v0

    .line 212
    :cond_0
    new-array v0, p1, [C

    .line 213
    .local v0, "chars":[C
    const/4 v1, 0x0

    .line 215
    .local v1, "pos":I
    :goto_0
    if-ge v1, p1, :cond_2

    .line 216
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v2

    aput-char v2, v0, v1

    .line 217
    invoke-virtual {p0}, Lorg/json/JSONTokener;->end()Z

    move-result v2

    if-nez v2, :cond_1

    .line 220
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 218
    :cond_1
    const-string v2, "Substring bounds error"

    invoke-virtual {p0, v2}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v2

    throw v2

    .line 222
    :cond_2
    new-instance v2, Ljava/lang/String;

    invoke-direct {v2, v0}, Ljava/lang/String;-><init>([C)V

    return-object v2
.end method

.method public nextClean()C
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 233
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v0

    .line 234
    .local v0, "c":C
    if-eqz v0, :cond_1

    const/16 v1, 0x20

    if-le v0, v1, :cond_0

    goto :goto_1

    .line 237
    .end local v0    # "c":C
    :cond_0
    goto :goto_0

    .line 235
    .restart local v0    # "c":C
    :cond_1
    :goto_1
    return v0
.end method

.method public nextString(C)Ljava/lang/String;
    .locals 6
    .param p1, "quote"    # C
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 254
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 256
    .local v0, "sb":Ljava/lang/StringBuilder;
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v1

    .line 257
    .local v1, "c":C
    if-eqz v1, :cond_9

    const/16 v2, 0xa

    if-eq v1, v2, :cond_9

    const/16 v3, 0xd

    if-eq v1, v3, :cond_9

    const/16 v4, 0x5c

    if-eq v1, v4, :cond_1

    .line 294
    if-ne v1, p1, :cond_0

    .line 295
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    return-object v2

    .line 297
    :cond_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 263
    :cond_1
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v1

    .line 264
    const/16 v5, 0x22

    if-eq v1, v5, :cond_8

    const/16 v5, 0x27

    if-eq v1, v5, :cond_8

    const/16 v5, 0x2f

    if-eq v1, v5, :cond_8

    if-eq v1, v4, :cond_8

    const/16 v4, 0x62

    if-eq v1, v4, :cond_7

    const/16 v4, 0x66

    if-eq v1, v4, :cond_6

    const/16 v4, 0x6e

    if-eq v1, v4, :cond_5

    const/16 v2, 0x72

    if-eq v1, v2, :cond_4

    const/16 v2, 0x74

    if-eq v1, v2, :cond_3

    const/16 v2, 0x75

    if-ne v1, v2, :cond_2

    .line 281
    const/4 v2, 0x4

    invoke-virtual {p0, v2}, Lorg/json/JSONTokener;->next(I)Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x10

    invoke-static {v2, v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;I)I

    move-result v2

    int-to-char v2, v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 282
    goto :goto_0

    .line 290
    :cond_2
    const-string v2, "Illegal escape."

    invoke-virtual {p0, v2}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v2

    throw v2

    .line 269
    :cond_3
    const/16 v2, 0x9

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 270
    goto :goto_0

    .line 278
    :cond_4
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 279
    goto :goto_0

    .line 272
    :cond_5
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 273
    goto :goto_0

    .line 275
    :cond_6
    const/16 v2, 0xc

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 276
    goto :goto_0

    .line 266
    :cond_7
    const/16 v2, 0x8

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 267
    goto :goto_0

    .line 287
    :cond_8
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 288
    goto :goto_0

    .line 261
    :cond_9
    const-string v2, "Unterminated string"

    invoke-virtual {p0, v2}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v2

    throw v2
.end method

.method public nextTo(C)Ljava/lang/String;
    .locals 3
    .param p1, "delimiter"    # C
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 310
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 312
    .local v0, "sb":Ljava/lang/StringBuilder;
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v1

    .line 313
    .local v1, "c":C
    if-eq v1, p1, :cond_1

    if-eqz v1, :cond_1

    const/16 v2, 0xa

    if-eq v1, v2, :cond_1

    const/16 v2, 0xd

    if-ne v1, v2, :cond_0

    goto :goto_1

    .line 319
    :cond_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 320
    .end local v1    # "c":C
    goto :goto_0

    .line 314
    .restart local v1    # "c":C
    :cond_1
    :goto_1
    if-eqz v1, :cond_2

    .line 315
    invoke-virtual {p0}, Lorg/json/JSONTokener;->back()V

    .line 317
    :cond_2
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    return-object v2
.end method

.method public nextTo(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "delimiters"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 332
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 334
    .local v0, "sb":Ljava/lang/StringBuilder;
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v1

    .line 335
    .local v1, "c":C
    invoke-virtual {p1, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v2

    if-gez v2, :cond_1

    if-eqz v1, :cond_1

    const/16 v2, 0xa

    if-eq v1, v2, :cond_1

    const/16 v2, 0xd

    if-ne v1, v2, :cond_0

    goto :goto_1

    .line 342
    :cond_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 337
    :cond_1
    :goto_1
    if-eqz v1, :cond_2

    .line 338
    invoke-virtual {p0}, Lorg/json/JSONTokener;->back()V

    .line 340
    :cond_2
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    return-object v2
.end method

.method public nextValue()Ljava/lang/Object;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 355
    invoke-virtual {p0}, Lorg/json/JSONTokener;->nextClean()C

    move-result v0

    .line 358
    .local v0, "c":C
    const/16 v1, 0x22

    if-eq v0, v1, :cond_4

    const/16 v1, 0x27

    if-eq v0, v1, :cond_4

    const/16 v1, 0x5b

    if-eq v0, v1, :cond_3

    const/16 v1, 0x7b

    if-eq v0, v1, :cond_2

    .line 379
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 380
    .local v1, "sb":Ljava/lang/StringBuilder;
    :goto_0
    const/16 v2, 0x20

    if-lt v0, v2, :cond_0

    const-string v2, ",:]}/\\\"[{;=#"

    invoke-virtual {v2, v0}, Ljava/lang/String;->indexOf(I)I

    move-result v2

    if-gez v2, :cond_0

    .line 381
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 382
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v0

    goto :goto_0

    .line 384
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->back()V

    .line 386
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    .line 387
    .local v2, "string":Ljava/lang/String;
    const-string v3, ""

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 390
    invoke-static {v2}, Lorg/json/JSONObject;->stringToValue(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    return-object v3

    .line 388
    :cond_1
    const-string v3, "Missing value"

    invoke-virtual {p0, v3}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v3

    throw v3

    .line 363
    .end local v1    # "sb":Ljava/lang/StringBuilder;
    .end local v2    # "string":Ljava/lang/String;
    :cond_2
    invoke-virtual {p0}, Lorg/json/JSONTokener;->back()V

    .line 364
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Lorg/json/JSONTokener;)V

    return-object v1

    .line 366
    :cond_3
    invoke-virtual {p0}, Lorg/json/JSONTokener;->back()V

    .line 367
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p0}, Lorg/json/JSONArray;-><init>(Lorg/json/JSONTokener;)V

    return-object v1

    .line 361
    :cond_4
    invoke-virtual {p0, v0}, Lorg/json/JSONTokener;->nextString(C)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public skipTo(C)C
    .locals 8
    .param p1, "to"    # C
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 404
    :try_start_0
    iget-wide v0, p0, Lorg/json/JSONTokener;->index:J

    .line 405
    .local v0, "startIndex":J
    iget-wide v2, p0, Lorg/json/JSONTokener;->character:J

    .line 406
    .local v2, "startCharacter":J
    iget-wide v4, p0, Lorg/json/JSONTokener;->line:J

    .line 407
    .local v4, "startLine":J
    iget-object v6, p0, Lorg/json/JSONTokener;->reader:Ljava/io/Reader;

    const v7, 0xf4240

    invoke-virtual {v6, v7}, Ljava/io/Reader;->mark(I)V

    .line 409
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONTokener;->next()C

    move-result v6

    .line 410
    .local v6, "c":C
    if-nez v6, :cond_1

    .line 411
    iget-object v7, p0, Lorg/json/JSONTokener;->reader:Ljava/io/Reader;

    invoke-virtual {v7}, Ljava/io/Reader;->reset()V

    .line 412
    iput-wide v0, p0, Lorg/json/JSONTokener;->index:J

    .line 413
    iput-wide v2, p0, Lorg/json/JSONTokener;->character:J

    .line 414
    iput-wide v4, p0, Lorg/json/JSONTokener;->line:J
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 415
    return v6

    .line 417
    :cond_1
    if-ne v6, p1, :cond_0

    .line 420
    .end local v0    # "startIndex":J
    .end local v2    # "startCharacter":J
    .end local v4    # "startLine":J
    nop

    .line 421
    invoke-virtual {p0}, Lorg/json/JSONTokener;->back()V

    .line 422
    return v6

    .line 418
    .end local v6    # "c":C
    :catch_0
    move-exception v0

    .line 419
    .local v0, "exception":Ljava/io/IOException;
    new-instance v1, Lorg/json/JSONException;

    invoke-direct {v1, v0}, Lorg/json/JSONException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public syntaxError(Ljava/lang/String;)Lorg/json/JSONException;
    .locals 3
    .param p1, "message"    # Ljava/lang/String;

    .line 433
    new-instance v0, Lorg/json/JSONException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lorg/json/JSONTokener;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 443
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, " at "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lorg/json/JSONTokener;->index:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " [character "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lorg/json/JSONTokener;->character:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " line "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lorg/json/JSONTokener;->line:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
