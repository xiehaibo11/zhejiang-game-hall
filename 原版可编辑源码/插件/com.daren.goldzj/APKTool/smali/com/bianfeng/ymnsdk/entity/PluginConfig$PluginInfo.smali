.class public Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;
.super Ljava/lang/Object;
.source "PluginConfig.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/entity/PluginConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "PluginInfo"
.end annotation


# instance fields
.field private cfg_detail:Ljava/lang/Object;

.field public name:Ljava/lang/String;

.field private params:Ljava/lang/Object;

.field public status:I

.field final synthetic this$0:Lcom/bianfeng/ymnsdk/entity/PluginConfig;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/entity/PluginConfig;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->this$0:Lcom/bianfeng/ymnsdk/entity/PluginConfig;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getCfg_detail()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    .line 2
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->params:Ljava/lang/Object;

    instance-of v2, v1, Ljava/lang/String;

    if-eqz v2, :cond_0

    .line 3
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->cfg_detail:Ljava/lang/Object;

    check-cast v1, Ljava/lang/String;

    const-class v2, Ljava/util/Map;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;

    return-object v0

    .line 5
    :cond_0
    instance-of v1, v1, Lcom/google/gson/JsonElement;

    if-eqz v1, :cond_1

    .line 6
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->cfg_detail:Ljava/lang/Object;

    check-cast v1, Lcom/google/gson/JsonElement;

    const-class v2, Ljava/util/Map;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Lcom/google/gson/JsonElement;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;

    return-object v0

    .line 8
    :cond_1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    return-object v0
.end method

.method public getParams()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    .line 2
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;->params:Ljava/lang/Object;

    instance-of v2, v1, Ljava/lang/String;

    if-eqz v2, :cond_0

    .line 3
    check-cast v1, Ljava/lang/String;

    const-class v2, Ljava/util/Map;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;

    return-object v0

    .line 5
    :cond_0
    instance-of v2, v1, Lcom/google/gson/JsonElement;

    if-eqz v2, :cond_1

    .line 6
    check-cast v1, Lcom/google/gson/JsonElement;

    const-class v2, Ljava/util/Map;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Lcom/google/gson/JsonElement;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;

    return-object v0

    .line 8
    :cond_1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    return-object v0
.end method
