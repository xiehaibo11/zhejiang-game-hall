.class public Lorg/apache/commons/codec1/language/bm/PhoneticEngine;
.super Ljava/lang/Object;
.source "PhoneticEngine.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;,
        Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;
    }
.end annotation


# static fields
.field private static synthetic $SWITCH_TABLE$org$apache$commons$codec1$language$bm$NameType:[I = null

.field private static final DEFAULT_MAX_PHONEMES:I = 0x14

.field private static final NAME_PREFIXES:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Lorg/apache/commons/codec1/language/bm/NameType;",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field


# instance fields
.field private final concat:Z

.field private final lang:Lorg/apache/commons/codec1/language/bm/Lang;

.field private final maxPhonemes:I

.field private final nameType:Lorg/apache/commons/codec1/language/bm/NameType;

.field private final ruleType:Lorg/apache/commons/codec1/language/bm/RuleType;


# direct methods
.method static synthetic $SWITCH_TABLE$org$apache$commons$codec1$language$bm$NameType()[I
    .locals 3

    .line 53
    sget-object v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->$SWITCH_TABLE$org$apache$commons$codec1$language$bm$NameType:[I

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-static {}, Lorg/apache/commons/codec1/language/bm/NameType;->values()[Lorg/apache/commons/codec1/language/bm/NameType;

    move-result-object v0

    array-length v0, v0

    new-array v0, v0, [I

    :try_start_0
    sget-object v1, Lorg/apache/commons/codec1/language/bm/NameType;->ASHKENAZI:Lorg/apache/commons/codec1/language/bm/NameType;

    invoke-virtual {v1}, Lorg/apache/commons/codec1/language/bm/NameType;->ordinal()I

    move-result v1

    const/4 v2, 0x1

    aput v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchFieldError; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :try_start_1
    sget-object v1, Lorg/apache/commons/codec1/language/bm/NameType;->GENERIC:Lorg/apache/commons/codec1/language/bm/NameType;

    invoke-virtual {v1}, Lorg/apache/commons/codec1/language/bm/NameType;->ordinal()I

    move-result v1

    const/4 v2, 0x2

    aput v2, v0, v1
    :try_end_1
    .catch Ljava/lang/NoSuchFieldError; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :try_start_2
    sget-object v1, Lorg/apache/commons/codec1/language/bm/NameType;->SEPHARDIC:Lorg/apache/commons/codec1/language/bm/NameType;

    invoke-virtual {v1}, Lorg/apache/commons/codec1/language/bm/NameType;->ordinal()I

    move-result v1

    const/4 v2, 0x3

    aput v2, v0, v1
    :try_end_2
    .catch Ljava/lang/NoSuchFieldError; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    sput-object v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->$SWITCH_TABLE$org$apache$commons$codec1$language$bm$NameType:[I

    return-object v0
.end method

.method static constructor <clinit>()V
    .locals 19

    .line 235
    new-instance v0, Ljava/util/EnumMap;

    const-class v1, Lorg/apache/commons/codec1/language/bm/NameType;

    invoke-direct {v0, v1}, Ljava/util/EnumMap;-><init>(Ljava/lang/Class;)V

    sput-object v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->NAME_PREFIXES:Ljava/util/Map;

    .line 238
    sget-object v1, Lorg/apache/commons/codec1/language/bm/NameType;->ASHKENAZI:Lorg/apache/commons/codec1/language/bm/NameType;

    .line 240
    new-instance v2, Ljava/util/HashSet;

    const-string v3, "bar"

    const-string v4, "ben"

    const-string v5, "da"

    const-string v6, "de"

    const-string v7, "van"

    const-string v8, "von"

    filled-new-array/range {v3 .. v8}, [Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/util/HashSet;-><init>(Ljava/util/Collection;)V

    .line 239
    invoke-static {v2}, Ljava/util/Collections;->unmodifiableSet(Ljava/util/Set;)Ljava/util/Set;

    move-result-object v2

    .line 238
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 241
    sget-object v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->NAME_PREFIXES:Ljava/util/Map;

    sget-object v1, Lorg/apache/commons/codec1/language/bm/NameType;->SEPHARDIC:Lorg/apache/commons/codec1/language/bm/NameType;

    .line 243
    new-instance v2, Ljava/util/HashSet;

    const-string v3, "al"

    const-string v4, "el"

    const-string v5, "da"

    const-string v6, "dal"

    const-string v7, "de"

    const-string v8, "del"

    const-string v9, "dela"

    const-string v10, "de la"

    const-string v11, "della"

    const-string v12, "des"

    const-string v13, "di"

    const-string v14, "do"

    const-string v15, "dos"

    const-string v16, "du"

    const-string v17, "van"

    const-string v18, "von"

    .line 244
    filled-new-array/range {v3 .. v18}, [Ljava/lang/String;

    move-result-object v3

    .line 243
    invoke-static {v3}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/util/HashSet;-><init>(Ljava/util/Collection;)V

    .line 242
    invoke-static {v2}, Ljava/util/Collections;->unmodifiableSet(Ljava/util/Set;)Ljava/util/Set;

    move-result-object v2

    .line 241
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 245
    sget-object v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->NAME_PREFIXES:Ljava/util/Map;

    sget-object v1, Lorg/apache/commons/codec1/language/bm/NameType;->GENERIC:Lorg/apache/commons/codec1/language/bm/NameType;

    .line 247
    new-instance v2, Ljava/util/HashSet;

    const-string v3, "da"

    const-string v4, "dal"

    const-string v5, "de"

    const-string v6, "del"

    const-string v7, "dela"

    const-string v8, "de la"

    const-string v9, "della"

    const-string v10, "des"

    const-string v11, "di"

    const-string v12, "do"

    const-string v13, "dos"

    const-string v14, "du"

    const-string v15, "van"

    const-string v16, "von"

    .line 248
    filled-new-array/range {v3 .. v16}, [Ljava/lang/String;

    move-result-object v3

    .line 247
    invoke-static {v3}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/util/HashSet;-><init>(Ljava/util/Collection;)V

    .line 246
    invoke-static {v2}, Ljava/util/Collections;->unmodifiableSet(Ljava/util/Set;)Ljava/util/Set;

    move-result-object v2

    .line 245
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public constructor <init>(Lorg/apache/commons/codec1/language/bm/NameType;Lorg/apache/commons/codec1/language/bm/RuleType;Z)V
    .locals 1

    const/16 v0, 0x14

    .line 293
    invoke-direct {p0, p1, p2, p3, v0}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;-><init>(Lorg/apache/commons/codec1/language/bm/NameType;Lorg/apache/commons/codec1/language/bm/RuleType;ZI)V

    return-void
.end method

.method public constructor <init>(Lorg/apache/commons/codec1/language/bm/NameType;Lorg/apache/commons/codec1/language/bm/RuleType;ZI)V
    .locals 1

    .line 309
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 311
    sget-object v0, Lorg/apache/commons/codec1/language/bm/RuleType;->RULES:Lorg/apache/commons/codec1/language/bm/RuleType;

    if-eq p2, v0, :cond_0

    .line 314
    iput-object p1, p0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->nameType:Lorg/apache/commons/codec1/language/bm/NameType;

    .line 315
    iput-object p2, p0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->ruleType:Lorg/apache/commons/codec1/language/bm/RuleType;

    .line 316
    iput-boolean p3, p0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->concat:Z

    .line 317
    invoke-static {p1}, Lorg/apache/commons/codec1/language/bm/Lang;->instance(Lorg/apache/commons/codec1/language/bm/NameType;)Lorg/apache/commons/codec1/language/bm/Lang;

    move-result-object p1

    iput-object p1, p0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->lang:Lorg/apache/commons/codec1/language/bm/Lang;

    .line 318
    iput p4, p0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->maxPhonemes:I

    return-void

    .line 312
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "ruleType must not be "

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object p3, Lorg/apache/commons/codec1/language/bm/RuleType;->RULES:Lorg/apache/commons/codec1/language/bm/RuleType;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private applyFinalRules(Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;Ljava/util/Map;)Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lorg/apache/commons/codec1/language/bm/Rule;",
            ">;>;)",
            "Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;"
        }
    .end annotation

    if-eqz p2, :cond_6

    .line 334
    invoke-interface {p2}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p1

    .line 339
    :cond_0
    new-instance v0, Ljava/util/TreeMap;

    sget-object v1, Lorg/apache/commons/codec1/language/bm/Rule$Phoneme;->COMPARATOR:Ljava/util/Comparator;

    invoke-direct {v0, v1}, Ljava/util/TreeMap;-><init>(Ljava/util/Comparator;)V

    .line 341
    invoke-virtual {p1}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;->getPhonemes()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-nez v1, :cond_1

    .line 373
    new-instance p1, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object p2

    const/4 v0, 0x0

    invoke-direct {p1, p2, v0}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;-><init>(Ljava/util/Set;Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;)V

    return-object p1

    .line 341
    :cond_1
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/apache/commons/codec1/language/bm/Rule$Phoneme;

    .line 342
    invoke-virtual {v1}, Lorg/apache/commons/codec1/language/bm/Rule$Phoneme;->getLanguages()Lorg/apache/commons/codec1/language/bm/Languages$LanguageSet;

    move-result-object v2

    invoke-static {v2}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;->empty(Lorg/apache/commons/codec1/language/bm/Languages$LanguageSet;)Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;

    move-result-object v2

    .line 343
    invoke-virtual {v1}, Lorg/apache/commons/codec1/language/bm/Rule$Phoneme;->getPhonemeText()Ljava/lang/CharSequence;

    move-result-object v1

    invoke-interface {v1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x0

    move-object v6, v2

    move v2, v3

    .line 345
    :goto_1
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v3

    if-lt v2, v3, :cond_4

    .line 362
    invoke-virtual {v6}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;->getPhonemes()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_2
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-nez v1, :cond_2

    goto :goto_0

    :cond_2
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lorg/apache/commons/codec1/language/bm/Rule$Phoneme;

    .line 363
    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 364
    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lorg/apache/commons/codec1/language/bm/Rule$Phoneme;

    .line 365
    invoke-virtual {v1}, Lorg/apache/commons/codec1/language/bm/Rule$Phoneme;->getLanguages()Lorg/apache/commons/codec1/language/bm/Languages$LanguageSet;

    move-result-object v1

    invoke-virtual {v2, v1}, Lorg/apache/commons/codec1/language/bm/Rule$Phoneme;->mergeWithLanguage(Lorg/apache/commons/codec1/language/bm/Languages$LanguageSet;)Lorg/apache/commons/codec1/language/bm/Rule$Phoneme;

    move-result-object v1

    .line 366
    invoke-interface {v0, v1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_2

    .line 368
    :cond_3
    invoke-interface {v0, v1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_2

    .line 347
    :cond_4
    new-instance v9, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;

    iget v8, p0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->maxPhonemes:I

    move-object v3, v9

    move-object v4, p2

    move-object v5, v1

    move v7, v2

    invoke-direct/range {v3 .. v8}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;-><init>(Ljava/util/Map;Ljava/lang/CharSequence;Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;II)V

    invoke-virtual {v9}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;->invoke()Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;

    move-result-object v3

    .line 348
    invoke-virtual {v3}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;->isFound()Z

    move-result v4

    .line 349
    invoke-virtual {v3}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;->getPhonemeBuilder()Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;

    move-result-object v6

    if-nez v4, :cond_5

    add-int/lit8 v4, v2, 0x1

    .line 353
    invoke-virtual {v1, v2, v4}, Ljava/lang/String;->subSequence(II)Ljava/lang/CharSequence;

    move-result-object v2

    invoke-virtual {v6, v2}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;->append(Ljava/lang/CharSequence;)V

    .line 356
    :cond_5
    invoke-virtual {v3}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;->getI()I

    move-result v2

    goto :goto_1

    .line 332
    :cond_6
    new-instance p1, Ljava/lang/NullPointerException;

    const-string p2, "finalRules can not be null"

    invoke-direct {p1, p2}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private static join(Ljava/lang/Iterable;Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Iterable<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 258
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 259
    invoke-interface {p0}, Ljava/lang/Iterable;->iterator()Ljava/util/Iterator;

    move-result-object p0

    .line 260
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 261
    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 263
    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-nez v1, :cond_1

    .line 267
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 264
    :cond_1
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0
.end method


# virtual methods
.method public encode(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 384
    iget-object v0, p0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->lang:Lorg/apache/commons/codec1/language/bm/Lang;

    invoke-virtual {v0, p1}, Lorg/apache/commons/codec1/language/bm/Lang;->guessLanguages(Ljava/lang/String;)Lorg/apache/commons/codec1/language/bm/Languages$LanguageSet;

    move-result-object v0

    .line 385
    invoke-virtual {p0, p1, v0}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->encode(Ljava/lang/String;Lorg/apache/commons/codec1/language/bm/Languages$LanguageSet;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public encode(Ljava/lang/String;Lorg/apache/commons/codec1/language/bm/Languages$LanguageSet;)Ljava/lang/String;
    .locals 16

    move-object/from16 v0, p0

    move-object/from16 v1, p2

    .line 399
    iget-object v2, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->nameType:Lorg/apache/commons/codec1/language/bm/NameType;

    sget-object v3, Lorg/apache/commons/codec1/language/bm/RuleType;->RULES:Lorg/apache/commons/codec1/language/bm/RuleType;

    invoke-static {v2, v3, v1}, Lorg/apache/commons/codec1/language/bm/Rule;->getInstanceMap(Lorg/apache/commons/codec1/language/bm/NameType;Lorg/apache/commons/codec1/language/bm/RuleType;Lorg/apache/commons/codec1/language/bm/Languages$LanguageSet;)Ljava/util/Map;

    move-result-object v2

    .line 401
    iget-object v3, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->nameType:Lorg/apache/commons/codec1/language/bm/NameType;

    iget-object v4, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->ruleType:Lorg/apache/commons/codec1/language/bm/RuleType;

    const-string v5, "common"

    invoke-static {v3, v4, v5}, Lorg/apache/commons/codec1/language/bm/Rule;->getInstanceMap(Lorg/apache/commons/codec1/language/bm/NameType;Lorg/apache/commons/codec1/language/bm/RuleType;Ljava/lang/String;)Ljava/util/Map;

    move-result-object v3

    .line 403
    iget-object v4, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->nameType:Lorg/apache/commons/codec1/language/bm/NameType;

    iget-object v5, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->ruleType:Lorg/apache/commons/codec1/language/bm/RuleType;

    invoke-static {v4, v5, v1}, Lorg/apache/commons/codec1/language/bm/Rule;->getInstanceMap(Lorg/apache/commons/codec1/language/bm/NameType;Lorg/apache/commons/codec1/language/bm/RuleType;Lorg/apache/commons/codec1/language/bm/Languages$LanguageSet;)Ljava/util/Map;

    move-result-object v10

    .line 407
    sget-object v4, Ljava/util/Locale;->ENGLISH:Ljava/util/Locale;

    move-object/from16 v5, p1

    invoke-virtual {v5, v4}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object v4

    const/16 v5, 0x2d

    const/16 v6, 0x20

    invoke-virtual {v4, v5, v6}, Ljava/lang/String;->replace(CC)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    .line 409
    iget-object v5, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->nameType:Lorg/apache/commons/codec1/language/bm/NameType;

    sget-object v6, Lorg/apache/commons/codec1/language/bm/NameType;->GENERIC:Lorg/apache/commons/codec1/language/bm/NameType;

    const-string v7, " "

    const/4 v8, 0x0

    const/4 v9, 0x2

    const/4 v11, 0x1

    if-ne v5, v6, :cond_3

    .line 410
    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v5

    const-string v6, ")"

    const-string v12, ")-("

    const-string v13, "("

    if-lt v5, v9, :cond_0

    invoke-virtual {v4, v8, v9}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v5

    const-string v14, "d\'"

    invoke-virtual {v5, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 411
    invoke-virtual {v4, v9}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    .line 412
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "d"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 413
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v13}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 415
    :cond_0
    sget-object v5, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->NAME_PREFIXES:Ljava/util/Map;

    iget-object v14, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->nameType:Lorg/apache/commons/codec1/language/bm/NameType;

    invoke-interface {v5, v14}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/Set;

    invoke-interface {v5}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v5

    :goto_0
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v14

    if-nez v14, :cond_1

    goto :goto_1

    :cond_1
    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    .line 417
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-static {v14}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-direct {v15, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v4, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_2

    .line 419
    invoke-virtual {v14}, Ljava/lang/String;->length()I

    move-result v1

    add-int/2addr v1, v11

    invoke-virtual {v4, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    .line 420
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-static {v14}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 421
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v13}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    :cond_2
    const/4 v8, 0x0

    goto :goto_0

    :cond_3
    :goto_1
    const-string v5, "\\s+"

    .line 426
    invoke-virtual {v4, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v4

    .line 427
    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    .line 430
    invoke-static {}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->$SWITCH_TABLE$org$apache$commons$codec1$language$bm$NameType()[I

    move-result-object v6

    iget-object v8, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->nameType:Lorg/apache/commons/codec1/language/bm/NameType;

    invoke-virtual {v8}, Lorg/apache/commons/codec1/language/bm/NameType;->ordinal()I

    move-result v8

    aget v6, v6, v8

    if-eq v6, v11, :cond_7

    if-eq v6, v9, :cond_6

    const/4 v8, 0x3

    if-ne v6, v8, :cond_5

    .line 432
    invoke-interface {v4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :goto_2
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v8

    if-nez v8, :cond_4

    .line 437
    sget-object v6, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->NAME_PREFIXES:Ljava/util/Map;

    iget-object v8, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->nameType:Lorg/apache/commons/codec1/language/bm/NameType;

    invoke-interface {v6, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/Collection;

    invoke-interface {v5, v6}, Ljava/util/List;->removeAll(Ljava/util/Collection;)Z

    goto :goto_3

    .line 432
    :cond_4
    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    const-string v9, "\'"

    .line 433
    invoke-virtual {v8, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v8

    .line 434
    array-length v9, v8

    sub-int/2addr v9, v11

    aget-object v8, v8, v9

    .line 435
    invoke-interface {v5, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 447
    :cond_5
    new-instance v1, Ljava/lang/IllegalStateException;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Unreachable case: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->nameType:Lorg/apache/commons/codec1/language/bm/NameType;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 444
    :cond_6
    invoke-interface {v5, v4}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    goto :goto_3

    .line 440
    :cond_7
    invoke-interface {v5, v4}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 441
    sget-object v6, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->NAME_PREFIXES:Ljava/util/Map;

    iget-object v8, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->nameType:Lorg/apache/commons/codec1/language/bm/NameType;

    invoke-interface {v6, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/Collection;

    invoke-interface {v5, v6}, Ljava/util/List;->removeAll(Ljava/util/Collection;)Z

    .line 450
    :goto_3
    iget-boolean v6, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->concat:Z

    if-eqz v6, :cond_8

    .line 452
    invoke-static {v5, v7}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->join(Ljava/lang/Iterable;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    :goto_4
    move-object v12, v4

    goto :goto_5

    .line 453
    :cond_8
    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v6

    if-ne v6, v11, :cond_a

    .line 455
    invoke-interface {v4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    goto :goto_4

    .line 466
    :goto_5
    invoke-static/range {p2 .. p2}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;->empty(Lorg/apache/commons/codec1/language/bm/Languages$LanguageSet;)Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;

    move-result-object v1

    move-object v7, v1

    const/4 v8, 0x0

    .line 469
    :goto_6
    invoke-virtual {v12}, Ljava/lang/String;->length()I

    move-result v1

    if-lt v8, v1, :cond_9

    .line 477
    invoke-direct {v0, v7, v3}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->applyFinalRules(Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;Ljava/util/Map;)Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;

    move-result-object v1

    .line 479
    invoke-direct {v0, v1, v10}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->applyFinalRules(Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;Ljava/util/Map;)Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;

    move-result-object v1

    .line 481
    invoke-virtual {v1}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;->makeString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 471
    :cond_9
    new-instance v1, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;

    iget v9, v0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->maxPhonemes:I

    move-object v4, v1

    move-object v5, v2

    move-object v6, v12

    invoke-direct/range {v4 .. v9}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;-><init>(Ljava/util/Map;Ljava/lang/CharSequence;Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;II)V

    invoke-virtual {v1}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;->invoke()Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;

    move-result-object v1

    .line 472
    invoke-virtual {v1}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;->getI()I

    move-result v8

    .line 473
    invoke-virtual {v1}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine$RulesApplication;->getPhonemeBuilder()Lorg/apache/commons/codec1/language/bm/PhoneticEngine$PhonemeBuilder;

    move-result-object v7

    goto :goto_6

    .line 458
    :cond_a
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 459
    invoke-interface {v5}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_7
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-nez v3, :cond_b

    .line 463
    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->substring(I)Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 459
    :cond_b
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    const-string v4, "-"

    .line 460
    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_7
.end method

.method public getLang()Lorg/apache/commons/codec1/language/bm/Lang;
    .locals 1

    .line 490
    iget-object v0, p0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->lang:Lorg/apache/commons/codec1/language/bm/Lang;

    return-object v0
.end method

.method public getMaxPhonemes()I
    .locals 1

    .line 527
    iget v0, p0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->maxPhonemes:I

    return v0
.end method

.method public getNameType()Lorg/apache/commons/codec1/language/bm/NameType;
    .locals 1

    .line 499
    iget-object v0, p0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->nameType:Lorg/apache/commons/codec1/language/bm/NameType;

    return-object v0
.end method

.method public getRuleType()Lorg/apache/commons/codec1/language/bm/RuleType;
    .locals 1

    .line 508
    iget-object v0, p0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->ruleType:Lorg/apache/commons/codec1/language/bm/RuleType;

    return-object v0
.end method

.method public isConcat()Z
    .locals 1

    .line 517
    iget-boolean v0, p0, Lorg/apache/commons/codec1/language/bm/PhoneticEngine;->concat:Z

    return v0
.end method
