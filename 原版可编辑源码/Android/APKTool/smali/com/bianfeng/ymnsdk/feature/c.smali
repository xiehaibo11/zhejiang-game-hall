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

    .line 28
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    .line 29
    const/4 v0, 0x0

    sput-boolean v0, Lcom/bianfeng/ymnsdk/feature/c;->b:Z

    return-void
.end method

.method public static a()V
    .locals 3

    .line 275
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 276
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 277
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onDestroy()V

    .line 279
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 282
    :cond_1
    return-void
.end method

.method public static a(IILandroid/content/Intent;)V
    .locals 3
    .param p0, "requestCode"    # I
    .param p1, "resultCode"    # I
    .param p2, "data"    # Landroid/content/Intent;

    .line 293
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 294
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 295
    invoke-virtual {v1, p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onActivityResult(IILandroid/content/Intent;)V

    .line 297
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 298
    :cond_1
    return-void
.end method

.method public static a(I[Ljava/lang/String;[I)V
    .locals 3
    .param p0, "requestCode"    # I
    .param p1, "permissions"    # [Ljava/lang/String;
    .param p2, "grantResults"    # [I

    .line 251
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 252
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 253
    invoke-virtual {v1, p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    .line 255
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 256
    :cond_1
    return-void
.end method

.method public static a(Landroid/app/Activity;)V
    .locals 5
    .param p0, "activity"    # Landroid/app/Activity;

    .line 207
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 208
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 210
    :try_start_0
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onCreate(Landroid/app/Activity;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 213
    goto :goto_1

    .line 211
    :catch_0
    move-exception v2

    .line 212
    .local v2, "e":Ljava/lang/Exception;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onCreate \u65b9\u6cd5\u51fa\u5f02\u5e38 \u63d2\u4ef6\u540d\uff1a"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "-- \u63d2\u4ef6\u7248\u672c\uff1a"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\n\u539f\u56e0\u662f--"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 216
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .end local v2    # "e":Ljava/lang/Exception;
    :cond_0
    :goto_1
    goto :goto_0

    .line 217
    :cond_1
    return-void
.end method

.method private static a(Landroid/content/Context;)V
    .locals 4
    .param p0, "context"    # Landroid/content/Context;

    .line 76
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->d(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/PluginLocalState;

    move-result-object v0

    .line 77
    .local v0, "local":Lcom/bianfeng/ymnsdk/entity/PluginLocalState;
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 78
    .local v2, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isCheckedState()Z

    move-result v3

    if-nez v3, :cond_0

    .line 79
    invoke-virtual {v2, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->checkState(Lcom/bianfeng/ymnsdk/entity/PluginLocalState;)V

    .line 80
    const-string v3, "AfterCheckState"

    invoke-static {v3, v2}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/lang/String;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    .line 82
    .end local v2    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 83
    :cond_1
    return-void
.end method

.method public static a(Landroid/content/Intent;)V
    .locals 3
    .param p0, "intent"    # Landroid/content/Intent;

    .line 285
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 286
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 287
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onNewIntent(Landroid/content/Intent;)V

    .line 289
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 290
    :cond_1
    return-void
.end method

.method public static a(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V
    .locals 0
    .param p0, "callback"    # Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    .line 33
    sput-object p0, Lcom/bianfeng/ymnsdk/feature/c;->c:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    .line 34
    return-void
.end method

.method public static a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 3
    .param p0, "plugin"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 166
    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    const-string v1, "%s\u63d2\u4ef6\u672a\u5f00\u542f\uff0c\u8bf7\u68c0\u67e5\u7f51\u7edc\u53ca\u8fdc\u7a0b\u914d\u7f6e"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 167
    .local v0, "message":Ljava/lang/String;
    new-instance v1, Lcom/bianfeng/ymnsdk/feature/f;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/feature/f;-><init>(Ljava/lang/String;)V

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/feature/f;)Lcom/bianfeng/ymnsdk/feature/f;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/f;->a()Lcom/bianfeng/ymnsdk/feature/f;

    .line 168
    return-void
.end method

.method private static a(Ljava/lang/String;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 2
    .param p0, "step"    # Ljava/lang/String;
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 93
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->dRich(Ljava/lang/String;)I

    .line 94
    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/util/LinkedHashMap;)V
    .locals 3
    .param p0, "functionName"    # Ljava/lang/String;
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

    .line 113
    .local p1, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string v1, "callFunction %s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 114
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 115
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 116
    invoke-virtual {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    goto :goto_1

    .line 117
    :cond_0
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 118
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    .line 120
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_1
    :goto_1
    goto :goto_0

    .line 121
    :cond_2
    return-void
.end method

.method public static varargs a(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 3
    .param p0, "functionName"    # Ljava/lang/String;
    .param p1, "args"    # [Ljava/lang/String;

    .line 137
    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string v1, "callFunction %s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 138
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 139
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 140
    invoke-virtual {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_1

    .line 141
    :cond_0
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 142
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    .line 144
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_1
    :goto_1
    goto :goto_0

    .line 145
    :cond_2
    return-void
.end method

.method private static a(Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;",
            ">;)V"
        }
    .end annotation

    .line 68
    .local p0, "items":Ljava/util/List;, "Ljava/util/List<Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;>;"
    if-eqz p0, :cond_0

    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 69
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 70
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    sget-object v2, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$b;->a(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 71
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    goto :goto_0

    .line 73
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

    .line 318
    .local p0, "data":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 319
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 320
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onPay(Ljava/util/Map;)V

    .line 322
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 323
    :cond_1
    return-void
.end method

.method public static a(Ljava/util/Map;Ljava/lang/String;)V
    .locals 4
    .param p1, "key"    # Ljava/lang/String;
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

    .line 309
    .local p0, "data":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 310
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 311
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onLogin=="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 312
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onLogin(Ljava/util/Map;)V

    .line 314
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 315
    :cond_1
    return-void
.end method

.method public static a(Z)V
    .locals 3
    .param p0, "mode"    # Z

    .line 171
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 172
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 173
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setDebugMode(Z)V

    .line 175
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 176
    :cond_1
    return-void
.end method

.method public static a(ZLandroid/app/Activity;)V
    .locals 3
    .param p0, "hasFocus"    # Z
    .param p1, "activity"    # Landroid/app/Activity;

    .line 259
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 260
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 261
    invoke-virtual {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onWindowFocusChanged(ZLandroid/app/Activity;)V

    .line 263
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 264
    :cond_1
    return-void
.end method

.method public static a(Ljava/lang/String;)Z
    .locals 5
    .param p0, "functionName"    # Ljava/lang/String;

    .line 97
    const/4 v0, 0x1

    new-array v1, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p0, v1, v2

    const-string v3, "isSupportFunction %s"

    invoke-static {v3, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 98
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 99
    .local v3, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v3, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 100
    new-array v1, v0, [Ljava/lang/Object;

    invoke-interface {v3}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v1, v2

    const-string v4, "\u63d2\u4ef6 %s"

    invoke-static {v4, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 101
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 102
    return v0

    .line 104
    :cond_0
    invoke-static {v3}, Lcom/bianfeng/ymnsdk/feature/c;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    .line 105
    return v2

    .line 108
    .end local v3    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_1
    goto :goto_0

    .line 109
    :cond_2
    return v2
.end method

.method public static b(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;
    .locals 3
    .param p0, "functionName"    # Ljava/lang/String;
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

    .line 124
    .local p1, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string v1, "callFunctionWithResult %s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 125
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 126
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 127
    invoke-virtual {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunctionWithResult(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;

    move-result-object v2

    .line 128
    .local v2, "result":Ljava/lang/String;
    if-eqz v2, :cond_0

    return-object v2

    .end local v2    # "result":Ljava/lang/String;
    :cond_0
    goto :goto_1

    .line 129
    :cond_1
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 130
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    goto :goto_2

    .line 129
    :cond_2
    :goto_1
    nop

    .line 132
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :goto_2
    goto :goto_0

    .line 133
    :cond_3
    const/4 v0, 0x0

    return-object v0
.end method

.method public static varargs b(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p0, "functionName"    # Ljava/lang/String;
    .param p1, "args"    # [Ljava/lang/String;

    .line 148
    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string v1, "callFunctionWithResult %s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 149
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 150
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 152
    const-string v2, "plugin_init"

    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 153
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->inited()Ljava/lang/String;

    move-result-object v2

    .line 154
    .local v2, "result":Ljava/lang/String;
    if-eqz v2, :cond_0

    return-object v2

    .line 156
    .end local v2    # "result":Ljava/lang/String;
    :cond_0
    invoke-virtual {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 157
    .restart local v2    # "result":Ljava/lang/String;
    if-eqz v2, :cond_1

    return-object v2

    .end local v2    # "result":Ljava/lang/String;
    :cond_1
    goto :goto_1

    .line 158
    :cond_2
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 159
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    goto :goto_2

    .line 158
    :cond_3
    :goto_1
    nop

    .line 161
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :goto_2
    goto :goto_0

    .line 162
    :cond_4
    const/4 v0, 0x0

    return-object v0
.end method

.method public static b()V
    .locals 3

    .line 236
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 237
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 238
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onPause()V

    .line 240
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 241
    :cond_1
    return-void
.end method

.method public static b(Landroid/content/Context;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 38
    sget-boolean v0, Lcom/bianfeng/ymnsdk/feature/c;->b:Z

    if-nez v0, :cond_0

    .line 39
    const/4 v0, 0x1

    sput-boolean v0, Lcom/bianfeng/ymnsdk/feature/c;->b:Z

    .line 40
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/b;->a(Landroid/content/Context;)V

    .line 41
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->c(Landroid/content/Context;)V

    .line 46
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/feature/a;->a(Landroid/content/Context;Ljava/util/HashMap;)V

    .line 47
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Landroid/content/Context;)V

    .line 48
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->d(Landroid/content/Context;)V

    .line 51
    return-void
.end method

.method public static c()V
    .locals 3

    .line 228
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 229
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 230
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onRestart()V

    .line 232
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 233
    :cond_1
    return-void
.end method

.method private static c(Landroid/content/Context;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 54
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/b;->b(Landroid/content/Context;)Ljava/util/List;

    move-result-object v0

    .line 56
    .local v0, "list":Ljava/util/List;, "Ljava/util/List<Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;>;"
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/util/List;)V

    .line 57
    return-void
.end method

.method public static d()V
    .locals 3

    .line 244
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 245
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 246
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onResume()V

    .line 248
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 249
    :cond_1
    return-void
.end method

.method private static d(Landroid/content/Context;)V
    .locals 7
    .param p0, "context"    # Landroid/content/Context;

    .line 179
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->d(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/PluginLocalState;

    move-result-object v0

    .line 180
    .local v0, "localState":Lcom/bianfeng/ymnsdk/entity/PluginLocalState;
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 181
    .local v2, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-virtual {v2, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->matchEntrance(Landroid/content/Context;)Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->canDoInit()Z

    move-result v3

    if-eqz v3, :cond_3

    .line 182
    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->getInfo(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;

    move-result-object v3

    .line 183
    .local v3, "localInfo":Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;
    if-eqz v3, :cond_0

    .line 184
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->getParams()Ljava/util/Map;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setParams(Ljava/util/Map;)V

    .line 185
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->getCfg_detail()Ljava/util/Map;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setCfgs(Ljava/util/Map;)V

    .line 187
    :cond_0
    sget-object v4, Lcom/bianfeng/ymnsdk/feature/c;->c:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-virtual {v2, v4}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 189
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->isInitAlone()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 190
    instance-of v4, p0, Landroid/app/Activity;

    if-nez v4, :cond_2

    .line 192
    invoke-virtual {v2, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    goto :goto_1

    .line 195
    :cond_1
    invoke-virtual {v2, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 200
    :cond_2
    :goto_1
    goto :goto_2

    .line 197
    :catch_0
    move-exception v4

    .line 198
    .local v4, "e":Ljava/lang/Exception;
    invoke-virtual {v4}, Ljava/lang/Exception;->printStackTrace()V

    .line 199
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {v2}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "\u521d\u59cb\u5316\u51fa\u95ee\u9898\u4e86,\u7248\u672c\u4e3a"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "\n\u539f\u56e0\u662f--"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 201
    .end local v4    # "e":Ljava/lang/Exception;
    :goto_2
    const-string v4, "AfterDoInit"

    invoke-static {v4, v2}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/lang/String;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    .line 203
    .end local v2    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .end local v3    # "localInfo":Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;
    :cond_3
    goto :goto_0

    .line 204
    :cond_4
    return-void
.end method

.method public static e()V
    .locals 3

    .line 220
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 221
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 222
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onStart()V

    .line 224
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 225
    :cond_1
    return-void
.end method

.method public static f()V
    .locals 3

    .line 267
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/c;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 268
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isWorking()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 269
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onStop()V

    .line 271
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 272
    :cond_1
    return-void
.end method
