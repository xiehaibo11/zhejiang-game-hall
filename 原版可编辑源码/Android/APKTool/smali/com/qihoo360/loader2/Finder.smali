.class public Lcom/qihoo360/loader2/Finder;
.super Ljava/lang/Object;
.source "Finder.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static final search(Landroid/content/Context;Lcom/qihoo360/loader2/Builder$PxAll;)V
    .locals 4

    .line 41
    invoke-static {p0, p1}, Lcom/qihoo360/loader2/FinderBuiltin;->loadPlugins(Landroid/content/Context;Lcom/qihoo360/loader2/Builder$PxAll;)V

    const-string v0, "plugins_v3"

    const/4 v1, 0x0

    .line 44
    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    .line 45
    invoke-static {p0, v0, p1}, Lcom/qihoo360/loader2/V5Finder;->search(Landroid/content/Context;Ljava/io/File;Lcom/qihoo360/loader2/Builder$PxAll;)V

    .line 48
    new-instance p0, Ljava/util/HashSet;

    invoke-direct {p0}, Ljava/util/HashSet;-><init>()V

    .line 50
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v2, "ws001"

    if-eqz v1, :cond_0

    .line 51
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "search plugins: dir="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 53
    :cond_0
    invoke-static {v0, p1, p0}, Lcom/qihoo360/loader2/Finder;->searchLocalPlugins(Ljava/io/File;Lcom/qihoo360/loader2/Builder$PxAll;Ljava/util/HashSet;)V

    .line 57
    invoke-virtual {p0}, Ljava/util/HashSet;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/io/File;

    .line 58
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_2

    .line 59
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "search: delete plugin dir invalid file="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 61
    :cond_2
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    move-result v1

    if-nez v1, :cond_1

    .line 63
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    .line 64
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "search: can\'t delete plugin dir invalid file="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 68
    :cond_3
    invoke-virtual {p0}, Ljava/util/HashSet;->clear()V

    return-void
.end method

.method private static final searchLocalPlugins(Ljava/io/File;Lcom/qihoo360/loader2/Builder$PxAll;Ljava/util/HashSet;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/File;",
            "Lcom/qihoo360/loader2/Builder$PxAll;",
            "Ljava/util/HashSet<",
            "Ljava/io/File;",
            ">;)V"
        }
    .end annotation

    .line 72
    invoke-virtual {p0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object p0

    const-string v0, "ws001"

    if-nez p0, :cond_1

    .line 74
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    const-string p0, "search local plugin: nothing"

    .line 75
    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void

    .line 79
    :cond_1
    array-length v1, p0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_9

    aget-object v3, p0, v2

    .line 80
    invoke-virtual {v3}, Ljava/io/File;->isDirectory()Z

    move-result v4

    if-eqz v4, :cond_2

    goto :goto_1

    .line 83
    :cond_2
    invoke-virtual {v3}, Ljava/io/File;->length()J

    move-result-wide v4

    const-wide/16 v6, 0x0

    cmp-long v4, v4, v6

    if-gtz v4, :cond_4

    .line 84
    sget-boolean v4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v4, :cond_3

    .line 85
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "search local plugin: zero length, file="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    if-eqz p2, :cond_8

    .line 88
    invoke-virtual {p2, v3}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 92
    :cond_4
    invoke-static {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->build(Ljava/io/File;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v4

    if-nez v4, :cond_5

    if-eqz p2, :cond_8

    .line 95
    invoke-virtual {p2, v3}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 99
    :cond_5
    invoke-virtual {v4}, Lcom/qihoo360/replugin/model/PluginInfo;->match()Z

    move-result v5

    if-nez v5, :cond_7

    .line 100
    sget-boolean v4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v4, :cond_6

    .line 101
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "search local plugin: mismatch, file="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    if-eqz p2, :cond_8

    .line 104
    invoke-virtual {p2, v3}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 108
    :cond_7
    invoke-virtual {p1, v4}, Lcom/qihoo360/loader2/Builder$PxAll;->addNormal(Lcom/qihoo360/replugin/model/PluginInfo;)V

    :cond_8
    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_9
    return-void
.end method
