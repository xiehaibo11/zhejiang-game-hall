.class public Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;
.super Ljava/lang/Object;
.source "LocalGetPluginsEntity.java"


# instance fields
.field pluginInfoMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getPluginInfoMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 11
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;->pluginInfoMap:Ljava/util/Map;

    return-object v0
.end method

.method public setPluginInfoMap(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;)V"
        }
    .end annotation

    .line 15
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;->pluginInfoMap:Ljava/util/Map;

    return-void
.end method
