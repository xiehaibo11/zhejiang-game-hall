.class public Lcom/qihoo360/loader2/V5Finder;
.super Ljava/lang/Object;
.source "V5Finder.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static final search(Landroid/content/Context;Ljava/io/File;Lcom/qihoo360/loader2/Builder$PxAll;)V
    .locals 8

    .line 41
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 43
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v1

    invoke-virtual {v1}, Lcom/qihoo360/replugin/RePluginConfig;->getPnInstallDir()Ljava/io/File;

    move-result-object v1

    .line 44
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v3, "ws001"

    if-eqz v2, :cond_0

    .line 45
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "search v5 files: dir="

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 47
    :cond_0
    invoke-static {v1, v0}, Lcom/qihoo360/loader2/V5Finder;->searchV5Plugins(Ljava/io/File;Ljava/util/ArrayList;)V

    .line 51
    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/loader2/V5FileInfo;

    .line 53
    new-instance v2, Lcom/qihoo360/loader/utils/ProcessLocker;

    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v4

    iget-object v5, v1, Lcom/qihoo360/loader2/V5FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v5}, Ljava/io/File;->getParent()Ljava/lang/String;

    move-result-object v5

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, v1, Lcom/qihoo360/loader2/V5FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v7}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, ".lock"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {v2, v4, v5, v6}, Lcom/qihoo360/loader/utils/ProcessLocker;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 60
    invoke-virtual {v2}, Lcom/qihoo360/loader/utils/ProcessLocker;->isLocked()Z

    move-result v2

    if-eqz v2, :cond_2

    goto :goto_0

    :cond_2
    const/4 v2, 0x0

    const/4 v4, 0x1

    .line 65
    invoke-virtual {v1, p0, p1, v2, v4}, Lcom/qihoo360/loader2/V5FileInfo;->updateV5FileTo(Landroid/content/Context;Ljava/io/File;ZZ)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v1

    if-nez v1, :cond_3

    .line 68
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    const-string v1, "search: fail to update v5 plugin"

    .line 69
    invoke-static {v3, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 72
    :cond_3
    invoke-virtual {p2, v1}, Lcom/qihoo360/loader2/Builder$PxAll;->addV5(Lcom/qihoo360/replugin/model/PluginInfo;)V

    goto :goto_0

    :cond_4
    return-void
.end method

.method private static final searchV5Plugins(Ljava/io/File;Ljava/util/ArrayList;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/File;",
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/loader2/V5FileInfo;",
            ">;)V"
        }
    .end annotation

    .line 78
    invoke-virtual {p0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object p0

    if-nez p0, :cond_1

    .line 80
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    const-string p0, "ws001"

    const-string p1, "search v5 plugin: nothing"

    .line 81
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void

    .line 85
    :cond_1
    array-length v0, p0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_6

    aget-object v2, p0, v1

    .line 86
    invoke-virtual {v2}, Ljava/io/File;->isDirectory()Z

    move-result v3

    if-eqz v3, :cond_2

    goto :goto_1

    .line 89
    :cond_2
    invoke-virtual {v2}, Ljava/io/File;->length()J

    move-result-wide v3

    const-wide/16 v5, 0x0

    cmp-long v3, v3, v5

    if-gtz v3, :cond_3

    goto :goto_1

    :cond_3
    const/4 v3, 0x1

    .line 93
    invoke-static {v2, v3}, Lcom/qihoo360/loader2/V5FileInfo;->build(Ljava/io/File;I)Lcom/qihoo360/loader2/V5FileInfo;

    move-result-object v3

    if-eqz v3, :cond_4

    .line 95
    invoke-virtual {p1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_4
    const/4 v3, 0x3

    .line 98
    invoke-static {v2, v3}, Lcom/qihoo360/loader2/V5FileInfo;->build(Ljava/io/File;I)Lcom/qihoo360/loader2/V5FileInfo;

    move-result-object v2

    if-eqz v2, :cond_5

    .line 100
    invoke-virtual {p1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_5
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_6
    return-void
.end method
