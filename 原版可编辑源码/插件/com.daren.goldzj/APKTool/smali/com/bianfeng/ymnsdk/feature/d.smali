.class public Lcom/bianfeng/ymnsdk/feature/d;
.super Ljava/lang/Object;
.source "YmnPreferences.java"


# static fields
.field private static a:Lcom/google/gson/Gson;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
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

    const/4 v0, 0x1

    .line 20
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnStrategy;->withStrategy(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 21
    new-instance v0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->setAttachment(Lcom/bianfeng/ymnsdk/action/ActionAttachment;)V

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

    const/4 v0, 0x1

    .line 24
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnStrategy;->withStrategy(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 25
    new-instance v0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->setAttachment(Lcom/bianfeng/ymnsdk/action/ActionAttachment;)V

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

    const/4 v0, 0x1

    .line 26
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnStrategy;->withStrategy(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 27
    new-instance v0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->setAttachment(Lcom/bianfeng/ymnsdk/action/ActionAttachment;)V

    :cond_0
    return-object p0
.end method

.method public static a(Lcom/bianfeng/ymnsdk/feature/f;)Lcom/bianfeng/ymnsdk/feature/f;
    .locals 1

    const/4 v0, 0x2

    .line 22
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnStrategy;->withStrategy(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 23
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/d$b;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/feature/d$b;-><init>()V

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/f;->a(Lcom/bianfeng/ymnsdk/feature/f$a;)Lcom/bianfeng/ymnsdk/feature/f;

    :cond_0
    return-object p0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;
    .locals 0
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

    .line 14
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->readPreferences(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 15
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 16
    sget-object p1, Lcom/bianfeng/ymnsdk/feature/d;->a:Lcom/google/gson/Gson;

    invoke-virtual {p1, p0, p2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    return-object p0

    .line 18
    :cond_0
    invoke-virtual {p2}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object p0

    return-object p0
.end method

.method public static a(Landroid/content/Context;)V
    .locals 1

    const-string v0, "ymn_url_local_states"

    .line 12
    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->removePreferences(Landroid/content/Context;Ljava/lang/String;)V

    const-string v0, "ymn_url_remote_configs"

    .line 13
    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->removePreferences(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V
    .locals 2

    .line 1
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->f(Landroid/content/Context;)Ljava/util/Map;

    move-result-object v0

    .line 2
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getGid()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "ymn_url_remote_configs"

    .line 3
    invoke-static {p0, p1, v0}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 5
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->e(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    move-result-object p1

    .line 6
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->b(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    move-result-object v0

    .line 7
    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->updateConfig(Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V

    .line 8
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 10
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V
    .locals 1

    const-string v0, "ymn_url_local_states"

    .line 11
    invoke-static {p0, v0, p1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    .locals 1

    if-eqz p2, :cond_0

    .line 19
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/d;->a:Lcom/google/gson/Gson;

    invoke-virtual {v0, p2}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p1, p2}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->savePreferences(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private static b(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlConfig;
    .locals 4

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->f(Landroid/content/Context;)Ljava/util/Map;

    move-result-object p0

    .line 2
    invoke-interface {p0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p0

    const/4 v0, 0x0

    .line 4
    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 5
    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    if-eqz v0, :cond_1

    .line 6
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getLevel()I

    move-result v2

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getLevel()I

    move-result v3

    if-le v2, v3, :cond_0

    :cond_1
    move-object v0, v1

    goto :goto_0

    :cond_2
    return-object v0
.end method

.method public static c(Landroid/content/Context;)V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/Logger;->updateState()V

    return-void
.end method

.method public static d(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/PluginLocalState;
    .locals 2

    const-string v0, "ymn_plugin_local_states"

    .line 1
    :try_start_0
    const-class v1, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;

    invoke-static {p0, v0, v1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 3
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 4
    new-instance p0, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;-><init>()V

    return-object p0
.end method

.method public static e(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlLocalState;
    .locals 2

    const-string v0, "ymn_url_local_states"

    .line 1
    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->readPreferences(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 3
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->b(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 5
    new-instance v1, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;-><init>(Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V

    .line 6
    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    goto :goto_0

    .line 9
    :cond_1
    sget-object p0, Lcom/bianfeng/ymnsdk/feature/d;->a:Lcom/google/gson/Gson;

    const-class v1, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {p0, v0, v1}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    move-object v1, p0

    check-cast v1, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    :goto_0
    return-object v1
.end method

.method public static f(Landroid/content/Context;)Ljava/util/Map;
    .locals 2
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

    .line 1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "ymn_url_remote_configs"

    .line 2
    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->readPreferences(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 3
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 4
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/d;->a:Lcom/google/gson/Gson;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/d$a;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/feature/d$a;-><init>()V

    .line 5
    invoke-virtual {v1}, Lcom/google/gson/reflect/TypeToken;->getType()Ljava/lang/reflect/Type;

    move-result-object v1

    .line 6
    invoke-virtual {v0, p0, v1}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object p0

    move-object v0, p0

    check-cast v0, Ljava/util/Map;

    :cond_0
    return-object v0
.end method
