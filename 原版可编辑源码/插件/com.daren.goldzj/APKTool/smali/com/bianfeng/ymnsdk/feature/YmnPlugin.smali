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

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    .line 3
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNames:Ljava/util/Map;

    .line 4
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionAliasNames:Ljava/util/Map;

    .line 64
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getDeclaredMethods()[Ljava/lang/reflect/Method;

    move-result-object v0

    .line 65
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    const/4 v4, 0x1

    .line 66
    invoke-virtual {v3, v4}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    .line 67
    const-class v4, Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;

    invoke-virtual {v3, v4}, Ljava/lang/reflect/Method;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;

    if-eqz v4, :cond_0

    .line 69
    invoke-direct {p0, v3, v4}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->loadYmnTagFunction(Ljava/lang/reflect/Method;Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;)V

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private varargs fixGameFrameworkTypes(Ljava/lang/String;[Ljava/lang/String;)Landroid/util/Pair;
    .locals 7
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

    .line 1
    array-length v0, p2

    .line 3
    new-array v1, v0, [Ljava/lang/Class;

    const/4 v2, 0x0

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v0, :cond_0

    .line 5
    const-class v4, Ljava/lang/String;

    aput-object v4, v1, v3

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 8
    :cond_0
    invoke-direct {p0, p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getFunctionKey(Ljava/lang/String;[Ljava/lang/Class;)Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;

    move-result-object v3

    .line 9
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    invoke-interface {v4, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x3

    const/4 v5, 0x2

    const/4 v6, 0x1

    if-eqz v3, :cond_1

    .line 10
    new-array v3, v4, [Ljava/lang/Object;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v3, v2

    aput-object p1, v3, v6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v3, v5

    const-string p1, "%s(%s) found match types, args lenth is %d"

    invoke-static {p1, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 11
    new-instance p1, Landroid/util/Pair;

    invoke-direct {p1, v1, p2}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1

    :cond_1
    const/4 v1, 0x4

    .line 14
    new-array v1, v1, [Ljava/lang/Object;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    aput-object p1, v1, v6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v5

    add-int/lit8 v3, v0, -0x1

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v1, v4

    const-string v4, "%s(%s) can\'t find match types, reset args lenth(%d -> %d)"

    invoke-static {v4, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    if-ne v0, v6, :cond_2

    const/4 p1, 0x0

    return-object p1

    .line 19
    :cond_2
    new-array v0, v3, [Ljava/lang/String;

    :goto_1
    if-ge v2, v3, :cond_3

    .line 21
    aget-object v1, p2, v2

    aput-object v1, v0, v2

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 23
    :cond_3
    invoke-direct {p0, p1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->fixGameFrameworkTypes(Ljava/lang/String;[Ljava/lang/String;)Landroid/util/Pair;

    move-result-object p1

    return-object p1
.end method

.method private functionNameWithPluginPrefix(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 1
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 2
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

    :cond_0
    return-object p1
.end method

.method private varargs getFunctionKey(Ljava/lang/String;[Ljava/lang/Class;)Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;
    .locals 1
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

    .line 1
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->formatFunctionName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;-><init>(Ljava/lang/String;[Ljava/lang/Class;)V

    return-object v0
.end method

.method private getFunctionNameValue(Ljava/lang/String;)I
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNames:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNames:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    add-int/lit8 p1, p1, 0x1

    return p1
.end method

.method private invokeFunction(Ljava/lang/String;)Landroid/util/Pair;
    .locals 4
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

    .line 1
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

    const/4 v0, 0x0

    .line 2
    new-array v1, v0, [Ljava/lang/Class;

    invoke-direct {p0, p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getFunctionKey(Ljava/lang/String;[Ljava/lang/Class;)Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;

    move-result-object p1

    .line 3
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 4
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/reflect/Method;

    .line 5
    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {p1, p0, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    .line 6
    new-instance v0, Landroid/util/Pair;

    const/4 v1, 0x1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-direct {v0, v1, p1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object v0

    .line 8
    :cond_0
    new-instance p1, Landroid/util/Pair;

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    const/4 v1, 0x0

    invoke-direct {p1, v0, v1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1
.end method

.method private varargs invokeFunction(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Landroid/util/Pair;
    .locals 6
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

    .line 9
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

    .line 10
    invoke-direct {p0, p1, p3}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getFunctionKey(Ljava/lang/String;[Ljava/lang/Class;)Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;

    move-result-object p1

    .line 11
    iget-object p3, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_0

    .line 12
    iget-object p3, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    invoke-interface {p3, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/reflect/Method;

    .line 13
    invoke-virtual {p1, p0, p2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    .line 14
    new-instance p2, Landroid/util/Pair;

    const/4 p3, 0x1

    invoke-static {p3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p3

    invoke-direct {p2, p3, p1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p2

    .line 16
    :cond_0
    new-instance p1, Landroid/util/Pair;

    const/4 p2, 0x0

    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p2

    const/4 p3, 0x0

    invoke-direct {p1, p2, p3}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1
.end method

.method private loadYmnTagFunction(Ljava/lang/reflect/Method;Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;)V
    .locals 3

    .line 1
    invoke-interface {p2}, Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;->name()Ljava/lang/String;

    move-result-object v0

    .line 2
    invoke-interface {p2}, Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;->alias()Ljava/lang/String;

    move-result-object p2

    .line 7
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 8
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionAliasNames:Ljava/util/Map;

    invoke-interface {v1, p2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12
    :cond_0
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->formatFunctionName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 13
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNames:Ljava/util/Map;

    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getFunctionNameValue(Ljava/lang/String;)I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, p2, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 16
    invoke-virtual {p1}, Ljava/lang/reflect/Method;->getParameterTypes()[Ljava/lang/Class;

    move-result-object p2

    invoke-direct {p0, v0, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getFunctionKey(Ljava/lang/String;[Ljava/lang/Class;)Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;

    move-result-object p2

    .line 17
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functions:Ljava/util/Map;

    invoke-interface {v0, p2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method


# virtual methods
.method public callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V
    .locals 2
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

    .line 1
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunctionWithResult(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;

    goto :goto_0

    :cond_0
    const/4 p2, 0x2

    .line 4
    new-array p2, p2, [Ljava/lang/Object;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    aput-object v0, p2, v1

    const/4 v0, 0x1

    aput-object p1, p2, v0

    const-string p1, "%s not found function %s"

    invoke-static {p1, p2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public varargs callFunction(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 2

    .line 5
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 6
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    goto :goto_0

    :cond_0
    const/4 p2, 0x2

    .line 8
    new-array p2, p2, [Ljava/lang/Object;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    aput-object v0, p2, v1

    const/4 v0, 0x1

    aput-object p1, p2, v0

    const-string p1, "%s not found function %s"

    invoke-static {p1, p2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public callFunctionWithResult(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;
    .locals 7
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

    const/4 v0, 0x1

    .line 1
    :try_start_0
    new-array v1, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p2, v1, v2

    new-array p2, v0, [Ljava/lang/Class;

    const-class v0, Ljava/util/LinkedHashMap;

    aput-object v0, p2, v2

    invoke-direct {p0, p1, v1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->invokeFunction(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Landroid/util/Pair;

    move-result-object p2

    .line 2
    iget-object v0, p2, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p2, Landroid/util/Pair;->second:Ljava/lang/Object;

    if-eqz v0, :cond_0

    .line 4
    iget-object p2, p2, Landroid/util/Pair;->second:Ljava/lang/Object;

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    .line 5
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 6
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    move-object v1, p1

    move-object v6, p2

    .line 7
    invoke-virtual/range {v0 .. v6}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginFinish(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p2

    :catch_0
    move-exception p1

    .line 12
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public varargs callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    if-eqz p2, :cond_2

    .line 13
    :try_start_0
    array-length v0, p2

    if-nez v0, :cond_0

    goto :goto_1

    .line 22
    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->fixGameFrameworkTypes(Ljava/lang/String;[Ljava/lang/String;)Landroid/util/Pair;

    move-result-object v0

    if-nez v0, :cond_1

    .line 24
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->invokeFunction(Ljava/lang/String;)Landroid/util/Pair;

    move-result-object v0

    goto :goto_0

    .line 26
    :cond_1
    iget-object v1, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/Object;

    iget-object v0, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v0, [Ljava/lang/Class;

    invoke-direct {p0, p1, v1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->invokeFunction(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Landroid/util/Pair;

    move-result-object v0

    .line 28
    :goto_0
    iget-object v1, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-nez v1, :cond_3

    const/4 v0, 0x1

    .line 29
    new-array v1, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p2, v1, v2

    new-array p2, v0, [Ljava/lang/Class;

    const-class v0, [Ljava/lang/String;

    aput-object v0, p2, v2

    invoke-direct {p0, p1, v1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->invokeFunction(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Landroid/util/Pair;

    move-result-object p2

    goto :goto_2

    .line 30
    :cond_2
    :goto_1
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->invokeFunction(Ljava/lang/String;)Landroid/util/Pair;

    move-result-object p2

    :goto_2
    move-object v0, p2

    .line 49
    :cond_3
    iget-object p2, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast p2, Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    if-eqz p2, :cond_4

    iget-object p2, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    if-eqz p2, :cond_4

    .line 50
    iget-object p2, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    .line 51
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 52
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    move-object v1, p1

    move-object v6, p2

    .line 53
    invoke-virtual/range {v0 .. v6}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginFinish(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p2

    :catch_0
    move-exception p1

    .line 58
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    const/4 p1, 0x0

    return-object p1
.end method

.method public formatFunctionName(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionAliasNames:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionAliasNames:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 4
    :cond_0
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNameWithPluginPrefix(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getEntrance()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    .locals 2

    .line 1
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    const-class v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;

    if-eqz v0, :cond_0

    .line 3
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;->entrance()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getPolicy()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
    .locals 2

    .line 1
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    const-class v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;

    if-eqz v0, :cond_0

    .line 3
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;->strategy()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public isAcitityEntrance()Z
    .locals 2

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getEntrance()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isSupportFunction(Ljava/lang/String;)Z
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->functionNames:Ljava/util/Map;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->formatFunctionName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    return p1
.end method

.method public matchAcitityEntrance(Landroid/content/Context;)Z
    .locals 0

    .line 1
    instance-of p1, p1, Landroid/app/Activity;

    if-eqz p1, :cond_0

    .line 2
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isAcitityEntrance()Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public matchApplicationEntrance(Landroid/content/Context;)Z
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getEntrance()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->APPLICATION:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public matchContextEntrance(Landroid/content/Context;)Z
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getEntrance()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->CONTEXT:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public matchEntrance(Landroid/content/Context;)Z
    .locals 1

    .line 1
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->matchAcitityEntrance(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->matchContextEntrance(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->matchApplicationEntrance(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p1, 0x1

    :goto_1
    return p1
.end method
