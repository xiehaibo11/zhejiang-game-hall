.class public Lcom/czhj/sdk/common/json/JSONDeserializer;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static Deserialize(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;",
            "Ljava/lang/Object;",
            ")TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/sdk/common/json/MatchTypeException;
        }
    .end annotation

    instance-of v0, p1, Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    check-cast p1, Lorg/json/JSONObject;

    invoke-static {p0, p1}, Lcom/czhj/sdk/common/json/JSONDeserializer;->DeserializeObject(Ljava/lang/Class;Lorg/json/JSONObject;)Ljava/lang/Object;

    move-result-object p0

    return-object p0

    :cond_0
    instance-of v0, p1, Lorg/json/JSONArray;

    if-eqz v0, :cond_1

    check-cast p1, Lorg/json/JSONArray;

    invoke-static {p0, p1}, Lcom/czhj/sdk/common/json/JSONDeserializer;->DeserializeArray(Ljava/lang/Class;Lorg/json/JSONArray;)Ljava/lang/Object;

    move-result-object p0

    return-object p0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private static DeserializeArray(Ljava/lang/Class;Lorg/json/JSONArray;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;",
            "Lorg/json/JSONArray;",
            ")TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/sdk/common/json/MatchTypeException;
        }
    .end annotation

    invoke-virtual {p0}, Ljava/lang/Class;->isArray()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Ljava/lang/Class;->getComponentType()Ljava/lang/Class;

    move-result-object p0

    invoke-static {p0, p1}, Lcom/czhj/sdk/common/json/JSONDeserializer;->DeserializeArrayImpl(Ljava/lang/Class;Lorg/json/JSONArray;)Ljava/lang/Object;

    move-result-object p0

    return-object p0

    :cond_0
    new-instance p1, Lcom/czhj/sdk/common/json/MatchTypeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Assigning json array to non array type: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Class;->getCanonicalName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {p1, p0}, Lcom/czhj/sdk/common/json/MatchTypeException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private static DeserializeArrayImpl(Ljava/lang/Class;Lorg/json/JSONArray;)Ljava/lang/Object;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "*>;",
            "Lorg/json/JSONArray;",
            ")",
            "Ljava/lang/Object;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/sdk/common/json/MatchTypeException;
        }
    .end annotation

    :try_start_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v0

    invoke-static {p0, v0}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;I)Ljava/lang/Object;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v1, 0x0

    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_2

    :try_start_1
    invoke-virtual {p1, v1}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/common/json/JSONDeserializer;->isPrimitive(Ljava/lang/Class;)Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {p1, v1}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v2

    :goto_1
    invoke-static {v0, v1, v2}, Ljava/lang/reflect/Array;->set(Ljava/lang/Object;ILjava/lang/Object;)V

    goto :goto_2

    :cond_0
    invoke-virtual {p1, v1}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_1

    invoke-static {p0, v2}, Lcom/czhj/sdk/common/json/JSONDeserializer;->Deserialize(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    goto :goto_1

    :cond_1
    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Ljava/lang/reflect/Array;->set(Ljava/lang/Object;ILjava/lang/Object;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :goto_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catchall_0
    move-exception p0

    new-instance p1, Lcom/czhj/sdk/common/json/MatchTypeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "JSON error while deserializing array: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {p1, p0}, Lcom/czhj/sdk/common/json/MatchTypeException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_2
    return-object v0

    :catchall_1
    new-instance p1, Lcom/czhj/sdk/common/json/MatchTypeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Can\'t create array of type: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Class;->getCanonicalName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {p1, p0}, Lcom/czhj/sdk/common/json/MatchTypeException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private static DeserializeList(Ljava/lang/Class;Ljava/lang/Class;Lorg/json/JSONArray;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "*>;",
            "Ljava/lang/Class<",
            "*>;",
            "Lorg/json/JSONArray;",
            ")",
            "Ljava/util/List<",
            "TT;>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/sdk/common/json/MatchTypeException;
        }
    .end annotation

    :try_start_0
    invoke-static {p1, p2}, Lcom/czhj/sdk/common/json/JSONDeserializer;->DeserializeArrayImpl(Ljava/lang/Class;Lorg/json/JSONArray;)Ljava/lang/Object;

    move-result-object p1

    const/4 p2, 0x0

    new-array v0, p2, [Ljava/lang/Class;

    invoke-virtual {p0, v0}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object p0

    new-array v0, p2, [Ljava/lang/Object;

    invoke-virtual {p0, v0}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/List;

    :goto_0
    invoke-static {p1}, Ljava/lang/reflect/Array;->getLength(Ljava/lang/Object;)I

    move-result v0

    if-ge p2, v0, :cond_0

    invoke-static {p1, p2}, Ljava/lang/reflect/Array;->get(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v0

    invoke-interface {p0, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_0
    return-object p0

    :catch_0
    move-exception p0

    new-instance p1, Lcom/czhj/sdk/common/json/MatchTypeException;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Exception deserializing list: "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {p1, p0}, Lcom/czhj/sdk/common/json/MatchTypeException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private static DeserializeObject(Ljava/lang/Class;Lorg/json/JSONObject;)Ljava/lang/Object;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;",
            "Lorg/json/JSONObject;",
            ")TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/sdk/common/json/MatchTypeException;
        }
    .end annotation

    invoke-static {p0}, Lcom/czhj/sdk/common/json/JSONDeserializer;->createTarget(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v1

    array-length v2, v1

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_5

    aget-object v5, v1, v4

    invoke-static {v5}, Lcom/czhj/sdk/common/json/JSONDeserializer;->isValidDeserializableField(Ljava/lang/reflect/Field;)Z

    move-result v6

    if-eqz v6, :cond_4

    const/4 v6, 0x1

    invoke-virtual {v5, v6}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    invoke-virtual {v5}, Ljava/lang/reflect/Field;->getType()Ljava/lang/Class;

    move-result-object v6

    :try_start_0
    invoke-static {v6}, Lcom/czhj/sdk/common/json/JSONDeserializer;->isPrimitive(Ljava/lang/Class;)Z

    move-result v7

    if-eqz v7, :cond_1

    invoke-virtual {v5}, Ljava/lang/reflect/Field;->getName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p1, v7}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v7

    :goto_1
    invoke-virtual {v5, p0, v7}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    goto/16 :goto_2

    :cond_1
    invoke-virtual {v5}, Ljava/lang/reflect/Field;->getName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p1, v7}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v7

    if-eqz v7, :cond_3

    const-class v8, Ljava/util/List;

    invoke-virtual {v8, v6}, Ljava/lang/Class;->isAssignableFrom(Ljava/lang/Class;)Z

    move-result v8

    if-eqz v8, :cond_2

    invoke-virtual {v5}, Ljava/lang/reflect/Field;->getGenericType()Ljava/lang/reflect/Type;

    move-result-object v8

    check-cast v8, Ljava/lang/reflect/ParameterizedType;

    invoke-interface {v8}, Ljava/lang/reflect/ParameterizedType;->getActualTypeArguments()[Ljava/lang/reflect/Type;

    move-result-object v8

    aget-object v8, v8, v3

    invoke-virtual {v8}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v8

    new-instance v9, Ljava/util/StringTokenizer;

    const-string v10, " "

    invoke-direct {v9, v8, v10}, Ljava/util/StringTokenizer;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v9}, Ljava/util/StringTokenizer;->nextToken()Ljava/lang/String;

    invoke-virtual {v9}, Ljava/util/StringTokenizer;->nextToken()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v8

    check-cast v7, Lorg/json/JSONArray;

    invoke-static {v6, v8, v7}, Lcom/czhj/sdk/common/json/JSONDeserializer;->DeserializeList(Ljava/lang/Class;Ljava/lang/Class;Lorg/json/JSONArray;)Ljava/util/List;

    move-result-object v7

    goto :goto_1

    :cond_2
    invoke-static {v6, v7}, Lcom/czhj/sdk/common/json/JSONDeserializer;->Deserialize(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    goto :goto_1

    :cond_3
    invoke-virtual {v5, p0, v0}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p0

    new-instance p1, Lcom/czhj/sdk/common/json/MatchTypeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Setting "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/reflect/Field;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " in "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/Class;->getCanonicalName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " got error: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {p1, p0}, Lcom/czhj/sdk/common/json/MatchTypeException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_4
    :goto_2
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_0

    :cond_5
    return-object p0
.end method

.method private static createTarget(Ljava/lang/Class;)Ljava/lang/Object;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;)TT;"
        }
    .end annotation

    :try_start_0
    invoke-virtual {p0}, Ljava/lang/Class;->isMemberClass()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Ljava/lang/Class;->getEnclosingClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v1

    const/4 v2, 0x1

    new-array v3, v2, [Ljava/lang/Class;

    const/4 v4, 0x0

    aput-object v0, v3, v4

    invoke-virtual {p0, v3}, Ljava/lang/Class;->getDeclaredConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object p0

    invoke-virtual {p0, v2}, Ljava/lang/reflect/Constructor;->setAccessible(Z)V

    new-array v0, v2, [Ljava/lang/Object;

    aput-object v1, v0, v4

    invoke-virtual {p0, v0}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    return-object p0

    :cond_0
    invoke-virtual {p0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static isPrimitive(Ljava/lang/Class;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "*>;)Z"
        }
    .end annotation

    const-class v0, Ljava/lang/Character;

    if-eq p0, v0, :cond_1

    sget-object v0, Ljava/lang/Character;->TYPE:Ljava/lang/Class;

    if-eq p0, v0, :cond_1

    const-class v0, Ljava/lang/Byte;

    if-eq p0, v0, :cond_1

    sget-object v0, Ljava/lang/Byte;->TYPE:Ljava/lang/Class;

    if-eq p0, v0, :cond_1

    const-class v0, Ljava/lang/Short;

    if-eq p0, v0, :cond_1

    sget-object v0, Ljava/lang/Short;->TYPE:Ljava/lang/Class;

    if-eq p0, v0, :cond_1

    const-class v0, Ljava/lang/Integer;

    if-eq p0, v0, :cond_1

    sget-object v0, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    if-eq p0, v0, :cond_1

    const-class v0, Ljava/lang/Long;

    if-eq p0, v0, :cond_1

    sget-object v0, Ljava/lang/Long;->TYPE:Ljava/lang/Class;

    if-eq p0, v0, :cond_1

    const-class v0, Ljava/lang/Float;

    if-eq p0, v0, :cond_1

    sget-object v0, Ljava/lang/Float;->TYPE:Ljava/lang/Class;

    if-eq p0, v0, :cond_1

    const-class v0, Ljava/lang/Double;

    if-eq p0, v0, :cond_1

    sget-object v0, Ljava/lang/Double;->TYPE:Ljava/lang/Class;

    if-eq p0, v0, :cond_1

    const-class v0, Ljava/lang/Boolean;

    if-eq p0, v0, :cond_1

    sget-object v0, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    if-eq p0, v0, :cond_1

    const-class v0, Ljava/lang/String;

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p0, 0x1

    :goto_1
    return p0
.end method

.method private static isValidDeserializableField(Ljava/lang/reflect/Field;)Z
    .locals 2

    const-class v0, Lcom/czhj/sdk/common/json/Transient;

    invoke-virtual {p0, v0}, Ljava/lang/reflect/Field;->isAnnotationPresent(Ljava/lang/Class;)Z

    move-result v0

    invoke-virtual {p0}, Ljava/lang/reflect/Field;->getName()Ljava/lang/String;

    move-result-object p0

    const-string v1, "this$"

    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    const/4 v1, 0x1

    xor-int/2addr p0, v1

    if-nez v0, :cond_0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method
