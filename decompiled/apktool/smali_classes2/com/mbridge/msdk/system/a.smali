.class public final Lcom/mbridge/msdk/system/a;
.super Ljava/lang/Object;
.source "MBridgeSDKImpl.java"

# interfaces
.implements Lcom/mbridge/msdk/MBridgeSDK;


# static fields
.field public static a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field public b:Z

.field private volatile c:Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;

.field private volatile d:Landroid/content/Context;

.field private e:Z

.field private f:Landroid/content/BroadcastReceiver;

.field private g:Z

.field private h:Landroid/content/BroadcastReceiver;

.field private i:Lcom/mbridge/msdk/out/SDKInitStatusListener;

.field private j:Z

.field private k:Z

.field private final l:Landroid/app/Application$ActivityLifecycleCallbacks;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 66
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 71
    sget-object v0, Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;->INITIAL:Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;

    iput-object v0, p0, Lcom/mbridge/msdk/system/a;->c:Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;

    const/4 v0, 0x1

    .line 75
    iput-boolean v0, p0, Lcom/mbridge/msdk/system/a;->b:Z

    const/4 v0, 0x0

    .line 81
    iput-boolean v0, p0, Lcom/mbridge/msdk/system/a;->e:Z

    const/4 v1, 0x0

    .line 82
    iput-object v1, p0, Lcom/mbridge/msdk/system/a;->f:Landroid/content/BroadcastReceiver;

    .line 84
    iput-boolean v0, p0, Lcom/mbridge/msdk/system/a;->g:Z

    .line 85
    iput-object v1, p0, Lcom/mbridge/msdk/system/a;->h:Landroid/content/BroadcastReceiver;

    .line 88
    iput-boolean v0, p0, Lcom/mbridge/msdk/system/a;->j:Z

    .line 89
    iput-boolean v0, p0, Lcom/mbridge/msdk/system/a;->k:Z

    .line 91
    new-instance v0, Lcom/mbridge/msdk/system/a$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/system/a$1;-><init>(Lcom/mbridge/msdk/system/a;)V

    iput-object v0, p0, Lcom/mbridge/msdk/system/a;->l:Landroid/app/Application$ActivityLifecycleCallbacks;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/system/a;)Landroid/content/Context;
    .locals 0

    .line 66
    iget-object p0, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    return-object p0
.end method

