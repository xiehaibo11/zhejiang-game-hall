.class public Lcom/bianfeng/ymnsdk/feature/c;
.super Ljava/lang/Object;
.source "YmnPluginManager.java"


# static fields
.field private static a:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile b:Z

.field private static c:Lcom/bianfeng/ymnsdk/feature/YmnCallback;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    const/4 v0, 0x0

    .line 2
    sput-boolean v0, Lcom/bianfeng/ymnsdk/feature/c;->b:Z

    return-void
.end method

.method public static a()V
    .locals 3

    .line 48
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 49
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 50
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onDestroy()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a(IILandroid/content/Intent;)V
    .locals 3

    .line 54
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 55
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 56
    invoke-virtual {v1, p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onActivityResult(IILandroid/content/Intent;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a(I[Ljava/lang/String;[I)V
    .locals 3

    .line 42
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 43
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 44
    invoke-virtual {v1, p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a(Landroid/app/Activity;)V
    .locals 4

    .line 36
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 37
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 39
    :try_start_0
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onCreate(Landroid/app/Activity;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 41
    :catch_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onCreate \u65b9\u6cd5\u51fa\u5f02\u5e38 \u63d2\u4ef6\u540d\uff1a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "-- \u63d2\u4ef6\u7248\u672c\uff1a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto :goto_0

    :cond_1
    return-void
.end method

.method private static a(Landroid/content/Context;)V
    .locals 3

    .line 5
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->d(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/PluginLocalState;

    move-result-object p0

    .line 6
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 7
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isCheckedState()Z

    move-result v2

    if-nez v2, :cond_0

    .line 8
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->checkState(Lcom/bianfeng/ymnsdk/entity/PluginLocalState;)V

    const-string v2, "AfterCheckState"

    .line 9
    invoke-static {v2, v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/lang/String;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a(Landroid/content/Intent;)V
    .locals 3

    .line 51
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 52
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 53
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onNewIntent(Landroid/content/Intent;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/ymnsdk/feature/c;->c:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method

.method public static a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 2

    const/4 v0, 0x1

    .line 31
    new-array v0, v0, [Ljava/lang/Object;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string p0, "%s\u63d2\u4ef6\u672a\u5f00\u542f\uff0c\u8bf7\u68c0\u67e5\u7f51\u7edc\u53ca\u8fdc\u7a0b\u914d\u7f6e"

    invoke-static {p0, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    .line 32
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/f;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/feature/f;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/feature/f;)Lcom/bianfeng/ymnsdk/feature/f;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/f;->a()Lcom/bianfeng/ymnsdk/feature/f;

    return-void
.end method

.method private static a(Ljava/lang/String;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 1

    .line 10
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ":"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->dRich(Ljava/lang/String;)I

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/util/LinkedHashMap;)V
    .locals 3
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

    const/4 v0, 0x1

    .line 19
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string v1, "callFunction %s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 20
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 21
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 22
    invoke-virtual {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    goto :goto_0

    .line 23
    :cond_1
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 24
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    goto :goto_0

    :cond_2
    return-void
.end method

.method public static varargs a(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 3

    const/4 v0, 0x1

    .line 25
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string v1, "callFunction %s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 26
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 27
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 28
    invoke-virtual {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_0

    .line 29
    :cond_1
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 30
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    goto :goto_0

    :cond_2
    return-void
.end method

.method private static a(Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;",
            ">;)V"
        }
    .end annotation

    if-eqz p0, :cond_0

    .line 2
    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 3
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 4
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$b;->a(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method

.method public static a(Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 61
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 62
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 63
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onPay(Ljava/util/Map;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a(Ljava/util/Map;Ljava/lang/String;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 57
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 58
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 59
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onLogin=="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 60
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onLogin(Ljava/util/Map;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a(Z)V
    .locals 3

    .line 33
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 34
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 35
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setDebugMode(Z)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a(ZLandroid/app/Activity;)V
    .locals 3

    .line 45
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 46
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 47
    invoke-virtual {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onWindowFocusChanged(ZLandroid/app/Activity;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a(Ljava/lang/String;)Z
    .locals 5

    const/4 v0, 0x1

    .line 11
    new-array v1, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p0, v1, v2

    const-string v3, "isSupportFunction %s"

    invoke-static {v3, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 12
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 13
    invoke-virtual {v3, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 14
    new-array p0, v0, [Ljava/lang/Object;

    invoke-interface {v3}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    aput-object v1, p0, v2

    const-string v1, "\u63d2\u4ef6 %s"

    invoke-static {v1, p0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 15
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result p0

    if-eqz p0, :cond_1

    return v0

    .line 18
    :cond_1
    invoke-static {v3}, Lcom/bianfeng/ymnsdk/feature/c;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    :cond_2
    return v2
.end method

.method public static b(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;
    .locals 3
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

    .line 12
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string v1, "callFunctionWithResult %s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 13
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 14
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 15
    invoke-virtual {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunctionWithResult(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    return-object v1

    .line 17
    :cond_1
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 18
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    goto :goto_0

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method

.method public static varargs b(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x1

    .line 19
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string v1, "callFunctionWithResult %s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 20
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 21
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_2

    const-string v2, "plugin_init"

    .line 23
    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 24
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->inited()Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_1

    return-object v2

    .line 27
    :cond_1
    invoke-virtual {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    return-object v1

    .line 29
    :cond_2
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 30
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    goto :goto_0

    :cond_3
    const/4 p0, 0x0

    return-object p0
.end method

.method public static b()V
    .locals 3

    .line 31
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 32
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 33
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onPause()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static b(Landroid/content/Context;)V
    .locals 1

    .line 1
    sget-boolean v0, Lcom/bianfeng/ymnsdk/feature/c;->b:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 2
    sput-boolean v0, Lcom/bianfeng/ymnsdk/feature/c;->b:Z

    .line 3
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/b;->a(Landroid/content/Context;)V

    .line 4
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->c(Landroid/content/Context;)V

    .line 9
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/feature/a;->a(Landroid/content/Context;Ljava/util/HashMap;)V

    .line 10
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Landroid/content/Context;)V

    .line 11
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->d(Landroid/content/Context;)V

    return-void
.end method

.method public static c()V
    .locals 3

    .line 4
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 5
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 6
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onRestart()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private static c(Landroid/content/Context;)V
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/b;->b(Landroid/content/Context;)Ljava/util/List;

    move-result-object p0

    .line 3
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/util/List;)V

    return-void
.end method

.method public static d()V
    .locals 3

    .line 17
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 18
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 19
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onResume()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private static d(Landroid/content/Context;)V
    .locals 5

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->d(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/PluginLocalState;

    move-result-object v0

    .line 2
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 3
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->matchEntrance(Landroid/content/Context;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->canDoInit()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 4
    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->getInfo(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 6
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->getParams()Ljava/util/Map;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setParams(Ljava/util/Map;)V

    .line 7
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->getCfg_detail()Ljava/util/Map;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setCfgs(Ljava/util/Map;)V

    .line 9
    :cond_1
    sget-object v3, Lcom/bianfeng/ymnsdk/feature/c;->c:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 11
    :try_start_0
    invoke-virtual {v2, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v3

    .line 13
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 14
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {v2}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\u521d\u59cb\u5316\u51fa\u95ee\u9898\u4e86,\u7248\u672c\u4e3a"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    :goto_1
    const-string v3, "AfterDoInit"

    .line 16
    invoke-static {v3, v2}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/lang/String;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    goto :goto_0

    :cond_2
    return-void
.end method

.method public static e()V
    .locals 3

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 2
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 3
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onStart()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static f()V
    .locals 3

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 2
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 3
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onStop()V

    goto :goto_0

    :cond_1
    return-void
.end method
