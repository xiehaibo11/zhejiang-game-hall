.class public Lcom/bianfeng/ymnsdk/feature/b;
.super Ljava/lang/Object;
.source "YmnPluginLoader.java"


# static fields
.field private static a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/google/gson/JsonElement;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 30
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/b;->a:Ljava/util/Map;

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Ljava/util/List;
    .locals 2
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "apkFile"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;",
            ">;"
        }
    .end annotation

    .line 63
    :try_start_0
    new-instance v0, Ldalvik/system/DexFile;

    invoke-direct {v0, p1}, Ldalvik/system/DexFile;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/b;->a(Ldalvik/system/DexFile;)Ljava/util/List;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 64
    :catch_0
    move-exception v0

    .line 65
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 66
    const/4 v1, 0x0

    return-object v1
.end method

.method private static a(Ldalvik/system/DexFile;)Ljava/util/List;
    .locals 9
    .param p0, "dexFile"    # Ldalvik/system/DexFile;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ldalvik/system/DexFile;",
            ")",
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;",
            ">;"
        }
    .end annotation

    .line 71
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 73
    .local v0, "startTime":J
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 74
    .local v2, "plugins":Ljava/util/List;, "Ljava/util/List<Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;>;"
    invoke-virtual {p0}, Ldalvik/system/DexFile;->entries()Ljava/util/Enumeration;

    move-result-object v3

    .line 75
    .local v3, "entries":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
    :goto_0
    invoke-interface {v3}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 76
    invoke-interface {v3}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 77
    .local v4, "clsName":Ljava/lang/String;
    invoke-static {v4}, Lcom/bianfeng/ymnsdk/feature/b;->a(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_0

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/feature/b;->b(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 78
    invoke-static {v4}, Lcom/bianfeng/ymnsdk/feature/b;->c(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v5

    .line 79
    .local v5, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    if-eqz v5, :cond_0

    invoke-interface {v2, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 81
    .end local v4    # "clsName":Ljava/lang/String;
    .end local v5    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 83
    :cond_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    .line 84
    .local v4, "endTime":J
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "load plugins(debug model) cost millis "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sub-long v7, v4, v0

    invoke-virtual {v6, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/bianfeng/ymnsdk/util/Logger;->dRich(Ljava/lang/String;)I

    .line 86
    return-object v2
.end method

.method private static a(Ljava/util/List;)Ljava/util/List;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;",
            ">;"
        }
    .end annotation

    .line 90
    .local p0, "clsNames":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 91
    .local v0, "startTime":J
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 92
    .local v2, "plugins":Ljava/util/List;, "Ljava/util/List<Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;>;"
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 93
    .local v4, "clsName":Ljava/lang/String;
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_0

    .line 94
    invoke-static {v4}, Lcom/bianfeng/ymnsdk/feature/b;->c(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v5

    .line 95
    .local v5, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    if-eqz v5, :cond_0

    invoke-interface {v2, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 97
    .end local v4    # "clsName":Ljava/lang/String;
    .end local v5    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 99
    :cond_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    .line 100
    .local v3, "endTime":J
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "load plugins(fast model) cost millis "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sub-long v6, v3, v0

    invoke-virtual {v5, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/util/Logger;->dRich(Ljava/lang/String;)I

    .line 102
    return-object v2
.end method

.method public static a(Landroid/content/Context;)V
    .locals 4
    .param p0, "context"    # Landroid/content/Context;

    .line 34
    const-string v0, "plugins.ymn"

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v1

    .line 35
    .local v1, "am":Landroid/content/res/AssetManager;
    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->assetFileExist(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 36
    new-instance v2, Lcom/google/gson/Gson;

    invoke-direct {v2}, Lcom/google/gson/Gson;-><init>()V

    .line 37
    .local v2, "gson":Lcom/google/gson/Gson;
    new-instance v3, Ljava/io/InputStreamReader;

    invoke-virtual {v1, v0}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v0

    invoke-direct {v3, v0}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    new-instance v0, Lcom/bianfeng/ymnsdk/feature/b$a;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/feature/b$a;-><init>()V

    .line 38
    invoke-virtual {v0}, Lcom/google/gson/reflect/TypeToken;->getType()Ljava/lang/reflect/Type;

    move-result-object v0

    .line 37
    invoke-virtual {v2, v3, v0}, Lcom/google/gson/Gson;->fromJson(Ljava/io/Reader;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/b;->a:Ljava/util/Map;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 43
    .end local v1    # "am":Landroid/content/res/AssetManager;
    .end local v2    # "gson":Lcom/google/gson/Gson;
    :cond_0
    goto :goto_0

    .line 41
    :catch_0
    move-exception v0

    .line 42
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "YmnPluginLoader \u7684init"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 44
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method private static a(Ljava/lang/Class;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "*>;)Z"
        }
    .end annotation

    .line 135
    .local p0, "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    const-class v0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-virtual {v0, p0}, Ljava/lang/Class;->isAssignableFrom(Ljava/lang/Class;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 136
    return v1

    .line 138
    :cond_0
    const-class v0, Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;

    invoke-virtual {p0, v0}, Ljava/lang/Class;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v0

    if-eqz v0, :cond_1

    const/4 v1, 0x1

    :cond_1
    return v1
.end method

.method private static a(Ljava/lang/String;)Z
    .locals 1
    .param p0, "clsName"    # Ljava/lang/String;

    .line 121
    const-string v0, "android.support"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "$"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 124
    :cond_0
    const/4 v0, 0x0

    return v0

    .line 122
    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public static b(Landroid/content/Context;)Ljava/util/List;
    .locals 3
    .param p0, "context"    # Landroid/content/Context;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")",
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;",
            ">;"
        }
    .end annotation

    .line 47
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/b;->a:Ljava/util/Map;

    const-string v1, "apiClass"

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 48
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    .line 49
    .local v0, "gson":Lcom/google/gson/Gson;
    sget-object v2, Lcom/bianfeng/ymnsdk/feature/b;->a:Ljava/util/Map;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/google/gson/JsonElement;

    const-class v2, Ljava/util/List;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Lcom/google/gson/JsonElement;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/List;

    .line 51
    .local v1, "clsNames":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    const-class v2, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 53
    const-class v2, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 54
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/b;->a(Ljava/util/List;)Ljava/util/List;

    move-result-object v2

    return-object v2

    .line 56
    .end local v0    # "gson":Lcom/google/gson/Gson;
    .end local v1    # "clsNames":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageCodePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/feature/b;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method private static b(Ljava/lang/String;)Z
    .locals 1
    .param p0, "clsName"    # Ljava/lang/String;

    .line 128
    const-string v0, "Interface"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "Executor"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 131
    :cond_0
    const/4 v0, 0x0

    return v0

    .line 129
    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method private static c(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .locals 6
    .param p0, "clsName"    # Ljava/lang/String;

    .line 107
    :try_start_0
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 109
    .local v0, "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/b;->a(Ljava/lang/Class;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 110
    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 111
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    const-string v2, "load plugin %s success"

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    const/4 v4, 0x0

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$b;->a(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v3, v4

    invoke-static {v2, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 112
    return-object v1

    .line 116
    .end local v0    # "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_0
    goto :goto_0

    .line 114
    :catch_0
    move-exception v0

    .line 115
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "YmnPluginLoader \u7684loadPlugin"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 117
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method
