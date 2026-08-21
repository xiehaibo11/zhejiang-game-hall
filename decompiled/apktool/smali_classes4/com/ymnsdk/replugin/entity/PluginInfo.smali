.class public Lcom/ymnsdk/replugin/entity/PluginInfo;
.super Ljava/lang/Object;
.source "PluginInfo.java"


# instance fields
.field private description:Ljava/lang/String;

.field private entrance_activity:Ljava/lang/String;

.field private file_md5:Ljava/lang/String;

.field private file_size:J

.field private md5List:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private package_name:Ljava/lang/String;

.field private patch:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ymnsdk/replugin/entity/Patch;",
            ">;"
        }
    .end annotation
.end field

.field private plugin_id:Ljava/lang/String;

.field private plugin_version:Ljava/lang/String;

.field private release_path:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 26
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->md5List:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public getDescription()Ljava/lang/String;
    .locals 1

    .line 79
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->description:Ljava/lang/String;

    return-object v0
.end method

.method public getEntrance_activity()Ljava/lang/String;
    .locals 1

    .line 55
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->entrance_activity:Ljava/lang/String;

    return-object v0
.end method

.method public getFile_md5()Ljava/lang/String;
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->file_md5:Ljava/lang/String;

    return-object v0
.end method

.method public getFile_size()J
    .locals 2

    .line 63
    iget-wide v0, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->file_size:J

    return-wide v0
.end method

.method public getMd5List()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 116
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->md5List:Ljava/util/List;

    return-object v0
.end method

.method public getPackage_name()Ljava/lang/String;
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->package_name:Ljava/lang/String;

    return-object v0
.end method

.method public getPatch(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Patch;
    .locals 2

    .line 104
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->patch:Ljava/util/List;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    const/4 v0, 0x0

    .line 105
    :goto_0
    iget-object v1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->patch:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 107
    iget-object v1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->patch:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/Patch;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/Patch;->getFrom_version()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object p1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->patch:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ymnsdk/replugin/entity/Patch;

    return-object p1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 111
    :cond_1
    new-instance p1, Lcom/ymnsdk/replugin/entity/Patch;

    invoke-direct {p1}, Lcom/ymnsdk/replugin/entity/Patch;-><init>()V

    return-object p1
.end method

.method public getPatch()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ymnsdk/replugin/entity/Patch;",
            ">;"
        }
    .end annotation

    .line 95
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->patch:Ljava/util/List;

    return-object v0
.end method

.method public getPlugin_id()Ljava/lang/String;
    .locals 1

    .line 31
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->plugin_id:Ljava/lang/String;

    return-object v0
.end method

.method public getPlugin_version()Ljava/lang/String;
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->plugin_version:Ljava/lang/String;

    return-object v0
.end method

.method public getRelease_path()Ljava/lang/String;
    .locals 1

    .line 87
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->release_path:Ljava/lang/String;

    return-object v0
.end method

.method public setDescription(Ljava/lang/String;)V
    .locals 0

    .line 83
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->description:Ljava/lang/String;

    return-void
.end method

.method public setEntrance_activity(Ljava/lang/String;)V
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->entrance_activity:Ljava/lang/String;

    return-void
.end method

.method public setFile_md5(Ljava/lang/String;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->file_md5:Ljava/lang/String;

    return-void
.end method

.method public setFile_size(J)V
    .locals 0

    .line 67
    iput-wide p1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->file_size:J

    return-void
.end method

.method public setMd5List(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 120
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->md5List:Ljava/util/List;

    return-void
.end method

.method public setPackage_name(Ljava/lang/String;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->package_name:Ljava/lang/String;

    return-void
.end method

.method public setPatch(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ymnsdk/replugin/entity/Patch;",
            ">;)V"
        }
    .end annotation

    .line 99
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->patch:Ljava/util/List;

    return-void
.end method

.method public setPlugin_id(Ljava/lang/String;)V
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->plugin_id:Ljava/lang/String;

    return-void
.end method

.method public setPlugin_version(Ljava/lang/String;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->plugin_version:Ljava/lang/String;

    return-void
.end method

.method public setRelease_path(Ljava/lang/String;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/PluginInfo;->release_path:Ljava/lang/String;

    return-void
.end method
