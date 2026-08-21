.class Lcom/qihoo360/loader2/PluginTable;
.super Ljava/lang/Object;
.source "PluginTable.java"


# static fields
.field static final PLUGINS:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 42
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    return-void
.end method

.method constructor <init>()V
    .locals 0

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static final buildPlugins()Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 121
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "ws001"

    if-eqz v0, :cond_0

    const-string v0, "build plugins"

    .line 122
    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 v0, 0x0

    .line 125
    invoke-static {v0}, Lcom/qihoo360/loader2/MP;->getPlugins(Z)Ljava/util/List;

    move-result-object v0

    .line 126
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_1

    .line 127
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "build "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " plugins"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-object v0
.end method

.method static final dump(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V
    .locals 0

    .line 45
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->DUMP_ENABLED:Z

    if-eqz p0, :cond_1

    .line 46
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "--- PluginTable.size = "

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p2, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    invoke-virtual {p2}, Ljava/util/HashMap;->size()I

    move-result p2

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " ---"

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    const/4 p0, 0x0

    .line 47
    invoke-static {p0}, Lcom/qihoo360/loader2/MP;->getPlugins(Z)Ljava/util/List;

    move-result-object p0

    .line 48
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 49
    invoke-virtual {p1, p2}, Ljava/io/PrintWriter;->println(Ljava/lang/Object;)V

    goto :goto_0

    .line 51
    :cond_0
    invoke-virtual {p1}, Ljava/io/PrintWriter;->println()V

    :cond_1
    return-void
.end method

.method static final getPluginInfo(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 2

    .line 115
    sget-object v0, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    monitor-enter v0

    .line 116
    :try_start_0
    sget-object v1, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    invoke-virtual {v1, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/qihoo360/replugin/model/PluginInfo;

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    .line 117
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method static final initPlugins(Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/loader2/Plugin;",
            ">;)V"
        }
    .end annotation

    .line 56
    sget-object v0, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    monitor-enter v0

    .line 57
    :try_start_0
    invoke-interface {p0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/loader2/Plugin;

    .line 58
    iget-object v1, v1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-static {v1}, Lcom/qihoo360/loader2/PluginTable;->putPluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V

    goto :goto_0

    .line 60
    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method private static putPluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 2

    .line 134
    sget-object v0, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 135
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 137
    sget-object v0, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method static final removeInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 3

    .line 102
    sget-object v0, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    monitor-enter v0

    .line 103
    :try_start_0
    sget-object v1, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/model/PluginInfo;

    if-eqz v1, :cond_0

    .line 105
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginTable;->removePluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 108
    :goto_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 109
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 110
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "removeInfo plugin table: info="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p0, " rc="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "ws001"

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-void

    :catchall_0
    move-exception p0

    .line 108
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p0
.end method

.method private static removePluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 2

    .line 142
    sget-object v0, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 143
    sget-object v0, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method static final replaceInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 3

    .line 85
    sget-object v0, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    monitor-enter v0

    .line 86
    :try_start_0
    sget-object v1, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/model/PluginInfo;

    if-eqz v1, :cond_0

    .line 88
    invoke-virtual {v1, p0}, Lcom/qihoo360/replugin/model/PluginInfo;->canReplaceForPn(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 89
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginTable;->putPluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 93
    :goto_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 94
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 95
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "replace plugin table: info="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p0, " rc="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "ws001"

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-void

    :catchall_0
    move-exception p0

    .line 93
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p0
.end method

.method static final updatePlugin(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 4

    .line 64
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 65
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "update plugin table: info="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 67
    :cond_0
    sget-object v0, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    monitor-enter v0

    .line 70
    :try_start_0
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v1

    invoke-virtual {v1}, Lcom/qihoo360/replugin/RePluginConfig;->getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/qihoo360/replugin/RePluginCallbacks;->isPluginBlocked(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 71
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    const-string v1, "ws001"

    .line 72
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "update plugin table: plugin is blocked, in="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 74
    :cond_1
    monitor-exit v0

    return-void

    .line 78
    :cond_2
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginTable;->putPluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 79
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method
