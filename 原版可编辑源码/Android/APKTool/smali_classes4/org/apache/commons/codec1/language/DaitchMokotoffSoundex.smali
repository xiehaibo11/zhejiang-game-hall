.class public Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;
.super Ljava/lang/Object;
.source "DaitchMokotoffSoundex.java"

# interfaces
.implements Lorg/apache/commons/codec1/StringEncoder;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Branch;,
        Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Rule;
    }
.end annotation


# static fields
.field private static final COMMENT:Ljava/lang/String; = "//"

.field private static final DOUBLE_QUOTE:Ljava/lang/String; = "\""

.field private static final FOLDINGS:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Character;",
            "Ljava/lang/Character;",
            ">;"
        }
    .end annotation
.end field

.field private static final MAX_LENGTH:I = 0x6

.field private static final MULTILINE_COMMENT_END:Ljava/lang/String; = "*/"

.field private static final MULTILINE_COMMENT_START:Ljava/lang/String; = "/*"

.field private static final RESOURCE_FILE:Ljava/lang/String; = "org/apache/commons/codec/language/dmrules.txt"

.field private static final RULES:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Character;",
            "Ljava/util/List<",
            "Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Rule;",
            ">;>;"
        }
    .end annotation
.end field


# instance fields
.field private final folding:Z


# direct methods
.method static constructor <clinit>()V
    .locals 4

    .line 223
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->RULES:Ljava/util/Map;

    .line 226
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->FOLDINGS:Ljava/util/Map;

    .line 229
    const-class v0, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    const-string v1, "org/apache/commons/codec/language/dmrules.txt"

    invoke-virtual {v0, v1}, Ljava/lang/ClassLoader;->getResourceAsStream(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 234
    new-instance v2, Ljava/util/Scanner;

    const-string v3, "UTF-8"

    invoke-direct {v2, v0, v3}, Ljava/util/Scanner;-><init>(Ljava/io/InputStream;Ljava/lang/String;)V

    .line 235
    sget-object v0, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->RULES:Ljava/util/Map;

    sget-object v3, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->FOLDINGS:Ljava/util/Map;

    invoke-static {v2, v1, v0, v3}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->parseRules(Ljava/util/Scanner;Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V

    .line 236
    invoke-virtual {v2}, Ljava/util/Scanner;->close()V

    .line 239
    sget-object v0, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->RULES:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-nez v1, :cond_0

    return-void

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 240
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/List;

    .line 241
    new-instance v2, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$1;

    invoke-direct {v2}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$1;-><init>()V

    invoke-static {v1, v2}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    goto :goto_0

    .line 231
    :cond_1
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "Unable to load resource: org/apache/commons/codec/language/dmrules.txt"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x1

    .line 350
    invoke-direct {p0, v0}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;-><init>(Z)V

    return-void
.end method

.method public constructor <init>(Z)V
    .locals 0

    .line 363
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 364
    iput-boolean p1, p0, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->folding:Z

    return-void
.end method

.method private cleanup(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    .line 378
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 379
    invoke-virtual {p1}, Ljava/lang/String;->toCharArray()[C

    move-result-object p1

    array-length v1, p1

    const/4 v2, 0x0

    :goto_0
    if-lt v2, v1, :cond_0

    .line 390
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1

    .line 379
    :cond_0
    aget-char v3, p1, v2

    .line 380
    invoke-static {v3}, Ljava/lang/Character;->isWhitespace(C)Z

    move-result v4

    if-eqz v4, :cond_1

    goto :goto_1

    .line 384
    :cond_1
    invoke-static {v3}, Ljava/lang/Character;->toLowerCase(C)C

    move-result v3

    .line 385
    iget-boolean v4, p0, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->folding:Z

    if-eqz v4, :cond_2

    sget-object v4, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->FOLDINGS:Ljava/util/Map;

    invoke-static {v3}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v5

    invoke-interface {v4, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 386
    sget-object v4, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->FOLDINGS:Ljava/util/Map;

    invoke-static {v3}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v3

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Character;

    invoke-virtual {v3}, Ljava/lang/Character;->charValue()C

    move-result v3

    .line 388
    :cond_2
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0
.end method

.method private static parseRules(Ljava/util/Scanner;Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Scanner;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/Character;",
            "Ljava/util/List<",
            "Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Rule;",
            ">;>;",
            "Ljava/util/Map<",
            "Ljava/lang/Character;",
            "Ljava/lang/Character;",
            ">;)V"
        }
    .end annotation

    const/4 v0, 0x1

    const/4 v1, 0x0

    move v2, v1

    move v3, v2

    .line 255
    :cond_0
    :goto_0
    invoke-virtual {p0}, Ljava/util/Scanner;->hasNextLine()Z

    move-result v4

    if-nez v4, :cond_1

    return-void

    :cond_1
    add-int/2addr v2, v0

    .line 257
    invoke-virtual {p0}, Ljava/util/Scanner;->nextLine()Ljava/lang/String;

    move-result-object v4

    if-eqz v3, :cond_2

    const-string v5, "*/"

    .line 261
    invoke-virtual {v4, v5}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    move v3, v1

    goto :goto_0

    :cond_2
    const-string v5, "/*"

    .line 267
    invoke-virtual {v4, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_3

    move v3, v0

    goto :goto_0

    :cond_3
    const-string v5, "//"

    .line 271
    invoke-virtual {v4, v5}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v5

    if-ltz v5, :cond_4

    .line 273
    invoke-virtual {v4, v1, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v5

    goto :goto_1

    :cond_4
    move-object v5, v4

    .line 277
    :goto_1
    invoke-virtual {v5}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v5

    .line 279
    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v6

    if-nez v6, :cond_5

    goto :goto_0

    :cond_5
    const-string v6, "="

    .line 283
    invoke-virtual {v5, v6}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    const-string v8, " parts: "

    const/4 v9, 0x2

    const-string v10, " in "

    if-eqz v7, :cond_8

    .line 285
    invoke-virtual {v5, v6}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    .line 286
    array-length v6, v5

    if-ne v6, v9, :cond_7

    .line 290
    aget-object v6, v5, v1

    .line 291
    aget-object v5, v5, v0

    .line 293
    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v7

    if-ne v7, v0, :cond_6

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v7

    if-ne v7, v0, :cond_6

    .line 298
    invoke-virtual {v6, v1}, Ljava/lang/String;->charAt(I)C

    move-result v4

    invoke-static {v4}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v4

    invoke-virtual {v5, v1}, Ljava/lang/String;->charAt(I)C

    move-result v5

    invoke-static {v5}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v5

    invoke-interface {p3, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 294
    :cond_6
    new-instance p0, Ljava/lang/IllegalArgumentException;

    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "Malformed folding statement - patterns are not single characters: "

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 295
    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 294
    invoke-direct {p0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 287
    :cond_7
    new-instance p0, Ljava/lang/IllegalArgumentException;

    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "Malformed folding statement split into "

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    array-length p3, v5

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 288
    invoke-virtual {p2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 287
    invoke-direct {p0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_8
    const-string v6, "\\s+"

    .line 302
    invoke-virtual {v5, v6}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    .line 303
    array-length v6, v5

    const/4 v7, 0x4

    if-ne v6, v7, :cond_a

    .line 308
    :try_start_0
    aget-object v4, v5, v1

    invoke-static {v4}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->stripQuotes(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 309
    aget-object v6, v5, v0

    invoke-static {v6}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->stripQuotes(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 310
    aget-object v7, v5, v9

    invoke-static {v7}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->stripQuotes(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const/4 v8, 0x3

    .line 311
    aget-object v5, v5, v8

    invoke-static {v5}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->stripQuotes(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 313
    new-instance v8, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Rule;

    invoke-direct {v8, v4, v6, v7, v5}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Rule;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 314
    invoke-static {v8}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Rule;->access$0(Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Rule;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, v1}, Ljava/lang/String;->charAt(I)C

    move-result v4

    .line 315
    invoke-static {v4}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v5

    invoke-interface {p2, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/List;

    if-nez v5, :cond_9

    .line 317
    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    .line 318
    invoke-static {v4}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v4

    invoke-interface {p2, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 320
    :cond_9
    invoke-interface {v5, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_0

    :catch_0
    move-exception p0

    .line 322
    new-instance p2, Ljava/lang/IllegalStateException;

    .line 323
    new-instance p3, Ljava/lang/StringBuilder;

    const-string v0, "Problem parsing line \'"

    invoke-direct {p3, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "\' in "

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 322
    invoke-direct {p2, p1, p0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw p2

    .line 304
    :cond_a
    new-instance p0, Ljava/lang/IllegalArgumentException;

    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "Malformed rule statement split into "

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    array-length p3, v5

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 305
    invoke-virtual {p2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 304
    invoke-direct {p0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method private soundex(Ljava/lang/String;Z)[Ljava/lang/String;
    .locals 18

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 490
    :cond_0
    invoke-direct/range {p0 .. p1}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->cleanup(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 492
    new-instance v2, Ljava/util/LinkedHashSet;

    invoke-direct {v2}, Ljava/util/LinkedHashSet;-><init>()V

    .line 493
    new-instance v3, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Branch;

    invoke-direct {v3, v0}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Branch;-><init>(Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Branch;)V

    invoke-interface {v2, v3}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const/4 v3, 0x0

    const/4 v4, 0x0

    .line 496
    :goto_0
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v5

    if-lt v3, v5, :cond_2

    .line 552
    invoke-interface {v2}, Ljava/util/Set;->size()I

    move-result v1

    new-array v5, v1, [Ljava/lang/String;

    .line 554
    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v6

    const/4 v0, 0x0

    :goto_1
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-nez v1, :cond_1

    return-object v5

    :cond_1
    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Branch;

    .line 555
    invoke-virtual {v1}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Branch;->finish()V

    add-int/lit8 v2, v0, 0x1

    .line 556
    invoke-virtual {v1}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Branch;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v5, v0

    move v0, v2

    goto :goto_1

    .line 497
    :cond_2
    invoke-virtual {v1, v3}, Ljava/lang/String;->charAt(I)C

    move-result v5

    .line 500
    invoke-static {v5}, Ljava/lang/Character;->isWhitespace(C)Z

    move-result v6

    const/4 v7, 0x1

    if-eqz v6, :cond_3

    goto/16 :goto_7

    .line 504
    :cond_3
    invoke-virtual {v1, v3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v6

    .line 505
    sget-object v8, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->RULES:Ljava/util/Map;

    invoke-static {v5}, Ljava/lang/Character;->valueOf(C)Ljava/lang/Character;

    move-result-object v9

    invoke-interface {v8, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/util/List;

    if-nez v8, :cond_4

    goto :goto_7

    :cond_4
    if-eqz p2, :cond_5

    .line 512
    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9}, Ljava/util/ArrayList;-><init>()V

    goto :goto_2

    :cond_5
    sget-object v9, Ljava/util/Collections;->EMPTY_LIST:Ljava/util/List;

    .line 514
    :goto_2
    invoke-interface {v8}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v8

    :cond_6
    invoke-interface {v8}, Ljava/util/Iterator;->hasNext()Z

    move-result v10

    if-nez v10, :cond_7

    goto :goto_6

    :cond_7
    invoke-interface {v8}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Rule;

    .line 515
    invoke-virtual {v10, v6}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Rule;->matches(Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_6

    if-eqz p2, :cond_8

    .line 517
    invoke-interface {v9}, Ljava/util/List;->clear()V

    :cond_8
    if-nez v4, :cond_9

    move v8, v7

    goto :goto_3

    :cond_9
    const/4 v8, 0x0

    .line 519
    :goto_3
    invoke-virtual {v10, v6, v8}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Rule;->getReplacements(Ljava/lang/String;Z)[Ljava/lang/String;

    move-result-object v11

    .line 520
    array-length v6, v11

    if-le v6, v7, :cond_a

    if-eqz p2, :cond_a

    move v12, v7

    goto :goto_4

    :cond_a
    const/4 v12, 0x0

    .line 522
    :goto_4
    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v13

    :goto_5
    invoke-interface {v13}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-nez v6, :cond_c

    if-eqz p2, :cond_b

    .line 541
    invoke-interface {v2}, Ljava/util/Set;->clear()V

    .line 542
    invoke-interface {v2, v9}, Ljava/util/Set;->addAll(Ljava/util/Collection;)Z

    .line 544
    :cond_b
    invoke-virtual {v10}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Rule;->getPatternLength()I

    move-result v4

    sub-int/2addr v4, v7

    add-int/2addr v3, v4

    :goto_6
    move v4, v5

    :goto_7
    add-int/2addr v3, v7

    goto/16 :goto_0

    .line 522
    :cond_c
    invoke-interface {v13}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Branch;

    .line 523
    array-length v8, v11

    const/4 v14, 0x0

    :goto_8
    if-lt v14, v8, :cond_d

    goto :goto_5

    :cond_d
    aget-object v15, v11, v14

    if-eqz v12, :cond_e

    .line 525
    invoke-virtual {v6}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Branch;->createBranch()Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Branch;

    move-result-object v16

    move-object/from16 v0, v16

    goto :goto_9

    :cond_e
    move-object v0, v6

    :goto_9
    const/16 v7, 0x6e

    move-object/from16 v17, v1

    const/16 v1, 0x6d

    if-ne v4, v1, :cond_f

    if-eq v5, v7, :cond_10

    :cond_f
    if-ne v4, v7, :cond_11

    if-eq v5, v1, :cond_10

    goto :goto_a

    :cond_10
    const/4 v1, 0x1

    goto :goto_b

    :cond_11
    :goto_a
    const/4 v1, 0x0

    .line 530
    :goto_b
    invoke-virtual {v0, v15, v1}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex$Branch;->processNextReplacement(Ljava/lang/String;Z)V

    if-eqz p2, :cond_12

    .line 533
    invoke-interface {v9, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v14, v14, 0x1

    move-object/from16 v1, v17

    const/4 v7, 0x1

    goto :goto_8

    :cond_12
    move-object/from16 v1, v17

    const/4 v7, 0x1

    goto :goto_5
.end method

.method private static stripQuotes(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const-string v0, "\""

    .line 332
    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    .line 333
    invoke-virtual {p0, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    .line 336
    :cond_0
    invoke-virtual {p0, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x0

    .line 337
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    sub-int/2addr v1, v2

    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    :cond_1
    return-object p0
.end method


# virtual methods
.method public encode(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/apache/commons/codec1/EncoderException;
        }
    .end annotation

    .line 413
    instance-of v0, p1, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 417
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    .line 414
    :cond_0
    new-instance p1, Lorg/apache/commons/codec1/EncoderException;

    const-string v0, "Parameter supplied to DaitchMokotoffSoundex encode is not of type java.lang.String"

    invoke-direct {p1, v0}, Lorg/apache/commons/codec1/EncoderException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public encode(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    const/4 v0, 0x0

    .line 436
    invoke-direct {p0, p1, v0}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->soundex(Ljava/lang/String;Z)[Ljava/lang/String;

    move-result-object p1

    aget-object p1, p1, v0

    return-object p1
.end method

.method public soundex(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    const/4 v0, 0x1

    .line 463
    invoke-direct {p0, p1, v0}, Lorg/apache/commons/codec1/language/DaitchMokotoffSoundex;->soundex(Ljava/lang/String;Z)[Ljava/lang/String;

    move-result-object p1

    .line 464
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 466
    array-length v2, p1

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-lt v3, v2, :cond_0

    .line 472
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1

    .line 466
    :cond_0
    aget-object v5, p1, v3

    .line 467
    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/2addr v4, v0

    .line 468
    array-length v5, p1

    if-ge v4, v5, :cond_1

    const/16 v5, 0x7c

    .line 469
    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0
.end method
