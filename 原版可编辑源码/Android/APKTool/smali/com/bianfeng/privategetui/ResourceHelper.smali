.class public Lcom/bianfeng/privategetui/ResourceHelper;
.super Ljava/lang/Object;
.source "ResourceHelper.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    .line 41
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 42
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    .line 41
    invoke-virtual {v0, p1, p2, p0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 44
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method

.method public static initResourceR(Landroid/content/Context;)V
    .locals 1

    .line 13
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 14
    const-class v0, Lcom/pushsdk/R$string;

    invoke-static {p0, v0}, Lcom/bianfeng/privategetui/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;)V

    return-void
.end method

.method protected static setArrayFields(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "*>;",
            "Ljava/util/Map<",
            "Ljava/lang/Object;",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 50
    invoke-virtual {p1}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object p0

    .line 51
    array-length p1, p0

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    if-ge v1, p1, :cond_2

    aget-object v2, p0, v1

    const/4 v3, 0x1

    .line 52
    invoke-virtual {v2, v3}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    const/4 v4, 0x0

    .line 54
    :try_start_0
    invoke-virtual {v2, v4}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    .line 55
    instance-of v4, v2, [I

    if-eqz v4, :cond_1

    .line 56
    check-cast v2, [I

    check-cast v2, [I

    move v4, v0

    .line 57
    :goto_1
    array-length v5, v2

    if-ge v4, v5, :cond_1

    .line 58
    aget v5, v2, v4

    .line 59
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-interface {p2, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    .line 60
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-interface {p2, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-static {v2, v4, v6}, Ljava/lang/reflect/Array;->set(Ljava/lang/Object;ILjava/lang/Object;)V

    .line 61
    sget-object v6, Ljava/lang/System;->out:Ljava/io/PrintStream;

    const-string v7, "setted attr array index %d: %d -> %d "

    const/4 v8, 0x3

    new-array v8, v8, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v8, v0

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v8, v3

    const/4 v9, 0x2

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-interface {p2, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    aput-object v5, v8, v9

    invoke-static {v7, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v6, v5}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    :catch_0
    move-exception v2

    .line 66
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method protected static setIds(Landroid/content/Context;Ljava/lang/Class;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "*>;)V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 19
    invoke-static {p0, p1, v0}, Lcom/bianfeng/privategetui/ResourceHelper;->setIds(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V

    return-void
.end method

.method protected static setIds(Landroid/content/Context;Ljava/lang/Class;Ljava/util/Map;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "*>;",
            "Ljava/util/Map<",
            "Ljava/lang/Object;",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 24
    invoke-virtual {p1}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v0

    .line 25
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    const/4 v4, 0x1

    .line 26
    invoke-virtual {v3, v4}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 28
    :try_start_0
    invoke-virtual {v3}, Ljava/lang/reflect/Field;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v5

    invoke-static {p0, v4, v5}, Lcom/bianfeng/privategetui/ResourceHelper;->getId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    const/4 v5, 0x0

    if-eqz p2, :cond_0

    .line 30
    invoke-virtual {v3, v5}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-interface {p2, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 32
    :cond_0
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v5, v4}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v3

    .line 34
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method
