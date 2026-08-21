.class public Lcom/czhj/sdk/common/json/JSONSerializer;
.super Ljava/lang/Object;


# static fields
.field private static linePattern:Ljava/util/regex/Pattern;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "_(\\w)"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/json/JSONSerializer;->linePattern:Ljava/util/regex/Pattern;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static Serialize(Ljava/lang/Object;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/sdk/common/json/CyclicObjectException;
        }
    .end annotation

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const/4 v1, 0x0

    const/4 v2, 0x0

    invoke-static {p0, v0, v2, v1, v1}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/util/HashMap;Ljava/lang/String;ZZ)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static Serialize(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/sdk/common/json/CyclicObjectException;
        }
    .end annotation

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const/4 v1, 0x0

    invoke-static {p0, v0, p1, v1, v1}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/util/HashMap;Ljava/lang/String;ZZ)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static Serialize(Ljava/lang/Object;Ljava/lang/String;Z)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/sdk/common/json/CyclicObjectException;
        }
    .end annotation

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const/4 v1, 0x0

    invoke-static {p0, v0, p1, p2, v1}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/util/HashMap;Ljava/lang/String;ZZ)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static Serialize(Ljava/lang/Object;Ljava/lang/String;ZZ)Ljava/lang/String;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/sdk/common/json/CyclicObjectException;
        }
    .end annotation

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-static {p0, v0, p1, p2, p3}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/util/HashMap;Ljava/lang/String;ZZ)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static Serialize(Ljava/lang/Object;Ljava/util/HashMap;Ljava/lang/String;ZZ)Ljava/lang/String;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            "ZZ)",
            "Ljava/lang/String;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/sdk/common/json/CyclicObjectException;
        }
    .end annotation

    const-string v0, "null"

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    instance-of v3, p0, Ljava/lang/String;

    if-eqz v3, :cond_1

    move-object v0, p0

    check-cast v0, Ljava/lang/String;

    const-string v1, "\""

    const-string v3, "\'"

    invoke-virtual {v0, v1, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/json/JSONSerializer;->SerializeString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    :cond_1
    invoke-virtual {v2}, Ljava/lang/Class;->isPrimitive()Z

    move-result v3

    if-nez v3, :cond_3

    const-class v3, Ljava/lang/Boolean;

    if-eq v2, v3, :cond_3

    const-class v3, Ljava/lang/Short;

    if-eq v2, v3, :cond_3

    const-class v3, Ljava/lang/Integer;

    if-eq v2, v3, :cond_3

    const-class v3, Ljava/lang/Long;

    if-eq v2, v3, :cond_3

    const-class v3, Ljava/lang/Float;

    if-eq v2, v3, :cond_3

    const-class v3, Ljava/lang/Double;

    if-eq v2, v3, :cond_3

    const-class v3, Ljava/lang/Byte;

    if-eq v2, v3, :cond_3

    const-class v3, Ljava/lang/Character;

    if-ne v2, v3, :cond_2

    goto :goto_0

    :cond_2
    if-nez p4, :cond_4

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {p1, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_4

    return-object v0

    :cond_3
    :goto_0
    invoke-static {p0}, Lcom/czhj/sdk/common/json/JSONSerializer;->SerializePrimitive(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    :cond_4
    :goto_1
    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_8

    instance-of v0, p0, Ljava/util/List;

    if-eqz v0, :cond_5

    check-cast p0, Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-interface {p0, v0}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p0

    invoke-static {p0, p1, p3, p4}, Lcom/czhj/sdk/common/json/JSONSerializer;->SerializeArray(Ljava/lang/Object;Ljava/util/HashMap;ZZ)Ljava/lang/String;

    move-result-object v1

    goto :goto_2

    :cond_5
    instance-of v0, p0, Ljava/util/Map;

    if-eqz v0, :cond_6

    check-cast p0, Ljava/util/Map;

    invoke-static {p0, p1, p3, p4}, Lcom/czhj/sdk/common/json/JSONSerializer;->SerializeMap(Ljava/util/Map;Ljava/util/HashMap;ZZ)Ljava/lang/String;

    move-result-object v1

    goto :goto_2

    :cond_6
    invoke-virtual {v2}, Ljava/lang/Class;->isArray()Z

    move-result v0

    if-eqz v0, :cond_7

    invoke-static {p0, p1, p3, p4}, Lcom/czhj/sdk/common/json/JSONSerializer;->SerializeArray(Ljava/lang/Object;Ljava/util/HashMap;ZZ)Ljava/lang/String;

    move-result-object v1

    goto :goto_2

    :cond_7
    invoke-static {p0, p1, p3, p4}, Lcom/czhj/sdk/common/json/JSONSerializer;->SerializeObject(Ljava/lang/Object;Ljava/util/HashMap;ZZ)Ljava/lang/String;

    move-result-object v1

    :cond_8
    :goto_2
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_9

    return-object v1

    :cond_9
    new-instance p0, Ljava/lang/StringBuilder;

    const-string p1, "{"

    invoke-direct {p0, p1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    if-eqz p3, :cond_a

    invoke-static {p2}, Lcom/czhj/sdk/common/json/JSONSerializer;->lineToHump(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    :cond_a
    invoke-static {p2}, Lcom/czhj/sdk/common/json/JSONSerializer;->SerializeString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 p1, 0x3a

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 p1, 0x7d

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static SerializeArray(Ljava/lang/Object;Ljava/util/HashMap;ZZ)Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Object;",
            ">;ZZ)",
            "Ljava/lang/String;"
        }
    .end annotation

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Ljava/lang/reflect/Array;->getLength(Ljava/lang/Object;)I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    invoke-static {p0, v2}, Ljava/lang/reflect/Array;->get(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v3

    const/4 v4, 0x0

    invoke-static {v3, p1, v4, p2, p3}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/util/HashMap;Ljava/lang/String;ZZ)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v3, v1, -0x1

    if-ge v2, v3, :cond_0

    const-string v3, ","

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    const-string p0, "]"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static SerializeMap(Ljava/util/Map;Ljava/util/HashMap;ZZ)Ljava/lang/String;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map;",
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Object;",
            ">;ZZ)",
            "Ljava/lang/String;"
        }
    .end annotation

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "{"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    const/4 v1, 0x0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    if-eqz v1, :cond_0

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    invoke-static {v3}, Lcom/czhj/sdk/common/json/JSONSerializer;->SerializeString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz p2, :cond_1

    invoke-static {v1}, Lcom/czhj/sdk/common/json/JSONSerializer;->lineToHump(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    :cond_1
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    invoke-static {v2, p1, v1, p2, p3}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/util/HashMap;Ljava/lang/String;ZZ)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x1

    goto :goto_0

    :cond_2
    const-string p0, "}"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static SerializeObject(Ljava/lang/Object;Ljava/util/HashMap;ZZ)Ljava/lang/String;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Object;",
            ">;ZZ)",
            "Ljava/lang/String;"
        }
    .end annotation

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "{"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v1

    array-length v2, v1

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v3, v2, :cond_4

    aget-object v5, v1, v3

    const/4 v6, 0x1

    invoke-virtual {v5, v6}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    :try_start_0
    invoke-virtual {v5, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    invoke-virtual {v5}, Ljava/lang/reflect/Field;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v5}, Ljava/lang/reflect/Field;->getModifiers()I

    move-result v9

    invoke-static {v9}, Ljava/lang/reflect/Modifier;->isStatic(I)Z

    move-result v9

    const-class v10, Lcom/czhj/sdk/common/json/Transient;

    invoke-virtual {v5, v10}, Ljava/lang/reflect/Field;->isAnnotationPresent(Ljava/lang/Class;)Z

    move-result v5

    const-string v10, "this$"

    invoke-virtual {v8, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v10

    if-nez v10, :cond_3

    if-nez v9, :cond_3

    if-eqz v7, :cond_0

    if-nez v5, :cond_3

    :cond_0
    if-eqz v4, :cond_1

    const-string v5, ","

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    invoke-static {v8}, Lcom/czhj/sdk/common/json/JSONSerializer;->SerializeString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    if-eqz p2, :cond_2

    invoke-static {v5}, Lcom/czhj/sdk/common/json/JSONSerializer;->lineToHump(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    :cond_2
    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ":"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v5, 0x0

    invoke-static {v7, p1, v5, p2, p3}, Lcom/czhj/sdk/common/json/JSONSerializer;->Serialize(Ljava/lang/Object;Ljava/util/HashMap;Ljava/lang/String;ZZ)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move v4, v6

    goto :goto_1

    :catchall_0
    move-exception v5

    const-string v6, "json seriallize error"

    invoke-static {v6, v5}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_4
    const-string p0, "}"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static SerializePrimitive(Ljava/lang/Object;)Ljava/lang/String;
    .locals 0

    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static SerializeString(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static lineToHump(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    sget-object v0, Lcom/czhj/sdk/common/json/JSONSerializer;->linePattern:Ljava/util/regex/Pattern;

    invoke-virtual {v0, p0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/regex/Matcher;->find()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p0

    sget-object v0, Lcom/czhj/sdk/common/json/JSONSerializer;->linePattern:Ljava/util/regex/Pattern;

    invoke-virtual {v0, p0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    :goto_0
    invoke-virtual {p0}, Ljava/util/regex/Matcher;->find()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    invoke-virtual {p0, v1}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Ljava/util/regex/Matcher;->appendReplacement(Ljava/lang/StringBuffer;Ljava/lang/String;)Ljava/util/regex/Matcher;

    goto :goto_0

    :cond_0
    invoke-virtual {p0, v0}, Ljava/util/regex/Matcher;->appendTail(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p0

    :cond_1
    return-object p0
.end method
