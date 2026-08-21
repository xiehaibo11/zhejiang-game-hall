.class public Lcom/bianfeng/ymnsdk/entity/PluginLocalState;
.super Lcom/bianfeng/ymnsdk/entity/LocalState;
.source "PluginLocalState.java"


# instance fields
.field private pluginConfig:Lcom/bianfeng/ymnsdk/entity/PluginConfig;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/entity/LocalState;-><init>()V

    .line 24
    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/ymnsdk/entity/PluginConfig;)V
    .locals 0
    .param p1, "pluginConfig"    # Lcom/bianfeng/ymnsdk/entity/PluginConfig;

    .line 26
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/entity/LocalState;-><init>()V

    .line 27
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->pluginConfig:Lcom/bianfeng/ymnsdk/entity/PluginConfig;

    .line 28
    return-void
.end method


# virtual methods
.method public getInfo(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;
    .locals 6
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    .line 37
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->pluginConfig:Lcom/bianfeng/ymnsdk/entity/PluginConfig;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 38
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/PluginConfig;->getPluginInfos()Ljava/util/List;

    move-result-object v0

    .line 39
    .local v0, "infos":Ljava/util/List;, "Ljava/util/List<Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;>;"
    if-nez v0, :cond_1

    return-object v1

    .line 40
    :cond_1
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;

    .line 41
    .local v3, "info":Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v4

    iget-object v5, v3, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->name:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 42
    return-object v3

    .line 44
    :cond_2
    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v4

    iget-object v5, v3, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->name:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 45
    return-object v3

    .line 47
    .end local v3    # "info":Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;
    :cond_3
    goto :goto_0

    .line 48
    :cond_4
    return-object v1
.end method

.method public getPluginConfig()Lcom/bianfeng/ymnsdk/entity/PluginConfig;
    .locals 1

    .line 15
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->pluginConfig:Lcom/bianfeng/ymnsdk/entity/PluginConfig;

    return-object v0
.end method

.method public getState(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)I
    .locals 2
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    .line 31
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->getInfo(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;

    move-result-object v0

    .line 32
    .local v0, "info":Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;
    if-nez v0, :cond_0

    const/4 v1, -0x2

    return v1

    .line 33
    :cond_0
    iget v1, v0, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->status:I

    return v1
.end method

.method public setPluginConfig(Lcom/bianfeng/ymnsdk/entity/PluginConfig;)V
    .locals 0
    .param p1, "pluginConfig"    # Lcom/bianfeng/ymnsdk/entity/PluginConfig;

    .line 19
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->pluginConfig:Lcom/bianfeng/ymnsdk/entity/PluginConfig;

    .line 20
    return-void
.end method
