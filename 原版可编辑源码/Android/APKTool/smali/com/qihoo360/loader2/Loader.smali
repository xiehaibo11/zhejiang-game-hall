.class Lcom/qihoo360/loader2/Loader;
.super Ljava/lang/Object;
.source "Loader.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/loader2/Loader$ProxyPlugin;
    }
.end annotation


# instance fields
.field mBinderPlugin:Lcom/qihoo360/loader2/Loader$ProxyPlugin;

.field mClassLoader:Ljava/lang/ClassLoader;

.field mComponents:Lcom/qihoo360/replugin/component/ComponentList;

.field mConstructors:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/reflect/Constructor<",
            "*>;>;"
        }
    .end annotation
.end field

.field private final mContext:Landroid/content/Context;

.field mCreateMethod:Ljava/lang/reflect/Method;

.field mCreateMethod2:Ljava/lang/reflect/Method;

.field mIgnores:Ljava/util/HashSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashSet<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mPackageInfo:Landroid/content/pm/PackageInfo;

.field final mPath:Ljava/lang/String;

.field mPkgContext:Landroid/content/Context;

.field mPkgResources:Landroid/content/res/Resources;

.field mPlugin:Lcom/qihoo360/i/IPlugin;

.field mPluginHost:Lcom/qihoo360/loader2/IPluginHost;

.field private final mPluginName:Ljava/lang/String;

.field final mPluginObj:Lcom/qihoo360/loader2/Plugin;


# direct methods
.method constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/qihoo360/loader2/Plugin;)V
    .locals 1

    .line 145
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 107
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/Loader;->mIgnores:Ljava/util/HashSet;

    .line 112
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/Loader;->mConstructors:Ljava/util/HashMap;

    .line 146
    iput-object p1, p0, Lcom/qihoo360/loader2/Loader;->mContext:Landroid/content/Context;

    .line 147
    iput-object p2, p0, Lcom/qihoo360/loader2/Loader;->mPluginName:Ljava/lang/String;

    .line 148
    iput-object p3, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    .line 149
    iput-object p4, p0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    return-void
.end method

