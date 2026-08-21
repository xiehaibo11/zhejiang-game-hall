.class public Lcom/qihoo360/replugin/component/app/PluginApplicationClient;
.super Ljava/lang/Object;
.source "PluginApplicationClient.java"


# static fields
.field private static final LOCKER:[B

.field private static sAttachBaseContextMethod:Ljava/lang/reflect/Method;

.field private static volatile sInited:Z

.field private static sRunningClients:Lcom/qihoo360/replugin/utils/basic/ArrayMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/qihoo360/replugin/utils/basic/ArrayMap<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/qihoo360/replugin/component/app/PluginApplicationClient;",
            ">;>;"
        }
    .end annotation
.end field


# instance fields
.field private mApplication:Landroid/app/Application;

.field private mApplicationConstructor:Ljava/lang/reflect/Constructor;

.field private final mApplicationInfo:Landroid/content/pm/ApplicationInfo;

.field private final mPlgClassLoader:Ljava/lang/ClassLoader;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [B

    .line 50
    sput-object v0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->LOCKER:[B

    .line 60
    new-instance v0, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-direct {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;-><init>()V

    sput-object v0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->sRunningClients:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    return-void
.end method

.method private constructor <init>(Ljava/lang/ClassLoader;Lcom/qihoo360/replugin/component/ComponentList;Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 0

    .line 185
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 186
    iput-object p1, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mPlgClassLoader:Ljava/lang/ClassLoader;

    .line 187
    invoke-virtual {p2}, Lcom/qihoo360/replugin/component/ComponentList;->getApplication()Landroid/content/pm/ApplicationInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplicationInfo:Landroid/content/pm/ApplicationInfo;

    if-eqz p1, :cond_0

    .line 190
    :try_start_0
    iget-object p1, p1, Landroid/content/pm/ApplicationInfo;->className:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 191
    invoke-direct {p0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->initCustom()Z

    .line 194
    :cond_0
    invoke-direct {p0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->isValid()Z

    move-result p1

    if-nez p1, :cond_2

    invoke-virtual {p3}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result p1

    const/4 p2, 0x3

    if-lt p1, p2, :cond_2

    .line 195
    new-instance p1, Landroid/app/Application;

    invoke-direct {p1}, Landroid/app/Application;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplication:Landroid/app/Application;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 199
    sget-boolean p2, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 200
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 202
    :cond_1
    new-instance p1, Landroid/app/Application;

    invoke-direct {p1}, Landroid/app/Application;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplication:Landroid/app/Application;

    :cond_2
    :goto_0
    return-void
.end method

.method public static getOrCreate(Ljava/lang/String;Ljava/lang/ClassLoader;Lcom/qihoo360/replugin/component/ComponentList;Lcom/qihoo360/replugin/model/PluginInfo;)Lcom/qihoo360/replugin/component/app/PluginApplicationClient;
    .locals 4

    .line 73
    invoke-virtual {p3}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v0

    const-string v1, "ws001"

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-gt v0, v3, :cond_1

    .line 75
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    .line 76
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "PAC.create(): FrameworkVer less than 1. cl="

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object v2

    .line 80
    :cond_1
    invoke-static {p0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->getRunning(Ljava/lang/String;)Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 83
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_2

    .line 84
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "PAC.create(): Already Loaded."

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-object v0

    .line 89
    :cond_3
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_4

    .line 90
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PAC.create(): Create and load Application. cl="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 95
    :cond_4
    :try_start_0
    invoke-static {}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->initMethods()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 103
    new-instance v0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

    invoke-direct {v0, p1, p2, p3}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;-><init>(Ljava/lang/ClassLoader;Lcom/qihoo360/replugin/component/ComponentList;Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 104
    invoke-direct {v0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->isValid()Z

    move-result p1

    if-eqz p1, :cond_6

    .line 105
    sget-object p1, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->sRunningClients:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    new-instance p2, Ljava/lang/ref/WeakReference;

    invoke-direct {p2, v0}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {p1, p0, p2}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 106
    sget p0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p1, 0xe

    if-lt p0, p1, :cond_5

    .line 107
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object p0

    new-instance p1, Lcom/qihoo360/replugin/component/app/PluginApplicationClient$1;

    invoke-direct {p1, v0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient$1;-><init>(Lcom/qihoo360/replugin/component/app/PluginApplicationClient;)V

    invoke-virtual {p0, p1}, Landroid/content/Context;->registerComponentCallbacks(Landroid/content/ComponentCallbacks;)V

    :cond_5
    return-object v0

    :cond_6
    return-object v2

    :catchall_0
    move-exception p0

    .line 97
    sget-boolean p1, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz p1, :cond_7

    .line 98
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_7
    return-object v2
.end method

.method public static getRunning(Ljava/lang/String;)Lcom/qihoo360/replugin/component/app/PluginApplicationClient;
    .locals 1

    .line 162
    sget-object v0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->sRunningClients:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0, p0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/ref/WeakReference;

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 166
    :cond_0
    invoke-virtual {p0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

    return-object p0
.end method

.method private initCustom()Z
    .locals 3

    const/4 v0, 0x0

    .line 258
    :try_start_0
    invoke-direct {p0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->initCustomConstructor()V

    .line 259
    invoke-direct {p0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->initCustomObject()V

    .line 262
    iget-object v1, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplication:Landroid/app/Application;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0

    :catchall_0
    move-exception v1

    .line 265
    sget-boolean v2, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v2, :cond_1

    .line 266
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    return v0
.end method

.method private initCustomConstructor()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/ClassNotFoundException;,
            Ljava/lang/NoSuchMethodException;
        }
    .end annotation

    .line 273
    iget-object v0, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->className:Ljava/lang/String;

    .line 274
    iget-object v1, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mPlgClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {v1, v0}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Class;

    .line 275
    invoke-virtual {v0, v1}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplicationConstructor:Ljava/lang/reflect/Constructor;

    return-void
.end method

.method private initCustomObject()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/IllegalAccessException;,
            Ljava/lang/reflect/InvocationTargetException;,
            Ljava/lang/InstantiationException;
        }
    .end annotation

    .line 279
    iget-object v0, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplicationConstructor:Ljava/lang/reflect/Constructor;

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {v0, v1}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    .line 280
    instance-of v1, v0, Landroid/app/Application;

    if-eqz v1, :cond_0

    .line 281
    check-cast v0, Landroid/app/Application;

    iput-object v0, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplication:Landroid/app/Application;

    :cond_0
    return-void
.end method

.method private static initMethods()V
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/NoSuchMethodException;
        }
    .end annotation

    .line 170
    sget-boolean v0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->sInited:Z

    if-eqz v0, :cond_0

    return-void

    .line 173
    :cond_0
    sget-object v0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->LOCKER:[B

    monitor-enter v0

    .line 174
    :try_start_0
    sget-boolean v1, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->sInited:Z

    if-eqz v1, :cond_1

    .line 175
    monitor-exit v0

    return-void

    .line 179
    :cond_1
    const-class v1, Landroid/app/Application;

    const-string v2, "attach"

    const/4 v3, 0x1

    new-array v4, v3, [Ljava/lang/Class;

    const/4 v5, 0x0

    const-class v6, Landroid/content/Context;

    aput-object v6, v4, v5

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    sput-object v1, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->sAttachBaseContextMethod:Ljava/lang/reflect/Method;

    .line 180
    invoke-virtual {v1, v3}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    .line 181
    sput-boolean v3, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->sInited:Z

    .line 182
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private isValid()Z
    .locals 1

    .line 286
    iget-object v0, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplication:Landroid/app/Application;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static notifyOnConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 2

    .line 152
    sget-object v0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->sRunningClients:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    .line 153
    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

    if-nez v1, :cond_0

    goto :goto_0

    .line 157
    :cond_0
    invoke-virtual {v1, p0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->callOnConfigurationChanged(Landroid/content/res/Configuration;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static notifyOnLowMemory()V
    .locals 2

    .line 132
    sget-object v0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->sRunningClients:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    .line 133
    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

    if-nez v1, :cond_0

    goto :goto_0

    .line 137
    :cond_0
    invoke-virtual {v1}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->callOnLowMemory()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static notifyOnTrimMemory(I)V
    .locals 2

    .line 142
    sget-object v0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->sRunningClients:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    .line 143
    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;

    if-nez v1, :cond_0

    goto :goto_0

    .line 147
    :cond_0
    invoke-virtual {v1, p0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->callOnTrimMemory(I)V

    goto :goto_0

    :cond_1
    return-void
.end method


# virtual methods
.method public callAttachBaseContext(Landroid/content/Context;)V
    .locals 4

    .line 207
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 208
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PAC.callAttachBaseContext(): Call attachBaseContext(), cl="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mPlgClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 211
    :cond_0
    :try_start_0
    sget-object v0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->sAttachBaseContextMethod:Ljava/lang/reflect/Method;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    .line 212
    sget-object v0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->sAttachBaseContextMethod:Ljava/lang/reflect/Method;

    iget-object v2, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplication:Landroid/app/Application;

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v1, v3

    invoke-virtual {v0, v2, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 214
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v0, :cond_1

    .line 215
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public callOnConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 2

    .line 246
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 247
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PAC.callOnLowMemory(): Call onConfigurationChanged(), cl="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mPlgClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "; nc="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 249
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplication:Landroid/app/Application;

    invoke-virtual {v0, p1}, Landroid/app/Application;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public callOnCreate()V
    .locals 2

    .line 221
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 222
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PAC.callOnCreate(): Call onCreate(), cl="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mPlgClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 224
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplication:Landroid/app/Application;

    invoke-virtual {v0}, Landroid/app/Application;->onCreate()V

    return-void
.end method

.method public callOnLowMemory()V
    .locals 2

    .line 228
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 229
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PAC.callOnLowMemory(): Call onLowMemory(), cl="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mPlgClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 231
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplication:Landroid/app/Application;

    invoke-virtual {v0}, Landroid/app/Application;->onLowMemory()V

    return-void
.end method

.method public callOnTrimMemory(I)V
    .locals 2

    .line 235
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xe

    if-ge v0, v1, :cond_0

    return-void

    .line 239
    :cond_0
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 240
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PAC.callOnLowMemory(): Call onTrimMemory(), cl="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mPlgClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "; lv="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 242
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplication:Landroid/app/Application;

    invoke-virtual {v0, p1}, Landroid/app/Application;->onTrimMemory(I)V

    return-void
.end method

.method public getObj()Landroid/app/Application;
    .locals 1

    .line 253
    iget-object v0, p0, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->mApplication:Landroid/app/Application;

    return-object v0
.end method
