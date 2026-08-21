.class public abstract Lcom/bianfeng/ymnsdk/feature/YmnPlugin;
.super Ljava/lang/Object;
.source "YmnPlugin.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/feature/YmnPlugin$b;,
        Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;
    }
.end annotation


# instance fields
.field private functionAliasNames:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private functionNames:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private functions:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;",
            "Ljava/lang/reflect/Method;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 5

    .line 87
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 26
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    .line 27
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNames:Ljava/util/Map;

    .line 28
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionAliasNames:Ljava/util/Map;

    .line 88
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getDeclaredMethods()[Ljava/lang/reflect/Method;

    move-result-object v0

    .line 89
    .local v0, "methods":[Ljava/lang/reflect/Method;
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    .line 90
    .local v3, "method":Ljava/lang/reflect/Method;
    const/4 v4, 0x1

    invoke-virtual {v3, v4}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    .line 91
    const-class v4, Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;

    invoke-virtual {v3, v4}, Ljava/lang/reflect/Method;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;

    .line 92
    .local v4, "tagFunction":Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
    if-eqz v4, :cond_0

    .line 93
    invoke-direct {p0, v3, v4}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->loadYmnTagFunction(Ljava/lang/reflect/Method;Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;)V

    .line 89
    .end local v3    # "method":Ljava/lang/reflect/Method;
    .end local v4    # "tagFunction":Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 96
    :cond_1
    return-void
.end method

.method private varargs fixGameFrameworkTypes(Ljava/lang/String;[Ljava/lang/String;)Landroid/util/Pair;
    .locals 9
    .param p1, "functionName"    # Ljava/lang/String;
    .param p2, "data"    # [Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/String;",
            ")",
            "Landroid/util/Pair<",
            "[",
            "Ljava/lang/Class<",
            "*>;[",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 262
    array-length v0, p2

    .line 264
    .local v0, "length":I
    new-array v1, v0, [Ljava/lang/Class;

    .line 265
    .local v1, "types":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    if-ge v2, v0, :cond_0

    .line 266
    const-class v3, Ljava/lang/String;

    aput-object v3, v1, v2

    .line 265
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 269
    .end local v2    # "i":I
    :cond_0
    invoke-direct {p0, p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getFunctionKey(Ljava/lang/String;[Ljava/lang/Class;)Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;

    move-result-object v2

    .line 270
    .local v2, "key":Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    invoke-interface {v3, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x3

    const/4 v5, 0x2

    const/4 v6, 0x0

    const/4 v7, 0x1

    if-eqz v3, :cond_1

    .line 271
    new-array v3, v4, [Ljava/lang/Object;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v3, v6

    aput-object p1, v3, v7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v5

    const-string v4, "%s(%s) found match types, args lenth is %d"

    invoke-static {v4, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 272
    new-instance v3, Landroid/util/Pair;

    invoke-direct {v3, v1, p2}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object v3

    .line 275
    :cond_1
    const/4 v3, 0x4

    new-array v3, v3, [Ljava/lang/Object;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v3, v6

    aput-object p1, v3, v7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v3, v5

    add-int/lit8 v5, v0, -0x1

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v3, v4

    const-string v4, "%s(%s) can\'t find match types, reset args lenth(%d -> %d)"

    invoke-static {v4, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 277
    if-ne v0, v7, :cond_2

    .line 278
    const/4 v3, 0x0

    return-object v3

    .line 280
    :cond_2
    add-int/lit8 v3, v0, -0x1

    new-array v3, v3, [Ljava/lang/String;

    .line 281
    .local v3, "args":[Ljava/lang/String;
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_1
    add-int/lit8 v5, v0, -0x1

    if-ge v4, v5, :cond_3

    .line 282
    aget-object v5, p2, v4

    aput-object v5, v3, v4

    .line 281
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 284
    .end local v4    # "i":I
    :cond_3
    invoke-direct {p0, p1, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->fixGameFrameworkTypes(Ljava/lang/String;[Ljava/lang/String;)Landroid/util/Pair;

    move-result-object v4

    return-object v4
.end method

.method private functionNameWithPluginPrefix(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p1, "functionName"    # Ljava/lang/String;

    .line 147
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 148
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 150
    :cond_0
    return-object p1
.end method

.method private varargs getFunctionKey(Ljava/lang/String;[Ljava/lang/Class;)Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;
    .locals 2
    .param p1, "functionName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/Class<",
            "*>;)",
            "Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;"
        }
    .end annotation

    .line 121
    .local p2, "types":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->formatFunctionName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;-><init>(Ljava/lang/String;[Ljava/lang/Class;)V

    return-object v0
.end method

.method private getFunctionNameValue(Ljava/lang/String;)I
    .locals 2
    .param p1, "functionName"    # Ljava/lang/String;

    .line 125
    const/4 v0, 0x0

    .line 126
    .local v0, "count":I
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNames:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 127
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNames:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 129
    :cond_0
    add-int/lit8 v0, v0, 0x1

    return v0
.end method

.method private invokeFunction(Ljava/lang/String;)Landroid/util/Pair;
    .locals 5
    .param p1, "functionName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Landroid/util/Pair<",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 234
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, p1, v1, v2, v3}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 235
    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Class;

    invoke-direct {p0, p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getFunctionKey(Ljava/lang/String;[Ljava/lang/Class;)Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;

    move-result-object v1

    .line 236
    .local v1, "key":Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    invoke-interface {v2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 237
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/reflect/Method;

    .line 238
    .local v2, "method":Ljava/lang/reflect/Method;
    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {v2, p0, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    .line 239
    .local v0, "result":Ljava/lang/Object;
    new-instance v3, Landroid/util/Pair;

    const/4 v4, 0x1

    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-direct {v3, v4, v0}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object v3

    .line 241
    .end local v0    # "result":Ljava/lang/Object;
    .end local v2    # "method":Ljava/lang/reflect/Method;
    :cond_0
    new-instance v2, Landroid/util/Pair;

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    const/4 v3, 0x0

    invoke-direct {v2, v0, v3}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object v2
.end method

.method private varargs invokeFunction(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Landroid/util/Pair;
    .locals 6
    .param p1, "functionName"    # Ljava/lang/String;
    .param p2, "data"    # [Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/Object;",
            "[",
            "Ljava/lang/Class<",
            "*>;)",
            "Landroid/util/Pair<",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 245
    .local p3, "types":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v4

    move-object v1, p1

    move-object v5, p2

    invoke-virtual/range {v0 .. v5}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V

    .line 246
    invoke-direct {p0, p1, p3}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getFunctionKey(Ljava/lang/String;[Ljava/lang/Class;)Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;

    move-result-object v0

    .line 247
    .local v0, "key":Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 248
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/reflect/Method;

    .line 249
    .local v1, "method":Ljava/lang/reflect/Method;
    invoke-virtual {v1, p0, p2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    .line 250
    .local v2, "result":Ljava/lang/Object;
    new-instance v3, Landroid/util/Pair;

    const/4 v4, 0x1

    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-direct {v3, v4, v2}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object v3

    .line 252
    .end local v1    # "method":Ljava/lang/reflect/Method;
    .end local v2    # "result":Ljava/lang/Object;
    :cond_0
    new-instance v1, Landroid/util/Pair;

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    const/4 v3, 0x0

    invoke-direct {v1, v2, v3}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object v1
.end method

.method private loadYmnTagFunction(Ljava/lang/reflect/Method;Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;)V
    .locals 6
    .param p1, "method"    # Ljava/lang/reflect/Method;
    .param p2, "tagFunction"    # Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;

    .line 99
    invoke-interface {p2}, Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;->name()Ljava/lang/String;

    move-result-object v0

    .line 100
    .local v0, "functionName":Ljava/lang/String;
    invoke-interface {p2}, Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;->alias()Ljava/lang/String;

    move-result-object v1

    .line 105
    .local v1, "functionAliasName":Ljava/lang/String;
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 106
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionAliasNames:Ljava/util/Map;

    invoke-interface {v2, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 110
    :cond_0
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->formatFunctionName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 111
    .local v2, "functionNameKey":Ljava/lang/String;
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNames:Ljava/util/Map;

    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getFunctionNameValue(Ljava/lang/String;)I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v2, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 112
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_plugin_init"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 113
    .local v3, "initName":Ljava/lang/String;
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNames:Ljava/util/Map;

    invoke-direct {p0, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getFunctionNameValue(Ljava/lang/String;)I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-interface {v4, v3, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 116
    invoke-virtual {p1}, Ljava/lang/reflect/Method;->getParameterTypes()[Ljava/lang/Class;

    move-result-object v4

    invoke-direct {p0, v0, v4}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getFunctionKey(Ljava/lang/String;[Ljava/lang/Class;)Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;

    move-result-object v4

    .line 117
    .local v4, "functionKey":Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;
    iget-object v5, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    invoke-interface {v5, v4, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 118
    return-void
.end method


# virtual methods
.method public callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V
    .locals 3
    .param p1, "functionName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 160
    .local p2, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 161
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunctionWithResult(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;

    goto :goto_0

    .line 163
    :cond_0
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v0, v1

    const/4 v1, 0x1

    aput-object p1, v0, v1

    const-string v1, "%s not found function %s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 166
    :goto_0
    return-void
.end method

.method public varargs callFunction(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 3
    .param p1, "functionName"    # Ljava/lang/String;
    .param p2, "data"    # [Ljava/lang/String;

    .line 188
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 189
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    goto :goto_0

    .line 191
    :cond_0
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v0, v1

    const/4 v1, 0x1

    aput-object p1, v0, v1

    const-string v1, "%s not found function %s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 193
    :goto_0
    return-void
.end method

.method public callFunctionWithResult(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;
    .locals 9
    .param p1, "functionName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 171
    .local p2, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    const/4 v0, 0x1

    :try_start_0
    new-array v1, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p2, v1, v2

    new-array v0, v0, [Ljava/lang/Class;

    const-class v3, Ljava/util/LinkedHashMap;

    aput-object v3, v0, v2

    invoke-direct {p0, p1, v1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->invokeFunction(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Landroid/util/Pair;

    move-result-object v0

    .line 172
    .local v0, "result":Landroid/util/Pair;, "Landroid/util/Pair<Ljava/lang/Boolean;Ljava/lang/Object;>;"
    iget-object v1, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    if-eqz v1, :cond_0

    .line 174
    iget-object v1, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 175
    .local v1, "d":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v2

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v4

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    .line 176
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ""

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x0

    .line 175
    move-object v3, p1

    move-object v8, v1

    invoke-virtual/range {v2 .. v8}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginFinish(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 177
    return-object v1

    .line 182
    .end local v0    # "result":Landroid/util/Pair;, "Landroid/util/Pair<Ljava/lang/Boolean;Ljava/lang/Object;>;"
    .end local v1    # "d":Ljava/lang/String;
    :cond_0
    goto :goto_0

    .line 179
    :catch_0
    move-exception v0

    .line 180
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 183
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public varargs callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;
    .locals 9
    .param p1, "functionName"    # Ljava/lang/String;
    .param p2, "data"    # [Ljava/lang/String;

    .line 198
    const/4 v0, 0x0

    .line 200
    .local v0, "result":Landroid/util/Pair;, "Landroid/util/Pair<Ljava/lang/Boolean;Ljava/lang/Object;>;"
    if-eqz p2, :cond_2

    :try_start_0
    array-length v1, p2

    if-nez v1, :cond_0

    goto :goto_1

    .line 209
    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->fixGameFrameworkTypes(Ljava/lang/String;[Ljava/lang/String;)Landroid/util/Pair;

    move-result-object v1

    .line 210
    .local v1, "types":Landroid/util/Pair;, "Landroid/util/Pair<[Ljava/lang/Class<*>;[Ljava/lang/String;>;"
    if-nez v1, :cond_1

    .line 211
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->invokeFunction(Ljava/lang/String;)Landroid/util/Pair;

    move-result-object v2

    move-object v0, v2

    goto :goto_0

    .line 213
    :cond_1
    iget-object v2, v1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/Object;

    iget-object v3, v1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v3, [Ljava/lang/Class;

    invoke-direct {p0, p1, v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->invokeFunction(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Landroid/util/Pair;

    move-result-object v2

    move-object v0, v2

    .line 215
    :goto_0
    iget-object v2, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-nez v2, :cond_3

    .line 216
    const/4 v2, 0x1

    new-array v3, v2, [Ljava/lang/Object;

    const/4 v4, 0x0

    aput-object p2, v3, v4

    new-array v2, v2, [Ljava/lang/Class;

    const-class v5, [Ljava/lang/String;

    aput-object v5, v2, v4

    invoke-direct {p0, p1, v3, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->invokeFunction(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Landroid/util/Pair;

    move-result-object v2

    move-object v0, v2

    goto :goto_2

    .line 201
    .end local v1    # "types":Landroid/util/Pair;, "Landroid/util/Pair<[Ljava/lang/Class<*>;[Ljava/lang/String;>;"
    :cond_2
    :goto_1
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->invokeFunction(Ljava/lang/String;)Landroid/util/Pair;

    move-result-object v1

    move-object v0, v1

    .line 220
    :cond_3
    :goto_2
    iget-object v1, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_4

    iget-object v1, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    if-eqz v1, :cond_4

    .line 221
    iget-object v1, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 222
    .local v1, "d":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v2

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v4

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    .line 223
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ""

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x0

    .line 222
    move-object v3, p1

    move-object v8, v1

    invoke-virtual/range {v2 .. v8}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginFinish(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 224
    return-object v1

    .line 229
    .end local v0    # "result":Landroid/util/Pair;, "Landroid/util/Pair<Ljava/lang/Boolean;Ljava/lang/Object;>;"
    .end local v1    # "d":Ljava/lang/String;
    :cond_4
    goto :goto_3

    .line 226
    :catch_0
    move-exception v0

    .line 227
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 230
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_3
    const/4 v0, 0x0

    return-object v0
.end method

.method public formatFunctionName(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p1, "functionName"    # Ljava/lang/String;

    .line 139
    move-object v0, p1

    .line 140
    .local v0, "realName":Ljava/lang/String;
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionAliasNames:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 141
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionAliasNames:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    .line 143
    :cond_0
    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNameWithPluginPrefix(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public getEntrance()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    .locals 2

    .line 48
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    const-class v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;

    .line 49
    .local v0, "tagPlugin":Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    if-eqz v0, :cond_0

    .line 50
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;->entrance()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    move-result-object v1

    return-object v1

    .line 52
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method public getPolicy()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
    .locals 2

    .line 35
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    const-class v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;

    .line 36
    .local v0, "tagPlugin":Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    if-eqz v0, :cond_0

    .line 37
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;->strategy()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    move-result-object v1

    return-object v1

    .line 39
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method public isAcitityEntrance()Z
    .locals 2

    .line 73
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getEntrance()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    move-result-object v0

    .line 74
    .local v0, "tag":Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    if-eqz v0, :cond_0

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    if-ne v0, v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public isSupportFunction(Ljava/lang/String;)Z
    .locals 2
    .param p1, "functionName"    # Ljava/lang/String;

    .line 155
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNames:Ljava/util/Map;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->formatFunctionName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public matchAcitityEntrance(Landroid/content/Context;)Z
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 66
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 67
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isAcitityEntrance()Z

    move-result v0

    return v0

    .line 69
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public matchApplicationEntrance(Landroid/content/Context;)Z
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 83
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getEntrance()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    move-result-object v0

    .line 84
    .local v0, "tag":Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    if-eqz v0, :cond_0

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->APPLICATION:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    if-ne v0, v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public matchContextEntrance(Landroid/content/Context;)Z
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 78
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getEntrance()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    move-result-object v0

    .line 79
    .local v0, "tag":Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    if-eqz v0, :cond_0

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->CONTEXT:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    if-ne v0, v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public matchEntrance(Landroid/content/Context;)Z
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 62
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->matchAcitityEntrance(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->matchContextEntrance(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->matchApplicationEntrance(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method