.method private adjustPluginProcess(Landroid/content/pm/ApplicationInfo;)V
    .locals 5

    .line 634
    invoke-direct {p0, p1}, Lcom/qihoo360/loader2/Loader;->getConfigProcessMap(Landroid/content/pm/ApplicationInfo;)Ljava/util/HashMap;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 635
    invoke-virtual {p1}, Ljava/util/HashMap;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 637
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mPluginName:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 638
    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v0

    const/4 v1, 0x4

    if-lt v0, v1, :cond_1

    .line 639
    invoke-direct {p0}, Lcom/qihoo360/loader2/Loader;->genDynamicProcessMap()Ljava/util/HashMap;

    move-result-object p1

    .line 643
    :cond_1
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "ws001"

    if-eqz v0, :cond_2

    const-string v0, "--- \u8c03\u6574\u63d2\u4ef6\u4e2d\u7ec4\u4ef6\u7684\u8fdb\u7a0b BEGIN ---"

    .line 644
    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 645
    invoke-virtual {p1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 646
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " -> "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 650
    :cond_2
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/component/ComponentList;->getActivityMap()Ljava/util/HashMap;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/qihoo360/loader2/Loader;->doAdjust(Ljava/util/HashMap;Ljava/util/HashMap;)V

    .line 651
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/component/ComponentList;->getServiceMap()Ljava/util/HashMap;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/qihoo360/loader2/Loader;->doAdjust(Ljava/util/HashMap;Ljava/util/HashMap;)V

    .line 652
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/component/ComponentList;->getReceiverMap()Ljava/util/HashMap;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/qihoo360/loader2/Loader;->doAdjust(Ljava/util/HashMap;Ljava/util/HashMap;)V

    .line 653
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/component/ComponentList;->getProviderMap()Ljava/util/HashMap;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/qihoo360/loader2/Loader;->doAdjust(Ljava/util/HashMap;Ljava/util/HashMap;)V

    .line 655
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_3

    .line 656
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "--- \u8c03\u6574\u63d2\u4ef6\u4e2d\u7ec4\u4ef6\u7684\u8fdb\u7a0b END --- "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    return-void
.end method

.method private adjustPluginTaskAffinity(Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)V
    .locals 8

    if-nez p2, :cond_0

    return-void

    .line 692
    :cond_0
    iget-object v0, p2, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    if-eqz v0, :cond_5

    const/4 v1, 0x1

    const-string v2, "use_default_task_affinity"

    .line 694
    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    .line 695
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v3, "task-affinity"

    if-eqz v2, :cond_1

    .line 696
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "useDefault = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    if-nez v0, :cond_5

    .line 700
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    new-array v0, v1, [Ljava/lang/Object;

    aput-object p1, v0, v2

    const-string v4, "\u66ff\u6362\u63d2\u4ef6 %s \u4e2d\u9ed8\u8ba4\u7684 TaskAffinity"

    .line 701
    invoke-static {v4, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 704
    :cond_2
    iget-object p2, p2, Landroid/content/pm/ApplicationInfo;->packageName:Ljava/lang/String;

    .line 705
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/component/ComponentList;->getActivityMap()Ljava/util/HashMap;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_3
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    .line 706
    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/content/pm/ActivityInfo;

    .line 707
    sget-boolean v5, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const/4 v6, 0x2

    if-eqz v5, :cond_4

    if-eqz v4, :cond_4

    new-array v5, v6, [Ljava/lang/Object;

    .line 709
    iget-object v7, v4, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    aput-object v7, v5, v2

    iget-object v7, v4, Landroid/content/pm/ActivityInfo;->taskAffinity:Ljava/lang/String;

    aput-object v7, v5, v1

    const-string v7, "%s.taskAffinity = %s "

    invoke-static {v7, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    if-eqz v4, :cond_3

    .line 714
    iget-object v5, v4, Landroid/content/pm/ActivityInfo;->taskAffinity:Ljava/lang/String;

    invoke-virtual {v5, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    .line 715
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, v4, Landroid/content/pm/ActivityInfo;->taskAffinity:Ljava/lang/String;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "."

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Landroid/content/pm/ActivityInfo;->taskAffinity:Ljava/lang/String;

    .line 716
    sget-boolean v5, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v5, :cond_3

    new-array v5, v6, [Ljava/lang/Object;

    .line 717
    iget-object v6, v4, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    aput-object v6, v5, v2

    iget-object v4, v4, Landroid/content/pm/ActivityInfo;->taskAffinity:Ljava/lang/String;

    aput-object v4, v5, v1

    const-string v4, "\u4fee\u6539 %s \u7684 TaskAffinity \u4e3a %s"

    invoke-static {v4, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :cond_5
    return-void
.end method

.method private doAdjust(Ljava/util/HashMap;Ljava/util/HashMap;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "+",
            "Landroid/content/pm/ComponentInfo;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_3

    .line 662
    invoke-virtual {p1}, Ljava/util/HashMap;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 666
    :cond_0
    invoke-virtual {p2}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_1
    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 667
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/pm/ComponentInfo;

    if-eqz v0, :cond_1

    .line 669
    iget-object v1, v0, Landroid/content/pm/ComponentInfo;->processName:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 671
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 672
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_2

    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    .line 673
    iget-object v4, v0, Landroid/content/pm/ComponentInfo;->name:Ljava/lang/String;

    aput-object v4, v2, v3

    const/4 v3, 0x1

    iget-object v4, v0, Landroid/content/pm/ComponentInfo;->processName:Ljava/lang/String;

    aput-object v4, v2, v3

    const/4 v3, 0x2

    aput-object v1, v2, v3

    const-string v3, "--- \u8c03\u6574\u7ec4\u4ef6 %s, %s -> %s"

    invoke-static {v3, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "task-affinity"

    invoke-static {v3, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 676
    :cond_2
    iput-object v1, v0, Landroid/content/pm/ComponentInfo;->processName:Ljava/lang/String;

    goto :goto_0

    :cond_3
    :goto_1
    return-void
.end method

.method private genDynamicProcessMap()Ljava/util/HashMap;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 566
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 568
    invoke-direct {p0}, Lcom/qihoo360/loader2/Loader;->getHostProcessList()Ljava/util/List;

    move-result-object v1

    .line 569
    invoke-direct {p0}, Lcom/qihoo360/loader2/Loader;->getPluginProcessList()Ljava/util/List;

    move-result-object v2

    const/4 v3, 0x0

    if-eqz v1, :cond_0

    .line 571
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v4

    goto :goto_0

    :cond_0
    move v4, v3

    :goto_0
    if-gtz v4, :cond_1

    return-object v0

    :cond_1
    if-eqz v2, :cond_2

    .line 577
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v5

    goto :goto_1

    :cond_2
    move v5, v3

    :goto_1
    if-ge v3, v5, :cond_3

    .line 580
    rem-int v6, v3, v4

    .line 581
    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    invoke-interface {v1, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v0, v7, v6}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_3
    return-object v0
.end method

.method private getConfigProcessMap(Landroid/content/pm/ApplicationInfo;)Ljava/util/HashMap;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/pm/ApplicationInfo;",
            ")",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 594
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 595
    iget-object p1, p1, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    if-eqz p1, :cond_4

    const-string v1, "process_map"

    .line 596
    invoke-virtual {p1, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_2

    .line 600
    :cond_0
    :try_start_0
    invoke-virtual {p1, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 601
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    const/4 p1, 0x0

    .line 602
    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge p1, v2, :cond_4

    .line 603
    invoke-virtual {v1, p1}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lorg/json/JSONObject;

    if-eqz v2, :cond_3

    const-string v3, "to"

    .line 605
    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v3

    const-string v4, "$ui"

    .line 606
    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 607
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object v3

    goto :goto_1

    :cond_1
    const-string v4, "$p"

    .line 610
    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 611
    sget-object v4, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->PROCESS_ADJUST_MAP:Ljava/util/Map;

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    :cond_2
    :goto_1
    const-string v4, "from"

    .line 614
    invoke-virtual {v2, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 618
    sget-boolean v1, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v1, :cond_4

    .line 619
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_4
    :goto_2
    return-object v0
.end method

.method private getHostProcessList()Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 519
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    :goto_0
    const/4 v2, 0x3

    if-ge v1, v2, :cond_0

    .line 521
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ":p"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method private getPluginHost()Lcom/qihoo360/loader2/IPluginHost;
    .locals 2

    .line 405
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProviderStub;->proxyFetchHostBinder(Landroid/content/Context;)Landroid/os/IBinder;

    move-result-object v0

    if-nez v0, :cond_1

    .line 407
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    const-string v0, "ms-receiver"

    const-string v1, "p.p fhb fail"

    .line 408
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 v0, 0x0

    return-object v0

    .line 412
    :cond_1
    invoke-static {v0}, Lcom/qihoo360/loader2/IPluginHost$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v0

    return-object v0
.end method

.method private getPluginProcess(Ljava/util/Set;[Landroid/content/pm/ComponentInfo;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;[",
            "Landroid/content/pm/ComponentInfo;",
            ")V"
        }
    .end annotation

    if-eqz p2, :cond_0

    .line 554
    array-length v0, p2

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    aget-object v2, p2, v1

    .line 555
    iget-object v2, v2, Landroid/content/pm/ComponentInfo;->processName:Ljava/lang/String;

    invoke-interface {p1, v2}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private getPluginProcessList()Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 532
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    .line 534
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {v1}, Lcom/qihoo360/replugin/component/ComponentList;->getApplication()Landroid/content/pm/ApplicationInfo;

    move-result-object v1

    iget-object v1, v1, Landroid/content/pm/ApplicationInfo;->packageName:Ljava/lang/String;

    .line 536
    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/component/ComponentList;->getProviders()[Landroid/content/pm/ProviderInfo;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/qihoo360/loader2/Loader;->getPluginProcess(Ljava/util/Set;[Landroid/content/pm/ComponentInfo;)V

    .line 537
    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/component/ComponentList;->getActivities()[Landroid/content/pm/ActivityInfo;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/qihoo360/loader2/Loader;->getPluginProcess(Ljava/util/Set;[Landroid/content/pm/ComponentInfo;)V

    .line 538
    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/component/ComponentList;->getServices()[Landroid/content/pm/ServiceInfo;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/qihoo360/loader2/Loader;->getPluginProcess(Ljava/util/Set;[Landroid/content/pm/ComponentInfo;)V

    .line 539
    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/component/ComponentList;->getReceivers()[Landroid/content/pm/ActivityInfo;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/qihoo360/loader2/Loader;->getPluginProcess(Ljava/util/Set;[Landroid/content/pm/ComponentInfo;)V

    .line 541
    invoke-interface {v0, v1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/String;

    .line 543
    invoke-interface {v0, v1}, Ljava/util/Set;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method private regReceivers()V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 384
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v0, v0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    .line 386
    sget-object v1, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->INS:Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    invoke-virtual {v1, v0}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->getReceiverFilterMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 388
    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v2

    if-nez v2, :cond_0

    goto :goto_0

    .line 392
    :cond_0
    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPluginHost:Lcom/qihoo360/loader2/IPluginHost;

    if-nez v2, :cond_1

    .line 393
    invoke-direct {p0}, Lcom/qihoo360/loader2/Loader;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    iput-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPluginHost:Lcom/qihoo360/loader2/IPluginHost;

    .line 396
    :cond_1
    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPluginHost:Lcom/qihoo360/loader2/IPluginHost;

    if-eqz v2, :cond_2

    .line 397
    invoke-interface {v2, v0, v1}, Lcom/qihoo360/loader2/IPluginHost;->regReceiver(Ljava/lang/String;Ljava/util/Map;)V

    :cond_2
    :goto_0
    return-void
.end method


# virtual methods
.method final createBaseContext(Landroid/content/Context;)Landroid/content/Context;
    .locals 8

    .line 169
    new-instance v7, Lcom/qihoo360/loader2/PluginContext;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    iget-object v4, p0, Lcom/qihoo360/loader2/Loader;->mPkgResources:Landroid/content/res/Resources;

    iget-object v5, p0, Lcom/qihoo360/loader2/Loader;->mPluginName:Ljava/lang/String;

    const v2, 0x1030005

    move-object v0, v7

    move-object v1, p1

    move-object v6, p0

    invoke-direct/range {v0 .. v6}, Lcom/qihoo360/loader2/PluginContext;-><init>(Landroid/content/Context;ILjava/lang/ClassLoader;Landroid/content/res/Resources;Ljava/lang/String;Lcom/qihoo360/loader2/Loader;)V

    return-object v7
.end method

.method final invoke(Lcom/qihoo360/loader2/PluginCommImpl;)Z
    .locals 6

    const-string v0, "ws001"

    const/4 v1, 0x0

    .line 441
    :try_start_0
    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mCreateMethod:Ljava/lang/reflect/Method;

    const/4 v3, 0x0

    const/4 v4, 0x2

    new-array v4, v4, [Ljava/lang/Object;

    iget-object v5, p0, Lcom/qihoo360/loader2/Loader;->mPkgContext:Landroid/content/Context;

    aput-object v5, v4, v1

    const/4 v5, 0x1

    aput-object p1, v4, v5

    invoke-virtual {v2, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/i/IPlugin;

    iput-object p1, p0, Lcom/qihoo360/loader2/Loader;->mPlugin:Lcom/qihoo360/i/IPlugin;

    .line 442
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_1

    .line 443
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Loader.invoke(): plugin="

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", cl="

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPlugin:Lcom/qihoo360/i/IPlugin;

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPlugin:Lcom/qihoo360/i/IPlugin;

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v2

    goto :goto_0

    :cond_0
    const-string v2, "null"

    :goto_0
    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return v5

    :catchall_0
    move-exception p1

    .line 447
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return v1
.end method

.method final invoke2(Lcom/qihoo360/loader2/PluginCommImpl;)Z
    .locals 6

    const-string p1, "ws001"

    const/4 v0, 0x0

    .line 492
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mCreateMethod2:Ljava/lang/reflect/Method;

    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/Object;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPkgContext:Landroid/content/Context;

    aput-object v3, v2, v0

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    const/4 v4, 0x1

    aput-object v3, v2, v4

    const/4 v3, 0x2

    const/4 v5, 0x0

    aput-object v5, v2, v3

    invoke-virtual {v1, v5, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/os/IBinder;

    if-nez v1, :cond_0

    const-string v1, "p.e.r.b n"

    .line 495
    invoke-static {p1, v1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v0

    .line 499
    :cond_0
    new-instance v2, Lcom/qihoo360/loader2/Loader$ProxyPlugin;

    invoke-direct {v2, v1}, Lcom/qihoo360/loader2/Loader$ProxyPlugin;-><init>(Landroid/os/IBinder;)V

    iput-object v2, p0, Lcom/qihoo360/loader2/Loader;->mBinderPlugin:Lcom/qihoo360/loader2/Loader$ProxyPlugin;

    .line 500
    iput-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPlugin:Lcom/qihoo360/i/IPlugin;

    .line 501
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_1

    .line 502
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Loader.invoke2(): plugin="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", plugin.binder.cl="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return v4

    :catchall_0
    move-exception v1

    .line 506
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v2, v1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return v0
.end method

.method final isAppLoaded()Z
    .locals 1

    .line 165
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mPlugin:Lcom/qihoo360/i/IPlugin;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method final isDexLoaded()Z
    .locals 1

    .line 161
    invoke-virtual {p0}, Lcom/qihoo360/loader2/Loader;->isResourcesLoaded()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method final isPackageInfoLoaded()Z
    .locals 1

    .line 153
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method final isResourcesLoaded()Z
    .locals 1

    .line 157
    invoke-virtual {p0}, Lcom/qihoo360/loader2/Loader;->isPackageInfoLoaded()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mPkgResources:Landroid/content/res/Resources;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method final loadDex(Ljava/lang/ClassLoader;I)Z
    .locals 12

    const/4 p1, 0x0

    .line 174
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 176
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    invoke-static {v1}, Lcom/qihoo360/loader2/Plugin;->queryCachedPackageInfo(Ljava/lang/String;)Landroid/content/pm/PackageInfo;

    move-result-object v1

    iput-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    if-nez v1, :cond_5

    .line 179
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    const/16 v2, 0x8f

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageArchiveInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v1

    iput-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    if-eqz v1, :cond_3

    .line 181
    iget-object v1, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    if-nez v1, :cond_0

    goto/16 :goto_0

    .line 188
    :cond_0
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    const-string v1, "ws001"

    .line 189
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "get package archive info, pi="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 191
    :cond_1
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    iput-object v2, v1, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    .line 192
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    iput-object v2, v1, Landroid/content/pm/ApplicationInfo;->publicSourceDir:Ljava/lang/String;

    .line 194
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v1, v1, Landroid/content/pm/ApplicationInfo;->processName:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 195
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v2, v2, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v2, v2, Landroid/content/pm/ApplicationInfo;->packageName:Ljava/lang/String;

    iput-object v2, v1, Landroid/content/pm/ApplicationInfo;->processName:Ljava/lang/String;

    .line 202
    :cond_2
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v1, v1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    .line 203
    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object v1

    .line 204
    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v2, v2, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v2, Landroid/content/pm/ApplicationInfo;->nativeLibraryDir:Ljava/lang/String;

    .line 212
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->PKG_NAME_2_PLUGIN_NAME:Ljava/util/HashMap;

    monitor-enter v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_6

    .line 213
    :try_start_1
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->PKG_NAME_2_PLUGIN_NAME:Ljava/util/HashMap;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v3, v3, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    iget-object v4, p0, Lcom/qihoo360/loader2/Loader;->mPluginName:Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 214
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 217
    :try_start_2
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->PLUGIN_NAME_2_FILENAME:Ljava/util/HashMap;

    monitor-enter v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_6

    .line 218
    :try_start_3
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->PLUGIN_NAME_2_FILENAME:Ljava/util/HashMap;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPluginName:Ljava/lang/String;

    iget-object v4, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 219
    monitor-exit v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .line 222
    :try_start_4
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_PACKAGE_INFO:Ljava/util/HashMap;

    monitor-enter v1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_6

    .line 223
    :try_start_5
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_PACKAGE_INFO:Ljava/util/HashMap;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    new-instance v4, Ljava/lang/ref/WeakReference;

    iget-object v5, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    invoke-direct {v4, v5}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v2, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 224
    monitor-exit v1

    goto :goto_1

    :catchall_0
    move-exception p2

    monitor-exit v1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    :try_start_6
    throw p2
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_6

    :catchall_1
    move-exception p2

    .line 219
    :try_start_7
    monitor-exit v1
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    :try_start_8
    throw p2
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_6

    :catchall_2
    move-exception p2

    .line 214
    :try_start_9
    monitor-exit v1
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_2

    :try_start_a
    throw p2

    .line 182
    :cond_3
    :goto_0
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_4

    const-string p2, "ws001"

    const-string v0, "get package archive info null"

    .line 183
    invoke-static {p2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    const/4 p2, 0x0

    .line 185
    iput-object p2, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    return p1

    .line 231
    :cond_5
    :goto_1
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v1, v1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v1

    if-nez v1, :cond_6

    .line 232
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v1, v1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v2, v2, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v2, v2, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    invoke-virtual {v1, v2}, Lcom/qihoo360/replugin/model/PluginInfo;->setFrameworkVersionByMeta(Landroid/os/Bundle;)V

    .line 239
    :cond_6
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    invoke-static {v1}, Lcom/qihoo360/loader2/Plugin;->queryCachedComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object v1

    iput-object v1, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    if-nez v1, :cond_7

    .line 242
    new-instance v1, Lcom/qihoo360/replugin/component/ComponentList;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    iget-object v4, p0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v4, v4, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {v1, v2, v3, v4}, Lcom/qihoo360/replugin/component/ComponentList;-><init>(Landroid/content/pm/PackageInfo;Ljava/lang/String;Lcom/qihoo360/replugin/model/PluginInfo;)V

    iput-object v1, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    .line 245
    invoke-direct {p0}, Lcom/qihoo360/loader2/Loader;->regReceivers()V

    .line 248
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_COMPONENT_LIST:Ljava/util/HashMap;

    monitor-enter v1
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_6

    .line 249
    :try_start_b
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_COMPONENT_LIST:Ljava/util/HashMap;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    new-instance v4, Ljava/lang/ref/WeakReference;

    iget-object v5, p0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-direct {v4, v5}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v2, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 250
    monitor-exit v1
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_3

    .line 254
    :try_start_c
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    invoke-direct {p0, v1}, Lcom/qihoo360/loader2/Loader;->adjustPluginProcess(Landroid/content/pm/ApplicationInfo;)V

    .line 257
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPluginName:Ljava/lang/String;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v2, v2, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    invoke-direct {p0, v1, v2}, Lcom/qihoo360/loader2/Loader;->adjustPluginTaskAffinity(Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)V
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_6

    goto :goto_2

    :catchall_3
    move-exception p2

    .line 250
    :try_start_d
    monitor-exit v1
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_3

    :try_start_e
    throw p2

    :cond_7
    :goto_2
    if-nez p2, :cond_8

    .line 261
    invoke-virtual {p0}, Lcom/qihoo360/loader2/Loader;->isPackageInfoLoaded()Z

    move-result p1

    return p1

    .line 264
    :cond_8
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    invoke-static {v1}, Lcom/qihoo360/loader2/Plugin;->queryCachedResources(Ljava/lang/String;)Landroid/content/res/Resources;

    move-result-object v1

    iput-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPkgResources:Landroid/content/res/Resources;
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_6

    if-nez v1, :cond_e

    .line 269
    :try_start_f
    sget-boolean v1, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v1, :cond_9

    .line 271
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    invoke-virtual {v0, v1}, Landroid/content/pm/PackageManager;->getResourcesForApplication(Landroid/content/pm/ApplicationInfo;)Landroid/content/res/Resources;

    move-result-object v0

    .line 272
    new-instance v1, Landroid/content/res/Resources;

    invoke-virtual {v0}, Landroid/content/res/Resources;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v2

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v3

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    invoke-direct {v1, v2, v3, v0}, Landroid/content/res/Resources;-><init>(Landroid/content/res/AssetManager;Landroid/util/DisplayMetrics;Landroid/content/res/Configuration;)V

    iput-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPkgResources:Landroid/content/res/Resources;

    goto :goto_3

    .line 274
    :cond_9
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    invoke-virtual {v0, v1}, Landroid/content/pm/PackageManager;->getResourcesForApplication(Landroid/content/pm/ApplicationInfo;)Landroid/content/res/Resources;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/loader2/Loader;->mPkgResources:Landroid/content/res/Resources;
    :try_end_f
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_f .. :try_end_f} :catch_0
    .catchall {:try_start_f .. :try_end_f} :catchall_6

    .line 282
    :goto_3
    :try_start_10
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mPkgResources:Landroid/content/res/Resources;

    if-nez v0, :cond_b

    .line 283
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_a

    const-string p2, "ws001"

    const-string v0, "get resources null"

    .line 284
    invoke-static {p2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_a
    return p1

    .line 288
    :cond_b
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_c

    const-string v0, "ws001"

    .line 289
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "get resources for app, r="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPkgResources:Landroid/content/res/Resources;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 293
    :cond_c
    sget-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_RESOURCES:Ljava/util/HashMap;

    monitor-enter v0
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_6

    .line 294
    :try_start_11
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_RESOURCES:Ljava/util/HashMap;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    new-instance v3, Ljava/lang/ref/WeakReference;

    iget-object v4, p0, Lcom/qihoo360/loader2/Loader;->mPkgResources:Landroid/content/res/Resources;

    invoke-direct {v3, v4}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 295
    monitor-exit v0

    goto :goto_4

    :catchall_4
    move-exception p2

    monitor-exit v0
    :try_end_11
    .catchall {:try_start_11 .. :try_end_11} :catchall_4

    :try_start_12
    throw p2

    :catch_0
    move-exception p2

    .line 277
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_d

    const-string v0, "ws001"

    .line 278
    invoke-virtual {p2}, Landroid/content/pm/PackageManager$NameNotFoundException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_d
    return p1

    :cond_e
    :goto_4
    const/4 v0, 0x1

    if-ne p2, v0, :cond_f

    .line 298
    invoke-virtual {p0}, Lcom/qihoo360/loader2/Loader;->isResourcesLoaded()Z

    move-result p1

    return p1

    .line 301
    :cond_f
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    invoke-static {v1}, Lcom/qihoo360/loader2/Plugin;->queryCachedClassLoader(Ljava/lang/String;)Ljava/lang/ClassLoader;

    move-result-object v1

    iput-object v1, p0, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    if-nez v1, :cond_17

    .line 304
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v1, v1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexParentDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v5

    const-string v1, "dex"

    .line 308
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "load "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " ..."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 309
    sget-boolean v1, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v1, :cond_10

    .line 313
    invoke-static {}, Ljava/lang/ClassLoader;->getSystemClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    :goto_5
    move-object v7, v1

    goto :goto_6

    .line 316
    :cond_10
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/ClassLoader;->getParent()Ljava/lang/ClassLoader;

    move-result-object v1

    goto :goto_5

    .line 318
    :goto_6
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v6, v1, Landroid/content/pm/ApplicationInfo;->nativeLibraryDir:Ljava/lang/String;

    .line 323
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-wide/16 v2, 0x0

    if-eqz v1, :cond_12

    .line 324
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    .line 325
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v1, v1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v1

    .line 326
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v4

    if-eqz v4, :cond_11

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v10

    cmp-long v1, v10, v2

    if-lez v1, :cond_11

    move v1, v0

    goto :goto_7

    :cond_11
    move v1, p1

    goto :goto_7

    :cond_12
    move v1, p1

    move-wide v8, v2

    .line 331
    :goto_7
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v2

    invoke-virtual {v2}, Lcom/qihoo360/replugin/RePluginConfig;->getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object v2

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v3, v3, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    iget-object v4, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    invoke-virtual/range {v2 .. v7}, Lcom/qihoo360/replugin/RePluginCallbacks;->createPluginClassLoader(Lcom/qihoo360/replugin/model/PluginInfo;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Lcom/qihoo360/replugin/PluginDexClassLoader;

    move-result-object v2

    iput-object v2, p0, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    const-string v2, "dex"

    .line 332
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "load "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 334
    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    if-nez v2, :cond_14

    .line 335
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_13

    const-string p2, "ws001"

    const-string v0, "get dex null"

    .line 336
    invoke-static {p2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_13
    return p1

    .line 341
    :cond_14
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_16

    if-nez v1, :cond_15

    const-string v1, "createClassLoader"

    .line 343
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, " --\u91ca\u653eDEX, (plugin="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPluginName:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", version="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v3, v3, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "), use:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 344
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long/2addr v3, v8

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, ", process:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 345
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 343
    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_8

    :cond_15
    const-string v1, "createClassLoader"

    .line 347
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, " --\u65e0\u9700\u91ca\u653eDEX, (plugin="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPluginName:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", version="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v3, v3, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "), use:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 348
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long/2addr v3, v8

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, ", process:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 349
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 347
    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 354
    :cond_16
    :goto_8
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_DEX:Ljava/util/HashMap;

    monitor-enter v1
    :try_end_12
    .catchall {:try_start_12 .. :try_end_12} :catchall_6

    .line 355
    :try_start_13
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_DEX:Ljava/util/HashMap;

    iget-object v3, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    new-instance v4, Ljava/lang/ref/WeakReference;

    iget-object v5, p0, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    invoke-direct {v4, v5}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v2, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 356
    monitor-exit v1

    goto :goto_9

    :catchall_5
    move-exception p2

    monitor-exit v1
    :try_end_13
    .catchall {:try_start_13 .. :try_end_13} :catchall_5

    :try_start_14
    throw p2

    :cond_17
    :goto_9
    const/4 v1, 0x2

    if-ne p2, v1, :cond_18

    .line 359
    invoke-virtual {p0}, Lcom/qihoo360/loader2/Loader;->isDexLoaded()Z

    move-result p1

    return p1

    .line 363
    :cond_18
    new-instance p2, Lcom/qihoo360/loader2/PluginContext;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mContext:Landroid/content/Context;

    const v3, 0x1030005

    iget-object v4, p0, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    iget-object v5, p0, Lcom/qihoo360/loader2/Loader;->mPkgResources:Landroid/content/res/Resources;

    iget-object v6, p0, Lcom/qihoo360/loader2/Loader;->mPluginName:Ljava/lang/String;

    move-object v1, p2

    move-object v7, p0

    invoke-direct/range {v1 .. v7}, Lcom/qihoo360/loader2/PluginContext;-><init>(Landroid/content/Context;ILjava/lang/ClassLoader;Landroid/content/res/Resources;Ljava/lang/String;Lcom/qihoo360/loader2/Loader;)V

    iput-object p2, p0, Lcom/qihoo360/loader2/Loader;->mPkgContext:Landroid/content/Context;

    .line 364
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_19

    const-string p2, "ws001"

    .line 365
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "pkg context="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPkgContext:Landroid/content/Context;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_6

    :cond_19
    return v0

    :catchall_6
    move-exception p2

    .line 370
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "p="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " m="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0, p2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return p1
.end method

.method final loadEntryMethod(Z)Z
    .locals 5

    const-string v0, "ws001"

    .line 419
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "com.qihoo360.plugin."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mPluginName:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "Entry"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 420
    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {v2, v1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    .line 421
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_0

    .line 422
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "found entry: className="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", loader="

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const-string v1, "create"

    .line 424
    sget-object v3, Lcom/qihoo360/i/Factory;->PLUGIN_ENTRY_EXPORT_METHOD_PARAMS:[Ljava/lang/Class;

    invoke-virtual {v2, v1, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iput-object v1, p0, Lcom/qihoo360/loader2/Loader;->mCreateMethod:Ljava/lang/reflect/Method;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    if-eqz p1, :cond_1

    .line 428
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, v1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    goto :goto_0

    .line 431
    :cond_1
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    const-string p1, "loadEntryMethod exception"

    .line 432
    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 436
    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/qihoo360/loader2/Loader;->mCreateMethod:Ljava/lang/reflect/Method;

    if-eqz p1, :cond_3

    const/4 p1, 0x1

    goto :goto_1

    :cond_3
    const/4 p1, 0x0

    :goto_1
    return p1
.end method

.method final loadEntryMethod2()Z
    .locals 5

    .line 457
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "com.qihoo360.plugin."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mPluginName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "Entry"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 458
    iget-object v1, p0, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {v1, v0}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 459
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_0

    const-string v2, "ws001"

    .line 460
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "found entry: className="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ", loader="

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const-string v0, "create"

    .line 462
    sget-object v2, Lcom/qihoo360/i/Factory;->PLUGIN_ENTRY_EXPORT_METHOD2_PARAMS:[Ljava/lang/Class;

    invoke-virtual {v1, v0, v2}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/loader2/Loader;->mCreateMethod2:Ljava/lang/reflect/Method;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 469
    :catchall_0
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mCreateMethod2:Ljava/lang/reflect/Method;

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method final loadEntryMethod3()Z
    .locals 5

    const-string v0, "ws001"

    :try_start_0
    const-string v1, "com.qihoo360.replugin.Entry"

    .line 476
    iget-object v2, p0, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {v2, v1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    .line 477
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_0

    .line 478
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "found entry: className="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", loader="

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const-string v1, "create"

    .line 480
    sget-object v3, Lcom/qihoo360/i/Factory;->PLUGIN_ENTRY_EXPORT_METHOD2_PARAMS:[Ljava/lang/Class;

    invoke-virtual {v2, v1, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iput-object v1, p0, Lcom/qihoo360/loader2/Loader;->mCreateMethod2:Ljava/lang/reflect/Method;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 483
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, v1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 486
    :goto_0
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader;->mCreateMethod2:Ljava/lang/reflect/Method;

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    goto :goto_1

    :cond_1
    const/4 v0, 0x0

    :goto_1
    return v0
.end method
