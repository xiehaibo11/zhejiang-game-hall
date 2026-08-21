.class public Lcom/qihoo360/loader2/PluginContext;
.super Landroid/view/ContextThemeWrapper;
.source "PluginContext.java"


# instance fields
.field private mCacheDir:Ljava/io/File;

.field private mContextInjector:Lcom/qihoo360/replugin/ContextInjector;

.field private mDatabasesDir:Ljava/io/File;

.field mFactory:Landroid/view/LayoutInflater$Factory;

.field private mFilesDir:Ljava/io/File;

.field private mInflater:Landroid/view/LayoutInflater;

.field private final mLoader:Lcom/qihoo360/loader2/Loader;

.field private final mNewClassLoader:Ljava/lang/ClassLoader;

.field private final mNewResources:Landroid/content/res/Resources;

.field private final mPlugin:Ljava/lang/String;

.field private final mSync:Ljava/lang/Object;


# direct methods
.method public constructor <init>(Landroid/content/Context;ILjava/lang/ClassLoader;Landroid/content/res/Resources;Ljava/lang/String;Lcom/qihoo360/loader2/Loader;)V
    .locals 0

    .line 88
    invoke-direct {p0, p1, p2}, Landroid/view/ContextThemeWrapper;-><init>(Landroid/content/Context;I)V

    .line 67
    new-instance p1, Ljava/lang/Object;

    invoke-direct {p1}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/loader2/PluginContext;->mSync:Ljava/lang/Object;

    .line 79
    new-instance p1, Lcom/qihoo360/loader2/PluginContext$1;

    invoke-direct {p1, p0}, Lcom/qihoo360/loader2/PluginContext$1;-><init>(Lcom/qihoo360/loader2/PluginContext;)V

    iput-object p1, p0, Lcom/qihoo360/loader2/PluginContext;->mFactory:Landroid/view/LayoutInflater$Factory;

    .line 90
    iput-object p3, p0, Lcom/qihoo360/loader2/PluginContext;->mNewClassLoader:Ljava/lang/ClassLoader;

    .line 91
    iput-object p4, p0, Lcom/qihoo360/loader2/PluginContext;->mNewResources:Landroid/content/res/Resources;

    .line 92
    iput-object p5, p0, Lcom/qihoo360/loader2/PluginContext;->mPlugin:Ljava/lang/String;

    .line 93
    iput-object p6, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    .line 95
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p1

    invoke-virtual {p1}, Lcom/qihoo360/replugin/RePluginConfig;->getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object p1

    invoke-virtual {p1}, Lcom/qihoo360/replugin/RePluginCallbacks;->createContextInjector()Lcom/qihoo360/replugin/ContextInjector;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/loader2/PluginContext;->mContextInjector:Lcom/qihoo360/replugin/ContextInjector;

    return-void
.end method

