.class public Lcom/ymnsdk/replugin/entity/PluginFailInfo;
.super Ljava/lang/Object;
.source "PluginFailInfo.java"


# static fields
.field static failInfo:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/entity/PluginFailInfo;
    .locals 1

    .line 12
    new-instance v0, Lcom/ymnsdk/replugin/entity/PluginFailInfo;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/PluginFailInfo;-><init>()V

    return-object v0
.end method


# virtual methods
.method public getPluginFailInfo(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 17
    sget-object v0, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->failInfo:Ljava/util/Map;

    const-string v1, ""

    if-nez v0, :cond_0

    .line 19
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    sput-object p1, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->failInfo:Ljava/util/Map;

    return-object v1

    .line 22
    :cond_0
    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 24
    sget-object v0, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->failInfo:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1

    :cond_1
    return-object v1
.end method

.method public savePluginFailInfo(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 32
    sget-object v0, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->failInfo:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 34
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->failInfo:Ljava/util/Map;

    .line 36
    :cond_0
    sget-object v0, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->failInfo:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
