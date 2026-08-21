.class public Lorg/json/JSONObject;
.super Ljava/lang/Object;
.source "JSONObject.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/json/JSONObject$Null;
    }
.end annotation


# static fields
.field public static final NULL:Ljava/lang/Object;


# instance fields
.field private final map:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 149
    new-instance v0, Lorg/json/JSONObject$Null;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lorg/json/JSONObject$Null;-><init>(Lorg/json/JSONObject$1;)V

    sput-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 154
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 155
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lorg/json/JSONObject;->map:Ljava/util/Map;

    .line 156
    return-void
.end method

.method public constructor <init>(Ljava/lang/Object;)V
    .locals 0
    .param p1, "bean"    # Ljava/lang/Object;

    .line 281
    invoke-direct {p0}, Lorg/json/JSONObject;-><init>()V

    .line 282
    invoke-direct {p0, p1}, Lorg/json/JSONObject;->populateMap(Ljava/lang/Object;)V

    .line 283
    return-void
.end method

.method public constructor <init>(Ljava/lang/Object;[Ljava/lang/String;)V
    .locals 4
    .param p1, "object"    # Ljava/lang/Object;
    .param p2, "names"    # [Ljava/lang/String;

    .line 300
    invoke-direct {p0}, Lorg/json/JSONObject;-><init>()V

    .line 301
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    .line 302
    .local v0, "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p2

    if-ge v1, v2, :cond_0

    .line 303
    aget-object v2, p2, v1

    .line 305
    .local v2, "name":Ljava/lang/String;
    :try_start_0
    invoke-virtual {v0, v2}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v3

    invoke-virtual {v3, p1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {p0, v2, v3}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 307
    goto :goto_1

    .line 306
    :catch_0
    move-exception v3

    .line 302
    .end local v2    # "name":Ljava/lang/String;
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 309
    .end local v1    # "i":I
    :cond_0
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 1
    .param p1, "source"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 324
    new-instance v0, Lorg/json/JSONTokener;

    invoke-direct {v0, p1}, Lorg/json/JSONTokener;-><init>(Ljava/lang/String;)V

    invoke-direct {p0, v0}, Lorg/json/JSONObject;-><init>(Lorg/json/JSONTokener;)V

    .line 325
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/util/Locale;)V
    .locals 10
    .param p1, "baseName"    # Ljava/lang/String;
    .param p2, "locale"    # Ljava/util/Locale;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 338
    invoke-direct {p0}, Lorg/json/JSONObject;-><init>()V

    .line 339
    nop

    .line 340
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->getContextClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    .line 339
    invoke-static {p1, p2, v0}, Ljava/util/ResourceBundle;->getBundle(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;

    move-result-object v0

    .line 344
    .local v0, "bundle":Ljava/util/ResourceBundle;
    invoke-virtual {v0}, Ljava/util/ResourceBundle;->getKeys()Ljava/util/Enumeration;

    move-result-object v1

    .line 345
    .local v1, "keys":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
    :goto_0
    invoke-interface {v1}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 346
    invoke-interface {v1}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v2

    .line 347
    .local v2, "key":Ljava/lang/Object;
    if-eqz v2, :cond_2

    .line 353
    move-object v3, v2

    check-cast v3, Ljava/lang/String;

    const-string v4, "\\."

    invoke-virtual {v3, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    .line 354
    .local v3, "path":[Ljava/lang/String;
    array-length v4, v3

    add-int/lit8 v4, v4, -0x1

    .line 355
    .local v4, "last":I
    move-object v5, p0

    .line 356
    .local v5, "target":Lorg/json/JSONObject;
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_1
    if-ge v6, v4, :cond_1

    .line 357
    aget-object v7, v3, v6

    .line 358
    .local v7, "segment":Ljava/lang/String;
    invoke-virtual {v5, v7}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v8

    .line 359
    .local v8, "nextTarget":Lorg/json/JSONObject;
    if-nez v8, :cond_0

    .line 360
    new-instance v9, Lorg/json/JSONObject;

    invoke-direct {v9}, Lorg/json/JSONObject;-><init>()V

    move-object v8, v9

    .line 361
    invoke-virtual {v5, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 363
    :cond_0
    move-object v5, v8

    .line 356
    .end local v7    # "segment":Ljava/lang/String;
    .end local v8    # "nextTarget":Lorg/json/JSONObject;
    add-int/lit8 v6, v6, 0x1

    goto :goto_1

    .line 365
    .end local v6    # "i":I
    :cond_1
    aget-object v6, v3, v4

    move-object v7, v2

    check-cast v7, Ljava/lang/String;

    invoke-virtual {v0, v7}, Ljava/util/ResourceBundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 367
    .end local v2    # "key":Ljava/lang/Object;
    .end local v3    # "path":[Ljava/lang/String;
    .end local v4    # "last":I
    .end local v5    # "target":Lorg/json/JSONObject;
    :cond_2
    goto :goto_0

    .line 368
    :cond_3
    return-void
.end method

.method public constructor <init>(Ljava/util/Map;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 245
    .local p1, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 246
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lorg/json/JSONObject;->map:Ljava/util/Map;

    .line 247
    if-eqz p1, :cond_1

    .line 248
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 249
    .local v0, "i":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/Object;>;>;"
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 250
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 251
    .local v1, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/Object;>;"
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    .line 252
    .local v2, "value":Ljava/lang/Object;
    if-eqz v2, :cond_0

    .line 253
    iget-object v3, p0, Lorg/json/JSONObject;->map:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    invoke-static {v2}, Lorg/json/JSONObject;->wrap(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    invoke-interface {v3, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 255
    .end local v1    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/Object;>;"
    .end local v2    # "value":Ljava/lang/Object;
    :cond_0
    goto :goto_0

    .line 257
    .end local v0    # "i":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/Object;>;>;"
    :cond_1
    return-void
.end method

.method public constructor <init>(Lorg/json/JSONObject;[Ljava/lang/String;)V
    .locals 3
    .param p1, "jo"    # Lorg/json/JSONObject;
    .param p2, "names"    # [Ljava/lang/String;

    .line 173
    invoke-direct {p0}, Lorg/json/JSONObject;-><init>()V

    .line 174
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p2

    if-ge v0, v1, :cond_0

    .line 176
    :try_start_0
    aget-object v1, p2, v0

    aget-object v2, p2, v0

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->putOnce(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 178
    goto :goto_1

    .line 177
    :catch_0
    move-exception v1

    .line 174
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 180
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method public constructor <init>(Lorg/json/JSONTokener;)V
    .locals 5
    .param p1, "x"    # Lorg/json/JSONTokener;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 192
    invoke-direct {p0}, Lorg/json/JSONObject;-><init>()V

    .line 196
    invoke-virtual {p1}, Lorg/json/JSONTokener;->nextClean()C

    move-result v0

    const/16 v1, 0x7b

    if-ne v0, v1, :cond_6

    .line 200
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONTokener;->nextClean()C

    move-result v0

    .line 201
    .local v0, "c":C
    if-eqz v0, :cond_5

    const/16 v1, 0x7d

    if-eq v0, v1, :cond_4

    .line 207
    invoke-virtual {p1}, Lorg/json/JSONTokener;->back()V

    .line 208
    invoke-virtual {p1}, Lorg/json/JSONTokener;->nextValue()Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 213
    .local v2, "key":Ljava/lang/String;
    invoke-virtual {p1}, Lorg/json/JSONTokener;->nextClean()C

    move-result v0

    .line 214
    const/16 v3, 0x3a

    if-ne v0, v3, :cond_3

    .line 217
    invoke-virtual {p1}, Lorg/json/JSONTokener;->nextValue()Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {p0, v2, v3}, Lorg/json/JSONObject;->putOnce(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 221
    invoke-virtual {p1}, Lorg/json/JSONTokener;->nextClean()C

    move-result v3

    const/16 v4, 0x2c

    if-eq v3, v4, :cond_1

    const/16 v4, 0x3b

    if-eq v3, v4, :cond_1

    if-ne v3, v1, :cond_0

    .line 230
    return-void

    .line 232
    :cond_0
    const-string v1, "Expected a \',\' or \'}\'"

    invoke-virtual {p1, v1}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v1

    throw v1

    .line 224
    :cond_1
    invoke-virtual {p1}, Lorg/json/JSONTokener;->nextClean()C

    move-result v3

    if-ne v3, v1, :cond_2

    .line 225
    return-void

    .line 227
    :cond_2
    invoke-virtual {p1}, Lorg/json/JSONTokener;->back()V

    .line 228
    goto :goto_0

    .line 215
    :cond_3
    const-string v1, "Expected a \':\' after a key"

    invoke-virtual {p1, v1}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v1

    throw v1

    .line 205
    .end local v2    # "key":Ljava/lang/String;
    :cond_4
    return-void

    .line 203
    :cond_5
    const-string v1, "A JSONObject text must end with \'}\'"

    invoke-virtual {p1, v1}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v1

    throw v1

    .line 197
    .end local v0    # "c":C
    :cond_6
    const-string v0, "A JSONObject text must begin with \'{\'"

    invoke-virtual {p1, v0}, Lorg/json/JSONTokener;->syntaxError(Ljava/lang/String;)Lorg/json/JSONException;

    move-result-object v0

    throw v0
.end method

.method public static doubleToString(D)Ljava/lang/String;
    .locals 3
    .param p0, "d"    # D

    .line 442
    invoke-static {p0, p1}, Ljava/lang/Double;->isInfinite(D)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-static {p0, p1}, Ljava/lang/Double;->isNaN(D)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 448
    :cond_0
    invoke-static {p0, p1}, Ljava/lang/Double;->toString(D)Ljava/lang/String;

    move-result-object v0

    .line 449
    .local v0, "string":Ljava/lang/String;
    const/16 v1, 0x2e

    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    if-lez v1, :cond_2

    const/16 v1, 0x65

    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    if-gez v1, :cond_2

    const/16 v1, 0x45

    .line 450
    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    if-gez v1, :cond_2

    .line 451
    :goto_0
    const-string v1, "0"

    invoke-virtual {v0, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    .line 452
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 454
    :cond_1
    const-string v1, "."

    invoke-virtual {v0, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 455
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 458
    :cond_2
    return-object v0

    .line 443
    .end local v0    # "string":Ljava/lang/String;
    :cond_3
    :goto_1
    const-string v0, "null"

    return-object v0
.end method

.method public static getNames(Ljava/lang/Object;)[Ljava/lang/String;
    .locals 6
    .param p0, "object"    # Ljava/lang/Object;

    .line 631
    const/4 v0, 0x0

    if-nez p0, :cond_0

    .line 632
    return-object v0

    .line 634
    :cond_0
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    .line 635
    .local v1, "klass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    invoke-virtual {v1}, Ljava/lang/Class;->getFields()[Ljava/lang/reflect/Field;

    move-result-object v2

    .line 636
    .local v2, "fields":[Ljava/lang/reflect/Field;
    array-length v3, v2

    .line 637
    .local v3, "length":I
    if-nez v3, :cond_1

    .line 638
    return-object v0

    .line 640
    :cond_1
    new-array v0, v3, [Ljava/lang/String;

    .line 641
    .local v0, "names":[Ljava/lang/String;
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    if-ge v4, v3, :cond_2

    .line 642
    aget-object v5, v2, v4

    invoke-virtual {v5}, Ljava/lang/reflect/Field;->getName()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v0, v4

    .line 641
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 644
    .end local v4    # "i":I
    :cond_2
    return-object v0
.end method

.method public static getNames(Lorg/json/JSONObject;)[Ljava/lang/String;
    .locals 5
    .param p0, "jo"    # Lorg/json/JSONObject;

    .line 611
    invoke-virtual {p0}, Lorg/json/JSONObject;->length()I

    move-result v0

    .line 612
    .local v0, "length":I
    if-nez v0, :cond_0

    .line 613
    const/4 v1, 0x0

    return-object v1

    .line 615
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 616
    .local v1, "iterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    new-array v2, v0, [Ljava/lang/String;

    .line 617
    .local v2, "names":[Ljava/lang/String;
    const/4 v3, 0x0

    .line 618
    .local v3, "i":I
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 619
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    aput-object v4, v2, v3

    .line 620
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 622
    :cond_1
    return-object v2
.end method

.method static final indent(Ljava/io/Writer;I)V
    .locals 2
    .param p0, "writer"    # Ljava/io/Writer;
    .param p1, "indent"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 1635
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    if-ge v0, p1, :cond_0

    .line 1636
    const/16 v1, 0x20

    invoke-virtual {p0, v1}, Ljava/io/Writer;->write(I)V

    .line 1635
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1638
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method public static numberToString(Ljava/lang/Number;)Ljava/lang/String;
    .locals 3
    .param p0, "number"    # Ljava/lang/Number;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 771
    if-eqz p0, :cond_2

    .line 774
    invoke-static {p0}, Lorg/json/JSONObject;->testValidity(Ljava/lang/Object;)V

    .line 778
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 779
    .local v0, "string":Ljava/lang/String;
    const/16 v1, 0x2e

    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    if-lez v1, :cond_1

    const/16 v1, 0x65

    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    if-gez v1, :cond_1

    const/16 v1, 0x45

    .line 780
    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    if-gez v1, :cond_1

    .line 781
    :goto_0
    const-string v1, "0"

    invoke-virtual {v0, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 782
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 784
    :cond_0
    const-string v1, "."

    invoke-virtual {v0, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 785
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 788
    :cond_1
    return-object v0

    .line 772
    .end local v0    # "string":Ljava/lang/String;
    :cond_2
    new-instance v0, Lorg/json/JSONException;

    const-string v1, "Null pointer"

    invoke-direct {v0, v1}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private populateMap(Ljava/lang/Object;)V
    .locals 13
    .param p1, "bean"    # Ljava/lang/Object;

    .line 984
    const-string v0, ""

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    .line 988
    .local v1, "klass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    invoke-virtual {v1}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v2

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-eqz v2, :cond_0

    const/4 v2, 0x1

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    .line 990
    .local v2, "includeSuperClass":Z
    :goto_0
    if-eqz v2, :cond_1

    invoke-virtual {v1}, Ljava/lang/Class;->getMethods()[Ljava/lang/reflect/Method;

    move-result-object v5

    goto :goto_1

    .line 991
    :cond_1
    invoke-virtual {v1}, Ljava/lang/Class;->getDeclaredMethods()[Ljava/lang/reflect/Method;

    move-result-object v5

    :goto_1
    nop

    .line 992
    .local v5, "methods":[Ljava/lang/reflect/Method;
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_2
    array-length v7, v5

    if-ge v6, v7, :cond_9

    .line 994
    :try_start_0
    aget-object v7, v5, v6

    .line 995
    .local v7, "method":Ljava/lang/reflect/Method;
    invoke-virtual {v7}, Ljava/lang/reflect/Method;->getModifiers()I

    move-result v8

    invoke-static {v8}, Ljava/lang/reflect/Modifier;->isPublic(I)Z

    move-result v8

    if-eqz v8, :cond_8

    .line 996
    invoke-virtual {v7}, Ljava/lang/reflect/Method;->getName()Ljava/lang/String;

    move-result-object v8

    .line 997
    .local v8, "name":Ljava/lang/String;
    move-object v9, v0

    .line 998
    .local v9, "key":Ljava/lang/String;
    const-string v10, "get"

    invoke-virtual {v8, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v10

    if-eqz v10, :cond_4

    .line 999
    const-string v10, "getClass"

    invoke-virtual {v10, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-nez v10, :cond_3

    const-string v10, "getDeclaringClass"

    .line 1000
    invoke-virtual {v10, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_2

    goto :goto_3

    .line 1003
    :cond_2
    const/4 v10, 0x3

    invoke-virtual {v8, v10}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v10

    move-object v9, v10

    goto :goto_4

    .line 1001
    :cond_3
    :goto_3
    move-object v9, v0

    goto :goto_4

    .line 1005
    :cond_4
    const-string v10, "is"

    invoke-virtual {v8, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v10

    if-eqz v10, :cond_5

    .line 1006
    const/4 v10, 0x2

    invoke-virtual {v8, v10}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v10

    move-object v9, v10

    .line 1008
    :cond_5
    :goto_4
    invoke-virtual {v9}, Ljava/lang/String;->length()I

    move-result v10

    if-lez v10, :cond_8

    .line 1009
    invoke-virtual {v9, v3}, Ljava/lang/String;->charAt(I)C

    move-result v10

    invoke-static {v10}, Ljava/lang/Character;->isUpperCase(C)Z

    move-result v10

    if-eqz v10, :cond_8

    .line 1010
    invoke-virtual {v7}, Ljava/lang/reflect/Method;->getParameterTypes()[Ljava/lang/Class;

    move-result-object v10

    array-length v10, v10

    if-nez v10, :cond_8

    .line 1011
    invoke-virtual {v9}, Ljava/lang/String;->length()I

    move-result v10

    if-ne v10, v4, :cond_6

    .line 1012
    invoke-virtual {v9}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v10

    move-object v9, v10

    goto :goto_5

    .line 1013
    :cond_6
    invoke-virtual {v9, v4}, Ljava/lang/String;->charAt(I)C

    move-result v10

    invoke-static {v10}, Ljava/lang/Character;->isUpperCase(C)Z

    move-result v10

    if-nez v10, :cond_7

    .line 1014
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v3, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v11}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1015
    invoke-virtual {v9, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    move-object v9, v10

    .line 1018
    :cond_7
    :goto_5
    const/4 v10, 0x0

    invoke-virtual {v7, p1, v10}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    .line 1019
    .local v10, "result":Ljava/lang/Object;
    if-eqz v10, :cond_8

    .line 1020
    iget-object v11, p0, Lorg/json/JSONObject;->map:Ljava/util/Map;

    invoke-static {v10}, Lorg/json/JSONObject;->wrap(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    invoke-interface {v11, v9, v12}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1025
    .end local v7    # "method":Ljava/lang/reflect/Method;
    .end local v8    # "name":Ljava/lang/String;
    .end local v9    # "key":Ljava/lang/String;
    .end local v10    # "result":Ljava/lang/Object;
    :cond_8
    goto :goto_6

    .line 1024
    :catch_0
    move-exception v7

    .line 992
    :goto_6
    add-int/lit8 v6, v6, 0x1

    goto/16 :goto_2

    .line 1027
    .end local v6    # "i":I
    :cond_9
    return-void
.end method

.method public static quote(Ljava/lang/String;Ljava/io/Writer;)Ljava/io/Writer;
    .locals 9
    .param p0, "string"    # Ljava/lang/String;
    .param p1, "w"    # Ljava/io/Writer;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 1217
    if-eqz p0, :cond_a

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    if-nez v0, :cond_0

    goto/16 :goto_3

    .line 1223
    :cond_0
    const/4 v0, 0x0

    .line 1226
    .local v0, "c":C
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    .line 1228
    .local v1, "len":I
    const/16 v2, 0x22

    invoke-virtual {p1, v2}, Ljava/io/Writer;->write(I)V

    .line 1229
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v1, :cond_9

    .line 1230
    move v4, v0

    .line 1231
    .local v4, "b":C
    invoke-virtual {p0, v3}, Ljava/lang/String;->charAt(I)C

    move-result v0

    .line 1232
    const/16 v5, 0xc

    if-eq v0, v5, :cond_8

    const/16 v5, 0xd

    if-eq v0, v5, :cond_7

    const/16 v5, 0x5c

    if-eq v0, v2, :cond_6

    const/16 v6, 0x2f

    if-eq v0, v6, :cond_4

    if-eq v0, v5, :cond_6

    packed-switch v0, :pswitch_data_0

    .line 1260
    const/16 v5, 0x20

    if-lt v0, v5, :cond_3

    const/16 v5, 0x80

    if-lt v0, v5, :cond_1

    const/16 v5, 0xa0

    if-lt v0, v5, :cond_3

    :cond_1
    const/16 v5, 0x2000

    if-lt v0, v5, :cond_2

    const/16 v5, 0x2100

    if-ge v0, v5, :cond_2

    goto :goto_1

    .line 1267
    :cond_2
    invoke-virtual {p1, v0}, Ljava/io/Writer;->write(I)V

    goto :goto_2

    .line 1262
    :cond_3
    :goto_1
    const-string v5, "\\u"

    invoke-virtual {p1, v5}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    .line 1263
    invoke-static {v0}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v5

    .line 1264
    .local v5, "hhhh":Ljava/lang/String;
    const/4 v6, 0x0

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v7

    rsub-int/lit8 v7, v7, 0x4

    const-string v8, "0000"

    invoke-virtual {p1, v8, v6, v7}, Ljava/io/Writer;->write(Ljava/lang/String;II)V

    .line 1265
    invoke-virtual {p1, v5}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    goto :goto_2

    .line 1251
    .end local v5    # "hhhh":Ljava/lang/String;
    :pswitch_0
    const-string v5, "\\n"

    invoke-virtual {p1, v5}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    .line 1252
    goto :goto_2

    .line 1248
    :pswitch_1
    const-string v5, "\\t"

    invoke-virtual {p1, v5}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    .line 1249
    goto :goto_2

    .line 1245
    :pswitch_2
    const-string v5, "\\b"

    invoke-virtual {p1, v5}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    .line 1246
    goto :goto_2

    .line 1239
    :cond_4
    const/16 v6, 0x3c

    if-ne v4, v6, :cond_5

    .line 1240
    invoke-virtual {p1, v5}, Ljava/io/Writer;->write(I)V

    .line 1242
    :cond_5
    invoke-virtual {p1, v0}, Ljava/io/Writer;->write(I)V

    .line 1243
    goto :goto_2

    .line 1235
    :cond_6
    invoke-virtual {p1, v5}, Ljava/io/Writer;->write(I)V

    .line 1236
    invoke-virtual {p1, v0}, Ljava/io/Writer;->write(I)V

    .line 1237
    goto :goto_2

    .line 1257
    :cond_7
    const-string v5, "\\r"

    invoke-virtual {p1, v5}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    .line 1258
    goto :goto_2

    .line 1254
    :cond_8
    const-string v5, "\\f"

    invoke-virtual {p1, v5}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    .line 1255
    nop

    .line 1229
    :goto_2
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    .line 1271
    .end local v4    # "b":C
    :cond_9
    invoke-virtual {p1, v2}, Ljava/io/Writer;->write(I)V

    .line 1272
    return-object p1

    .line 1218
    .end local v0    # "c":C
    .end local v1    # "len":I
    .end local v3    # "i":I
    :cond_a
    :goto_3
    const-string v0, "\"\""

    invoke-virtual {p1, v0}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    .line 1219
    return-object p1

    nop

    :pswitch_data_0
    .packed-switch 0x8
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public static quote(Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .param p0, "string"    # Ljava/lang/String;

    .line 1205
    new-instance v0, Ljava/io/StringWriter;

    invoke-direct {v0}, Ljava/io/StringWriter;-><init>()V

    .line 1206
    .local v0, "sw":Ljava/io/StringWriter;
    invoke-virtual {v0}, Ljava/io/StringWriter;->getBuffer()Ljava/lang/StringBuffer;

    move-result-object v1

    monitor-enter v1

    .line 1208
    :try_start_0
    invoke-static {p0, v0}, Lorg/json/JSONObject;->quote(Ljava/lang/String;Ljava/io/Writer;)Ljava/io/Writer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    monitor-exit v1

    return-object v2

    .line 1213
    :catchall_0
    move-exception v2

    goto :goto_0

    .line 1209
    :catch_0
    move-exception v2

    .line 1211
    .local v2, "ignored":Ljava/io/IOException;
    const-string v3, ""

    monitor-exit v1

    return-object v3

    .line 1213
    .end local v2    # "ignored":Ljava/io/IOException;
    :goto_0
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v2
.end method

.method public static stringToValue(Ljava/lang/String;)Ljava/lang/Object;
    .locals 7
    .param p0, "string"    # Ljava/lang/String;

    .line 1337
    const-string v0, ""

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1338
    return-object p0

    .line 1340
    :cond_0
    const-string v0, "true"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1341
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    return-object v0

    .line 1343
    :cond_1
    const-string v0, "false"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1344
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    return-object v0

    .line 1346
    :cond_2
    const-string v0, "null"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1347
    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    return-object v0

    .line 1355
    :cond_3
    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Ljava/lang/String;->charAt(I)C

    move-result v0

    .line 1356
    .local v0, "b":C
    const/16 v1, 0x30

    if-lt v0, v1, :cond_4

    const/16 v1, 0x39

    if-le v0, v1, :cond_5

    :cond_4
    const/16 v1, 0x2d

    if-ne v0, v1, :cond_a

    .line 1358
    :cond_5
    const/16 v1, 0x2e

    :try_start_0
    invoke-virtual {p0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    const/4 v2, -0x1

    if-gt v1, v2, :cond_8

    const/16 v1, 0x65

    invoke-virtual {p0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    if-gt v1, v2, :cond_8

    const/16 v1, 0x45

    .line 1359
    invoke-virtual {p0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    if-le v1, v2, :cond_6

    goto :goto_0

    .line 1365
    :cond_6
    new-instance v1, Ljava/lang/Long;

    invoke-direct {v1, p0}, Ljava/lang/Long;-><init>(Ljava/lang/String;)V

    .line 1366
    .local v1, "myLong":Ljava/lang/Long;
    invoke-virtual {v1}, Ljava/lang/Long;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_9

    .line 1367
    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    invoke-virtual {v1}, Ljava/lang/Long;->intValue()I

    move-result v4

    int-to-long v4, v4

    cmp-long v6, v2, v4

    if-nez v6, :cond_7

    .line 1368
    invoke-virtual {v1}, Ljava/lang/Long;->intValue()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    return-object v2

    .line 1370
    :cond_7
    return-object v1

    .line 1360
    .end local v1    # "myLong":Ljava/lang/Long;
    :cond_8
    :goto_0
    invoke-static {p0}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v1

    .line 1361
    .local v1, "d":Ljava/lang/Double;
    invoke-virtual {v1}, Ljava/lang/Double;->isInfinite()Z

    move-result v2

    if-nez v2, :cond_9

    invoke-virtual {v1}, Ljava/lang/Double;->isNaN()Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v2, :cond_9

    .line 1362
    return-object v1

    .line 1375
    .end local v1    # "d":Ljava/lang/Double;
    :cond_9
    goto :goto_1

    .line 1374
    :catch_0
    move-exception v1

    .line 1377
    :cond_a
    :goto_1
    return-object p0
.end method

.method public static testValidity(Ljava/lang/Object;)V
    .locals 2
    .param p0, "o"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1389
    if-eqz p0, :cond_3

    .line 1390
    instance-of v0, p0, Ljava/lang/Double;

    const-string v1, "JSON does not allow non-finite numbers."

    if-eqz v0, :cond_1

    .line 1391
    move-object v0, p0

    check-cast v0, Ljava/lang/Double;

    invoke-virtual {v0}, Ljava/lang/Double;->isInfinite()Z

    move-result v0

    if-nez v0, :cond_0

    move-object v0, p0

    check-cast v0, Ljava/lang/Double;

    invoke-virtual {v0}, Ljava/lang/Double;->isNaN()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 1392
    :cond_0
    new-instance v0, Lorg/json/JSONException;

    invoke-direct {v0, v1}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 1395
    :cond_1
    instance-of v0, p0, Ljava/lang/Float;

    if-eqz v0, :cond_3

    .line 1396
    move-object v0, p0

    check-cast v0, Ljava/lang/Float;

    invoke-virtual {v0}, Ljava/lang/Float;->isInfinite()Z

    move-result v0

    if-nez v0, :cond_2

    move-object v0, p0

    check-cast v0, Ljava/lang/Float;

    invoke-virtual {v0}, Ljava/lang/Float;->isNaN()Z

    move-result v0

    if-nez v0, :cond_2

    goto :goto_0

    .line 1397
    :cond_2
    new-instance v0, Lorg/json/JSONException;

    invoke-direct {v0, v1}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 1402
    :cond_3
    :goto_0
    return-void
.end method

.method public static valueToString(Ljava/lang/Object;)Ljava/lang/String;
    .locals 4
    .param p0, "value"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1492
    if-eqz p0, :cond_9

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_1

    .line 1495
    :cond_0
    instance-of v0, p0, Lorg/json/JSONString;

    if-eqz v0, :cond_2

    .line 1498
    :try_start_0
    move-object v0, p0

    check-cast v0, Lorg/json/JSONString;

    invoke-interface {v0}, Lorg/json/JSONString;->toJSONString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1501
    .local v0, "object":Ljava/lang/Object;
    nop

    .line 1502
    instance-of v1, v0, Ljava/lang/String;

    if-eqz v1, :cond_1

    .line 1503
    return-object v0

    .line 1505
    :cond_1
    new-instance v1, Lorg/json/JSONException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Bad value from toJSONString: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 1499
    .end local v0    # "object":Ljava/lang/Object;
    :catch_0
    move-exception v0

    .line 1500
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lorg/json/JSONException;

    invoke-direct {v1, v0}, Lorg/json/JSONException;-><init>(Ljava/lang/Throwable;)V

    throw v1

    .line 1507
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_2
    instance-of v0, p0, Ljava/lang/Number;

    if-eqz v0, :cond_3

    .line 1508
    move-object v0, p0

    check-cast v0, Ljava/lang/Number;

    invoke-static {v0}, Lorg/json/JSONObject;->numberToString(Ljava/lang/Number;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 1510
    :cond_3
    instance-of v0, p0, Ljava/lang/Boolean;

    if-nez v0, :cond_8

    instance-of v0, p0, Lorg/json/JSONObject;

    if-nez v0, :cond_8

    instance-of v0, p0, Lorg/json/JSONArray;

    if-eqz v0, :cond_4

    goto :goto_0

    .line 1514
    :cond_4
    instance-of v0, p0, Ljava/util/Map;

    if-eqz v0, :cond_5

    .line 1516
    move-object v0, p0

    check-cast v0, Ljava/util/Map;

    .line 1517
    .local v0, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 1519
    .end local v0    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    :cond_5
    instance-of v0, p0, Ljava/util/Collection;

    if-eqz v0, :cond_6

    .line 1521
    move-object v0, p0

    check-cast v0, Ljava/util/Collection;

    .line 1522
    .local v0, "coll":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/Object;>;"
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, v0}, Lorg/json/JSONArray;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v1}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 1524
    .end local v0    # "coll":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/Object;>;"
    :cond_6
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->isArray()Z

    move-result v0

    if-eqz v0, :cond_7

    .line 1525
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p0}, Lorg/json/JSONArray;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 1527
    :cond_7
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 1512
    :cond_8
    :goto_0
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 1493
    :cond_9
    :goto_1
    const-string v0, "null"

    return-object v0
.end method

.method public static wrap(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 3
    .param p0, "object"    # Ljava/lang/Object;

    .line 1544
    if-nez p0, :cond_0

    .line 1545
    :try_start_0
    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    return-object v0

    .line 1547
    :cond_0
    instance-of v0, p0, Lorg/json/JSONObject;

    if-nez v0, :cond_8

    instance-of v0, p0, Lorg/json/JSONArray;

    if-nez v0, :cond_8

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    .line 1548
    invoke-virtual {v0, p0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_8

    instance-of v0, p0, Lorg/json/JSONString;

    if-nez v0, :cond_8

    instance-of v0, p0, Ljava/lang/Byte;

    if-nez v0, :cond_8

    instance-of v0, p0, Ljava/lang/Character;

    if-nez v0, :cond_8

    instance-of v0, p0, Ljava/lang/Short;

    if-nez v0, :cond_8

    instance-of v0, p0, Ljava/lang/Integer;

    if-nez v0, :cond_8

    instance-of v0, p0, Ljava/lang/Long;

    if-nez v0, :cond_8

    instance-of v0, p0, Ljava/lang/Boolean;

    if-nez v0, :cond_8

    instance-of v0, p0, Ljava/lang/Float;

    if-nez v0, :cond_8

    instance-of v0, p0, Ljava/lang/Double;

    if-nez v0, :cond_8

    instance-of v0, p0, Ljava/lang/String;

    if-eqz v0, :cond_1

    goto :goto_2

    .line 1557
    :cond_1
    instance-of v0, p0, Ljava/util/Collection;

    if-eqz v0, :cond_2

    .line 1559
    move-object v0, p0

    check-cast v0, Ljava/util/Collection;

    .line 1560
    .local v0, "coll":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/Object;>;"
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, v0}, Lorg/json/JSONArray;-><init>(Ljava/util/Collection;)V

    return-object v1

    .line 1562
    .end local v0    # "coll":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/Object;>;"
    :cond_2
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->isArray()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1563
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p0}, Lorg/json/JSONArray;-><init>(Ljava/lang/Object;)V

    return-object v0

    .line 1565
    :cond_3
    instance-of v0, p0, Ljava/util/Map;

    if-eqz v0, :cond_4

    .line 1567
    move-object v0, p0

    check-cast v0, Ljava/util/Map;

    .line 1568
    .local v0, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    return-object v1

    .line 1570
    .end local v0    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    :cond_4
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getPackage()Ljava/lang/Package;

    move-result-object v0

    .line 1571
    .local v0, "objectPackage":Ljava/lang/Package;
    if-eqz v0, :cond_5

    .line 1572
    invoke-virtual {v0}, Ljava/lang/Package;->getName()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_5
    const-string v1, ""

    .line 1573
    .local v1, "objectPackageName":Ljava/lang/String;
    :goto_0
    const-string v2, "java."

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_7

    const-string v2, "javax."

    .line 1574
    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_7

    .line 1575
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v2

    if-nez v2, :cond_6

    goto :goto_1

    .line 1578
    :cond_6
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/Object;)V

    return-object v2

    .line 1576
    :cond_7
    :goto_1
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v2

    .line 1554
    .end local v0    # "objectPackage":Ljava/lang/Package;
    .end local v1    # "objectPackageName":Ljava/lang/String;
    :cond_8
    :goto_2
    return-object p0

    .line 1579
    :catch_0
    move-exception v0

    .line 1580
    .local v0, "exception":Ljava/lang/Exception;
    const/4 v1, 0x0

    return-object v1
.end method

.method static final writeValue(Ljava/io/Writer;Ljava/lang/Object;II)Ljava/io/Writer;
    .locals 2
    .param p0, "writer"    # Ljava/io/Writer;
    .param p1, "value"    # Ljava/lang/Object;
    .param p2, "indentFactor"    # I
    .param p3, "indent"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;,
            Ljava/io/IOException;
        }
    .end annotation

    .line 1599
    if-eqz p1, :cond_a

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_1

    .line 1601
    :cond_0
    instance-of v0, p1, Lorg/json/JSONObject;

    if-eqz v0, :cond_1

    .line 1602
    move-object v0, p1

    check-cast v0, Lorg/json/JSONObject;

    invoke-virtual {v0, p0, p2, p3}, Lorg/json/JSONObject;->write(Ljava/io/Writer;II)Ljava/io/Writer;

    goto/16 :goto_2

    .line 1603
    :cond_1
    instance-of v0, p1, Lorg/json/JSONArray;

    if-eqz v0, :cond_2

    .line 1604
    move-object v0, p1

    check-cast v0, Lorg/json/JSONArray;

    invoke-virtual {v0, p0, p2, p3}, Lorg/json/JSONArray;->write(Ljava/io/Writer;II)Ljava/io/Writer;

    goto/16 :goto_2

    .line 1605
    :cond_2
    instance-of v0, p1, Ljava/util/Map;

    if-eqz v0, :cond_3

    .line 1607
    move-object v0, p1

    check-cast v0, Ljava/util/Map;

    .line 1608
    .local v0, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v1, p0, p2, p3}, Lorg/json/JSONObject;->write(Ljava/io/Writer;II)Ljava/io/Writer;

    .line 1609
    .end local v0    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    goto/16 :goto_2

    :cond_3
    instance-of v0, p1, Ljava/util/Collection;

    if-eqz v0, :cond_4

    .line 1611
    move-object v0, p1

    check-cast v0, Ljava/util/Collection;

    .line 1612
    .local v0, "coll":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/Object;>;"
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, v0}, Lorg/json/JSONArray;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v1, p0, p2, p3}, Lorg/json/JSONArray;->write(Ljava/io/Writer;II)Ljava/io/Writer;

    .line 1614
    .end local v0    # "coll":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/Object;>;"
    goto :goto_2

    :cond_4
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->isArray()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 1615
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, p0, p2, p3}, Lorg/json/JSONArray;->write(Ljava/io/Writer;II)Ljava/io/Writer;

    goto :goto_2

    .line 1616
    :cond_5
    instance-of v0, p1, Ljava/lang/Number;

    if-eqz v0, :cond_6

    .line 1617
    move-object v0, p1

    check-cast v0, Ljava/lang/Number;

    invoke-static {v0}, Lorg/json/JSONObject;->numberToString(Ljava/lang/Number;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    goto :goto_2

    .line 1618
    :cond_6
    instance-of v0, p1, Ljava/lang/Boolean;

    if-eqz v0, :cond_7

    .line 1619
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    goto :goto_2

    .line 1620
    :cond_7
    instance-of v0, p1, Lorg/json/JSONString;

    if-eqz v0, :cond_9

    .line 1623
    :try_start_0
    move-object v0, p1

    check-cast v0, Lorg/json/JSONString;

    invoke-interface {v0}, Lorg/json/JSONString;->toJSONString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1626
    .local v0, "o":Ljava/lang/Object;
    nop

    .line 1627
    if-eqz v0, :cond_8

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_8
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    :goto_0
    invoke-virtual {p0, v1}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    .line 1628
    .end local v0    # "o":Ljava/lang/Object;
    goto :goto_2

    .line 1624
    :catch_0
    move-exception v0

    .line 1625
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lorg/json/JSONException;

    invoke-direct {v1, v0}, Lorg/json/JSONException;-><init>(Ljava/lang/Throwable;)V

    throw v1

    .line 1629
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_9
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p0}, Lorg/json/JSONObject;->quote(Ljava/lang/String;Ljava/io/Writer;)Ljava/io/Writer;

    goto :goto_2

    .line 1600
    :cond_a
    :goto_1
    const-string v0, "null"

    invoke-virtual {p0, v0}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    .line 1631
    :goto_2
    return-object p0
.end method


# virtual methods
.method public accumulate(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 390
    invoke-static {p2}, Lorg/json/JSONObject;->testValidity(Ljava/lang/Object;)V

    .line 391
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 392
    .local v0, "object":Ljava/lang/Object;
    if-nez v0, :cond_1

    .line 393
    instance-of v1, p2, Lorg/json/JSONArray;

    if-eqz v1, :cond_0

    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 394
    invoke-virtual {v1, p2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, p2

    .line 393
    :goto_0
    invoke-virtual {p0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    .line 396
    :cond_1
    instance-of v1, v0, Lorg/json/JSONArray;

    if-eqz v1, :cond_2

    .line 397
    move-object v1, v0

    check-cast v1, Lorg/json/JSONArray;

    invoke-virtual {v1, p2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_1

    .line 399
    :cond_2
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    invoke-virtual {v1, v0}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {v1, p2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {p0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 401
    :goto_1
    return-object p0
.end method

.method public append(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 4
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 420
    invoke-static {p2}, Lorg/json/JSONObject;->testValidity(Ljava/lang/Object;)V

    .line 421
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 422
    .local v0, "object":Ljava/lang/Object;
    if-nez v0, :cond_0

    .line 423
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    invoke-virtual {v1, p2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {p0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 424
    :cond_0
    instance-of v1, v0, Lorg/json/JSONArray;

    if-eqz v1, :cond_1

    .line 425
    move-object v1, v0

    check-cast v1, Lorg/json/JSONArray;

    invoke-virtual {v1, p2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {p0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 430
    :goto_0
    return-object p0

    .line 427
    :cond_1
    new-instance v1, Lorg/json/JSONException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "JSONObject["

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "] is not a JSONArray."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v1
.end method

.method public get(Ljava/lang/String;)Ljava/lang/Object;
    .locals 4
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 471
    if-eqz p1, :cond_1

    .line 474
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 475
    .local v0, "object":Ljava/lang/Object;
    if-eqz v0, :cond_0

    .line 478
    return-object v0

    .line 476
    :cond_0
    new-instance v1, Lorg/json/JSONException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "JSONObject["

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "] not found."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 472
    .end local v0    # "object":Ljava/lang/Object;
    :cond_1
    new-instance v0, Lorg/json/JSONException;

    const-string v1, "Null key."

    invoke-direct {v0, v1}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public getBoolean(Ljava/lang/String;)Z
    .locals 4
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 492
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 493
    .local v0, "object":Ljava/lang/Object;
    sget-object v1, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_3

    instance-of v1, v0, Ljava/lang/String;

    if-eqz v1, :cond_0

    move-object v1, v0

    check-cast v1, Ljava/lang/String;

    .line 495
    const-string v2, "false"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    .line 497
    :cond_0
    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_2

    instance-of v1, v0, Ljava/lang/String;

    if-eqz v1, :cond_1

    move-object v1, v0

    check-cast v1, Ljava/lang/String;

    .line 499
    const-string v2, "true"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_0

    .line 502
    :cond_1
    new-instance v1, Lorg/json/JSONException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "JSONObject["

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "] is not a Boolean."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 500
    :cond_2
    :goto_0
    const/4 v1, 0x1

    return v1

    .line 496
    :cond_3
    :goto_1
    const/4 v1, 0x0

    return v1
.end method

.method public getDouble(Ljava/lang/String;)D
    .locals 5
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 517
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 519
    .local v0, "object":Ljava/lang/Object;
    :try_start_0
    instance-of v1, v0, Ljava/lang/Number;

    if-eqz v1, :cond_0

    move-object v1, v0

    check-cast v1, Ljava/lang/Number;

    invoke-virtual {v1}, Ljava/lang/Number;->doubleValue()D

    move-result-wide v1

    goto :goto_0

    :cond_0
    move-object v1, v0

    check-cast v1, Ljava/lang/String;

    .line 520
    invoke-static {v1}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 519
    :goto_0
    return-wide v1

    .line 521
    :catch_0
    move-exception v1

    .line 522
    .local v1, "e":Ljava/lang/Exception;
    new-instance v2, Lorg/json/JSONException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "JSONObject["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "] is not a number."

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v2
.end method

.method public getInt(Ljava/lang/String;)I
    .locals 5
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 538
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 540
    .local v0, "object":Ljava/lang/Object;
    :try_start_0
    instance-of v1, v0, Ljava/lang/Number;

    if-eqz v1, :cond_0

    move-object v1, v0

    check-cast v1, Ljava/lang/Number;

    invoke-virtual {v1}, Ljava/lang/Number;->intValue()I

    move-result v1

    goto :goto_0

    :cond_0
    move-object v1, v0

    check-cast v1, Ljava/lang/String;

    .line 541
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 540
    :goto_0
    return v1

    .line 542
    :catch_0
    move-exception v1

    .line 543
    .local v1, "e":Ljava/lang/Exception;
    new-instance v2, Lorg/json/JSONException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "JSONObject["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "] is not an int."

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v2
.end method

.method public getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;
    .locals 4
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 558
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 559
    .local v0, "object":Ljava/lang/Object;
    instance-of v1, v0, Lorg/json/JSONArray;

    if-eqz v1, :cond_0

    .line 560
    move-object v1, v0

    check-cast v1, Lorg/json/JSONArray;

    return-object v1

    .line 562
    :cond_0
    new-instance v1, Lorg/json/JSONException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "JSONObject["

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "] is not a JSONArray."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v1
.end method

.method public getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 4
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 576
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 577
    .local v0, "object":Ljava/lang/Object;
    instance-of v1, v0, Lorg/json/JSONObject;

    if-eqz v1, :cond_0

    .line 578
    move-object v1, v0

    check-cast v1, Lorg/json/JSONObject;

    return-object v1

    .line 580
    :cond_0
    new-instance v1, Lorg/json/JSONException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "JSONObject["

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "] is not a JSONObject."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v1
.end method

.method public getLong(Ljava/lang/String;)J
    .locals 5
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 595
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 597
    .local v0, "object":Ljava/lang/Object;
    :try_start_0
    instance-of v1, v0, Ljava/lang/Number;

    if-eqz v1, :cond_0

    move-object v1, v0

    check-cast v1, Ljava/lang/Number;

    invoke-virtual {v1}, Ljava/lang/Number;->longValue()J

    move-result-wide v1

    goto :goto_0

    :cond_0
    move-object v1, v0

    check-cast v1, Ljava/lang/String;

    .line 598
    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 597
    :goto_0
    return-wide v1

    .line 599
    :catch_0
    move-exception v1

    .line 600
    .local v1, "e":Ljava/lang/Exception;
    new-instance v2, Lorg/json/JSONException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "JSONObject["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "] is not a long."

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v2
.end method

.method public getString(Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 657
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 658
    .local v0, "object":Ljava/lang/Object;
    instance-of v1, v0, Ljava/lang/String;

    if-eqz v1, :cond_0

    .line 659
    move-object v1, v0

    check-cast v1, Ljava/lang/String;

    return-object v1

    .line 661
    :cond_0
    new-instance v1, Lorg/json/JSONException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "JSONObject["

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "] not a string."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v1
.end method

.method public has(Ljava/lang/String;)Z
    .locals 1
    .param p1, "key"    # Ljava/lang/String;

    .line 672
    iget-object v0, p0, Lorg/json/JSONObject;->map:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public increment(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 5
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 688
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 689
    .local v0, "value":Ljava/lang/Object;
    const/4 v1, 0x1

    if-nez v0, :cond_0

    .line 690
    invoke-virtual {p0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_0

    .line 691
    :cond_0
    instance-of v2, v0, Ljava/lang/Integer;

    if-eqz v2, :cond_1

    .line 692
    move-object v2, v0

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    add-int/2addr v2, v1

    invoke-virtual {p0, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_0

    .line 693
    :cond_1
    instance-of v1, v0, Ljava/lang/Long;

    if-eqz v1, :cond_2

    .line 694
    move-object v1, v0

    check-cast v1, Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v1

    const-wide/16 v3, 0x1

    add-long/2addr v1, v3

    invoke-virtual {p0, p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    goto :goto_0

    .line 695
    :cond_2
    instance-of v1, v0, Ljava/lang/Double;

    if-eqz v1, :cond_3

    .line 696
    move-object v1, v0

    check-cast v1, Ljava/lang/Double;

    invoke-virtual {v1}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v1

    const-wide/high16 v3, 0x3ff0000000000000L    # 1.0

    add-double/2addr v1, v3

    invoke-virtual {p0, p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    goto :goto_0

    .line 697
    :cond_3
    instance-of v1, v0, Ljava/lang/Float;

    if-eqz v1, :cond_4

    .line 698
    move-object v1, v0

    check-cast v1, Ljava/lang/Float;

    invoke-virtual {v1}, Ljava/lang/Float;->floatValue()F

    move-result v1

    const/high16 v2, 0x3f800000    # 1.0f

    add-float/2addr v1, v2

    float-to-double v1, v1

    invoke-virtual {p0, p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 702
    :goto_0
    return-object p0

    .line 700
    :cond_4
    new-instance v1, Lorg/json/JSONException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Unable to increment ["

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "]."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v1
.end method

.method public isNull(Ljava/lang/String;)Z
    .locals 2
    .param p1, "key"    # Ljava/lang/String;

    .line 715
    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public keySet()Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 733
    iget-object v0, p0, Lorg/json/JSONObject;->map:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    return-object v0
.end method

.method public keys()Ljava/util/Iterator;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Iterator<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 724
    invoke-virtual {p0}, Lorg/json/JSONObject;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    return-object v0
.end method

.method public length()I
    .locals 1

    .line 742
    iget-object v0, p0, Lorg/json/JSONObject;->map:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    return v0
.end method

.method public names()Lorg/json/JSONArray;
    .locals 3

    .line 753
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 754
    .local v0, "ja":Lorg/json/JSONArray;
    invoke-virtual {p0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 755
    .local v1, "keys":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 756
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    .line 758
    :cond_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-nez v2, :cond_1

    const/4 v2, 0x0

    goto :goto_1

    :cond_1
    move-object v2, v0

    :goto_1
    return-object v2
.end method

.method public opt(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;

    .line 799
    if-nez p1, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lorg/json/JSONObject;->map:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public optBoolean(Ljava/lang/String;)Z
    .locals 1
    .param p1, "key"    # Ljava/lang/String;

    .line 811
    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v0

    return v0
.end method

.method public optBoolean(Ljava/lang/String;Z)Z
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "defaultValue"    # Z

    .line 827
    :try_start_0
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->getBoolean(Ljava/lang/String;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 828
    :catch_0
    move-exception v0

    .line 829
    .local v0, "e":Ljava/lang/Exception;
    return p2
.end method

.method public optDouble(Ljava/lang/String;)D
    .locals 2
    .param p1, "key"    # Ljava/lang/String;

    .line 843
    const-wide/high16 v0, 0x7ff8000000000000L    # Double.NaN

    invoke-virtual {p0, p1, v0, v1}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v0

    return-wide v0
.end method

.method public optDouble(Ljava/lang/String;D)D
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "defaultValue"    # D

    .line 859
    :try_start_0
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->getDouble(Ljava/lang/String;)D

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-wide v0

    .line 860
    :catch_0
    move-exception v0

    .line 861
    .local v0, "e":Ljava/lang/Exception;
    return-wide p2
.end method

.method public optInt(Ljava/lang/String;)I
    .locals 1
    .param p1, "key"    # Ljava/lang/String;

    .line 875
    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public optInt(Ljava/lang/String;I)I
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "defaultValue"    # I

    .line 891
    :try_start_0
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 892
    :catch_0
    move-exception v0

    .line 893
    .local v0, "e":Ljava/lang/Exception;
    return p2
.end method

.method public optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;
    .locals 2
    .param p1, "key"    # Ljava/lang/String;

    .line 906
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 907
    .local v0, "o":Ljava/lang/Object;
    instance-of v1, v0, Lorg/json/JSONArray;

    if-eqz v1, :cond_0

    move-object v1, v0

    check-cast v1, Lorg/json/JSONArray;

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return-object v1
.end method

.method public optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 2
    .param p1, "key"    # Ljava/lang/String;

    .line 919
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 920
    .local v0, "object":Ljava/lang/Object;
    instance-of v1, v0, Lorg/json/JSONObject;

    if-eqz v1, :cond_0

    move-object v1, v0

    check-cast v1, Lorg/json/JSONObject;

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return-object v1
.end method

.method public optLong(Ljava/lang/String;)J
    .locals 2
    .param p1, "key"    # Ljava/lang/String;

    .line 933
    const-wide/16 v0, 0x0

    invoke-virtual {p0, p1, v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    return-wide v0
.end method

.method public optLong(Ljava/lang/String;J)J
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "defaultValue"    # J

    .line 949
    :try_start_0
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->getLong(Ljava/lang/String;)J

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-wide v0

    .line 950
    :catch_0
    move-exception v0

    .line 951
    .local v0, "e":Ljava/lang/Exception;
    return-wide p2
.end method

.method public optString(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;

    .line 965
    const-string v0, ""

    invoke-virtual {p0, p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "defaultValue"    # Ljava/lang/String;

    .line 979
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 980
    .local v0, "object":Ljava/lang/Object;
    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    invoke-virtual {v1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    move-object v1, p2

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    :goto_0
    return-object v1
.end method

.method public put(Ljava/lang/String;D)Lorg/json/JSONObject;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # D
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1073
    new-instance v0, Ljava/lang/Double;

    invoke-direct {v0, p2, p3}, Ljava/lang/Double;-><init>(D)V

    invoke-virtual {p0, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1074
    return-object p0
.end method

.method public put(Ljava/lang/String;I)Lorg/json/JSONObject;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1089
    new-instance v0, Ljava/lang/Integer;

    invoke-direct {v0, p2}, Ljava/lang/Integer;-><init>(I)V

    invoke-virtual {p0, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1090
    return-object p0
.end method

.method public put(Ljava/lang/String;J)Lorg/json/JSONObject;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # J
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1105
    new-instance v0, Ljava/lang/Long;

    invoke-direct {v0, p2, p3}, Ljava/lang/Long;-><init>(J)V

    invoke-virtual {p0, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1106
    return-object p0
.end method

.method public put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1140
    if-eqz p1, :cond_1

    .line 1143
    if-eqz p2, :cond_0

    .line 1144
    invoke-static {p2}, Lorg/json/JSONObject;->testValidity(Ljava/lang/Object;)V

    .line 1145
    iget-object v0, p0, Lorg/json/JSONObject;->map:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 1147
    :cond_0
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    .line 1149
    :goto_0
    return-object p0

    .line 1141
    :cond_1
    new-instance v0, Ljava/lang/NullPointerException;

    const-string v1, "Null key."

    invoke-direct {v0, v1}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public put(Ljava/lang/String;Ljava/util/Collection;)Lorg/json/JSONObject;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Collection<",
            "Ljava/lang/Object;",
            ">;)",
            "Lorg/json/JSONObject;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1057
    .local p2, "value":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/Object;>;"
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p2}, Lorg/json/JSONArray;-><init>(Ljava/util/Collection;)V

    invoke-virtual {p0, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1058
    return-object p0
.end method

.method public put(Ljava/lang/String;Ljava/util/Map;)Lorg/json/JSONObject;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Lorg/json/JSONObject;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1121
    .local p2, "value":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {p0, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1122
    return-object p0
.end method

.method public put(Ljava/lang/String;Z)Lorg/json/JSONObject;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1041
    if-eqz p2, :cond_0

    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    goto :goto_0

    :cond_0
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    :goto_0
    invoke-virtual {p0, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1042
    return-object p0
.end method

.method public putOnce(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 3
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1164
    if-eqz p1, :cond_1

    if-eqz p2, :cond_1

    .line 1165
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_0

    .line 1168
    invoke-virtual {p0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 1166
    :cond_0
    new-instance v0, Lorg/json/JSONException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Duplicate key \""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lorg/json/JSONException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 1170
    :cond_1
    :goto_0
    return-object p0
.end method

.method public putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 0
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1188
    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    .line 1189
    invoke-virtual {p0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1191
    :cond_0
    return-object p0
.end method

.method public remove(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;

    .line 1284
    iget-object v0, p0, Lorg/json/JSONObject;->map:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method public similar(Ljava/lang/Object;)Z
    .locals 7
    .param p1, "other"    # Ljava/lang/Object;

    .line 1297
    const/4 v0, 0x0

    :try_start_0
    instance-of v1, p1, Lorg/json/JSONObject;

    if-nez v1, :cond_0

    .line 1298
    return v0

    .line 1300
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONObject;->keySet()Ljava/util/Set;

    move-result-object v1

    .line 1301
    .local v1, "set":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
    move-object v2, p1

    check-cast v2, Lorg/json/JSONObject;

    invoke-virtual {v2}, Lorg/json/JSONObject;->keySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Set;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1302
    return v0

    .line 1304
    :cond_1
    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    .line 1305
    .local v2, "iterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_5

    .line 1306
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 1307
    .local v3, "name":Ljava/lang/String;
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    .line 1308
    .local v4, "valueThis":Ljava/lang/Object;
    move-object v5, p1

    check-cast v5, Lorg/json/JSONObject;

    invoke-virtual {v5, v3}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v5

    .line 1309
    .local v5, "valueOther":Ljava/lang/Object;
    instance-of v6, v4, Lorg/json/JSONObject;

    if-eqz v6, :cond_2

    .line 1310
    move-object v6, v4

    check-cast v6, Lorg/json/JSONObject;

    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->similar(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_4

    .line 1311
    return v0

    .line 1313
    :cond_2
    instance-of v6, v4, Lorg/json/JSONArray;

    if-eqz v6, :cond_3

    .line 1314
    move-object v6, v4

    check-cast v6, Lorg/json/JSONArray;

    invoke-virtual {v6, v5}, Lorg/json/JSONArray;->similar(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_4

    .line 1315
    return v0

    .line 1317
    :cond_3
    invoke-virtual {v4, v5}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v6
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v6, :cond_4

    .line 1318
    return v0

    .line 1320
    .end local v3    # "name":Ljava/lang/String;
    .end local v4    # "valueThis":Ljava/lang/Object;
    .end local v5    # "valueOther":Ljava/lang/Object;
    :cond_4
    goto :goto_0

    .line 1321
    :cond_5
    const/4 v0, 0x1

    return v0

    .line 1322
    .end local v1    # "set":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
    .end local v2    # "iterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    :catchall_0
    move-exception v1

    .line 1323
    .local v1, "exception":Ljava/lang/Throwable;
    return v0
.end method

.method public toJSONArray(Lorg/json/JSONArray;)Lorg/json/JSONArray;
    .locals 3
    .param p1, "names"    # Lorg/json/JSONArray;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1416
    if-eqz p1, :cond_2

    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 1419
    :cond_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 1420
    .local v0, "ja":Lorg/json/JSONArray;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 1421
    invoke-virtual {p1, v1}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 1420
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1423
    .end local v1    # "i":I
    :cond_1
    return-object v0

    .line 1417
    .end local v0    # "ja":Lorg/json/JSONArray;
    :cond_2
    :goto_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 1440
    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->toString(I)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 1441
    :catch_0
    move-exception v0

    .line 1442
    .local v0, "e":Ljava/lang/Exception;
    const/4 v1, 0x0

    return-object v1
.end method

.method public toString(I)Ljava/lang/String;
    .locals 3
    .param p1, "indentFactor"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1461
    new-instance v0, Ljava/io/StringWriter;

    invoke-direct {v0}, Ljava/io/StringWriter;-><init>()V

    .line 1462
    .local v0, "w":Ljava/io/StringWriter;
    invoke-virtual {v0}, Ljava/io/StringWriter;->getBuffer()Ljava/lang/StringBuffer;

    move-result-object v1

    monitor-enter v1

    .line 1463
    const/4 v2, 0x0

    :try_start_0
    invoke-virtual {p0, v0, p1, v2}, Lorg/json/JSONObject;->write(Ljava/io/Writer;II)Ljava/io/Writer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    monitor-exit v1

    return-object v2

    .line 1464
    :catchall_0
    move-exception v2

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v2
.end method

.method public write(Ljava/io/Writer;)Ljava/io/Writer;
    .locals 1
    .param p1, "writer"    # Ljava/io/Writer;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1594
    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0, v0}, Lorg/json/JSONObject;->write(Ljava/io/Writer;II)Ljava/io/Writer;

    move-result-object v0

    return-object v0
.end method

.method write(Ljava/io/Writer;II)Ljava/io/Writer;
    .locals 9
    .param p1, "writer"    # Ljava/io/Writer;
    .param p2, "indentFactor"    # I
    .param p3, "indent"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 1652
    const/4 v0, 0x0

    .line 1653
    .local v0, "commanate":Z
    :try_start_0
    invoke-virtual {p0}, Lorg/json/JSONObject;->length()I

    move-result v1

    .line 1654
    .local v1, "length":I
    invoke-virtual {p0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v2

    .line 1655
    .local v2, "keys":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    const/16 v3, 0x7b

    invoke-virtual {p1, v3}, Ljava/io/Writer;->write(I)V

    .line 1657
    const/4 v3, 0x1

    const/16 v4, 0x20

    const/16 v5, 0x3a

    if-ne v1, v3, :cond_1

    .line 1658
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    .line 1659
    .local v3, "key":Ljava/lang/Object;
    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p1, v6}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    .line 1660
    invoke-virtual {p1, v5}, Ljava/io/Writer;->write(I)V

    .line 1661
    if-lez p2, :cond_0

    .line 1662
    invoke-virtual {p1, v4}, Ljava/io/Writer;->write(I)V

    .line 1664
    :cond_0
    iget-object v4, p0, Lorg/json/JSONObject;->map:Ljava/util/Map;

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-static {p1, v4, p2, p3}, Lorg/json/JSONObject;->writeValue(Ljava/io/Writer;Ljava/lang/Object;II)Ljava/io/Writer;

    .line 1665
    nop

    .end local v3    # "key":Ljava/lang/Object;
    goto :goto_1

    :cond_1
    if-eqz v1, :cond_7

    .line 1666
    add-int v3, p3, p2

    .line 1667
    .local v3, "newindent":I
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    const/16 v7, 0xa

    if-eqz v6, :cond_5

    .line 1668
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    .line 1669
    .local v6, "key":Ljava/lang/Object;
    if-eqz v0, :cond_2

    .line 1670
    const/16 v8, 0x2c

    invoke-virtual {p1, v8}, Ljava/io/Writer;->write(I)V

    .line 1672
    :cond_2
    if-lez p2, :cond_3

    .line 1673
    invoke-virtual {p1, v7}, Ljava/io/Writer;->write(I)V

    .line 1675
    :cond_3
    invoke-static {p1, v3}, Lorg/json/JSONObject;->indent(Ljava/io/Writer;I)V

    .line 1676
    invoke-virtual {v6}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Lorg/json/JSONObject;->quote(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p1, v7}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    .line 1677
    invoke-virtual {p1, v5}, Ljava/io/Writer;->write(I)V

    .line 1678
    if-lez p2, :cond_4

    .line 1679
    invoke-virtual {p1, v4}, Ljava/io/Writer;->write(I)V

    .line 1681
    :cond_4
    iget-object v7, p0, Lorg/json/JSONObject;->map:Ljava/util/Map;

    invoke-interface {v7, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    invoke-static {p1, v7, p2, v3}, Lorg/json/JSONObject;->writeValue(Ljava/io/Writer;Ljava/lang/Object;II)Ljava/io/Writer;

    .line 1682
    const/4 v0, 0x1

    .line 1683
    .end local v6    # "key":Ljava/lang/Object;
    goto :goto_0

    .line 1684
    :cond_5
    if-lez p2, :cond_6

    .line 1685
    invoke-virtual {p1, v7}, Ljava/io/Writer;->write(I)V

    .line 1687
    :cond_6
    invoke-static {p1, p3}, Lorg/json/JSONObject;->indent(Ljava/io/Writer;I)V

    .line 1689
    .end local v3    # "newindent":I
    :cond_7
    :goto_1
    const/16 v3, 0x7d

    invoke-virtual {p1, v3}, Ljava/io/Writer;->write(I)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 1690
    return-object p1

    .line 1691
    .end local v0    # "commanate":Z
    .end local v1    # "length":I
    .end local v2    # "keys":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    :catch_0
    move-exception v0

    .line 1692
    .local v0, "exception":Ljava/io/IOException;
    new-instance v1, Lorg/json/JSONException;

    invoke-direct {v1, v0}, Lorg/json/JSONException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method