.method private a()V
    .locals 7

    const-string v0, "com.mbridge.msdk"

    const/4 v1, 0x0

    .line 250
    iput-boolean v1, p0, Lcom/mbridge/msdk/system/a;->j:Z

    const/4 v2, 0x1

    .line 259
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v3

    sget-object v4, Lcom/mbridge/msdk/system/a;->a:Ljava/util/Map;

    iget-object v5, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    invoke-virtual {v3, v4, v5}, Lcom/mbridge/msdk/foundation/controller/b;->a(Ljava/util/Map;Landroid/content/Context;)V

    .line 260
    sget-object v3, Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;->COMPLETED:Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;

    iput-object v3, p0, Lcom/mbridge/msdk/system/a;->c:Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;

    .line 262
    new-instance v3, Ljava/lang/Thread;

    new-instance v4, Lcom/mbridge/msdk/system/a$2;

    invoke-direct {v4, p0}, Lcom/mbridge/msdk/system/a$2;-><init>(Lcom/mbridge/msdk/system/a;)V

    invoke-direct {v3, v4}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 285
    invoke-virtual {v3}, Ljava/lang/Thread;->start()V

    .line 287
    new-instance v3, Ljava/lang/Thread;

    new-instance v4, Lcom/mbridge/msdk/system/a$3;

    invoke-direct {v4, p0}, Lcom/mbridge/msdk/system/a$3;-><init>(Lcom/mbridge/msdk/system/a;)V

    invoke-direct {v3, v4}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 294
    invoke-virtual {v3}, Ljava/lang/Thread;->start()V

    .line 297
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/same/net/f/d;->c()V

    .line 1404
    new-instance v3, Landroid/os/HandlerThread;

    const-string v4, "mb_db_thread"

    invoke-direct {v3, v4}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    .line 1405
    invoke-virtual {v3}, Landroid/os/HandlerThread;->start()V

    .line 1406
    new-instance v4, Landroid/os/Handler;

    invoke-virtual {v3}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v3

    invoke-direct {v4, v3}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 1408
    new-instance v3, Lcom/mbridge/msdk/foundation/download/MBDownloadConfig$Builder;

    invoke-direct {v3}, Lcom/mbridge/msdk/foundation/download/MBDownloadConfig$Builder;-><init>()V

    .line 1409
    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/foundation/download/MBDownloadConfig$Builder;->setDatabaseHandler(Landroid/os/Handler;)Lcom/mbridge/msdk/foundation/download/MBDownloadConfig$Builder;

    .line 1411
    new-instance v4, Lcom/mbridge/msdk/system/a$5;

    invoke-direct {v4, p0}, Lcom/mbridge/msdk/system/a$5;-><init>(Lcom/mbridge/msdk/system/a;)V

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/foundation/download/MBDownloadConfig$Builder;->setDatabaseOpenHelper(Lcom/mbridge/msdk/foundation/download/database/IDatabaseOpenHelper;)Lcom/mbridge/msdk/foundation/download/MBDownloadConfig$Builder;

    .line 1423
    new-instance v4, Lcom/mbridge/msdk/system/a$6;

    invoke-direct {v4, p0}, Lcom/mbridge/msdk/system/a$6;-><init>(Lcom/mbridge/msdk/system/a;)V

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/foundation/download/MBDownloadConfig$Builder;->setLogger(Lcom/mbridge/msdk/foundation/download/utils/ILogger;)Lcom/mbridge/msdk/foundation/download/MBDownloadConfig$Builder;

    .line 1434
    new-instance v4, Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig$Builder;

    invoke-direct {v4}, Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig$Builder;-><init>()V

    const-wide/16 v5, 0x64

    invoke-virtual {v4, v5, v6}, Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig$Builder;->setMaxStorageSpace(J)Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig$Builder;

    move-result-object v4

    const-wide/32 v5, 0xf731400

    invoke-virtual {v4, v5, v6}, Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig$Builder;->setMaxStorageTime(J)Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig$Builder;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig$Builder;->build()Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig;

    move-result-object v4

    .line 1435
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/MBDownloadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/MBDownloadManager;

    move-result-object v5

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v6

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/download/MBDownloadConfig$Builder;->build()Lcom/mbridge/msdk/foundation/download/MBDownloadConfig;

    move-result-object v3

    invoke-virtual {v5, v6, v3, v4}, Lcom/mbridge/msdk/foundation/download/MBDownloadManager;->initialize(Landroid/content/Context;Lcom/mbridge/msdk/foundation/download/MBDownloadConfig;Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig;)V

    .line 301
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/same/report/b;->b()V

    .line 303
    iget-object v3, p0, Lcom/mbridge/msdk/system/a;->i:Lcom/mbridge/msdk/out/SDKInitStatusListener;

    if-eqz v3, :cond_0

    iget-boolean v3, p0, Lcom/mbridge/msdk/system/a;->j:Z

    if-nez v3, :cond_0

    .line 304
    iput-boolean v2, p0, Lcom/mbridge/msdk/system/a;->j:Z

    .line 305
    iget-object v3, p0, Lcom/mbridge/msdk/system/a;->i:Lcom/mbridge/msdk/out/SDKInitStatusListener;

    invoke-interface {v3}, Lcom/mbridge/msdk/out/SDKInitStatusListener;->onInitSuccess()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3

    .line 309
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/o;->a()Lcom/mbridge/msdk/foundation/tools/o;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/foundation/tools/o;->a(Landroid/content/Context;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v3

    :try_start_2
    const-string v4, "INIT"

    .line 311
    invoke-static {v0, v4, v3}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3

    .line 2343
    :goto_0
    :try_start_3
    new-instance v3, Lcom/mbridge/msdk/system/a$4;

    invoke-direct {v3, p0}, Lcom/mbridge/msdk/system/a$4;-><init>(Lcom/mbridge/msdk/system/a;)V

    .line 318
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v4

    invoke-virtual {v4, v3}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    .line 323
    :catch_1
    :try_start_4
    iget-object v3, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    instance-of v3, v3, Landroid/app/Application;

    if-eqz v3, :cond_3

    .line 324
    iget-object v3, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    check-cast v3, Landroid/app/Application;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    .line 2590
    :try_start_5
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v4

    const-string v5, "c_r_a_l_c"

    .line 2591
    invoke-virtual {v4, v5, v1}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;I)I

    move-result v4
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2

    if-nez v4, :cond_1

    goto :goto_1

    :catch_2
    move-exception v1

    .line 2594
    :try_start_6
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    move v1, v2

    :cond_1
    if-eqz v3, :cond_3

    if-eqz v1, :cond_3

    .line 2598
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "registerActivityLifecycleListener:"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2599
    iget-object v1, p0, Lcom/mbridge/msdk/system/a;->l:Landroid/app/Application$ActivityLifecycleCallbacks;

    invoke-virtual {v3, v1}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    .line 2600
    iput-boolean v2, p0, Lcom/mbridge/msdk/system/a;->k:Z
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3

    goto :goto_2

    :catch_3
    move-exception v1

    .line 327
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_2

    const-string v3, "\u65e0\u6cd5\u521d\u59cb\u5316MMSDK"

    .line 328
    invoke-static {v0, v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 329
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 332
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/system/a;->i:Lcom/mbridge/msdk/out/SDKInitStatusListener;

    if-eqz v0, :cond_3

    iget-boolean v3, p0, Lcom/mbridge/msdk/system/a;->j:Z

    if-nez v3, :cond_3

    .line 333
    iput-boolean v2, p0, Lcom/mbridge/msdk/system/a;->j:Z

    .line 334
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/out/SDKInitStatusListener;->onInitFail(Ljava/lang/String;)V

    :cond_3
    :goto_2
    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 1

    .line 645
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    if-eqz p1, :cond_0

    .line 648
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/controller/a;->b(Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 224
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    .line 225
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    const/4 v2, 0x2

    .line 224
    invoke-virtual {v1, p1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 226
    iget-object v1, p1, Landroid/content/pm/PackageInfo;->receivers:[Landroid/content/pm/ActivityInfo;

    if-eqz v1, :cond_1

    .line 227
    iget-object p1, p1, Landroid/content/pm/PackageInfo;->receivers:[Landroid/content/pm/ActivityInfo;

    array-length v1, p1

    move v2, v0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, p1, v2

    if-eqz v3, :cond_0

    .line 228
    iget-object v3, v3, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v3, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 239
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 240
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_1

    :catch_1
    move-exception p1

    .line 235
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 236
    invoke-virtual {p1}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    :cond_1
    :goto_1
    return v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/system/a;Landroid/content/Context;)Z
    .locals 1

    const/4 p0, 0x0

    if-eqz p1, :cond_0

    .line 5147
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    move-result p1

    goto :goto_0

    :cond_0
    move p1, p0

    :goto_0
    const/16 v0, 0x1a

    if-lt p1, v0, :cond_1

    .line 5151
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt p1, v0, :cond_1

    const/4 p0, 0x1

    :cond_1
    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/system/a;Landroid/content/Context;Ljava/lang/String;)Z
    .locals 0

    .line 66
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/system/a;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/system/a;Landroid/content/Context;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 5159
    iget-boolean v0, p0, Lcom/mbridge/msdk/system/a;->e:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 5160
    iput-boolean v0, p0, Lcom/mbridge/msdk/system/a;->e:Z

    :try_start_0
    const-string v0, "com.mbridge.msdk.click.AppReceiver"

    .line 5162
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 5163
    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/BroadcastReceiver;

    check-cast v0, Landroid/content/BroadcastReceiver;

    iput-object v0, p0, Lcom/mbridge/msdk/system/a;->f:Landroid/content/BroadcastReceiver;

    .line 5164
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.intent.action.PACKAGE_ADDED"

    .line 5165
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "package"

    .line 5166
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addDataScheme(Ljava/lang/String;)V

    .line 5167
    iget-object p0, p0, Lcom/mbridge/msdk/system/a;->f:Landroid/content/BroadcastReceiver;

    invoke-virtual {p1, p0, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/InstantiationException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 5173
    invoke-virtual {p0}, Ljava/lang/InstantiationException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception p0

    .line 5171
    invoke-virtual {p0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception p0

    .line 5169
    invoke-virtual {p0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/system/a;Landroid/content/Context;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 5181
    :try_start_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/system/a;->g:Z

    if-nez v0, :cond_0

    const-string v0, "com.alphab.receiver.AlphabReceiver"

    .line 5182
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 5184
    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v1

    instance-of v1, v1, Landroid/content/BroadcastReceiver;

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    .line 5185
    iput-boolean v1, p0, Lcom/mbridge/msdk/system/a;->g:Z

    .line 5186
    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/BroadcastReceiver;

    iput-object v0, p0, Lcom/mbridge/msdk/system/a;->h:Landroid/content/BroadcastReceiver;

    .line 5188
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.intent.action.PACKAGE_ADDED"

    .line 5189
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "package"

    .line 5190
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addDataScheme(Ljava/lang/String;)V

    .line 5191
    iget-object p0, p0, Lcom/mbridge/msdk/system/a;->h:Landroid/content/BroadcastReceiver;

    invoke-virtual {p1, p0, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 5201
    sget-boolean p1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p1, :cond_0

    .line 5202
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception p0

    .line 5197
    sget-boolean p1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p1, :cond_0

    .line 5198
    invoke-virtual {p0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public final getConsentStatus(Landroid/content/Context;)Z
    .locals 0

    .line 503
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/system/a;->a(Landroid/content/Context;)V

    .line 504
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->e()Z

    move-result p1

    return p1
.end method

.method public final getMBConfigurationMap(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const-string v0, ""

    .line 528
    invoke-virtual {p0, p1, p2, v0}, Lcom/mbridge/msdk/system/a;->getMBConfigurationMap(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    return-object p1
.end method

.method public final getMBConfigurationMap(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 533
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "mbridge_appid"

    .line 534
    invoke-virtual {v0, v1, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "mbridge_appkey"

    .line 535
    invoke-virtual {v0, p1, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "mbridge_wx_appid"

    .line 536
    invoke-virtual {v0, p1, p3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p1, 0x1

    .line 537
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string p2, "mbridge_appstartupcarsh"

    invoke-virtual {v0, p2, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method public final getStatus()Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;
    .locals 1

    .line 440
    iget-object v0, p0, Lcom/mbridge/msdk/system/a;->c:Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;

    return-object v0
.end method

.method public final init(Ljava/util/Map;Landroid/app/Application;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Landroid/app/Application;",
            ")V"
        }
    .end annotation

    .line 561
    invoke-virtual {p2}, Landroid/app/Application;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    .line 562
    sput-object p1, Lcom/mbridge/msdk/system/a;->a:Ljava/util/Map;

    .line 563
    invoke-direct {p0}, Lcom/mbridge/msdk/system/a;->a()V

    return-void
.end method

.method public final init(Ljava/util/Map;Landroid/app/Application;Lcom/mbridge/msdk/out/SDKInitStatusListener;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Landroid/app/Application;",
            "Lcom/mbridge/msdk/out/SDKInitStatusListener;",
            ")V"
        }
    .end annotation

    .line 613
    iput-object p2, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    .line 614
    iput-object p3, p0, Lcom/mbridge/msdk/system/a;->i:Lcom/mbridge/msdk/out/SDKInitStatusListener;

    .line 615
    sput-object p1, Lcom/mbridge/msdk/system/a;->a:Ljava/util/Map;

    .line 616
    invoke-direct {p0}, Lcom/mbridge/msdk/system/a;->a()V

    return-void
.end method

.method public final init(Ljava/util/Map;Landroid/content/Context;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Landroid/content/Context;",
            ")V"
        }
    .end annotation

    .line 575
    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    .line 576
    sput-object p1, Lcom/mbridge/msdk/system/a;->a:Ljava/util/Map;

    .line 577
    invoke-direct {p0}, Lcom/mbridge/msdk/system/a;->a()V

    return-void
.end method

.method public final init(Ljava/util/Map;Landroid/content/Context;Lcom/mbridge/msdk/out/SDKInitStatusListener;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Landroid/content/Context;",
            "Lcom/mbridge/msdk/out/SDKInitStatusListener;",
            ")V"
        }
    .end annotation

    .line 630
    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    .line 631
    iput-object p3, p0, Lcom/mbridge/msdk/system/a;->i:Lcom/mbridge/msdk/out/SDKInitStatusListener;

    .line 632
    sput-object p1, Lcom/mbridge/msdk/system/a;->a:Ljava/util/Map;

    .line 633
    invoke-direct {p0}, Lcom/mbridge/msdk/system/a;->a()V

    return-void
.end method

.method public final initAsync(Ljava/util/Map;Landroid/app/Application;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Landroid/app/Application;",
            ")V"
        }
    .end annotation

    .line 568
    invoke-virtual {p2}, Landroid/app/Application;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    .line 569
    sput-object p1, Lcom/mbridge/msdk/system/a;->a:Ljava/util/Map;

    .line 570
    invoke-direct {p0}, Lcom/mbridge/msdk/system/a;->a()V

    return-void
.end method

.method public final initAsync(Ljava/util/Map;Landroid/app/Application;Lcom/mbridge/msdk/out/SDKInitStatusListener;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Landroid/app/Application;",
            "Lcom/mbridge/msdk/out/SDKInitStatusListener;",
            ")V"
        }
    .end annotation

    .line 621
    iput-object p2, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    .line 622
    iput-object p3, p0, Lcom/mbridge/msdk/system/a;->i:Lcom/mbridge/msdk/out/SDKInitStatusListener;

    .line 623
    sput-object p1, Lcom/mbridge/msdk/system/a;->a:Ljava/util/Map;

    .line 624
    invoke-direct {p0}, Lcom/mbridge/msdk/system/a;->a()V

    return-void
.end method

.method public final initAsync(Ljava/util/Map;Landroid/content/Context;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Landroid/content/Context;",
            ")V"
        }
    .end annotation

    .line 582
    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    .line 583
    sput-object p1, Lcom/mbridge/msdk/system/a;->a:Ljava/util/Map;

    .line 584
    invoke-direct {p0}, Lcom/mbridge/msdk/system/a;->a()V

    return-void
.end method

.method public final initAsync(Ljava/util/Map;Landroid/content/Context;Lcom/mbridge/msdk/out/SDKInitStatusListener;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Landroid/content/Context;",
            "Lcom/mbridge/msdk/out/SDKInitStatusListener;",
            ")V"
        }
    .end annotation

    .line 638
    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    .line 639
    iput-object p3, p0, Lcom/mbridge/msdk/system/a;->i:Lcom/mbridge/msdk/out/SDKInitStatusListener;

    .line 640
    sput-object p1, Lcom/mbridge/msdk/system/a;->a:Ljava/util/Map;

    .line 641
    invoke-direct {p0}, Lcom/mbridge/msdk/system/a;->a()V

    return-void
.end method

.method public final preload(Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 445
    iget-object v0, p0, Lcom/mbridge/msdk/system/a;->c:Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;

    sget-object v1, Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;->COMPLETED:Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;

    if-ne v0, v1, :cond_0

    .line 446
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/foundation/controller/b;->a(Ljava/util/Map;I)V

    :cond_0
    return-void
.end method

.method public final preloadFrame(Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 510
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/foundation/controller/b;->a(Ljava/util/Map;I)V

    return-void
.end method

.method public final release()V
    .locals 4

    .line 543
    iget-object v0, p0, Lcom/mbridge/msdk/system/a;->c:Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;

    sget-object v1, Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;->COMPLETED:Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;

    if-ne v0, v1, :cond_0

    .line 544
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/b;->b()V

    .line 546
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 4208
    iget-object v2, p0, Lcom/mbridge/msdk/system/a;->f:Landroid/content/BroadcastReceiver;

    if-eqz v2, :cond_1

    iget-boolean v3, p0, Lcom/mbridge/msdk/system/a;->e:Z

    if-eqz v3, :cond_1

    .line 4209
    iput-boolean v1, p0, Lcom/mbridge/msdk/system/a;->e:Z

    .line 4210
    invoke-virtual {v0, v2}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 547
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    if-eqz v0, :cond_2

    .line 4215
    iget-object v2, p0, Lcom/mbridge/msdk/system/a;->h:Landroid/content/BroadcastReceiver;

    if-eqz v2, :cond_2

    iget-boolean v3, p0, Lcom/mbridge/msdk/system/a;->g:Z

    if-eqz v3, :cond_2

    .line 4216
    iput-boolean v1, p0, Lcom/mbridge/msdk/system/a;->g:Z

    .line 4217
    invoke-virtual {v0, v2}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 548
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    instance-of v0, v0, Landroid/app/Application;

    if-eqz v0, :cond_3

    .line 549
    iget-object v0, p0, Lcom/mbridge/msdk/system/a;->d:Landroid/content/Context;

    check-cast v0, Landroid/app/Application;

    .line 4605
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "unregisterActivityLifecycleListener:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "com.mbridge.msdk"

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 4606
    iget-boolean v1, p0, Lcom/mbridge/msdk/system/a;->k:Z

    if-eqz v1, :cond_3

    .line 4607
    iget-object v1, p0, Lcom/mbridge/msdk/system/a;->l:Landroid/app/Application$ActivityLifecycleCallbacks;

    invoke-virtual {v0, v1}, Landroid/app/Application;->unregisterActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    .line 551
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/c/b/a;->a()Lcom/mbridge/msdk/c/b/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b/a;->b()V

    return-void
.end method

.method public final setAllowAcquireIds(Z)V
    .locals 0

    .line 667
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Z)V

    return-void
.end method

.method public final setConsentStatus(Landroid/content/Context;I)V
    .locals 0

    .line 497
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/system/a;->a(Landroid/content/Context;)V

    .line 498
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(I)V

    return-void
.end method

.method public final setCoppaStatus(Landroid/content/Context;Z)V
    .locals 1

    .line 469
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/system/a;->a(Landroid/content/Context;)V

    .line 470
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    if-eqz p2, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x2

    .line 3417
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p2

    const-string v0, "authority_coppa"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;I)V

    return-void
.end method

.method public final setDeveloperIds(Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;)V
    .locals 1

    .line 678
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->h()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    return-void

    .line 686
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;->getImei()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 687
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;->getImei()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->a(Ljava/lang/String;)V

    .line 690
    :cond_2
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;->getImsi()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 691
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;->getImsi()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->b(Ljava/lang/String;)V

    .line 694
    :cond_3
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;->getGaid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 695
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;->getGaid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->h(Ljava/lang/String;)V

    .line 698
    :cond_4
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;->getOaid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 699
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;->getOaid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->d(Ljava/lang/String;)V

    .line 702
    :cond_5
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;->getAndroidId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 703
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;->getAndroidId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->e(Ljava/lang/String;)V

    .line 706
    :cond_6
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;->getMac()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 707
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/DeveloperTransferIdInfo;->getMac()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->c(Ljava/lang/String;)V

    :cond_7
    return-void
.end method

.method public final setDoNotTrackStatus(Landroid/content/Context;Z)V
    .locals 0

    .line 475
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/system/a;->a(Landroid/content/Context;)V

    .line 476
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->b(I)V

    return-void
.end method

.method public final setDoNotTrackStatus(Z)V
    .locals 1

    .line 464
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->b(I)V

    return-void
.end method

.method public final setThirdPartyFeatures(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    return-void
.end method

.method public final setUserPrivateInfoType(Landroid/content/Context;Ljava/lang/String;I)V
    .locals 0

    .line 457
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/system/a;->a(Landroid/content/Context;)V

    .line 458
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p1

    invoke-virtual {p1, p2, p3}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;I)V

    return-void
.end method

.method public final showUserPrivateInfoTips(Landroid/content/Context;Lcom/mbridge/msdk/foundation/controller/authoritycontroller/CallBackForDeveloper;)V
    .locals 0

    return-void
.end method

.method public final updateDialogWeakActivity(Ljava/lang/ref/WeakReference;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;)V"
        }
    .end annotation

    .line 655
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/controller/a;->a(Ljava/lang/ref/WeakReference;)V

    return-void
.end method

.method public final userPrivateInfo(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;
    .locals 0

    .line 481
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/system/a;->a(Landroid/content/Context;)V

    .line 482
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->b()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    move-result-object p1

    return-object p1
.end method
