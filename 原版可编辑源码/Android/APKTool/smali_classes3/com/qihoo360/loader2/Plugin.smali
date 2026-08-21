.class Lcom/qihoo360/loader2/Plugin;
.super Ljava/lang/Object;
.source "Plugin.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/loader2/Plugin$UpdateInfoTask;
    }
.end annotation


# static fields
.field static final FILENAME_2_COMPONENT_LIST:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/qihoo360/replugin/component/ComponentList;",
            ">;>;"
        }
    .end annotation
.end field

.field static final FILENAME_2_DEX:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference<",
            "Ljava/lang/ClassLoader;",
            ">;>;"
        }
    .end annotation
.end field

.field static final FILENAME_2_PACKAGE_INFO:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/pm/PackageInfo;",
            ">;>;"
        }
    .end annotation
.end field

.field static final FILENAME_2_RESOURCES:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/res/Resources;",
            ">;>;"
        }
    .end annotation
.end field

.field static final LOAD_APP:I = 0x3

.field static final LOAD_DEX:I = 0x2

.field static final LOAD_INFO:I = 0x0

.field static final LOAD_RESOURCES:I = 0x1

.field private static final LOCK_LOAD_ENTRY:[B

.field static final PKG_NAME_2_PLUGIN_NAME:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field static final PLUGIN_NAME_2_FILENAME:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static final TAG:Ljava/lang/String; = "Plugin"

.field static volatile sLoadedReasons:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field mApplicationClient:Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

.field mContext:Landroid/content/Context;

.field mDummyPlugin:Z

.field mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

.field mInitialized:Z

.field mLoader:Lcom/qihoo360/loader2/Loader;

.field final mMainH:Landroid/os/Handler;

.field mParent:Ljava/lang/ClassLoader;

.field mPluginManager:Lcom/qihoo360/loader2/PluginCommImpl;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [B

    .line 78
    sput-object v0, Lcom/qihoo360/loader2/Plugin;->LOCK_LOAD_ENTRY:[B

    .line 83
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/Plugin;->PKG_NAME_2_PLUGIN_NAME:Ljava/util/HashMap;

    .line 88
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/Plugin;->PLUGIN_NAME_2_FILENAME:Ljava/util/HashMap;

    .line 93
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_DEX:Ljava/util/HashMap;

    .line 98
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_RESOURCES:Ljava/util/HashMap;

    .line 103
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_PACKAGE_INFO:Ljava/util/HashMap;

    .line 108
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_COMPONENT_LIST:Ljava/util/HashMap;

    return-void
.end method

.method private constructor <init>(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 2

    .line 374
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 153
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mMainH:Landroid/os/Handler;

    .line 375
    iput-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    return-void
.end method

.method static synthetic access$000(Lcom/qihoo360/loader2/Plugin;)V
    .locals 0

    .line 59
    invoke-direct {p0}, Lcom/qihoo360/loader2/Plugin;->callAppLocked()V

    return-void
.end method

.method static final build(Lcom/qihoo360/replugin/model/PluginInfo;)Lcom/qihoo360/loader2/Plugin;
    .locals 1

    .line 181
    new-instance v0, Lcom/qihoo360/loader2/Plugin;

    invoke-direct {v0, p0}, Lcom/qihoo360/loader2/Plugin;-><init>(Lcom/qihoo360/replugin/model/PluginInfo;)V

    return-object v0
.end method

.method private callApp()V
    .locals 2

    .line 907
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 908
    invoke-direct {p0}, Lcom/qihoo360/loader2/Plugin;->callAppLocked()V

    goto :goto_0

    .line 911
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mMainH:Landroid/os/Handler;

    new-instance v1, Lcom/qihoo360/loader2/Plugin$2;

    invoke-direct {v1, p0}, Lcom/qihoo360/loader2/Plugin$2;-><init>(Lcom/qihoo360/loader2/Plugin;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->postAtFrontOfQueue(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method private callAppLocked()V
    .locals 4

    .line 922
    iget-boolean v0, p0, Lcom/qihoo360/loader2/Plugin;->mDummyPlugin:Z

    if-nez v0, :cond_1

    .line 925
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mApplicationClient:Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

    if-eqz v0, :cond_0

    return-void

    .line 930
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    .line 931
    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v1, v1, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    iget-object v2, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v2, v2, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    iget-object v3, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v3, v3, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v3, v3, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    .line 930
    invoke-static {v0, v1, v2, v3}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->getOrCreate(Ljava/lang/String;Ljava/lang/ClassLoader;Lcom/qihoo360/replugin/component/ComponentList;Lcom/qihoo360/replugin/model/PluginInfo;)Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mApplicationClient:Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

    if-eqz v0, :cond_2

    .line 934
    iget-object v1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v1, v1, Lcom/qihoo360/loader2/Loader;->mPkgContext:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->callAttachBaseContext(Landroid/content/Context;)V

    .line 935
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mApplicationClient:Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->callOnCreate()V

    goto :goto_0

    .line 939
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "p.cal dm "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    :goto_0
    return-void
.end method

.method static final clearCachedPlugin(Ljava/lang/String;)V
    .locals 5

    .line 295
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 300
    :cond_0
    sget-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_DEX:Ljava/util/HashMap;

    monitor-enter v0

    .line 301
    :try_start_0
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_DEX:Ljava/util/HashMap;

    invoke-virtual {v1, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    if-eqz v1, :cond_1

    .line 303
    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ClassLoader;

    .line 304
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_DEX:Ljava/util/HashMap;

    invoke-virtual {v2, p0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 305
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_1

    const-string v2, "ws001"

    .line 306
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "clear Cached Dex "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " -> "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 309
    :cond_1
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    .line 312
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_RESOURCES:Ljava/util/HashMap;

    monitor-enter v1

    .line 313
    :try_start_1
    sget-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_RESOURCES:Ljava/util/HashMap;

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_2

    .line 315
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/res/Resources;

    .line 316
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_RESOURCES:Ljava/util/HashMap;

    invoke-virtual {v2, p0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 317
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_2

    const-string v2, "ws001"

    .line 318
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "clear Cached Resources "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " -> "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 321
    :cond_2
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 324
    sget-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_PACKAGE_INFO:Ljava/util/HashMap;

    monitor-enter v0

    .line 325
    :try_start_2
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_PACKAGE_INFO:Ljava/util/HashMap;

    invoke-virtual {v1, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    if-eqz v1, :cond_3

    .line 327
    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/pm/PackageInfo;

    .line 328
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_PACKAGE_INFO:Ljava/util/HashMap;

    invoke-virtual {v2, p0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 329
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_3

    const-string v2, "ws001"

    .line 330
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "clear Cached packageInfo "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " -> "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 333
    :cond_3
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 336
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_COMPONENT_LIST:Ljava/util/HashMap;

    monitor-enter v1

    .line 337
    :try_start_3
    sget-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_COMPONENT_LIST:Ljava/util/HashMap;

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_4

    .line 339
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/component/ComponentList;

    .line 340
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_COMPONENT_LIST:Ljava/util/HashMap;

    invoke-virtual {v2, p0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 341
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_4

    const-string v2, "ws001"

    .line 342
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "clear Cached componentList "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " -> "

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 345
    :cond_4
    monitor-exit v1

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    throw p0

    :catchall_1
    move-exception p0

    .line 333
    :try_start_4
    monitor-exit v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    throw p0

    :catchall_2
    move-exception p0

    .line 321
    :try_start_5
    monitor-exit v1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    throw p0

    :catchall_3
    move-exception p0

    .line 309
    :try_start_6
    monitor-exit v0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    throw p0
.end method

.method static final cloneAndReattach(Landroid/content/Context;Lcom/qihoo360/loader2/Plugin;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;)Lcom/qihoo360/loader2/Plugin;
    .locals 0

    if-nez p1, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 188
    :cond_0
    iget-object p1, p1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->build(Lcom/qihoo360/replugin/model/PluginInfo;)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    .line 189
    invoke-virtual {p1, p0, p2, p3}, Lcom/qihoo360/loader2/Plugin;->attach(Landroid/content/Context;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;)V

    return-object p1
.end method

.method private final doLoad(Ljava/lang/String;Landroid/content/Context;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;I)Z
    .locals 9

    .line 749
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    const/4 v0, 0x2

    const/4 v1, 0x1

    if-nez p1, :cond_a

    const/4 p1, 0x0

    .line 752
    iget-object v2, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v2

    const-string v3, "plugins_v3"

    const/4 v4, 0x3

    const-string v5, "ws001"

    const/4 v6, 0x0

    if-ne v2, v0, :cond_1

    .line 754
    invoke-virtual {p2, v3, v6}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object p1

    .line 755
    iget-object v2, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexParentDir()Ljava/io/File;

    move-result-object v2

    .line 756
    iget-object v3, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object v3

    invoke-virtual {v3}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v3

    .line 757
    iget-object v7, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-static {p2, v7, v8, v3, v2}, Lcom/qihoo360/replugin/utils/AssetsUtils;->quickExtractTo(Landroid/content/Context;Lcom/qihoo360/replugin/model/PluginInfo;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 761
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "p e b i p f "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v5, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v6

    .line 765
    :cond_0
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, p1, v3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 766
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->clone()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 767
    invoke-virtual {v2}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/qihoo360/replugin/model/PluginInfo;->setPath(Ljava/lang/String;)V

    .line 770
    invoke-virtual {p1, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->setType(I)V

    goto/16 :goto_0

    .line 772
    :cond_1
    iget-object v2, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v2

    if-ne v2, v4, :cond_7

    .line 774
    new-instance p1, Ljava/io/File;

    iget-object v2, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getV5Type()I

    move-result v2

    invoke-static {p1, v2}, Lcom/qihoo360/loader2/V5FileInfo;->build(Ljava/io/File;I)Lcom/qihoo360/loader2/V5FileInfo;

    move-result-object p1

    if-nez p1, :cond_2

    .line 778
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "p e b v i f "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v5, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v6

    .line 782
    :cond_2
    invoke-virtual {p2, v3, v6}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v2

    .line 783
    invoke-virtual {p1, p2, v2, v1, v1}, Lcom/qihoo360/loader2/V5FileInfo;->updateV5FileTo(Landroid/content/Context;Ljava/io/File;ZZ)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    if-nez p1, :cond_3

    .line 787
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "p u v f t f "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v5, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v6

    .line 792
    :cond_3
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getLowInterfaceApi()I

    move-result v3

    iget-object v7, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v7}, Lcom/qihoo360/replugin/model/PluginInfo;->getLowInterfaceApi()I

    move-result v7

    if-ne v3, v7, :cond_4

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getHighInterfaceApi()I

    move-result v3

    iget-object v7, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v7}, Lcom/qihoo360/replugin/model/PluginInfo;->getHighInterfaceApi()I

    move-result v7

    if-eq v3, v7, :cond_7

    .line 793
    :cond_4
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_5

    .line 794
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "v5 plugin has changed: plugin="

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v7, ", original="

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v5, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 797
    :cond_5
    iget-object v3, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object v3

    invoke-virtual {v3}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v3

    .line 798
    new-instance v7, Ljava/io/File;

    invoke-direct {v7, v2, v3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 799
    invoke-virtual {v7}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_6

    .line 801
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "can\'t load: v5 plugin has changed to "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 802
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getLowInterfaceApi()I

    move-result p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p3, "-"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getHighInterfaceApi()I

    move-result p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ", orig "

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    .line 803
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getLowInterfaceApi()I

    move-result p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getHighInterfaceApi()I

    move-result p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " bare not exist"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 801
    invoke-static {v5, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v6

    .line 809
    :cond_6
    invoke-static {v7}, Lcom/qihoo360/replugin/model/PluginInfo;->build(Ljava/io/File;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    if-nez p1, :cond_7

    return v6

    :cond_7
    :goto_0
    if-eqz p1, :cond_8

    .line 822
    iput-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    .line 826
    :cond_8
    new-instance p1, Lcom/qihoo360/loader2/Loader;

    iget-object v2, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p1, p2, v2, v3, p0}, Lcom/qihoo360/loader2/Loader;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/qihoo360/loader2/Plugin;)V

    iput-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    .line 827
    invoke-virtual {p1, p3, p5}, Lcom/qihoo360/loader2/Loader;->loadDex(Ljava/lang/ClassLoader;I)Z

    move-result p1

    if-nez p1, :cond_9

    return v6

    .line 834
    :cond_9
    :try_start_0
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, v1}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->updateUsedIfNeeded(Ljava/lang/String;Z)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 838
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_1
    if-ne p5, v4, :cond_a

    .line 845
    invoke-direct {p0, p4}, Lcom/qihoo360/loader2/Plugin;->loadEntryLocked(Lcom/qihoo360/loader2/PluginCommImpl;)Z

    move-result p1

    if-nez p1, :cond_a

    return v6

    :cond_a
    if-nez p5, :cond_b

    .line 855
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    invoke-virtual {p1}, Lcom/qihoo360/loader2/Loader;->isPackageInfoLoaded()Z

    move-result p1

    return p1

    :cond_b
    if-ne p5, v1, :cond_c

    .line 857
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    invoke-virtual {p1}, Lcom/qihoo360/loader2/Loader;->isResourcesLoaded()Z

    move-result p1

    return p1

    :cond_c
    if-ne p5, v0, :cond_d

    .line 859
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    invoke-virtual {p1}, Lcom/qihoo360/loader2/Loader;->isDexLoaded()Z

    move-result p1

    return p1

    .line 861
    :cond_d
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    invoke-virtual {p1}, Lcom/qihoo360/loader2/Loader;->isAppLoaded()Z

    move-result p1

    return p1
.end method

.method static final dump(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V
    .locals 3

    .line 350
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->DUMP_ENABLED:Z

    if-eqz p0, :cond_3

    const-string p0, "--- cached plugin filename ---"

    .line 351
    invoke-virtual {p1, p0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 353
    sget-object p0, Lcom/qihoo360/loader2/Plugin;->PLUGIN_NAME_2_FILENAME:Ljava/util/HashMap;

    invoke-virtual {p0}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    const-string v0, ": "

    if-eqz p2, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    .line 354
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/qihoo360/loader2/Plugin;->PLUGIN_NAME_2_FILENAME:Ljava/util/HashMap;

    invoke-virtual {v0, p2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string p0, "--- cached plugin Resources ---"

    .line 356
    invoke-virtual {p1, p0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 358
    sget-object p0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_RESOURCES:Ljava/util/HashMap;

    invoke-virtual {p0}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    .line 359
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_RESOURCES:Ljava/util/HashMap;

    invoke-virtual {v2, p2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    const-string p0, "--- cached plugin PackageInfo ---"

    .line 361
    invoke-virtual {p1, p0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 363
    sget-object p0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_PACKAGE_INFO:Ljava/util/HashMap;

    invoke-virtual {p0}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_2
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    .line 364
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_PACKAGE_INFO:Ljava/util/HashMap;

    invoke-virtual {v2, p2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    goto :goto_2

    :cond_2
    const-string p0, "--- cached plugin ComponentList ---"

    .line 366
    invoke-virtual {p1, p0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 368
    sget-object p0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_COMPONENT_LIST:Ljava/util/HashMap;

    invoke-virtual {p0}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_3
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_3

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    .line 369
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_COMPONENT_LIST:Ljava/util/HashMap;

    invoke-virtual {v2, p2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    goto :goto_3

    :cond_3
    return-void
.end method

.method private loadByCache(I)Z
    .locals 9

    const-string v0, "ws000"

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez p1, :cond_1

    .line 468
    iget-object v3, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/qihoo360/loader2/Plugin;->queryCachedFilename(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 469
    invoke-static {v3}, Lcom/qihoo360/loader2/Plugin;->queryCachedPackageInfo(Ljava/lang/String;)Landroid/content/pm/PackageInfo;

    move-result-object v4

    .line 470
    invoke-static {v3}, Lcom/qihoo360/loader2/Plugin;->queryCachedComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object v3

    if-eqz v4, :cond_1

    if-eqz v3, :cond_1

    .line 472
    new-instance p1, Lcom/qihoo360/loader2/Loader;

    iget-object v5, p0, Lcom/qihoo360/loader2/Plugin;->mContext:Landroid/content/Context;

    iget-object v6, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v6}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-direct {p1, v5, v6, v1, p0}, Lcom/qihoo360/loader2/Loader;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/qihoo360/loader2/Plugin;)V

    iput-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    .line 473
    iput-object v4, p1, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    .line 474
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iput-object v3, p1, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    .line 475
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    const-string p1, "loadLocked(): Cached, pkgInfo loaded"

    .line 476
    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return v2

    :cond_1
    if-ne p1, v2, :cond_3

    .line 483
    iget-object v3, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/qihoo360/loader2/Plugin;->queryCachedFilename(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 484
    invoke-static {v3}, Lcom/qihoo360/loader2/Plugin;->queryCachedResources(Ljava/lang/String;)Landroid/content/res/Resources;

    move-result-object v4

    .line 485
    invoke-static {v3}, Lcom/qihoo360/loader2/Plugin;->queryCachedPackageInfo(Ljava/lang/String;)Landroid/content/pm/PackageInfo;

    move-result-object v5

    .line 486
    invoke-static {v3}, Lcom/qihoo360/loader2/Plugin;->queryCachedComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object v3

    if-eqz v4, :cond_3

    if-eqz v5, :cond_3

    if-eqz v3, :cond_3

    .line 488
    new-instance p1, Lcom/qihoo360/loader2/Loader;

    iget-object v6, p0, Lcom/qihoo360/loader2/Plugin;->mContext:Landroid/content/Context;

    iget-object v7, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v7}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v7

    invoke-direct {p1, v6, v7, v1, p0}, Lcom/qihoo360/loader2/Loader;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/qihoo360/loader2/Plugin;)V

    iput-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    .line 489
    iput-object v4, p1, Lcom/qihoo360/loader2/Loader;->mPkgResources:Landroid/content/res/Resources;

    .line 490
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iput-object v5, p1, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    .line 491
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iput-object v3, p1, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    .line 492
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    const-string p1, "loadLocked(): Cached, resource loaded"

    .line 493
    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return v2

    :cond_3
    const/4 v3, 0x2

    if-ne p1, v3, :cond_5

    .line 500
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->queryCachedFilename(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 501
    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->queryCachedResources(Ljava/lang/String;)Landroid/content/res/Resources;

    move-result-object v3

    .line 502
    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->queryCachedPackageInfo(Ljava/lang/String;)Landroid/content/pm/PackageInfo;

    move-result-object v4

    .line 503
    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->queryCachedComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object v5

    .line 504
    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->queryCachedClassLoader(Ljava/lang/String;)Ljava/lang/ClassLoader;

    move-result-object p1

    if-eqz v3, :cond_5

    if-eqz v4, :cond_5

    if-eqz v5, :cond_5

    if-eqz p1, :cond_5

    .line 506
    new-instance v6, Lcom/qihoo360/loader2/Loader;

    iget-object v7, p0, Lcom/qihoo360/loader2/Plugin;->mContext:Landroid/content/Context;

    iget-object v8, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v8}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-direct {v6, v7, v8, v1, p0}, Lcom/qihoo360/loader2/Loader;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/qihoo360/loader2/Plugin;)V

    iput-object v6, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    .line 507
    iput-object v3, v6, Lcom/qihoo360/loader2/Loader;->mPkgResources:Landroid/content/res/Resources;

    .line 508
    iget-object v1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iput-object v4, v1, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    .line 509
    iget-object v1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iput-object v5, v1, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    .line 510
    iget-object v1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iput-object p1, v1, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    .line 511
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_4

    const-string p1, "loadLocked(): Cached, dex loaded"

    .line 512
    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return v2

    :cond_5
    const/4 p1, 0x0

    return p1
.end method

.method private loadEntryLocked(Lcom/qihoo360/loader2/PluginCommImpl;)Z
    .locals 3

    .line 866
    iget-boolean v0, p0, Lcom/qihoo360/loader2/Plugin;->mDummyPlugin:Z

    const-string v1, "ws001"

    if-eqz v0, :cond_0

    .line 868
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "p.lel dm "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 870
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    new-instance v0, Lcom/qihoo360/loader2/Plugin$1;

    invoke-direct {v0, p0}, Lcom/qihoo360/loader2/Plugin$1;-><init>(Lcom/qihoo360/loader2/Plugin;)V

    iput-object v0, p1, Lcom/qihoo360/loader2/Loader;->mPlugin:Lcom/qihoo360/i/IPlugin;

    goto :goto_0

    .line 877
    :cond_0
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 878
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Plugin.loadEntryLocked(): Load entry, info="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 880
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    invoke-virtual {v0}, Lcom/qihoo360/loader2/Loader;->loadEntryMethod2()Z

    move-result v0

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    .line 881
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/Loader;->invoke2(Lcom/qihoo360/loader2/PluginCommImpl;)Z

    move-result p1

    if-nez p1, :cond_4

    return v2

    .line 884
    :cond_2
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    invoke-virtual {v0, v2}, Lcom/qihoo360/loader2/Loader;->loadEntryMethod(Z)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 885
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/Loader;->invoke(Lcom/qihoo360/loader2/PluginCommImpl;)Z

    move-result p1

    if-nez p1, :cond_4

    return v2

    .line 888
    :cond_3
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    invoke-virtual {v0}, Lcom/qihoo360/loader2/Loader;->loadEntryMethod3()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 889
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/Loader;->invoke2(Lcom/qihoo360/loader2/PluginCommImpl;)Z

    move-result p1

    if-nez p1, :cond_4

    return v2

    :cond_4
    :goto_0
    const/4 p1, 0x1

    return p1

    .line 894
    :cond_5
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "p.lel f "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v2
.end method

.method private loadLocked(IZ)Z
    .locals 23

    move-object/from16 v7, p0

    move/from16 v8, p1

    .line 527
    iget-object v0, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    iget-object v1, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    invoke-static {v0, v1}, Lcom/qihoo360/loader2/PluginStatusController;->getStatus(Ljava/lang/String;I)I

    move-result v0

    const-string v1, ":"

    const/4 v9, 0x0

    const-string v10, "ws001"

    if-gez v0, :cond_1

    .line 529
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_0

    .line 530
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "loadLocked(): Disable in="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "; st="

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return v9

    .line 534
    :cond_1
    iget-boolean v0, v7, Lcom/qihoo360/loader2/Plugin;->mInitialized:Z

    const/4 v11, 0x2

    const/4 v12, 0x1

    if-eqz v0, :cond_b

    .line 535
    iget-object v0, v7, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    const-string v1, "ws000"

    if-nez v0, :cond_3

    .line 536
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    const-string v0, "loadLocked(): Initialized but mLoader is Null"

    .line 537
    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return v9

    :cond_3
    if-nez v8, :cond_5

    .line 542
    invoke-virtual {v0}, Lcom/qihoo360/loader2/Loader;->isPackageInfoLoaded()Z

    move-result v0

    .line 543
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_4

    .line 544
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "loadLocked(): Initialized, pkginfo loaded = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return v0

    :cond_5
    if-ne v8, v12, :cond_7

    .line 549
    invoke-virtual {v0}, Lcom/qihoo360/loader2/Loader;->isResourcesLoaded()Z

    move-result v0

    .line 550
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_6

    .line 551
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "loadLocked(): Initialized, resource loaded = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    return v0

    :cond_7
    if-ne v8, v11, :cond_9

    .line 556
    invoke-virtual {v0}, Lcom/qihoo360/loader2/Loader;->isDexLoaded()Z

    move-result v0

    .line 557
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_8

    .line 558
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "loadLocked(): Initialized, dex loaded = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_8
    return v0

    .line 562
    :cond_9
    invoke-virtual {v0}, Lcom/qihoo360/loader2/Loader;->isAppLoaded()Z

    move-result v0

    .line 563
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_a

    .line 564
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "loadLocked(): Initialized, is loaded = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_a
    return v0

    .line 568
    :cond_b
    iput-boolean v12, v7, Lcom/qihoo360/loader2/Plugin;->mInitialized:Z

    .line 571
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result v0

    if-eqz v0, :cond_10

    .line 573
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "--- plugin: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " ---\n"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 574
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "load="

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "\n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 575
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v2

    .line 576
    array-length v3, v2

    move v4, v9

    :goto_0
    if-ge v4, v3, :cond_e

    aget-object v5, v2, v4

    .line 577
    invoke-virtual {v5}, Ljava/lang/StackTraceElement;->isNativeMethod()Z

    move-result v6

    if-eqz v6, :cond_c

    goto :goto_1

    .line 580
    :cond_c
    invoke-virtual {v5}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v6

    .line 581
    invoke-virtual {v5}, Ljava/lang/StackTraceElement;->getMethodName()Ljava/lang/String;

    move-result-object v13

    .line 582
    invoke-virtual {v5}, Ljava/lang/StackTraceElement;->getFileName()Ljava/lang/String;

    move-result-object v14

    .line 583
    invoke-virtual {v5}, Ljava/lang/StackTraceElement;->getLineNumber()I

    move-result v5

    .line 584
    sget-boolean v15, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v11, "("

    const-string v9, "."

    if-eqz v15, :cond_d

    .line 585
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ")"

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v10, v12}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 587
    :cond_d
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ")\n"

    invoke-virtual {v12, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_1
    add-int/lit8 v4, v4, 0x1

    const/4 v9, 0x0

    const/4 v11, 0x2

    const/4 v12, 0x1

    goto :goto_0

    .line 589
    :cond_e
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->sLoadedReasons:Ljava/util/ArrayList;

    if-nez v1, :cond_f

    .line 590
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    sput-object v1, Lcom/qihoo360/loader2/Plugin;->sLoadedReasons:Ljava/util/ArrayList;

    .line 592
    :cond_f
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->sLoadedReasons:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_10
    if-eqz p2, :cond_11

    .line 597
    invoke-direct/range {p0 .. p1}, Lcom/qihoo360/loader2/Plugin;->loadByCache(I)Z

    move-result v0

    if-eqz v0, :cond_11

    const/4 v1, 0x1

    return v1

    :cond_11
    const/4 v1, 0x1

    .line 604
    iget-object v9, v7, Lcom/qihoo360/loader2/Plugin;->mContext:Landroid/content/Context;

    .line 605
    iget-object v11, v7, Lcom/qihoo360/loader2/Plugin;->mParent:Ljava/lang/ClassLoader;

    .line 606
    iget-object v12, v7, Lcom/qihoo360/loader2/Plugin;->mPluginManager:Lcom/qihoo360/loader2/PluginCommImpl;

    const-string v0, "try1"

    new-array v2, v1, [Ljava/lang/Object;

    .line 610
    iget-object v1, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x0

    aput-object v1, v2, v3

    const-string v1, "plugin_v3_%s.lock"

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v13

    .line 611
    new-instance v14, Lcom/qihoo360/loader/utils/ProcessLocker;

    invoke-direct {v14, v9, v13}, Lcom/qihoo360/loader/utils/ProcessLocker;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 612
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v15, "; pn = "

    if-eqz v1, :cond_12

    .line 613
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "loadLocked(): Ready to lock! logtag = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_12
    const/16 v6, 0xa

    const/16 v5, 0x1388

    .line 615
    invoke-virtual {v14, v5, v6}, Lcom/qihoo360/loader/utils/ProcessLocker;->tryLockTimeWait(II)Z

    move-result v1

    const-string v4, ": failed to lock: can\'t wait plugin ready"

    if-nez v1, :cond_13

    .line 618
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 622
    :cond_13
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v16

    move-object/from16 v1, p0

    move-object v2, v0

    move-object v3, v9

    move-object/from16 v18, v4

    move-object v4, v11

    move-object/from16 p2, v11

    move v11, v5

    move-object v5, v12

    move v11, v6

    move/from16 v6, p1

    .line 623
    invoke-direct/range {v1 .. v6}, Lcom/qihoo360/loader2/Plugin;->doLoad(Ljava/lang/String;Landroid/content/Context;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;I)Z

    move-result v1

    .line 624
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v6, " delta="

    const-string v5, " rc="

    const-string v4, " c="

    const-string v3, " "

    if-eqz v2, :cond_14

    .line 625
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "load "

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v11, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v11}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Ljava/lang/Object;->hashCode()I

    move-result v11

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v20

    move-object/from16 v22, v3

    move-object v11, v4

    sub-long v3, v20, v16

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v10, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    :cond_14
    move-object/from16 v22, v3

    move-object v11, v4

    .line 628
    :goto_2
    invoke-virtual {v14}, Lcom/qihoo360/loader/utils/ProcessLocker;->unlock()V

    .line 629
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_15

    .line 630
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "loadLocked(): Unlock! logtag = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v10, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_15
    if-nez v1, :cond_16

    .line 634
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ": loading fail1"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_16
    const/4 v14, 0x3

    const-string v15, ", type=, "

    const-string v4, "RePlugin"

    if-eqz v1, :cond_19

    .line 640
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_18

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result v0

    if-eqz v0, :cond_18

    const/4 v1, 0x2

    if-eq v8, v1, :cond_17

    if-ne v8, v14, :cond_18

    .line 642
    :cond_17
    iget-object v0, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-static {v0, v8}, Lcom/qihoo360/replugin/helper/LogDebug;->printPluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;I)I

    .line 643
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "act=, loadLocked, flag=, End-1, pn=, "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->printMemoryStatus(Ljava/lang/String;Ljava/lang/String;)I

    .line 648
    :cond_18
    :try_start_0
    iget-object v0, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->addToRunningPluginsNoThrows(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v0

    .line 651
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "p.u.1: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_3
    const/4 v1, 0x1

    return v1

    :cond_19
    const-string v3, "try2"

    .line 660
    new-instance v2, Lcom/qihoo360/loader/utils/ProcessLocker;

    invoke-direct {v2, v9, v13}, Lcom/qihoo360/loader/utils/ProcessLocker;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    const/16 v0, 0xa

    const/16 v1, 0x1388

    .line 661
    invoke-virtual {v2, v1, v0}, Lcom/qihoo360/loader/utils/ProcessLocker;->tryLockTimeWait(II)Z

    move-result v0

    if-nez v0, :cond_1a

    .line 664
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v1, v18

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 669
    :cond_1a
    iget-object v0, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v0

    .line 670
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_1c

    .line 671
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1b

    .line 672
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, ": delete exist odex="

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 674
    :cond_1b
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    .line 678
    :cond_1c
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_1d

    .line 681
    :try_start_1
    iget-object v0, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getExtraOdexDir()Ljava/io/File;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/IllegalArgumentException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_4

    :catch_0
    move-exception v0

    .line 685
    invoke-virtual {v0}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    goto :goto_4

    :catch_1
    move-exception v0

    .line 683
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 689
    :cond_1d
    :goto_4
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v16

    move-object/from16 v1, p0

    move-object v13, v2

    move-object v2, v3

    move-object v14, v3

    move-object/from16 v19, v11

    move-object/from16 v11, v22

    move-object v3, v9

    move-object/from16 v9, v19

    move-object/from16 v19, v4

    move-object/from16 v4, p2

    move-object/from16 p2, v15

    move-object v15, v5

    move-object v5, v12

    move-object v12, v6

    move/from16 v6, p1

    .line 691
    invoke-direct/range {v1 .. v6}, Lcom/qihoo360/loader2/Plugin;->tryLoadAgain(Ljava/lang/String;Landroid/content/Context;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;I)Z

    move-result v0

    .line 692
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1e

    .line 693
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "load2 "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Ljava/lang/Object;->hashCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long v2, v2, v16

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 696
    :cond_1e
    invoke-virtual {v13}, Lcom/qihoo360/loader/utils/ProcessLocker;->unlock()V

    if-nez v0, :cond_1f

    .line 699
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ": loading fail2"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v1, 0x0

    return v1

    .line 706
    :cond_1f
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_21

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result v0

    if-eqz v0, :cond_21

    const/4 v1, 0x2

    if-eq v8, v1, :cond_20

    const/4 v1, 0x3

    if-ne v8, v1, :cond_21

    .line 708
    :cond_20
    iget-object v0, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-static {v0, v8}, Lcom/qihoo360/replugin/helper/LogDebug;->printPluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;I)I

    .line 709
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "act=, loadLocked, flag=, End-2, pn=, "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v1, p2

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    move-object/from16 v1, v19

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->printMemoryStatus(Ljava/lang/String;Ljava/lang/String;)I

    .line 715
    :cond_21
    :try_start_2
    iget-object v0, v7, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->addToRunningPluginsNoThrows(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_5

    :catchall_1
    move-exception v0

    .line 718
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "p.u.2: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_5
    const/4 v1, 0x1

    return v1
.end method

.method static final queryCachedClassLoader(Ljava/lang/String;)Ljava/lang/ClassLoader;
    .locals 5

    .line 220
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_2

    .line 221
    sget-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_DEX:Ljava/util/HashMap;

    monitor-enter v0

    .line 222
    :try_start_0
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_DEX:Ljava/util/HashMap;

    invoke-virtual {v2, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    if-eqz v2, :cond_1

    .line 224
    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ClassLoader;

    if-nez v1, :cond_0

    .line 226
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_DEX:Ljava/util/HashMap;

    invoke-virtual {v2, p0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 228
    :cond_0
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_1

    const-string v2, "ws001"

    .line 229
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "cached Dex "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " -> "

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 232
    :cond_1
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_2
    :goto_0
    return-object v1
.end method

.method static final queryCachedComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;
    .locals 5

    .line 277
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_2

    .line 278
    sget-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_COMPONENT_LIST:Ljava/util/HashMap;

    monitor-enter v0

    .line 279
    :try_start_0
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_COMPONENT_LIST:Ljava/util/HashMap;

    invoke-virtual {v2, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    if-eqz v2, :cond_1

    .line 281
    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/component/ComponentList;

    if-nez v1, :cond_0

    .line 283
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_COMPONENT_LIST:Ljava/util/HashMap;

    invoke-virtual {v2, p0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 285
    :cond_0
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_1

    const-string v2, "ws001"

    .line 286
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "cached componentList "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " -> "

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 289
    :cond_1
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_2
    :goto_0
    return-object v1
.end method

.method static final queryCachedFilename(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    .line 209
    sget-object v0, Lcom/qihoo360/loader2/Plugin;->PLUGIN_NAME_2_FILENAME:Ljava/util/HashMap;

    monitor-enter v0

    .line 210
    :try_start_0
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->PLUGIN_NAME_2_FILENAME:Ljava/util/HashMap;

    invoke-virtual {v1, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 211
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_0

    const-string v2, "ws001"

    .line 212
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "cached filename: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " -> "

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 214
    :cond_0
    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method static final queryCachedPackageInfo(Ljava/lang/String;)Landroid/content/pm/PackageInfo;
    .locals 5

    .line 258
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_2

    .line 259
    sget-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_PACKAGE_INFO:Ljava/util/HashMap;

    monitor-enter v0

    .line 260
    :try_start_0
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_PACKAGE_INFO:Ljava/util/HashMap;

    invoke-virtual {v2, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    if-eqz v2, :cond_1

    .line 262
    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/pm/PackageInfo;

    if-nez v1, :cond_0

    .line 264
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_PACKAGE_INFO:Ljava/util/HashMap;

    invoke-virtual {v2, p0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 266
    :cond_0
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_1

    const-string v2, "ws001"

    .line 267
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "cached packageInfo "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " -> "

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 270
    :cond_1
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_2
    :goto_0
    return-object v1
.end method

.method static final queryCachedResources(Ljava/lang/String;)Landroid/content/res/Resources;
    .locals 5

    .line 239
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_2

    .line 240
    sget-object v0, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_RESOURCES:Ljava/util/HashMap;

    monitor-enter v0

    .line 241
    :try_start_0
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_RESOURCES:Ljava/util/HashMap;

    invoke-virtual {v2, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    if-eqz v2, :cond_1

    .line 243
    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/res/Resources;

    if-nez v1, :cond_0

    .line 245
    sget-object v2, Lcom/qihoo360/loader2/Plugin;->FILENAME_2_RESOURCES:Ljava/util/HashMap;

    invoke-virtual {v2, p0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 247
    :cond_0
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_1

    const-string v2, "ws001"

    .line 248
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "cached Resources "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " -> "

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 251
    :cond_1
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_2
    :goto_0
    return-object v1
.end method

.method static final queryPluginNameByPkgName(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    .line 198
    sget-object v0, Lcom/qihoo360/loader2/Plugin;->PKG_NAME_2_PLUGIN_NAME:Ljava/util/HashMap;

    monitor-enter v0

    .line 199
    :try_start_0
    sget-object v1, Lcom/qihoo360/loader2/Plugin;->PKG_NAME_2_PLUGIN_NAME:Ljava/util/HashMap;

    invoke-virtual {v1, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 200
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_0

    const-string v2, "ws001"

    .line 201
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "cached pluginName: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " -> "

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 203
    :cond_0
    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method private declared-synchronized tryLoadAgain(Ljava/lang/String;Landroid/content/Context;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;I)Z
    .locals 1

    monitor-enter p0

    const/4 v0, 0x0

    .line 744
    :try_start_0
    iput-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    .line 745
    invoke-direct/range {p0 .. p5}, Lcom/qihoo360/loader2/Plugin;->doLoad(Ljava/lang/String;Landroid/content/Context;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;I)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method final attach(Landroid/content/Context;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;)V
    .locals 0

    .line 387
    iput-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mContext:Landroid/content/Context;

    .line 388
    iput-object p2, p0, Lcom/qihoo360/loader2/Plugin;->mParent:Ljava/lang/ClassLoader;

    .line 389
    iput-object p3, p0, Lcom/qihoo360/loader2/Plugin;->mPluginManager:Lcom/qihoo360/loader2/PluginCommImpl;

    return-void
.end method

.method final getClassLoader()Ljava/lang/ClassLoader;
    .locals 1

    .line 396
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 399
    :cond_0
    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    return-object v0
.end method

.method final isInitialized()Z
    .locals 1

    .line 406
    iget-boolean v0, p0, Lcom/qihoo360/loader2/Plugin;->mInitialized:Z

    return v0
.end method

.method final isLoaded()Z
    .locals 1

    .line 413
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 416
    :cond_0
    invoke-virtual {v0}, Lcom/qihoo360/loader2/Loader;->isAppLoaded()Z

    move-result v0

    return v0
.end method

.method final isPackageInfoLoaded()Z
    .locals 1

    .line 423
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 426
    :cond_0
    invoke-virtual {v0}, Lcom/qihoo360/loader2/Loader;->isPackageInfoLoaded()Z

    move-result v0

    return v0
.end method

.method final load(IZ)Z
    .locals 2

    .line 433
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    .line 434
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/loader2/Plugin;->loadLocked(IZ)Z

    move-result p2

    const/4 v1, 0x3

    if-ne p1, v1, :cond_0

    if-eqz p2, :cond_0

    .line 438
    invoke-direct {p0}, Lcom/qihoo360/loader2/Plugin;->callApp()V

    :cond_0
    if-eqz p2, :cond_1

    .line 442
    iget-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    if-eq p1, v0, :cond_1

    .line 443
    new-instance p1, Lcom/qihoo360/loader2/Plugin$UpdateInfoTask;

    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {p1, v0}, Lcom/qihoo360/loader2/Plugin$UpdateInfoTask;-><init>(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 444
    invoke-static {p1}, Lcom/qihoo360/mobilesafe/api/Tasks;->post2Thread(Ljava/lang/Runnable;)Z

    :cond_1
    return p2
.end method

.method final query(Ljava/lang/String;)Landroid/os/IBinder;
    .locals 2

    .line 731
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mBinderPlugin:Lcom/qihoo360/loader2/Loader$ProxyPlugin;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader$ProxyPlugin;->mPlugin:Lcom/qihoo360/loader2/IPlugin;

    invoke-interface {v0, p1}, Lcom/qihoo360/loader2/IPlugin;->query(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    .line 734
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "q.b.e.m"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    const/4 p1, 0x0

    return-object p1
.end method

.method final query(Ljava/lang/Class;)Lcom/qihoo360/i/IModule;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "+",
            "Lcom/qihoo360/i/IModule;",
            ">;)",
            "Lcom/qihoo360/i/IModule;"
        }
    .end annotation

    .line 726
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mPlugin:Lcom/qihoo360/i/IPlugin;

    invoke-interface {v0, p1}, Lcom/qihoo360/i/IPlugin;->query(Ljava/lang/Class;)Lcom/qihoo360/i/IModule;

    move-result-object p1

    return-object p1
.end method

.method final replaceInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 3

    .line 451
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->canReplaceForPn(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 452
    iput-object p1, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 455
    :goto_0
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    .line 456
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "replace plugin info: info="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, " rc="

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 380
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 381
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-super {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " {info="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "}"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 383
    :cond_0
    invoke-super {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
