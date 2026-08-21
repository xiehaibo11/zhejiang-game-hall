.class public Lcom/ymnsdk/replugin/entity/AppPluginInfo;
.super Ljava/lang/Object;
.source "AppPluginInfo.java"


# instance fields
.field patch_download_in_nowifi:I

.field plugins:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ymnsdk/replugin/entity/Plugin;",
            ">;"
        }
    .end annotation
.end field

.field post_statistics_enabled:I

.field update_server_address:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
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
.method public getPatch_download_in_nowifi()I
    .locals 1

    .line 52
    iget v0, p0, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->patch_download_in_nowifi:I

    return v0
.end method

.method public getPlugin(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;
    .locals 2

    .line 18
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->plugins:Ljava/util/List;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    const/4 v0, 0x0

    .line 19
    :goto_0
    iget-object v1, p0, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->plugins:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 21
    iget-object v1, p0, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->plugins:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object p1, p0, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->plugins:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ymnsdk/replugin/entity/Plugin;

    return-object p1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 25
    :cond_1
    new-instance p1, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-direct {p1}, Lcom/ymnsdk/replugin/entity/Plugin;-><init>()V

    return-object p1
.end method

.method public getPlugins()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ymnsdk/replugin/entity/Plugin;",
            ">;"
        }
    .end annotation

    .line 36
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->plugins:Ljava/util/List;

    return-object v0
.end method

.method public getPost_statistics_enabled()I
    .locals 1

    .line 44
    iget v0, p0, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->post_statistics_enabled:I

    return v0
.end method

.method public getUpdate_server_address()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 28
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->update_server_address:Ljava/util/List;

    return-object v0
.end method

.method public setPatch_download_in_nowifi(I)V
    .locals 0

    .line 56
    iput p1, p0, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->patch_download_in_nowifi:I

    return-void
.end method

.method public setPlugins(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ymnsdk/replugin/entity/Plugin;",
            ">;)V"
        }
    .end annotation

    .line 40
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->plugins:Ljava/util/List;

    return-void
.end method

.method public setPost_statistics_enabled(I)V
    .locals 0

    .line 48
    iput p1, p0, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->post_statistics_enabled:I

    return-void
.end method

.method public setUpdate_server_address(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 32
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->update_server_address:Ljava/util/List;

    return-void
.end method
