.class public Lcom/bianfeng/ymnsdk/entity/PluginConfig;
.super Ljava/lang/Object;
.source "PluginConfig.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;
    }
.end annotation


# instance fields
.field private cfgs:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getPluginInfos()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/entity/PluginConfig$PluginInfo;",
            ">;"
        }
    .end annotation

    .line 15
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/PluginConfig;->cfgs:Ljava/util/List;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 48
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    .line 49
    .local v0, "gson":Lcom/google/gson/Gson;
    invoke-virtual {v0, p0}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method