.method static synthetic access$000(Lcom/qihoo360/loader2/PluginContext;Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;
    .locals 0

    .line 57
    invoke-direct {p0, p1, p2, p3}, Lcom/qihoo360/loader2/PluginContext;->handleCreateView(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;

    move-result-object p0

    return-object p0
.end method

.method private final getDataDirFile()Ljava/io/File;
    .locals 7

    .line 324
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginContext;->getBaseContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v0

    .line 327
    new-instance v1, Ljava/io/File;

    const-string v2, "plugins_v3_data"

    invoke-direct {v1, v0, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 328
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v0

    const/4 v2, 0x0

    const-string v3, "can\'t create dir: "

    const-string v4, "ws001"

    const/16 v5, 0x1f9

    const/4 v6, 0x0

    if-nez v0, :cond_1

    .line 329
    invoke-virtual {v1}, Ljava/io/File;->mkdir()Z

    move-result v0

    if-nez v0, :cond_0

    .line 331
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v2

    .line 335
    :cond_0
    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0, v6, v5}, Lcom/qihoo360/loader2/PluginContext;->setFilePermissionsFromMode(Ljava/lang/String;II)V

    .line 339
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mPlugin:Ljava/lang/String;

    invoke-direct {p0, v1, v0}, Lcom/qihoo360/loader2/PluginContext;->makeFilename(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    .line 340
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_3

    .line 341
    invoke-virtual {v0}, Ljava/io/File;->mkdir()Z

    move-result v1

    if-nez v1, :cond_2

    .line 343
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v2

    .line 347
    :cond_2
    invoke-virtual {v0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1, v6, v5}, Lcom/qihoo360/loader2/PluginContext;->setFilePermissionsFromMode(Ljava/lang/String;II)V

    :cond_3
    return-object v0
.end method

.method private getDatabasesDir()Ljava/io/File;
    .locals 4

    .line 248
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mSync:Ljava/lang/Object;

    monitor-enter v0

    .line 249
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mDatabasesDir:Ljava/io/File;

    if-nez v1, :cond_0

    .line 250
    new-instance v1, Ljava/io/File;

    invoke-direct {p0}, Lcom/qihoo360/loader2/PluginContext;->getDataDirFile()Ljava/io/File;

    move-result-object v2

    const-string v3, "databases"

    invoke-direct {v1, v2, v3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mDatabasesDir:Ljava/io/File;

    .line 252
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mDatabasesDir:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v1

    const-string v2, "databases"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 253
    new-instance v1, Ljava/io/File;

    const-string v2, "/data/system"

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iput-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mDatabasesDir:Ljava/io/File;

    .line 255
    :cond_1
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mDatabasesDir:Ljava/io/File;

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 256
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private final handleCreateView(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;
    .locals 10

    .line 355
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mIgnores:Ljava/util/HashSet;

    invoke-virtual {v0, p1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    const-string v2, " name="

    const-string v3, "ws001"

    if-eqz v0, :cond_1

    .line 357
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_0

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p2

    invoke-virtual {p2}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result p2

    if-eqz p2, :cond_0

    .line 358
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "layout.cache: ignore plugin="

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, p0, Lcom/qihoo360/loader2/PluginContext;->mPlugin:Ljava/lang/String;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object v1

    .line 364
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mConstructors:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/reflect/Constructor;

    const-string v4, ": Error inflating mobilesafe class "

    const/4 v5, 0x2

    const/4 v6, 0x1

    const/4 v7, 0x0

    if-nez v0, :cond_8

    .line 373
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mNewClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {v0, p1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_2

    goto :goto_0

    .line 378
    :cond_2
    :try_start_1
    const-class v8, Landroid/view/ViewStub;

    if-ne v0, v8, :cond_3

    goto :goto_0

    .line 382
    :cond_3
    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v8

    iget-object v9, p0, Lcom/qihoo360/loader2/PluginContext;->mNewClassLoader:Ljava/lang/ClassLoader;
    :try_end_1
    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_1} :catch_1

    if-eq v8, v9, :cond_4

    :goto_0
    goto :goto_1

    :cond_4
    move v8, v6

    goto :goto_2

    :catch_0
    move-object v0, v1

    :catch_1
    :goto_1
    move v8, v7

    :goto_2
    if-nez v8, :cond_6

    .line 395
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_5

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p2

    invoke-virtual {p2}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result p2

    if-eqz p2, :cond_5

    .line 396
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "layout.cache: new ignore plugin="

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, p0, Lcom/qihoo360/loader2/PluginContext;->mPlugin:Ljava/lang/String;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v3, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 398
    :cond_5
    iget-object p2, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object p2, p2, Lcom/qihoo360/loader2/Loader;->mIgnores:Ljava/util/HashSet;

    invoke-virtual {p2, p1}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    return-object v1

    :cond_6
    :try_start_2
    new-array v1, v5, [Ljava/lang/Class;

    .line 403
    const-class v8, Landroid/content/Context;

    aput-object v8, v1, v7

    const-class v8, Landroid/util/AttributeSet;

    aput-object v8, v1, v6

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    .line 404
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_7

    .line 405
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "layout.cache: new constructor. plugin="

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/qihoo360/loader2/PluginContext;->mPlugin:Ljava/lang/String;

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 407
    :cond_7
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v1, v1, Lcom/qihoo360/loader2/Loader;->mConstructors:Ljava/util/HashMap;

    invoke-virtual {v1, p1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_3

    :catch_2
    move-exception p2

    .line 409
    new-instance v0, Landroid/view/InflateException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p3}, Landroid/util/AttributeSet;->getPositionDescription()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1, p2}, Landroid/view/InflateException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 410
    throw v0

    :cond_8
    :goto_3
    :try_start_3
    new-array v1, v5, [Ljava/lang/Object;

    aput-object p2, v1, v7

    aput-object p3, v1, v6

    .line 416
    invoke-virtual {v0, v1}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 418
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_9

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result v0

    if-eqz v0, :cond_9

    .line 419
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "layout.cache: create view ok. plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mPlugin:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    :cond_9
    return-object p2

    :catch_3
    move-exception p2

    .line 423
    new-instance v0, Landroid/view/InflateException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p3}, Landroid/util/AttributeSet;->getPositionDescription()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1, p2}, Landroid/view/InflateException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 424
    throw v0
.end method

.method private final makeFilename(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;
    .locals 2

    .line 281
    sget-char v0, Ljava/io/File;->separatorChar:C

    invoke-virtual {p2, v0}, Ljava/lang/String;->indexOf(I)I

    move-result v0

    if-gez v0, :cond_0

    .line 282
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1, p2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v0

    .line 284
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "File "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " contains a path separator"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private final setFilePermissionsFromMode(Ljava/lang/String;II)V
    .locals 2

    or-int/lit16 p3, p3, 0x1b0

    .line 308
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 309
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "File "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ": mode=0x"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p2}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ", perms=0x"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p3}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "ws001"

    invoke-static {v0, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p2, -0x1

    .line 311
    invoke-static {p1, p3, p2, p2}, Lcom/qihoo360/loader/utils2/FilePermissionUtils;->setPermissions(Ljava/lang/String;III)I

    return-void
.end method

.method private validateFilePath(Ljava/lang/String;Z)Ljava/io/File;
    .locals 3

    const/4 v0, 0x0

    .line 263
    invoke-virtual {p1, v0}, Ljava/lang/String;->charAt(I)C

    move-result v1

    sget-char v2, Ljava/io/File;->separatorChar:C

    if-ne v1, v2, :cond_0

    .line 264
    sget-char v1, Ljava/io/File;->separatorChar:C

    invoke-virtual {p1, v1}, Ljava/lang/String;->lastIndexOf(I)I

    move-result v1

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 265
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 266
    sget-char v0, Ljava/io/File;->separatorChar:C

    invoke-virtual {p1, v0}, Ljava/lang/String;->lastIndexOf(I)I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    .line 267
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, v1, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    goto :goto_0

    .line 269
    :cond_0
    invoke-direct {p0}, Lcom/qihoo360/loader2/PluginContext;->getDatabasesDir()Ljava/io/File;

    move-result-object v1

    .line 270
    invoke-direct {p0, v1, p1}, Lcom/qihoo360/loader2/PluginContext;->makeFilename(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    :goto_0
    if-eqz p2, :cond_1

    .line 273
    invoke-virtual {v1}, Ljava/io/File;->isDirectory()Z

    move-result p1

    if-nez p1, :cond_1

    invoke-virtual {v1}, Ljava/io/File;->mkdir()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 274
    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p1

    const/16 p2, 0x1f9

    const/4 v1, -0x1

    invoke-static {p1, p2, v1, v1}, Lcom/qihoo360/loader/utils2/FilePermissionUtils;->setPermissions(Ljava/lang/String;III)I

    :cond_1
    return-object v0
.end method


# virtual methods
.method public bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z
    .locals 2

    .line 535
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v0, v0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v0

    const/4 v1, 0x2

    if-gt v0, v1, :cond_0

    .line 537
    invoke-super {p0, p1, p2, p3}, Landroid/view/ContextThemeWrapper;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result p1

    return p1

    :cond_0
    const/4 v0, 0x1

    .line 540
    :try_start_0
    invoke-static {p0, p1, p2, p3, v0}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->bindService(Landroid/content/Context;Landroid/content/Intent;Landroid/content/ServiceConnection;IZ)Z

    move-result p1
    :try_end_0
    .catch Lcom/qihoo360/replugin/component/utils/PluginClientHelper$ShouldCallSystem; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    .line 543
    :catch_0
    invoke-super {p0, p1, p2, p3}, Landroid/view/ContextThemeWrapper;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result p1

    return p1
.end method

.method public deleteFile(Ljava/lang/String;)Z
    .locals 1

    .line 172
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginContext;->getFilesDir()Ljava/io/File;

    move-result-object v0

    invoke-direct {p0, v0, p1}, Lcom/qihoo360/loader2/PluginContext;->makeFilename(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    .line 173
    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    move-result p1

    return p1
.end method

.method public getApplicationContext()Landroid/content/Context;
    .locals 2

    .line 442
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v0, v0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v0

    const/4 v1, 0x2

    if-gt v0, v1, :cond_0

    .line 444
    invoke-super {p0}, Landroid/view/ContextThemeWrapper;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    return-object v0

    .line 450
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v0, v0, Lcom/qihoo360/loader2/Plugin;->mApplicationClient:Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

    if-nez v0, :cond_1

    return-object p0

    .line 453
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v0, v0, Lcom/qihoo360/loader2/Plugin;->mApplicationClient:Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->getObj()Landroid/app/Application;

    move-result-object v0

    return-object v0
.end method

.method public getApplicationInfo()Landroid/content/pm/ApplicationInfo;
    .locals 2

    .line 577
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v0, v0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v0

    const/4 v1, 0x2

    if-gt v0, v1, :cond_0

    .line 579
    invoke-super {p0}, Landroid/view/ContextThemeWrapper;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    return-object v0

    .line 581
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/component/ComponentList;->getApplication()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    return-object v0
.end method

.method public getAssets()Landroid/content/res/AssetManager;
    .locals 1

    .line 116
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mNewResources:Landroid/content/res/Resources;

    if-eqz v0, :cond_0

    .line 117
    invoke-virtual {v0}, Landroid/content/res/Resources;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    return-object v0

    .line 119
    :cond_0
    invoke-super {p0}, Landroid/view/ContextThemeWrapper;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    return-object v0
.end method

.method public getCacheDir()Ljava/io/File;
    .locals 4

    .line 201
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mSync:Ljava/lang/Object;

    monitor-enter v0

    .line 202
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mCacheDir:Ljava/io/File;

    if-nez v1, :cond_0

    .line 203
    new-instance v1, Ljava/io/File;

    invoke-direct {p0}, Lcom/qihoo360/loader2/PluginContext;->getDataDirFile()Ljava/io/File;

    move-result-object v2

    const-string v3, "cache"

    invoke-direct {v1, v2, v3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mCacheDir:Ljava/io/File;

    .line 205
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mCacheDir:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_3

    .line 206
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mCacheDir:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->mkdirs()Z

    move-result v1

    if-nez v1, :cond_2

    .line 207
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mCacheDir:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 209
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mCacheDir:Ljava/io/File;

    monitor-exit v0

    return-object v1

    :cond_1
    const-string v1, "ws001"

    .line 212
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Unable to create cache directory "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/loader2/PluginContext;->mCacheDir:Ljava/io/File;

    invoke-virtual {v3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v1, 0x0

    .line 214
    monitor-exit v0

    return-object v1

    .line 216
    :cond_2
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mCacheDir:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x1f9

    const/4 v3, -0x1

    invoke-static {v1, v2, v3, v3}, Lcom/qihoo360/loader/utils2/FilePermissionUtils;->setPermissions(Ljava/lang/String;III)I

    .line 218
    :cond_3
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 219
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mCacheDir:Ljava/io/File;

    return-object v0

    :catchall_0
    move-exception v1

    .line 218
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method public getClassLoader()Ljava/lang/ClassLoader;
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mNewClassLoader:Ljava/lang/ClassLoader;

    if-eqz v0, :cond_0

    return-object v0

    .line 103
    :cond_0
    invoke-super {p0}, Landroid/view/ContextThemeWrapper;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    return-object v0
.end method

.method public getDir(Ljava/lang/String;I)Ljava/io/File;
    .locals 2

    .line 238
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "app_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 239
    invoke-direct {p0}, Lcom/qihoo360/loader2/PluginContext;->getDataDirFile()Ljava/io/File;

    move-result-object v0

    invoke-direct {p0, v0, p1}, Lcom/qihoo360/loader2/PluginContext;->makeFilename(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    .line 240
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    .line 241
    invoke-virtual {p1}, Ljava/io/File;->mkdir()Z

    .line 242
    invoke-virtual {p1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x1f9

    invoke-direct {p0, v0, p2, v1}, Lcom/qihoo360/loader2/PluginContext;->setFilePermissionsFromMode(Ljava/lang/String;II)V

    :cond_0
    return-object p1
.end method

.method public getFileStreamPath(Ljava/lang/String;)Ljava/io/File;
    .locals 1

    .line 233
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginContext;->getFilesDir()Ljava/io/File;

    move-result-object v0

    invoke-direct {p0, v0, p1}, Lcom/qihoo360/loader2/PluginContext;->makeFilename(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    return-object p1
.end method

.method public getFilesDir()Ljava/io/File;
    .locals 4

    .line 178
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mSync:Ljava/lang/Object;

    monitor-enter v0

    .line 179
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mFilesDir:Ljava/io/File;

    if-nez v1, :cond_0

    .line 180
    new-instance v1, Ljava/io/File;

    invoke-direct {p0}, Lcom/qihoo360/loader2/PluginContext;->getDataDirFile()Ljava/io/File;

    move-result-object v2

    const-string v3, "files"

    invoke-direct {v1, v2, v3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mFilesDir:Ljava/io/File;

    .line 182
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mFilesDir:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_3

    .line 183
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mFilesDir:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->mkdirs()Z

    move-result v1

    if-nez v1, :cond_2

    .line 184
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mFilesDir:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 186
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mFilesDir:Ljava/io/File;

    monitor-exit v0

    return-object v1

    :cond_1
    const-string v1, "ws001"

    .line 189
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Unable to create files directory "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/loader2/PluginContext;->mFilesDir:Ljava/io/File;

    invoke-virtual {v3}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v1, 0x0

    .line 191
    monitor-exit v0

    return-object v1

    .line 193
    :cond_2
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mFilesDir:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x1f9

    const/4 v3, -0x1

    invoke-static {v1, v2, v3, v3}, Lcom/qihoo360/loader/utils2/FilePermissionUtils;->setPermissions(Ljava/lang/String;III)I

    .line 195
    :cond_3
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mFilesDir:Ljava/io/File;

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 196
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public getPackageCodePath()Ljava/lang/String;
    .locals 2

    .line 567
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v0, v0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v0

    const/4 v1, 0x2

    if-gt v0, v1, :cond_0

    .line 569
    invoke-super {p0}, Landroid/view/ContextThemeWrapper;->getPackageCodePath()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 572
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mPath:Ljava/lang/String;

    return-object v0
.end method

.method public getPackageName()Ljava/lang/String;
    .locals 1

    .line 432
    invoke-super {p0}, Landroid/view/ContextThemeWrapper;->getPackageName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getResources()Landroid/content/res/Resources;
    .locals 1

    .line 108
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mNewResources:Landroid/content/res/Resources;

    if-eqz v0, :cond_0

    return-object v0

    .line 111
    :cond_0
    invoke-super {p0}, Landroid/view/ContextThemeWrapper;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    return-object v0
.end method

.method public getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;
    .locals 2

    .line 140
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "plugin_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 141
    invoke-super {p0, p1, p2}, Landroid/view/ContextThemeWrapper;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    return-object p1
.end method

.method public getSystemService(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    const-string v0, "layout_inflater"

    .line 124
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 125
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mInflater:Landroid/view/LayoutInflater;

    if-nez v0, :cond_0

    .line 126
    invoke-super {p0, p1}, Landroid/view/ContextThemeWrapper;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/view/LayoutInflater;

    .line 128
    invoke-virtual {p1, p0}, Landroid/view/LayoutInflater;->cloneInContext(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/loader2/PluginContext;->mInflater:Landroid/view/LayoutInflater;

    .line 129
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mFactory:Landroid/view/LayoutInflater$Factory;

    invoke-virtual {p1, v0}, Landroid/view/LayoutInflater;->setFactory(Landroid/view/LayoutInflater$Factory;)V

    .line 131
    iget-object p1, p0, Lcom/qihoo360/loader2/PluginContext;->mInflater:Landroid/view/LayoutInflater;

    invoke-virtual {p1, p0}, Landroid/view/LayoutInflater;->cloneInContext(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/loader2/PluginContext;->mInflater:Landroid/view/LayoutInflater;

    .line 133
    :cond_0
    iget-object p1, p0, Lcom/qihoo360/loader2/PluginContext;->mInflater:Landroid/view/LayoutInflater;

    return-object p1

    .line 135
    :cond_1
    invoke-super {p0, p1}, Landroid/view/ContextThemeWrapper;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public openFileInput(Ljava/lang/String;)Ljava/io/FileInputStream;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/FileNotFoundException;
        }
    .end annotation

    .line 146
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginContext;->getFilesDir()Ljava/io/File;

    move-result-object v0

    invoke-direct {p0, v0, p1}, Lcom/qihoo360/loader2/PluginContext;->makeFilename(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    .line 147
    new-instance v0, Ljava/io/FileInputStream;

    invoke-direct {v0, p1}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    return-object v0
.end method

.method public openFileOutput(Ljava/lang/String;I)Ljava/io/FileOutputStream;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/FileNotFoundException;
        }
    .end annotation

    const v0, 0x8000

    and-int/2addr v0, p2

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    move v0, v1

    .line 153
    :goto_0
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginContext;->getFilesDir()Ljava/io/File;

    move-result-object v2

    invoke-direct {p0, v2, p1}, Lcom/qihoo360/loader2/PluginContext;->makeFilename(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    .line 155
    :try_start_0
    new-instance v2, Ljava/io/FileOutputStream;

    invoke-direct {v2, p1, v0}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;Z)V

    .line 156
    invoke-virtual {p1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v3, p2, v1}, Lcom/qihoo360/loader2/PluginContext;->setFilePermissionsFromMode(Ljava/lang/String;II)V
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v2

    .line 162
    :catch_0
    invoke-virtual {p1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v2

    .line 163
    invoke-virtual {v2}, Ljava/io/File;->mkdir()Z

    .line 164
    invoke-virtual {v2}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x1f8

    const/4 v4, -0x1

    invoke-static {v2, v3, v4, v4}, Lcom/qihoo360/loader/utils2/FilePermissionUtils;->setPermissions(Ljava/lang/String;III)I

    .line 165
    new-instance v2, Ljava/io/FileOutputStream;

    invoke-direct {v2, p1, v0}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;Z)V

    .line 166
    invoke-virtual {p1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1, p2, v1}, Lcom/qihoo360/loader2/PluginContext;->setFilePermissionsFromMode(Ljava/lang/String;II)V

    return-object v2
.end method

.method public startActivity(Landroid/content/Intent;)V
    .locals 1

    .line 467
    invoke-static {p0, p1}, Lcom/qihoo360/i/Factory2;->startActivity(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 468
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mContextInjector:Lcom/qihoo360/replugin/ContextInjector;

    if-eqz v0, :cond_0

    .line 469
    invoke-interface {v0, p1}, Lcom/qihoo360/replugin/ContextInjector;->startActivityBefore(Landroid/content/Intent;)V

    .line 472
    :cond_0
    invoke-super {p0, p1}, Landroid/view/ContextThemeWrapper;->startActivity(Landroid/content/Intent;)V

    .line 474
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mContextInjector:Lcom/qihoo360/replugin/ContextInjector;

    if-eqz v0, :cond_1

    .line 475
    invoke-interface {v0, p1}, Lcom/qihoo360/replugin/ContextInjector;->startActivityAfter(Landroid/content/Intent;)V

    :cond_1
    return-void
.end method

.method public startActivity(Landroid/content/Intent;Landroid/os/Bundle;)V
    .locals 1

    .line 484
    invoke-static {p0, p1}, Lcom/qihoo360/i/Factory2;->startActivity(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 485
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mContextInjector:Lcom/qihoo360/replugin/ContextInjector;

    if-eqz v0, :cond_0

    .line 486
    invoke-interface {v0, p1, p2}, Lcom/qihoo360/replugin/ContextInjector;->startActivityBefore(Landroid/content/Intent;Landroid/os/Bundle;)V

    .line 489
    :cond_0
    invoke-super {p0, p1, p2}, Landroid/view/ContextThemeWrapper;->startActivity(Landroid/content/Intent;Landroid/os/Bundle;)V

    .line 491
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mContextInjector:Lcom/qihoo360/replugin/ContextInjector;

    if-eqz v0, :cond_1

    .line 492
    invoke-interface {v0, p1, p2}, Lcom/qihoo360/replugin/ContextInjector;->startActivityAfter(Landroid/content/Intent;Landroid/os/Bundle;)V

    :cond_1
    return-void
.end method

.method public startService(Landroid/content/Intent;)Landroid/content/ComponentName;
    .locals 2

    .line 499
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mContextInjector:Lcom/qihoo360/replugin/ContextInjector;

    if-eqz v0, :cond_0

    .line 500
    invoke-interface {v0, p1}, Lcom/qihoo360/replugin/ContextInjector;->startServiceBefore(Landroid/content/Intent;)V

    .line 503
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v0, v0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v0

    const/4 v1, 0x2

    if-gt v0, v1, :cond_1

    .line 505
    invoke-super {p0, p1}, Landroid/view/ContextThemeWrapper;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    move-result-object p1

    return-object p1

    :cond_1
    const/4 v0, 0x1

    .line 508
    :try_start_0
    invoke-static {p0, p1, v0}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->startService(Landroid/content/Context;Landroid/content/Intent;Z)Landroid/content/ComponentName;

    move-result-object v0
    :try_end_0
    .catch Lcom/qihoo360/replugin/component/utils/PluginClientHelper$ShouldCallSystem; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 513
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mContextInjector:Lcom/qihoo360/replugin/ContextInjector;

    if-eqz v1, :cond_2

    .line 514
    invoke-interface {v1, p1}, Lcom/qihoo360/replugin/ContextInjector;->startServiceAfter(Landroid/content/Intent;)V

    :cond_2
    return-object v0

    :catchall_0
    move-exception v0

    goto :goto_0

    .line 511
    :catch_0
    :try_start_1
    invoke-super {p0, p1}, Landroid/view/ContextThemeWrapper;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 513
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mContextInjector:Lcom/qihoo360/replugin/ContextInjector;

    if-eqz v1, :cond_3

    .line 514
    invoke-interface {v1, p1}, Lcom/qihoo360/replugin/ContextInjector;->startServiceAfter(Landroid/content/Intent;)V

    :cond_3
    return-object v0

    .line 513
    :goto_0
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginContext;->mContextInjector:Lcom/qihoo360/replugin/ContextInjector;

    if-eqz v1, :cond_4

    .line 514
    invoke-interface {v1, p1}, Lcom/qihoo360/replugin/ContextInjector;->startServiceAfter(Landroid/content/Intent;)V

    :cond_4
    throw v0
.end method

.method public stopService(Landroid/content/Intent;)Z
    .locals 2

    .line 521
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v0, v0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v0

    const/4 v1, 0x2

    if-gt v0, v1, :cond_0

    .line 523
    invoke-super {p0, p1}, Landroid/view/ContextThemeWrapper;->stopService(Landroid/content/Intent;)Z

    move-result p1

    return p1

    :cond_0
    const/4 v0, 0x1

    .line 526
    :try_start_0
    invoke-static {p0, p1, v0}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->stopService(Landroid/content/Context;Landroid/content/Intent;Z)Z

    move-result p1
    :try_end_0
    .catch Lcom/qihoo360/replugin/component/utils/PluginClientHelper$ShouldCallSystem; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    .line 529
    :catch_0
    invoke-super {p0, p1}, Landroid/view/ContextThemeWrapper;->stopService(Landroid/content/Intent;)Z

    move-result p1

    return p1
.end method

.method public unbindService(Landroid/content/ServiceConnection;)V
    .locals 2

    .line 549
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginContext;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mPluginObj:Lcom/qihoo360/loader2/Plugin;

    iget-object v0, v0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v0

    const/4 v1, 0x2

    if-gt v0, v1, :cond_0

    .line 551
    invoke-super {p0, p1}, Landroid/view/ContextThemeWrapper;->unbindService(Landroid/content/ServiceConnection;)V

    return-void

    .line 556
    :cond_0
    :try_start_0
    invoke-super {p0, p1}, Landroid/view/ContextThemeWrapper;->unbindService(Landroid/content/ServiceConnection;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    const/4 v0, 0x0

    .line 562
    invoke-static {p0, p1, v0}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->unbindService(Landroid/content/Context;Landroid/content/ServiceConnection;Z)Z

    return-void
.end method
