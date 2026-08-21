.class public Lcom/bianfeng/ymnsdk/entity/PluginLocalState;
.super Lcom/bianfeng/ymnsdk/entity/LocalState;
.source "PluginLocalState.java"


# instance fields
.field private pluginConfig:Lcom/bianfeng/ymnsdk/entity/PluginConfig;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/entity/LocalState;-><init>()V

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/ymnsdk/entity/PluginConfig;)V
    .locals 0

    .line 2
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/entity/LocalState;-><init>()V

    .line 3
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->pluginConfig:Lcom/bianfeng/ymnsdk/entity/PluginConfig;

    return-void
.end method


# virtual methods
.method public getInfo(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;
    .locals 5

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->pluginConfig:Lcom/bianfeng/ymnsdk/entity/PluginConfig;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 2
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/PluginConfig;->getPluginInfos()Ljava/util/List;

    move-result-object v0

    if-nez v0, :cond_1

    return-object v1

    .line 4
    :cond_1
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;

    .line 5
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v3

    iget-object v4, v2, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->name:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    return-object v2

    .line 8
    :cond_3
    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v3

    iget-object v4, v2, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->name:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    return-object v2

    :cond_4
    return-object v1
.end method

.method public getPluginConfig()Lcom/bianfeng/ymnsdk/entity/PluginConfig;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->pluginConfig:Lcom/bianfeng/ymnsdk/entity/PluginConfig;

    return-object v0
.end method

.method public getState(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)I
    .locals 0

    .line 1
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->getInfo(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;

    move-result-object p1

    if-nez p1, :cond_0

    const/4 p1, -0x2

    return p1

    .line 3
    :cond_0
    iget p1, p1, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->status:I

    return p1
.end method

.method public setPluginConfig(Lcom/bianfeng/ymnsdk/entity/PluginConfig;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->pluginConfig:Lcom/bianfeng/ymnsdk/entity/PluginConfig;

    return-void
.end method
