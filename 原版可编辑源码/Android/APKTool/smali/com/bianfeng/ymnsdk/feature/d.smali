.class public Lcom/bianfeng/ymnsdk/feature/d;
.super Ljava/lang/Object;
.source "YmnPreferences.java"


# static fields
.field private static a:Lcom/google/gson/Gson;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 34
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/d;->a:Lcom/google/gson/Gson;

    return-void
.end method

.method public static a(Lcom/bianfeng/ymnsdk/action/ActionSupport;)Lcom/bianfeng/ymnsdk/action/ActionSupport;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Lcom/bianfeng/ymnsdk/action/ActionSupport;",
            ">(TT;)TT;"
        }
    .end annotation

    .line 132
    .local p0, "actionSupport":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "TT;"
    const/4 v0, 0x1

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnStrategy;->withStrategy(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 133
    new-instance v0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->setAttachment(Lcom/bianfeng/ymnsdk/action/ActionAttachment;)V

    .line 135
    :cond_0
    return-object p0
.end method

.method public static a(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;)Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;",
            ">(TT;)TT;"
        }
    .end annotation

    .line 152
    .local p0, "actionSupport":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "TT;"
    const/4 v0, 0x1

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnStrategy;->withStrategy(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 153
    new-instance v0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->setAttachment(Lcom/bianfeng/ymnsdk/action/ActionAttachment;)V

    .line 155
    :cond_0
    return-object p0
.end method

.method public static a(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;)Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;",
            ">(TT;)TT;"
        }
    .end annotation

    .line 158
    .local p0, "actionSupport":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "TT;"
    const/4 v0, 0x1

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnStrategy;->withStrategy(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 159
    new-instance v0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->setAttachment(Lcom/bianfeng/ymnsdk/action/ActionAttachment;)V

    .line 161
    :cond_0
    return-object p0
.end method

.method public static a(Lcom/bianfeng/ymnsdk/feature/f;)Lcom/bianfeng/ymnsdk/feature/f;
    .locals 1
    .param p0, "warning"    # Lcom/bianfeng/ymnsdk/feature/f;

    .line 139
    const/4 v0, 0x2

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnStrategy;->withStrategy(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 140
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/d$b;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/feature/d$b;-><init>()V

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/f;->a(Lcom/bianfeng/ymnsdk/feature/f$a;)Lcom/bianfeng/ymnsdk/feature/f;

    .line 148
    :cond_0
    return-object p0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;
    .locals 2
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "cfgKey"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Ljava/lang/Class<",
            "TT;>;)TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 118
    .local p2, "cfgClass":Ljava/lang/Class;, "Ljava/lang/Class<TT;>;"
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->readPreferences(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 119
    .local v0, "config":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 120
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/d;->a:Lcom/google/gson/Gson;

    invoke-virtual {v1, v0, p2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    return-object v1

    .line 122
    :cond_0
    invoke-virtual {p2}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v1

    return-object v1
.end method

.method public static a(Landroid/content/Context;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 113
    const-string v0, "ymn_url_local_states"

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->removePreferences(Landroid/content/Context;Ljava/lang/String;)V

    .line 114
    const-string v0, "ymn_url_remote_configs"

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->removePreferences(Landroid/content/Context;Ljava/lang/String;)V

    .line 115
    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V
    .locals 3
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "config"    # Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    .line 67
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->f(Landroid/content/Context;)Ljava/util/Map;

    move-result-object v0

    .line 68
    .local v0, "remoteConfigs":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Lcom/bianfeng/ymnsdk/entity/UrlConfig;>;"
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getGid()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 69
    const-string v1, "ymn_url_remote_configs"

    invoke-static {p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 71
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->e(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    move-result-object v1

    .line 72
    .local v1, "localState":Lcom/bianfeng/ymnsdk/entity/UrlLocalState;
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->b(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    move-result-object v2

    .line 73
    .local v2, "maxLevelConfig":Lcom/bianfeng/ymnsdk/entity/UrlConfig;
    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->updateConfig(Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V

    .line 74
    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 77
    .end local v0    # "remoteConfigs":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Lcom/bianfeng/ymnsdk/entity/UrlConfig;>;"
    .end local v1    # "localState":Lcom/bianfeng/ymnsdk/entity/UrlLocalState;
    .end local v2    # "maxLevelConfig":Lcom/bianfeng/ymnsdk/entity/UrlConfig;
    goto :goto_0

    .line 75
    :catch_0
    move-exception v0

    .line 76
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 78
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "localState"    # Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    .line 109
    const-string v0, "ymn_url_local_states"

    invoke-static {p0, v0, p1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 110
    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "cfgKey"    # Ljava/lang/String;
    .param p2, "localState"    # Ljava/lang/Object;

    .line 126
    if-eqz p2, :cond_0

    .line 127
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/d;->a:Lcom/google/gson/Gson;

    invoke-virtual {v0, p2}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, p1, v0}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->savePreferences(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 129
    :cond_0
    return-void
.end method

.method private static b(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlConfig;
    .locals 6
    .param p0, "context"    # Landroid/content/Context;

    .line 96
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->f(Landroid/content/Context;)Ljava/util/Map;

    move-result-object v0

    .line 97
    .local v0, "remoteConfigs":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Lcom/bianfeng/ymnsdk/entity/UrlConfig;>;"
    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 98
    .local v1, "iterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Lcom/bianfeng/ymnsdk/entity/UrlConfig;>;"
    const/4 v2, 0x0

    .line 99
    .local v2, "maxLevel":Lcom/bianfeng/ymnsdk/entity/UrlConfig;
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    .line 100
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    .line 101
    .local v3, "item":Lcom/bianfeng/ymnsdk/entity/UrlConfig;
    if-eqz v2, :cond_0

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getLevel()I

    move-result v4

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getLevel()I

    move-result v5

    if-le v4, v5, :cond_1

    .line 102
    :cond_0
    move-object v2, v3

    .line 104
    .end local v3    # "item":Lcom/bianfeng/ymnsdk/entity/UrlConfig;
    :cond_1
    goto :goto_0

    .line 105
    :cond_2
    return-object v2
.end method

.method public static c(Landroid/content/Context;)V
    .locals 0
    .param p0, "context"    # Landroid/content/Context;

    .line 38
    nop

    .line 39
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/Logger;->updateState()V

    .line 40
    return-void
.end method

.method public static d(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/PluginLocalState;
    .locals 2
    .param p0, "context"    # Landroid/content/Context;

    .line 44
    :try_start_0
    const-string v0, "ymn_plugin_local_states"

    const-class v1, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;

    invoke-static {p0, v0, v1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 45
    :catch_0
    move-exception v0

    .line 46
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 47
    new-instance v1, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;-><init>()V

    return-object v1
.end method

.method public static e(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlLocalState;
    .locals 4
    .param p0, "context"    # Landroid/content/Context;

    .line 81
    const/4 v0, 0x0

    .line 82
    .local v0, "localState":Lcom/bianfeng/ymnsdk/entity/UrlLocalState;
    const-string v1, "ymn_url_local_states"

    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->readPreferences(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 83
    .local v1, "config":Ljava/lang/String;
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 84
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->b(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    move-result-object v2

    .line 85
    .local v2, "urlConfig":Lcom/bianfeng/ymnsdk/entity/UrlConfig;
    if-eqz v2, :cond_0

    .line 86
    new-instance v3, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-direct {v3, v2}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;-><init>(Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V

    move-object v0, v3

    .line 87
    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V

    .line 89
    .end local v2    # "urlConfig":Lcom/bianfeng/ymnsdk/entity/UrlConfig;
    :cond_0
    goto :goto_0

    .line 90
    :cond_1
    sget-object v2, Lcom/bianfeng/ymnsdk/feature/d;->a:Lcom/google/gson/Gson;

    const-class v3, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v2, v1, v3}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    move-object v0, v2

    check-cast v0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    .line 92
    :goto_0
    return-object v0
.end method

.method public static f(Landroid/content/Context;)Ljava/util/Map;
    .locals 4
    .param p0, "context"    # Landroid/content/Context;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/bianfeng/ymnsdk/entity/UrlConfig;",
            ">;"
        }
    .end annotation

    .line 56
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 57
    .local v0, "remoteConfigs":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Lcom/bianfeng/ymnsdk/entity/UrlConfig;>;"
    const-string v1, "ymn_url_remote_configs"

    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->readPreferences(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 58
    .local v1, "configs":Ljava/lang/String;
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 59
    sget-object v2, Lcom/bianfeng/ymnsdk/feature/d;->a:Lcom/google/gson/Gson;

    new-instance v3, Lcom/bianfeng/ymnsdk/feature/d$a;

    invoke-direct {v3}, Lcom/bianfeng/ymnsdk/feature/d$a;-><init>()V

    .line 60
    invoke-virtual {v3}, Lcom/google/gson/reflect/TypeToken;->getType()Ljava/lang/reflect/Type;

    move-result-object v3

    .line 59
    invoke-virtual {v2, v1, v3}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v2

    move-object v0, v2

    check-cast v0, Ljava/util/Map;

    .line 62
    :cond_0
    return-object v0
.end method
